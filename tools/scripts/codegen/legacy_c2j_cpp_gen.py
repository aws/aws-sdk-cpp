#!/usr/bin/env python3

# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.

"""
This is a wrapper on top of legacy CPP client generator written in java from c2j models
"""
import datetime
import io
import os
import re
import shutil
import subprocess
import sys
import zipfile
from concurrent.futures import ProcessPoolExecutor, wait, FIRST_COMPLETED, ALL_COMPLETED
from pathlib import Path

from codegen.model_utils import ServiceModel

SMITHY_SUPPORTED_CLIENTS = [
    "dynamodb"
]

# Default configuration variables
CLIENT_MODEL_FILE_LOCATION = "./code-generation/api-descriptions/"
ENDPOINT_RULES_LOCATION = "./code-generation/endpoints/"
PARTITIONS_FILE_LOCATION = "../partitions/partitions.json"  # Relative to models dir
DEFAULTS_FILE_LOCATION = "../defaults/sdk-default-configuration.json"  # Relative to models dir
DEFAULT_GENERATOR_LOCATION = "code-generation/generator/"
GENERATOR_TARGET_DIR = "target"
GENERATOR_JAR = GENERATOR_TARGET_DIR + "/aws-client-generator-1.0-SNAPSHOT-jar-with-dependencies.jar"

CORE_COMPONENT_TO_MODEL = {"defaults": DEFAULTS_FILE_LOCATION,
                           "partitions": PARTITIONS_FILE_LOCATION}

# Regexp to parse C2J model filename to extract service name and date version
SERVICE_MODEL_FILENAME_PATTERN = re.compile(
    "^"
    "(?P<service>.+)-"                                      # service name
    "(?P<date>[0-9][0-9][0-9][0-9]-[0-9][0-9]-[0-9][0-9])"  # model date
    ".normal.json$"
)


