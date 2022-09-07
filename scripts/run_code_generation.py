#!/usr/bin/env python3

# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.

import argparse
import datetime
import io
import json
import os
import re
import shutil
import subprocess
import sys
import zipfile
from concurrent.futures import ProcessPoolExecutor, wait, FIRST_COMPLETED, ALL_COMPLETED
from pathlib import Path


# Default configuration variables
CLIENT_MODEL_FILE_LOCATION = "./code-generation/api-descriptions/"
ENDPOINT_RULES_LOCATION = "./code-generation/endpoints/"
DEFAULTS_FILE_LOCATION = "../defaults/sdk-default-configuration.json"  # Relative to models dir
DEFAULT_GENERATOR_LOCATION = "code-generation/generator/"
GENERATOR_JAR = "target/aws-client-generator-1.0-SNAPSHOT-jar-with-dependencies.jar"


# Regexp to parse C2J model filename to extract service name and date version
SERVICE_MODEL_FILENAME_PATTERN = re.compile(
    "^"
    "(?P<service>.+)-"                                      # service name
    "(?P<date>[0-9][0-9][0-9][0-9]-[0-9][0-9]-[0-9][0-9])"  # model date
    ".normal.json$"
)

# Legacy table of service model remaps/name correction during the code generation
SERVICE_NAME_REMAPS = {"runtime.lex": "lex",
                       "runtime.lex.v2": "lexv2-runtime",
                       "models.lex.v2": "lexv2-models",
                       "transfer": "awstransfer",
                       "transcribe-streaming": "transcribestreaming",
                       "streams.dynamodb": "dynamodbstreams"}

ENDPOINT_NAME_REMAPS = {"s3outposts": "outposts",
                        "s3-control": None,
                        "importexport": None,
                        "license-manager-user-subscriptions": None,
                        "redshift-serverless": "redshiftserverless",
                        "sdb": None,
                        "mobileanalytics": None,
                        "rolesanywhere": None}


class ServiceModel(object):
    def __init__(self, service_id, c2j_model, endpoint_rule_set, endpoint_tests):
        self.service_id = service_id  # For debugging purposes, not used atm
        self.c2j_model = c2j_model
        self.endpoint_rule_set = endpoint_rule_set
        self.endpoint_tests = endpoint_tests

    def __init__(self, **kwargs):
        for key, value in kwargs.items():
            setattr(self, key, value)


def _build_service_model_with_endpoints(models_dir: str, endpoint_rules_dir: str, c2j_model_filename) -> ServiceModel:
    """Return a ServiceModel containing paths to the Service models: C2J model and endpoints (rules and tests).
    H-U-U-U-U-G-E thanks to our legacy and backward compatibility!

    :param models_dir (str): filepath (absolute or relative) to the dir with c2j models
    :param endpoint_rules_dir (str): filepath (absolute or relative) to the dir with dirs of endpoints
    :param c2j_model_filename (str): filename of a service C2J model (just filename, relative to models_dir without separator)
    :return: ServiceModel, a descriptor class holding Service models filenames
    """
    with open(models_dir + "/" + c2j_model_filename) as c2j_model_file:
        try:
            c2j_model = json.loads(c2j_model_file.read())
            service_id = c2j_model["metadata"].get("serviceId", None)
            if not service_id:
                service_id = c2j_model["metadata"]["serviceFullName"]
                service_id = service_id.lower().replace("aws", "").replace("amazon", "").strip()
            service_id = service_id.lower().replace(' ', '-')
            service_ids_to_try = [service_id]
            if ENDPOINT_NAME_REMAPS.get(service_id):
                service_ids_to_try.append(ENDPOINT_NAME_REMAPS.get(service_id))
            for service_id in service_ids_to_try:
                endpoint_dir_service_id = service_id.lower().replace(' ', '-')
                endpoint_rules_path = f"{endpoint_dir_service_id}/endpoint-rule-set.json"
                endpoint_tests_path = f"{endpoint_dir_service_id}/endpoint-tests.json"
                if os.path.exists(f"{endpoint_rules_dir}/{endpoint_dir_service_id}") \
                        and os.path.exists(f"{endpoint_rules_dir}/{endpoint_rules_path}") \
                        and os.path.exists(f"{endpoint_rules_dir}/{endpoint_tests_path}"):  # tests must exist
                    return ServiceModel(service_id=service_id,
                                        c2j_model=c2j_model_filename,
                                        endpoint_rule_set=endpoint_rules_path,
                                        endpoint_tests=endpoint_tests_path)
            else:
                raise RuntimeError(f"Service model {c2j_model_filename} (service_id {service_id}) does not have "
                                   f"corresponding non-empty endpoint rules dir!")
        except KeyError as exc:
            raise KeyError(f"C2j Model does not contain ['metadata']['serviceId'] field: {exc}")
        except Exception as exc:
            raise Exception(f"Unknown exception while parsing c2j model {c2j_model_filename}: {exc}")


