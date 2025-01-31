#!/usr/bin/env python3

# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.

"""
This is a wrapper on top of Smithy smoke tests generator
"""
import json
import os
import shutil
import subprocess
from typing import List

SMITHY_GENERATOR_LOCATION = "tools/code-generation/smithy/codegen"
SMITHY_OUTPUT_DIR = "codegen_output"
SMITHY_TO_C2J_MAP_FILE = "tools/code-generation/smithy/codegen/smithy2c2j_service_map.json"


class SmokeTestsGen(object):
    """A wrapper for Smithy smoke tests generator for C++ SDK
    """

    def __init__(self, debug: bool, **kwargs):
        self.debug = debug
        with open(os.path.abspath(SMITHY_TO_C2J_MAP_FILE), 'r') as file:
            self.smithy_c2j_data = json.load(file)
            self.c2j_smithy_data = {value: key for key, value in self.smithy_c2j_data.items()}

    def generate(self, clients_to_build: set):
        """
        Generate smoke tests for SDK clients
        :param clients_to_build: a set of service client names to generate
        :return:
        """
        # get smithy names
        smithy_services = [self.c2j_smithy_data.get(service, service) for service in clients_to_build]
        print(f"Running code generator for smoke-tests for services:"+",".join(smithy_services))
        if self._generate_smoke_tests(smithy_services, json.dumps(self.smithy_c2j_data)):
            # move the output to generated folder
            self._copy_cpp_codegen_contents(os.path.abspath("tools/code-generation/smithy/codegen"),
                                            "cpp-codegen-smoke-tests-plugin",
                                            os.path.abspath("generated/smoke-tests"))
            return 0
        else:
            return -1

    def _generate_smoke_tests(self, smithy_services: List[str], smithy_c2j_data: str):
        smithy_codegen_command = [
            "./gradlew",
            "clean",
            "build",
            "-PoutputDirectory=" + SMITHY_OUTPUT_DIR,
            "-PservicesFilter=" + ",".join(smithy_services),
            "-Pc2jMap=" + smithy_c2j_data
        ]
        original_dir = os.getcwd()
        try:
            if self.debug:
                run_command_str = " ".join("%s" % item for item in smithy_codegen_command)
                print(f"RUNNING COMMAND\n{run_command_str}\nfrom directory:\n{SMITHY_GENERATOR_LOCATION}")

            process = subprocess.run(
                smithy_codegen_command,
                timeout=6*60,  # Timeout after 6 minutes
                check=True,
                capture_output=True,
                text=True,
                cwd=SMITHY_GENERATOR_LOCATION
            )
            # If successful, print the command output
            print("Smithy codegen command executed successfully!\n", process.stdout)
            return True

        except subprocess.CalledProcessError as e:
            # Handle command failure and print error details
            print(f"Command failed with return code {e.returncode}")
            print(f"Error Output:\n{e.stderr}")
            return False

    def _copy_cpp_codegen_contents(self, top_level_dir: str, plugin_name: str, target_dir: str):
        # check if the target directory exists, create it if it doesn't
        os.makedirs(target_dir, exist_ok=True)
        if self.debug:
            print(f"_copy_cpp_codegen_contents: {target_dir}")

        # Walk through the top-level directory and find all "cpp-codegen-smoke-tests-plugin" directories
        for root, dirs, files in os.walk(top_level_dir):
            if plugin_name in dirs:
                source_dir = os.path.join(root, plugin_name)
                # recursively copy all contents from the source to the target folder
                for item in os.listdir(source_dir):
                    source_item = os.path.join(source_dir, item)
                    target_item = os.path.join(target_dir, item)
                    # Recursively copy directories and files
                    if os.path.isdir(source_item):
                        shutil.copytree(source_item, target_item, dirs_exist_ok=True)
                    else:
                        shutil.copy2(source_item, target_item)
                print(f"Copied contents from '{source_dir}' to '{target_dir}'.")