class LegacyC2jCppGen(object):
    """A wrapper for AWS SDK for C++ clients generator clients
    """
    def __init__(self, args: dict, c2j_models: dict):
        self.debug = args.get("debug", False)
        self.c2j_models = c2j_models
        self.path_to_generator = args["path_to_generator"]
        self.path_to_api_definitions = args["path_to_api_definitions"]
        self.raw_generator_arguments = args["raw_generator_arguments"]
        self.path_to_endpoint_rules = args["path_to_endpoint_rules"]
        self.output_location = args["output_location"]

    def generate(self, executor: ProcessPoolExecutor, max_workers: int, args: dict) -> int:
        self.build_generator(self.path_to_generator)
        if args.get("prepare_tools"):
            return 0

        pending = set()
        done = set()

        print(f"Running code generator, up to {max_workers} processes in parallel")
        sys.stdout.flush()
        for core_component in ["defaults", "partitions"]:
            if args.get("all") or args.get(core_component):
                core_output_dir = f"{self.output_location}/../src/"
                task = executor.submit(self._generate_core_component,
                                       core_component,
                                       CORE_COMPONENT_TO_MODEL[core_component],
                                       core_output_dir,
                                       None,
                                       self.raw_generator_arguments)
                pending.add(task)

        for service, model_files in self.c2j_models.items():
            while len(pending) >= max_workers:
                new_done, pending = wait(pending, return_when=FIRST_COMPLETED)
                done.update(new_done)

            task = executor.submit(self.generate_single_service,
                                   service,
                                   model_files,
                                   self.output_location,
                                   None,
                                   self.raw_generator_arguments)
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
                failures.add(f"Service (re)generation failed with error.\n    Exception: {exc}\n"
                             f"stderr: {getattr(exc, 'stderr', None)}")

        if len(failures):
            print(f"Code generation failed, processed {len(done)} packages. "
                  f"Encountered {len(failures)} failures:\n")  # Including defaults and partitions
            for failure in failures:
                print(failure)

        if len(failures):
            return -1

        print(f"Code generation done, (re)generated {len(done)} packages.")  # Including defaults and partitions

    def _init_common_java_cli(self,
                              service_name: str,
                              model_files: ServiceModel,
                              tmp_dir: str,
                              kwargs) -> (list, str):
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

        model_filepath = self.path_to_api_definitions + "/" + model_files.c2j_model
        generator_jar = self.path_to_generator + "/" + GENERATOR_JAR
        run_command = list()
        run_command.append("java")
        run_command += ["-jar", generator_jar]
        run_command += ["--inputfile", model_filepath]
        if model_files.endpoint_rule_set:
            run_command += ["--endpoint-rule-set", f"{self.path_to_endpoint_rules}/{model_files.endpoint_rule_set}"]
        if model_files.endpoint_tests:
            run_command += ["--endpoint-tests", f"{self.path_to_endpoint_rules}/{model_files.endpoint_tests}"]
        run_command += ["--service", service_name]
        run_command += ["--outputfile", output_filename]

        if service_name in SMITHY_SUPPORTED_CLIENTS:
            run_command += ["--use-smithy-client"]

        for key, val in kwargs.items():
            run_command += [f"--{key}", val]

        return run_command, output_filename

    def generate_client(self,
                        service_name: str,
                        model_files: ServiceModel,
                        output_dir: str,
                        tmp_dir: str):
        run_command, output_filename = self._init_common_java_cli(service_name, model_files, tmp_dir, self.raw_generator_arguments)

        output_zip_file = self._run_generator_once(service_name, run_command, output_filename)
        dir_to_delete = f"{output_dir}/aws-cpp-sdk-{service_name}"
        dir_to_extract = f"{output_dir}/"
        service_name, status = self._extract_zip(output_zip_file, service_name, dir_to_extract, dir_to_delete)

        return service_name, status

    def _generate_client_endpoint_tests(self,
                        service_name: str,
                        model_files: ServiceModel,
                        output_dir: str,
                        tmp_dir: str):
        run_command, output_filename = self._init_common_java_cli(service_name, model_files, tmp_dir, self.raw_generator_arguments)
        run_command.append("--generate-tests")

        output_zip_file = self._run_generator_once(service_name, run_command, output_filename)
        if not os.path.exists(output_dir):
            os.makedirs(output_dir)
        dir_to_delete = f"{output_dir}/{service_name}-gen-tests"

        return self._extract_zip(output_zip_file, f"{service_name}-gen-tests", output_dir, dir_to_delete)

    def generate_single_service(self,
                                service_name: str,
                                model_files: ServiceModel,
                                output_dir: str,
                                tmp_dir: str,
                                kwargs):
        service_name, status = self.generate_client(service_name, model_files, f"{output_dir}/src", tmp_dir)

        if model_files.endpoint_rule_set and model_files.endpoint_tests:
            self._generate_client_endpoint_tests(service_name, model_files, f"{output_dir}/tests", tmp_dir)

        return service_name, status

    @staticmethod
    def build_generator(generator_dir: str) -> None:
        """Build generator in subprocess (mvn package) located in generator_dir

        :param generator_dir: path to the generator source code
        :return: None
        """

        mvn_cmd = [shutil.which("mvn"), "package", "-q"]  # subprocess.run does expand Path by default
        process = subprocess.run(mvn_cmd, cwd=generator_dir, timeout=6*60, check=True)
        process.check_returncode()

    def _run_generator_once(self, service_name: str, run_command: list, output_filename: str):
        """Helper function to call generator once in a subprocess

        :param service_name: argument used purely for tracing/logging
        :param run_command: actual subprocess command to execute
        :param output_filename: temporary file to be generated by generator or STDOUT
        :return: generated filename (str) or io.BytesIO-like object
        """
        if self.debug:
            run_command_str = str(run_command).replace(', ', ' ').replace('\'','')
            print(f"RUNNING COMMAND\n{run_command_str}\n")
        process = subprocess.run(run_command, timeout=6*60, check=True, capture_output=True)
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

    @staticmethod
    def _extract_zip(zip_bytes: io.BytesIO, service_name: str, output_dir: str, dir_to_delete: str):
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

    def _generate_core_component(self,
                                 component_name: str,
                                 model_file_path: str,
                                 output_dir: str,
                                 tmp_dir: str,
                                 kwargs):
        """Generate AWS-SDK-CPP defaults

        :param self: self
        :param component_name: "partitions" or "defaults"
        :param model_file_path: relative path to the component json model
        :param output_dir: path to the SDK root (with aws-cpp-sdk-core)
        :param tmp_dir: Optional path to a tmp dir to use (otherwise STDOUT piping will be used)
        :param kwargs: Additional optional arguments to pass to the code generator
        :return: ("Defaults", status_code), where 0 is success status_code
        """
        if component_name not in ["defaults", "partitions"]:
            raise RuntimeError(f"Unknown core component: {component_name}")
        # raw arguments to be passed from Py wrapper to the actual generator
        if not kwargs.get("language-binding"):
            kwargs["language-binding"] = "cpp"  # Always cpp by default in the current code gen

        if tmp_dir:
            output_filename = f"{tmp_dir}/aws-cpp-sdk-core-{component_name}.zip"
        else:
            output_filename = "STDOUT"

        full_model_file_path = f"{self.path_to_api_definitions}/{model_file_path}"
        generator_jar = self.path_to_generator + "/" + GENERATOR_JAR
        run_command = list()
        run_command.append("java")
        run_command += ["-jar", generator_jar]
        run_command += ["--inputfile", full_model_file_path]
        run_command += [f"--{component_name}", "global"]
        run_command += ["--outputfile", output_filename]
        run_command += ["--arbitrary"]

        for key, val in kwargs.items():
            run_command += [f"--{key}", val]

        output_zip_file = self._run_generator_once(f"core/{component_name}", run_command, output_filename)

        return self._extract_zip(output_zip_file, f"core/{component_name}", output_dir, None)