def collect_available_models(models_dir: str, endpoint_rules_dir: str) -> dict:
    """Return a dict of <service_name, model_file_name> with all available c2j models in a models_dir

    :param models_dir: path to the directory with c2j models
    :param endpoint_rules_dir: path to the directory with endpoints dir models
    :return: dict<service_name, model_file_name> in models dir
    """
    model_files = os.listdir(models_dir)
    service_name_to_model_filename_date = dict()

    for filename in model_files:
        if not os.path.isfile("/".join([models_dir, filename])):
            continue
        match = SERVICE_MODEL_FILENAME_PATTERN.match(filename)

        service_model_name = match.group("service")
        service_model_date = match.group("date")
        service_model_date = datetime.datetime.strptime(service_model_date, "%Y-%m-%d").date()
        already_found_model = service_name_to_model_filename_date.get(service_model_name, None)
        if already_found_model:
            already_found_date = already_found_model[1]
            if already_found_date < service_model_date:
                service_name_to_model_filename_date[service_model_name] = (filename, service_model_date)
        else:
            service_name_to_model_filename_date[service_model_name] = (filename, service_model_date)

    service_name_to_model_filename = dict()
    missing = set()
    for raw_key, model_file_date in service_name_to_model_filename_date.items():
        key = SERVICE_NAME_REMAPS.get(raw_key, raw_key)
        if "." in key:
            key = "-".join(reversed(key.split(".")))  # just replicating existing legacy behavior
        if ";" in key:
            key = key.replace(";", "-")  # just in case... just replicating existing legacy behavior

        # fetch endpoint-rules filename which is based on ServiceId in c2j models:
        try:
            service_name_to_model_filename[key] = _build_service_model_with_endpoints(models_dir,
                                                                                      endpoint_rules_dir,
                                                                                      model_file_date[0])
            if key == "s3":
                service_name_to_model_filename["s3-crt"] = service_name_to_model_filename["s3"]
        except Exception as exc:
            print(f"C2J model does not have a corresponding endpoints ruleset: {exc}")
            missing.add(model_file_date[0])
            service_name_to_model_filename[key] = ServiceModel(service_id=key,
                                                               c2j_model=model_file_date[0],
                                                               endpoint_rule_set=None,
                                                               endpoint_tests=None)
    if missing:
        print(f"Missing endpoints for services: {missing}")

    return service_name_to_model_filename


def build_generator(generator_dir: str, max_workers: int) -> None:
    """Build generator in subprocess (mvn package) located in generator_dir

    :param generator_dir: path to the generator source code
    :param max_workers: number of threads to use to build generator
    :return: None
    """

    mvn_cmd = shutil.which("mvn")  # subprocess.run does expand Path by default
    max_workers = min(int(max_workers), 8)
    process = subprocess.run([mvn_cmd, "package"], cwd=generator_dir, timeout=5*60, check=True)
    process.check_returncode()


def run_generator_once(service_name: str, run_command: list, output_filename: str):
    """Helper function to call generator once in a subprocess

    :param service_name: argument used purely for tracing/logging
    :param run_command: actual subprocess command to execute
    :param output_filename: temporary file to be generated by generator or STDOUT
    :return: generated filename (str) or io.BytesIO-like object
    """
    process = subprocess.run(run_command, timeout=5 * 60, check=True, capture_output=True)
    process.check_returncode()

    if output_filename != "STDOUT":
        if not os.path.exists(output_filename) or os.path.getsize(output_filename) < 4:
            raise RuntimeError(f"Code of {service_name} generation failure: "
                               f"Code generator did not generate an output archive (and did not report failure!)")

    if output_filename != "STDOUT":
        output_zip_file = output_filename
    else:
        output_zip_file = process.stdout
        if not output_zip_file or len(output_zip_file) < 4:
            raise RuntimeError(f"Code of {service_name} generation failure: "
                               f"Code generator did not generate an output.\n"
                               f"Error details: {process.stderr.decode()}")
        output_zip_file = io.BytesIO(output_zip_file)

    return output_zip_file


