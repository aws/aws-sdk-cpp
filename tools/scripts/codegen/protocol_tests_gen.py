#!/usr/bin/env python3

# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.

"""
This is a module to handle protocol tests generation.
"""
import json
import os
import pathlib
import re
import sys
from concurrent.futures import ProcessPoolExecutor, wait, FIRST_COMPLETED, ALL_COMPLETED
from subprocess import list2cmdline, run
from tempfile import NamedTemporaryFile

from codegen.legacy_c2j_cpp_gen import LegacyC2jCppGen
from codegen.model_utils import SERVICE_MODEL_FILENAME_PATTERN, ServiceModel, ModelUtils

PROTOCOL_TESTS_BASE_DIR = "tools/code-generation/protocol-tests"
PROTOCOL_TESTS_CLIENT_MODELS = PROTOCOL_TESTS_BASE_DIR + "/api-descriptions"
PROTOCOL_TESTS_ENDPOINT_RULES = "endpoint-rule-set.json"  # Dummy endpoint ruleset
PROTOCOL_TESTS_DEFINITION_SETS = ["input", "output"]
PROTOCOL_TESTS_MOCK_TEST_CLIENT = "protocol-mock"
PROTOCOL_TESTS_MOCK_TEST_RULES = "protocol-mock-endpoint-rule-set.json"

PROTOCOL_TESTS_GENERATED_CLIENTS_DIR = "generated/protocol-tests/test-clients"
PROTOCOL_GENERATED_TESTS_DIR = "generated/protocol-tests/tests"

UNSUPPORTED_CLIENTS = {}
UNSUPPORTED_TESTS = {}

CLANG_FORMAT_VERSION = '18.1.6'
CLANG_FORMAT_INCLUDE_REGEX = re.compile(r'^.*\.(cpp|h)$')

# Regexp to parse C2J model filename to extract service name and date version
TEST_DEFINITION_FILENAME_PATTERN = re.compile(
    "^"
    "(?P<name>.+)"
    ".json$"
)


