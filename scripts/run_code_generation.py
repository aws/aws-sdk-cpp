#!/usr/bin/env python3

# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.

import argparse
import concurrent
import concurrent.futures
import datetime
import io
import os
import re
import shutil
import subprocess
import sys
import zipfile
from concurrent.futures import wait, FIRST_COMPLETED, ALL_COMPLETED
from pathlib import Path

CLIENT_MODEL_FILE_LOCATION = "./code-generation/api-descriptions/"
DEFAULTS_FILE_LOCATION = "../defaults/sdk-default-configuration.json"  # Relative to models dir
DEFAULT_GENERATOR_LOCATION = "code-generation/generator/"
GENERATOR_JAR = "target/aws-client-generator-1.0-SNAPSHOT-jar-with-dependencies.jar"


SERVICE_MODEL_FILENAME_PATTERN = re.compile(
    "^"
    "(?P<service>.+)-"                                      # service name
    "(?P<date>[0-9][0-9][0-9][0-9]-[0-9][0-9]-[0-9][0-9])"  # model date
    ".normal.json$"
)

SERVICE_NAME_REMAPS = {"runtime.lex": "lex",
                       "runtime.lex.v2": "lexv2-runtime",
                       "models.lex.v2": "lexv2-models",
                       "transfer": "awstransfer",
                       "transcribe-streaming": "transcribestreaming",
                       "streams.dynamodb": "dynamodbstreams"}


def collect_available_models(models_dir: str):
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
    for raw_key, model_file_date in service_name_to_model_filename_date.items():
        key = SERVICE_NAME_REMAPS.get(raw_key, raw_key)
        if "." in key:
            key = "-".join(reversed(key.split(".")))  # just replicating existing legacy behavior
        if ";" in key:
            key = key.replace(";", "-")  # just in case... just replicating existing legacy behavior

        service_name_to_model_filename[key] = model_file_date[0]
        if key == "s3":
            service_name_to_model_filename["s3-crt"] = model_file_date[0]

    return service_name_to_model_filename


def build_generator(generator_dir: str):
    process = subprocess.run(["mvn", "package"], cwd=generator_dir, timeout=5*60, check=True)
    process.check_returncode()


def run_generator_once(service_name: str, run_command: list, output_filename: str):
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
            raise RuntimeError(f"Cdde of {service_name} generation failure: "
                               f"Code generator did not generate an output in stdout")
        output_zip_file = io.BytesIO(output_zip_file)

    return output_zip_file


def extract_zip(zip_bytes: io.BytesIO, service_name, output_dir: str, dir_to_delete: str):
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

    if not kwargs.get("language-binding"):
        kwargs["language-binding"] = "cpp"

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
                           model_filename: str,
                           models_filepath: str,
                           generator_filepath: str,
                           output_dir: str,
                           tmp_dir: str,
                           kwargs):
    if not service_name or service_name == "" or not model_filename or model_filename == "":
        raise RuntimeError("Unknown client to generate!")
    if not kwargs.get("language-binding"):
        kwargs["language-binding"] = "cpp"
    if not kwargs.get("enable-virtual-operations"):
        kwargs["enable-virtual-operations"] = ""

    if tmp_dir:
        output_filename = f"{tmp_dir}/{model_filename.replace('.normal.json', '.zip')}"
    else:
        output_filename = "STDOUT"

    model_filepath = models_filepath + "/" + model_filename
    generator_jar = generator_filepath + "/" + GENERATOR_JAR
    run_command = list()
    run_command.append("java")
    run_command += ["-jar", generator_jar]
    run_command += ["--inputfile", model_filepath]
    run_command += ["--service", service_name]
    run_command += ["--outputfile", output_filename]

    for key, val in kwargs.items():
        run_command += [f"--{key}", val]

    output_zip_file = run_generator_once(service_name, run_command, output_filename)
    dir_to_delete_before_extract = f"{output_dir}/aws-cpp-sdk-{service_name}"

    return extract_zip(output_zip_file, service_name, output_dir, dir_to_delete_before_extract)


def parse_arguments():
    parser = argparse.ArgumentParser(description="Code generation wrapper for AWS-SDK-CPP")
    parser.add_argument("--client_list", type=str, help="Comma-separated or semi-colon-separated list of SDK clients to be (re)generated")
    parser.add_argument("--defaults", action="store_true", help="Generates defaults configuration")
    parser.add_argument("--all", help="Generate all found clients and defaults. Always True unless client_list provided", action="store_true")
    parser.add_argument("--output_location", action="store", help="Where generated clients should be extracted")
    parser.add_argument("--api_definition_file", action="store", help="Override input client definition model file")

    parser.add_argument("--path_to_api_definitions", action="store")
    parser.add_argument("--path_to_generator", action="store")
    parser.add_argument("--prepare_tools", help="Just build the generator", action="store_true")

    parser.add_argument("--list_all", help="Lists all available SDKs for generation.", action="store_true")
    # raw generator params to pass through
    parser.add_argument("--license-text", action="store")
    parser.add_argument("--namespace", action="store")
    parser.add_argument("--standalone",
                        help="Build custom client as a separete package, with prebuilt C++ SDK as dependency",
                        action="store_true")
    parser.add_argument("--enable-virtual-operations",
                        help="Mark operation functions in service client as virtual functions.",
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

    api_definitions_location = args["path_to_api_definitions"] or CLIENT_MODEL_FILE_LOCATION
    api_definitions_location = str(Path(api_definitions_location).absolute())
    if not os.path.exists(api_definitions_location):
        if args["path_to_api_definitions"] is not None and args["path_to_api_definitions"] != "":
            raise RuntimeError("Provided path_to_api_definitions does not exist!")
        api_definitions_location = str(Path(sys.path[0] + "/../" + CLIENT_MODEL_FILE_LOCATION).absolute())
        if not os.path.exists(api_definitions_location):
            raise RuntimeError("Could not find api definitions location!")
    arg_map["path_to_api_definitions"] = api_definitions_location

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
    args = parse_arguments()

    highly_refined_percent_of_cores_to_take = 0.9
    max_workers = int(highly_refined_percent_of_cores_to_take * os.cpu_count())

    with concurrent.futures.ProcessPoolExecutor(max_workers=max_workers) as executor:
        build_generator_future = None

        if not args.get("list_all"):
            build_generator_future = executor.submit(build_generator, args["path_to_generator"])
        if args.get("prepare_tools"):
            build_generator_future.result()  # will rethrow any exceptions
            return 0

        available_models = collect_available_models(args["path_to_api_definitions"])
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

        print("Running code generator")
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
            model_file = available_models[service]

            while len(pending) >= max_workers:
                new_done, pending = wait(pending, return_when=FIRST_COMPLETED)
                done.update(new_done)

            task = executor.submit(generate_single_client,
                                   service,
                                   model_file,
                                   args["path_to_api_definitions"],
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

        for failure in failures:
            print(failure)

        if len(failures):
            return -1

    return 0


if __name__ == "__main__":
    ret_code = main()
    exit(ret_code)