def extract_zip(zip_bytes: io.BytesIO, service_name: str, output_dir: str, dir_to_delete: str):
    """Extract bytes containing zip file to output_dir

    :param zip_bytes: raw bytes containing zip (opened file or io.BytesIO)
    :param service_name: services name (for tracing/logging only)
    :param output_dir: destination directory path to unpack zip
    :param dir_to_delete: optional (str or None) directory to delete before unpacking
    :return:
    """
    with zipfile.ZipFile(zip_bytes, 'r') as zip_ref:
        if zip_ref.testzip() is not None:
            raise RuntimeError(f"Service {service_name} generation failure: "
                               f"Code generator generated an invalid archive")
        try:
            if dir_to_delete:
                shutil.rmtree(dir_to_delete)
        except Exception as exc:
            print(f"Non-blocking failure to remove dir {dir_to_delete}: {exc}")

        zip_ref.extractall(output_dir)
        print(f"Generated {service_name}")

    return service_name, 0


def generate_defaults(models_filepath: str,
                      generator_filepath: str,
                      output_dir: str,
                      tmp_dir: str,
                      kwargs):
    """Generate AWS-SDK-CPP defaults

    :param models_filepath: path where c2j models are located
    :param generator_filepath: path where SDK generator is located
    :param output_dir: path to the SDK root (with aws-cpp-sdk-core)
    :param tmp_dir: Optional path to a tmp dir to use (otherwise STDOUT piping will be used)
    :param kwargs: Additional optional arguments to pass to the code generator
    :return: ("Defaults", status_code), where 0 is success status_code
    """

    # raw arguments to be passed from Py wrapper to the actual generator
    if not kwargs.get("language-binding"):
        kwargs["language-binding"] = "cpp"  # Always cpp by default in the current code gen

    if tmp_dir:
        output_filename = f"{tmp_dir}/aws-cpp-sdk-core-defaults.zip"
    else:
        output_filename = "STDOUT"

    defaults_filepath = models_filepath + "/" + DEFAULTS_FILE_LOCATION
    generator_jar = generator_filepath + "/" + GENERATOR_JAR
    run_command = list()
    run_command.append("java")
    run_command += ["-jar", generator_jar]
    run_command += ["--inputfile", defaults_filepath]
    run_command += ["--defaults", "global"]
    run_command += ["--outputfile", output_filename]
    run_command += ["--arbitrary"]

    for key, val in kwargs.items():
        run_command += [f"--{key}", val]

    output_zip_file = run_generator_once("Defaults", run_command, output_filename)

    return extract_zip(output_zip_file, "Defaults", output_dir, None)


def generate_single_client(service_name: str,
                           model_files: ServiceModel,
                           models_filepath: str,
                           endpoints_filepath: str,
                           generator_filepath: str,
                           output_dir: str,
                           tmp_dir: str,
                           kwargs):
    """Generate a single AWS client in AWS-SDK-CPP from c2j model

    :param service_name: Service name to generate (typically a first part of c2j model filename)
    :param model_files: ServiceModel wrapper containing model file names (C2J model and endpoints)
    :param models_filepath: Path to a dir where C2J models are located
    :param endpoints_filepath: Path to a dir where endpoint models are located
    :param generator_filepath: Path to a dir where code generator is located
    :param output_dir: Path to the root of generated code (i.e. where generated client will be located)
    :param tmp_dir: Optional path to a tmp dir to use (otherwise STDOUT piping will be used)
    :param kwargs: Additional optional arguments to pass to the code generator
    :return: (service_name, status_code), where 0 is success status_code
    """
    if not service_name or service_name == "" or not model_files.c2j_model or model_files.c2j_model == "":
        raise RuntimeError("Unknown client to generate!")
    # raw arguments to be passed from Py wrapper to the actual generator
    if not kwargs.get("language-binding"):
        kwargs["language-binding"] = "cpp"  # Always cpp by default in the current code gen
    if not kwargs.get("enable-virtual-operations"):
        kwargs["enable-virtual-operations"] = ""  # Historically always set by default in this project

    if tmp_dir:
        output_filename = f"{tmp_dir}/{model_files.c2j_model.replace('.normal.json', '.zip')}"
    else:
        output_filename = "STDOUT"

    model_filepath = models_filepath + "/" + model_files.c2j_model
    generator_jar = generator_filepath + "/" + GENERATOR_JAR
    run_command = list()
    run_command.append("java")
    run_command += ["-jar", generator_jar]
    run_command += ["--inputfile", model_filepath]
    if model_files.endpoint_rule_set:
        run_command += ["--endpoint-rule-set", f"{endpoints_filepath}/{model_files.endpoint_rule_set}"]
    if model_files.endpoint_tests:
        run_command += ["--endpoint-tests", f"{endpoints_filepath}/{model_files.endpoint_tests}"]
    run_command += ["--service", service_name]
    run_command += ["--outputfile", output_filename]

    for key, val in kwargs.items():
        run_command += [f"--{key}", val]

    output_zip_file = run_generator_once(service_name, run_command, output_filename)
    dir_to_delete_before_extract = f"{output_dir}/aws-cpp-sdk-{service_name}"

    return extract_zip(output_zip_file, service_name, output_dir, dir_to_delete_before_extract)


