#!/usr/bin/env python3

# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.

"""
Wrapper for Smithy pagination generator
"""
import json
import os
import shutil
import subprocess
from typing import List

SMITHY_GENERATOR_LOCATION = "tools/code-generation/smithy/cpp-codegen"
SMITHY_TO_C2J_MAP_FILE = "tools/code-generation/smithy/cpp-codegen/smithy2c2j_service_map.json"


class SmithyCppGen(object):
    """Wrapper for Smithy C++ code generator for C++ SDK"""

    def __init__(self, debug: bool, **kwargs):
        self.debug = debug
        with open(os.path.abspath(SMITHY_TO_C2J_MAP_FILE), 'r') as file:
            self.smithy_c2j_data = json.load(file)
            self.c2j_smithy_data = {value: key for key, value in self.smithy_c2j_data.items()}

    def generate(self, clients_to_build: set):
        """Generate Smithy-based code for SDK clients"""
        smithy_services = [self.c2j_smithy_data.get(service, service) for service in clients_to_build]
        if self.debug:
            print(f"Generating Smithy code for: {','.join(smithy_services)}")
        
        if self._generate_pagination(smithy_services, json.dumps(self.smithy_c2j_data)):
            target_dir = os.path.abspath("generated/src")
            self._copy_cpp_codegen_contents(
                os.path.abspath("tools/code-generation/smithy/cpp-codegen"),
                "smithy-cpp-codegen",
                target_dir
            )
            return 0
        return -1

    def _generate_pagination(self, smithy_services: List[str], smithy_c2j_data: str):
        smithy_codegen_command = [
            "./gradlew",
            "build",
            "-PservicesFilter=" + ",".join(smithy_services),
            "-Pc2jMap=" + smithy_c2j_data
        ]
        
        try:
            if self.debug:
                print(f"RUNNING: {' '.join(smithy_codegen_command)}\nFROM: {SMITHY_GENERATOR_LOCATION}")

            process = subprocess.run(
                smithy_codegen_command,
                timeout=6*60,
                check=True,
                capture_output=True,
                text=True,
                cwd=SMITHY_GENERATOR_LOCATION
            )
            print("Smithy codegen successful!")
            if self.debug:
                print(process.stdout)
            print(f"Smithy code generation done, (re)generated {len(smithy_services)} package(s).")
            return True

        except subprocess.CalledProcessError as e:
            print(f"Command failed: {e.returncode}\nError: {e.stderr}")
            return False

    def _copy_cpp_codegen_contents(self, top_level_dir: str, plugin_name: str, target_dir: str):
        # Walk output directory to find generated code
        output_dir = os.path.join(top_level_dir, "output")
        # TODO: Verify if this check is still needed after Smithy generator always creates output
        if not os.path.exists(output_dir):
            if self.debug:
                print(f"No output directory found at '{output_dir}'")
            return
            
        for root, dirs, files in os.walk(output_dir):
            if plugin_name in dirs:
                source_dir = os.path.join(root, plugin_name)
                
                # Extract service name from the projection directory
                projection_dir = os.path.basename(os.path.dirname(source_dir))
                smithy_service_name = projection_dir.split('.')[0]  # e.g., "api-gateway.2017-11-27" -> "api-gateway"
                
                # Map to c2j service name
                c2j_service_name = self.smithy_c2j_data.get(smithy_service_name, smithy_service_name)
                
                service_target_dir = os.path.join(target_dir, f"aws-cpp-sdk-{c2j_service_name}")
                os.makedirs(service_target_dir, exist_ok=True)
                
                for item in os.listdir(source_dir):
                    source_item = os.path.join(source_dir, item)
                    
                    # Handle test directories separately - move to generated/tests
                    if item == "generated" and os.path.isdir(source_item):
                        generated_source = os.path.join(source_item, "tests")
                        if os.path.exists(generated_source):
                            test_target_dir = os.path.abspath("generated/tests")
                            os.makedirs(test_target_dir, exist_ok=True)
                            shutil.copytree(generated_source, test_target_dir, dirs_exist_ok=True)
                            if self.debug:
                                print(f"Copied tests from '{generated_source}' to '{test_target_dir}'")
                        continue
                    
                    target_item = os.path.join(service_target_dir, item)
                    if os.path.isdir(source_item):
                        shutil.copytree(source_item, target_item, dirs_exist_ok=True)
                    else:
                        shutil.copy2(source_item, target_item)
                        
                if self.debug:
                    print(f"Copied from '{source_dir}' to '{service_target_dir}'")
        
        # Cleanup output directory
        if os.path.exists(output_dir):
            shutil.rmtree(output_dir)
            if self.debug:
                print(f"Cleaned up '{output_dir}'")