class ProtocolTestsGen(object):
    """A wrapper for Protocol tests generator for C++ SDK
    """

    class ProtoTestC2jClientModelMetadata:
        def __init__(self, filename: str, model_path: str, md: dict):
            self.service_name = SERVICE_MODEL_FILENAME_PATTERN.match(filename).group("service")
            self.model_path = model_path
            self.md = md

    class ProtocolTestModel:
        def __init__(self, test_type: str, test_name: str, c2j_test_model: str, c2j_client_md):
            self.test_type = test_type  # ex: input our output
            self.service_name = c2j_client_md.service_name
            self.test_name = test_name
            #  File paths to model files
            self.c2j_test_model = c2j_test_model
            self.c2j_client_model = c2j_client_md.model_path

    def __init__(self,
                 args: dict):
        sdk_root_dir = pathlib.Path(__file__).parents[3]
        self.debug = args.get("debug", False)
        self.client_models_dir = str(pathlib.Path(f"{sdk_root_dir}/{PROTOCOL_TESTS_CLIENT_MODELS}").resolve())
        self.test_definitions_dir = str(pathlib.Path(f"{sdk_root_dir}/{PROTOCOL_TESTS_BASE_DIR}").resolve())

        self.generated_test_clients_dir = str(
            pathlib.Path(f"{sdk_root_dir}/{PROTOCOL_TESTS_GENERATED_CLIENTS_DIR}").resolve())
        self.generated_tests_dir = str(pathlib.Path(f"{sdk_root_dir}/{PROTOCOL_GENERATED_TESTS_DIR}").resolve())

        self.c2j_client_generator = LegacyC2jCppGen(args, dict())
        self.c2j_client_generator.path_to_api_definitions = self.client_models_dir
        self.c2j_client_generator.path_to_endpoint_rules = str(
            pathlib.Path(f"{sdk_root_dir}/{PROTOCOL_TESTS_BASE_DIR}").resolve())
        self.c2j_client_generator.output_location = PROTOCOL_TESTS_GENERATED_CLIENTS_DIR

        self.c2j_tests_generator = LegacyC2jCppGen(args, dict())
        self.c2j_tests_generator.path_to_api_definitions = ""
        self.c2j_tests_generator.path_to_endpoint_rules = ""
        self.c2j_tests_generator.output_location = PROTOCOL_GENERATED_TESTS_DIR

    def generate(self, executor: ProcessPoolExecutor, max_workers: int):
        """
        Generate protocol tests (test clients and a corresponding set of tests)
        :param executor:
        :param max_workers:
        :return:
        """
        if self._generate_test_clients(executor, max_workers) == 0:
            result = self._generate_tests(executor, max_workers)
            if result == 0:
                self._format_generated_files()
            return result
        return -1

    def _generate_test_clients(self, executor: ProcessPoolExecutor, max_workers: int):
        self.c2j_client_generator.build_generator(self.c2j_client_generator.path_to_generator)

        service_models = self._collect_test_client_models()
        os.makedirs(self.generated_test_clients_dir, exist_ok=True)

        pending = set()
        done = set()
        sys.stdout.flush()
        for service, model_files in service_models.items():
            while len(pending) >= max_workers:
                new_done, pending = wait(pending, return_when=FIRST_COMPLETED)
                done.update(new_done)

            task = executor.submit(self._generate_test_client,
                                   service,
                                   model_files,
                                   PROTOCOL_TESTS_GENERATED_CLIENTS_DIR)
            pending.add(task)

        new_done, _ = wait(pending, return_when=ALL_COMPLETED)
        done.update(new_done)

        failures = set()
        for result in done:
            try:
                service, status = result.result()  # will rethrow any exceptions
                if status != 0:
                    raise RuntimeError(f"Protocol test client {service} (re)generation failed: {status}")
            except Exception as exc:
                failures.add(f"Protocol test client (re)generation failed with error.\n    Exception: {exc}\n"
                             f"stderr: {getattr(exc, 'stderr', None)}")

        if len(failures):
            print(f"Code generation failed, processed {len(done)} packages. "
                  f"Encountered {len(failures)} failures:\n")
            for failure in failures:
                print(failure)

        if len(failures):
            return -1
        return 0

    def _generate_test_client(self,
                              service_name: str,
                              model_files: ServiceModel,
                              output_dir: str):
        service_name, status = self.c2j_client_generator.generate_client(service_name, model_files, output_dir, None)
        return service_name, status

    def _collect_test_client_models(self) -> dict:
        service_models = dict()
        model_files = os.listdir(self.client_models_dir)
        for filename in model_files:
            if not os.path.isfile("/".join([str(self.client_models_dir), filename])):
                continue
            match = SERVICE_MODEL_FILENAME_PATTERN.match(filename)

            service_model_name = match.group("service")
            _ = match.group("date")
            if service_model_name in UNSUPPORTED_CLIENTS:
                print(f"Skipping protocol tests client generation: {filename}")
                continue

            use_smithy = ModelUtils.is_smithy_enabled(service_model_name, self.client_models_dir, filename)
            service_models[service_model_name] = ServiceModel(service_model_name, filename,
                                                              PROTOCOL_TESTS_ENDPOINT_RULES, None, use_smithy)
        service_models[PROTOCOL_TESTS_MOCK_TEST_CLIENT].endpoint_rule_set = PROTOCOL_TESTS_MOCK_TEST_RULES
        return service_models

    def _get_client_models_metadata(self) -> list:
        models = list()
        model_files = os.listdir(self.client_models_dir)
        for filename in sorted(model_files):
            if not os.path.isfile("/".join([self.client_models_dir, filename])):
                continue
            model_abspath = str(pathlib.Path(f"{self.client_models_dir}/{filename}").resolve())
            with open(model_abspath, 'r') as file_content:
                try:
                    c2j_model = json.load(file_content)
                    model_metadata = self.ProtoTestC2jClientModelMetadata(filename, model_abspath,
                                                                          c2j_model.get("metadata"))
                    models.append(model_metadata)
                except Exception as exc:
                    print(f"ERROR: unexpected file content in protocol tests clients dir {self.client_models_dir}. "
                          f"Expected c2j client model, but json metadata kew is missing: {exc}")
        return models

    def _collect_test_definition_models(self) -> dict:
        all_test_clients_md = self._get_client_models_metadata()

        test_models = dict()  # ex: "{input: {ec2: ProtocolTestModel}, output: {ec2: ProtocolTestModel}}"

        for test_def_group in PROTOCOL_TESTS_DEFINITION_SETS:
            model_files = os.listdir(f"{self.test_definitions_dir}/{test_def_group}")
            for filename in model_files:
                if not os.path.isfile(f"{self.test_definitions_dir}/{test_def_group}/{filename}"):
                    continue
                match = TEST_DEFINITION_FILENAME_PATTERN.match(filename)

                test_def_name = match.group("name")
                if test_def_name in UNSUPPORTED_TESTS:
                    print(f"Skipping protocol tests generation: {test_def_group}/{filename}")
                    continue

                test_def_path = str(pathlib.Path(f"{self.test_definitions_dir}/{test_def_group}/{filename}").resolve())

                def _get_corresponding_test_client(test_clients_md: list, test_path: str) -> list:
                    # Get c2j client models matching the test suite
                    # more than 1 is possible (ex: xml and xml with namespace clients for a single test suite)
                    result = list()
                    with open(test_path, 'r') as file_content:
                        try:
                            proto_test_model = json.load(file_content)
                            proto_test_md = proto_test_model[0].get("metadata")
                            for c2j_md in test_clients_md:
                                for field_to_match in ["apiVersion", "protocols", "jsonVersion", "targetPrefix"]:
                                    if proto_test_md.get(field_to_match, None) != c2j_md.md.get(field_to_match, None):
                                        break
                                else:
                                    result.append(c2j_md)
                        except Exception as exc:
                            print(f"ERROR: unexpected file content in protocol tests {test_def_path}. "
                                  f"Expected c2j protocol test, but json metadata kew is missing: {exc}")
                    return result

                test_clients_for_suite = _get_corresponding_test_client(all_test_clients_md, test_def_path)

                if test_clients_for_suite is None or len(test_clients_for_suite) == 0:
                    raise Exception(f"ERROR: Unable to find C2J client model for the test suite: {test_def_path}")

                for index, client_md in enumerate(test_clients_for_suite):
                    if index == 0:
                        test_def_key = test_def_name
                    else:
                        test_def_key = f"{test_def_name}-{index}"
                    assert test_models.get(test_def_group, dict()).get(test_def_key, None) is None, \
                        f"This test suite {test_def_group}/{test_def_key} already exists: {test_models}"
                    if self.debug:
                        print("Protocol test generation task:\t"
                              f"{test_def_path.split('/')[-1]} with {client_md.model_path.split('/')[-1]}")
                    if test_def_group not in test_models:
                        test_models[test_def_group] = dict()
                    test_models[test_def_group][test_def_key] = self.ProtocolTestModel(test_type=test_def_group,
                                                                                       test_name=test_def_key,
                                                                                       c2j_test_model=test_def_path,
                                                                                       c2j_client_md=client_md)
        return test_models

    def _generate_tests(self, executor: ProcessPoolExecutor, max_workers: int):
        test_models = self._collect_test_definition_models()

        pending = set()
        done = set()
        sys.stdout.flush()
        for test_def_group, test_suites in test_models.items():
            os.makedirs(test_def_group, exist_ok=True)

            for protocol, test_models in test_suites.items():
                while len(pending) >= max_workers:
                    new_done, pending = wait(pending, return_when=FIRST_COMPLETED)
                    done.update(new_done)

                task = executor.submit(self._generate_single_protocol_test,
                                       test_models)
                pending.add(task)

        new_done, _ = wait(pending, return_when=ALL_COMPLETED)
        done.update(new_done)

        failures = set()
        for result in done:
            try:
                service, status = result.result()  # will rethrow any exceptions
                if status != 0:
                    raise RuntimeError(f"Protocol test client {service} (re)generation failed: {status}")
            except Exception as exc:
                failures.add(f"Protocol test client (re)generation failed with error.\n    Exception: {exc}\n"
                             f"stderr: {getattr(exc, 'stderr', None)}")

        if len(failures):
            print(f"Code generation failed, processed {len(done)} packages. "
                  f"Encountered {len(failures)} failures:\n")
            for failure in failures:
                print(failure)

        if len(failures):
            return -1
        return 0

    def _generate_single_protocol_test(self, models: ProtocolTestModel):
        """Call java generator to generate a single protocol test suite

        :param test_group: ex: "input" or "output"
        :param name: ex: "ec2", "json", "xml"
        :param models: ProtocolTestModel
        :return:
        """
        generator_jar = self.c2j_tests_generator.path_to_generator + "/" + self.c2j_tests_generator.GENERATOR_JAR
        run_command = list()
        run_command.append("java")
        run_command += ["-jar", generator_jar]
        run_command += ["--inputfile", models.c2j_client_model]
        run_command += ["--protocol-tests", models.c2j_test_model]
        run_command += ["--protocol-tests-type", models.test_type]
        run_command += ["--protocol-tests-name", models.test_name]
        run_command += ["--service", models.service_name]
        run_command += ["--outputfile", "STDOUT"]
        run_command.append("--generate-tests")

        name_for_logging = f"protocol test {models.test_type}/{models.test_name}"
        output_zip_file = self.c2j_tests_generator.run_generator_once(name_for_logging,
                                                                      run_command, "STDOUT")
        dir_to_delete = f"{self.generated_tests_dir}/{models.test_type}/{models.test_name}"
        dir_to_extract = f"{self.generated_tests_dir}/{models.test_type}"
        name_for_logging, status = self.c2j_tests_generator.extract_zip(output_zip_file, name_for_logging,
                                                                        dir_to_extract, dir_to_delete)

        return name_for_logging, status

    def _format_generated_files(self):
        """Format generated C++ files using clang-format"""
        filepaths_file = NamedTemporaryFile(delete=False)
        
        for root_dir in [self.generated_test_clients_dir, self.generated_tests_dir]:
            for dirpath, dirnames, filenames in os.walk(root_dir):
                for filename in filenames:
                    filepath = pathlib.Path(dirpath, filename).as_posix()
                    if CLANG_FORMAT_INCLUDE_REGEX.match(filename):
                        filepaths_file.write(f"{filepath}\n".encode())
        
        filepaths_file.close()
        
        cmd = ['pipx', 'run', f'clang-format=={CLANG_FORMAT_VERSION}',
               f'--files={filepaths_file.name}', '-i', '-style=file:.clang-format']
        
        print(f"Formatting generated files: {list2cmdline(cmd)}")
        run(cmd)