def parse_arguments() -> dict:
    """Parse arguments and/or print help

    :return: dict with parsed arguments
    """
    parser = argparse.ArgumentParser(description="Code generation wrapper for AWS-SDK-CPP")
    parser.add_argument("--client_list", type=str, help="Comma-separated or semi-colon-separated list of SDK clients "
                                                        "to be (re)generated")
    parser.add_argument("--defaults", action="store_true", help="Generates defaults configuration")
    parser.add_argument("--all",
                        help="Generate all found clients and defaults. Always True unless client_list provided",
                        action="store_true")
    parser.add_argument("--output_location", action="store", help="Where generated clients should be extracted")
    parser.add_argument("--api_definition_file", action="store", help="Override input client definition model file")

    parser.add_argument("--path_to_api_definitions", action="store")
    parser.add_argument("--path_to_endpoint_rules", action="store")
    parser.add_argument("--path_to_generator", action="store")
    parser.add_argument("--prepare_tools", help="Just build the generator", action="store_true")

    parser.add_argument("--list_all", help="Lists all available SDKs for generation.", action="store_true")
    # raw generator params to pass through
    parser.add_argument("--license-text", action="store", help="License text to use, "
                                                               "raw argument to be passed to the generator")
    parser.add_argument("--namespace", action="store", help="Namespace to use,"
                                                            " raw argument to be passed to the generator")
    parser.add_argument("--standalone",
                        help="Code generator raw argument to be passed through to "
                             "build a custom client as a separate package, with prebuilt C++ SDK as dependency. "
                             "Always off by default.",
                        action="store_true")
    parser.add_argument("--enable-virtual-operations",
                        help="Code generator raw argument to be passed through to "
                             "mark operation functions in service client as virtual functions. Always on by default",
                        action="store_true")

    args = vars(parser.parse_args())
    arg_map = {}

    if args.get("api_definition_file", None):
        arg_map["api_definition_file"] = args.get("api_definition_file")
    else:
        raw_client_list = args.get("client_list", None)
        if raw_client_list:
            arg_map["client_list"] = raw_client_list.replace(";", ",").split(",")
            arg_map["all"] = False
            arg_map["defaults"] = False
        else:
            arg_map["all"] = True
            arg_map["defaults"] = True

        if args.get("defaults", None):
            arg_map["defaults"] = args.get("defaults")

    output_location = args["output_location"] or None
    if not output_location:
        output_location = os.getcwd()
        if output_location.endswith("scripts"):
            output_location = output_location[:-len("scripts")]
    arg_map["output_location"] = output_location

    for cli_argument, default_value in [("path_to_api_definitions", CLIENT_MODEL_FILE_LOCATION),
                                        ("path_to_endpoint_rules", ENDPOINT_RULES_LOCATION)]:
        models_location = args[cli_argument] or default_value
        models_location = str(Path(models_location).absolute())
        if not os.path.exists(models_location):
            if args[cli_argument] is not None and args[cli_argument] != "":
                raise RuntimeError(f"Provided {cli_argument} does not exist!")
            models_location = str(Path(sys.path[0] + "/../" + default_value).absolute())
            if not os.path.exists(models_location):
                raise RuntimeError("Could not find api definitions location!")
        arg_map[cli_argument] = models_location

    generator_location = args["path_to_generator"] or DEFAULT_GENERATOR_LOCATION
    generator_location = str(Path(generator_location).absolute())
    if not os.path.exists(generator_location):
        if args["path_to_generator"] is not None and args["path_to_generator"] != "":
            raise RuntimeError("Provided path_to_generator does not exist!")
        generator_location = str(Path(sys.path[0] + "/../" + DEFAULT_GENERATOR_LOCATION).absolute())
        if not os.path.exists(generator_location):
            raise RuntimeError("Could not find generator location!")
    arg_map["path_to_generator"] = generator_location

    arg_map["prepare_tools"] = args["prepare_tools"] or False
    arg_map["list_all"] = args["list_all"] or False

    raw_generator_arguments = dict()
    for raw_argument in ["license-text", "namespace", "standalone"]:
        if args.get(raw_argument):
            raw_generator_arguments[raw_argument] = args[raw_argument]
    arg_map["raw_generator_arguments"] = raw_generator_arguments

    return arg_map


