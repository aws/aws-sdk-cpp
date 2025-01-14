#!/usr/bin/env python3

# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.

"""
This is a module to handle protocol tests generation.
"""
import os
import pathlib
import sys
from concurrent.futures import ProcessPoolExecutor, wait, FIRST_COMPLETED, ALL_COMPLETED

from codegen.legacy_c2j_cpp_gen import LegacyC2jCppGen
from codegen.model_utils import SERVICE_MODEL_FILENAME_PATTERN, ServiceModel

PROTOCOL_TESTS_BASE_DIR = "tools/code-generation/protocol-tests"
PROTOCOL_TESTS_CLIENT_MODELS = PROTOCOL_TESTS_BASE_DIR + "/api-descriptions"
PROTOCOL_TESTS_ENDPOINT_RULES = "endpoint-rule-set.json"  # Dummy endpoint ruleset
PROTOCOL_TESTS_INPUT_MODELS = PROTOCOL_TESTS_BASE_DIR + "/input"
PROTOCOL_TESTS_OUTPUT_MODELS = PROTOCOL_TESTS_BASE_DIR + "/output"

PROTOCOL_TESTS_GENERATED_CLIENTS_DIR = "generated/protocol-tests/test-clients"

UNSUPPORTED_CLIENTS = {"rpcv2protocol"  # RPC V2 CBOR support is not implemented on this SDK
                       }


class ProtocolTestsGen(object):
    """A wrapper for Protocol tests generator for C++ SDK
    """

    def __init__(self,
                 args: dict):
        sdk_root_dir = pathlib.Path(__file__).parents[3]
        self.client_models_dir = str(pathlib.Path(f"{sdk_root_dir}/{PROTOCOL_TESTS_CLIENT_MODELS}").resolve())
        self.input_tests_dir = str(pathlib.Path(f"{sdk_root_dir}/{PROTOCOL_TESTS_INPUT_MODELS}").resolve())
        self.output_tests_dir = str(pathlib.Path(f"{sdk_root_dir}/{PROTOCOL_TESTS_OUTPUT_MODELS}").resolve())

        self.generated_test_clients_dir = str(
            pathlib.Path(f"{sdk_root_dir}/{PROTOCOL_TESTS_GENERATED_CLIENTS_DIR}").resolve())

        self.c2j_client_generator = LegacyC2jCppGen(args, dict())
        self.c2j_client_generator.path_to_api_definitions = self.client_models_dir
        self.c2j_client_generator.path_to_endpoint_rules = str(
            pathlib.Path(f"{sdk_root_dir}/{PROTOCOL_TESTS_BASE_DIR}").resolve())
        self.c2j_client_generator.output_location = PROTOCOL_TESTS_GENERATED_CLIENTS_DIR

    def generate(self, executor: ProcessPoolExecutor, max_workers: int):
        """
        Generate protocol tests (test clients and a corresponding set of tests)
        :param executor:
        :param max_workers:
        :return:
        """
        return self._generate_test_clients(executor, max_workers)
        # TODO: self._generate_tests()

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

            task = executor.submit(self.c2j_client_generator.generate_client,
                                   service,
                                   model_files,
                                   PROTOCOL_TESTS_GENERATED_CLIENTS_DIR,
                                   None)
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
                  f"Encountered {len(failures)} failures:\n")  # Including defaults and partitions
            for failure in failures:
                print(failure)

        if len(failures):
            return -1

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
                continue

            service_models[service_model_name] = ServiceModel(service_model_name, filename,
                                                              PROTOCOL_TESTS_ENDPOINT_RULES, None)
        return service_models

    def _generate_tests(self):
        # WIP
        pass