def main():
    """Main entrypoint for this script that wraps AWS-SDK-CPP code generation

    :return: 0 if success, failure otherwise
    """
    args = parse_arguments()

    highly_refined_percent_of_cores_to_take = 0.9
    max_workers = max(1, int(highly_refined_percent_of_cores_to_take * os.cpu_count()))

    with ProcessPoolExecutor(max_workers=max_workers) as executor:
        build_generator_future = None

        if not args.get("list_all"):
            build_generator_future = executor.submit(build_generator, args["path_to_generator"], max_workers)
        if args.get("prepare_tools"):
            build_generator_future.result()  # will rethrow any exceptions
            return 0

        available_models = collect_available_models(args["path_to_api_definitions"], args["path_to_endpoint_rules"])
        if args.get("list_all"):
            model_list = available_models.keys()
            print(model_list)
            return 0

        if args.get("all"):
            clients_to_build = available_models.keys()
        else:
            clients_to_build = args["client_list"]
            clients_to_build_set = set(clients_to_build)
            available_models_set = set(available_models.keys())
            not_found_models = clients_to_build_set - available_models_set
            if len(not_found_models):
                raise RuntimeError(f"Requested to build clients but their model files are not present: "
                                   f"{not_found_models}")

        # Now wait for generator build to complete
        build_generator_future.result()  # will rethrow any exceptions

        pending = set()
        done = set()

        print(f"Running code generator, up to {max_workers} processes in parallel")
        sys.stdout.flush()
        if args.get("all") or args.get("defaults"):
            task = executor.submit(generate_defaults,
                                   args["path_to_api_definitions"],
                                   args["path_to_generator"],
                                   args["output_location"],
                                   None,
                                   args["raw_generator_arguments"])
            pending.add(task)

        for service in clients_to_build:
            model_files = available_models[service]

            while len(pending) >= max_workers:
                new_done, pending = wait(pending, return_when=FIRST_COMPLETED)
                done.update(new_done)

            task = executor.submit(generate_single_client,
                                   service,
                                   model_files,
                                   args["path_to_api_definitions"],
                                   args["path_to_endpoint_rules"],
                                   args["path_to_generator"],
                                   args["output_location"],
                                   None,
                                   args["raw_generator_arguments"])
            pending.add(task)

        new_done, _ = wait(pending, return_when=ALL_COMPLETED)
        done.update(new_done)

        failures = set()
        for result in done:
            try:
                service, status = result.result()  # will rethrow any exceptions
                if status != 0:
                    raise RuntimeError(f"Service {service} (re)generation failed with non-zero return: {status}")
            except Exception as exc:
                failures.add(f"Service (re)generation failed with error.\n    Exception: {exc}")

        if len(failures):
            print(f"Code generation failed, processed {len(done)} packages. "
                  f"Encountered {len(failures)} failures:\n")  # Including defaults
            for failure in failures:
                print(failure)

        if len(failures):
            return -1

        print(f"Code generation done, (re)generated {len(done)} packages.")  # Including defaults

    return 0


if __name__ == "__main__":
    ret_code = main()
    exit(ret_code)
