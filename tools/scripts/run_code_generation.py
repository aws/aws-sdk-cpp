#!/usr/bin/env python3

# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.

import argparse
import os
import sys
from concurrent.futures import ProcessPoolExecutor, wait, FIRST_COMPLETED, ALL_COMPLETED
from pathlib import Path

from codegen.legacy_c2j_cpp_gen import LegacyC2jCppGen, CLIENT_MODEL_FILE_LOCATION, ENDPOINT_RULES_LOCATION
from codegen.model_utils import ModelUtils
from codegen.protocol_tests_gen import ProtocolTestsGen
from codegen.smoke_tests_gen import SmokeTestsGen


def parse_arguments() -> dict:
    """Parse arguments and/or print help

    :return: dict with parsed arguments
    """
    parser = argparse.ArgumentParser(description="Code generation wrapper for AWS-SDK-CPP")
    parser.add_argument("--debug", action="store_true", help="Print additional information")
    parser.add_argument("--client_list", type=str, help="Comma-separated or semi-colon-separated list of SDK clients "
                                                        "to be (re)generated")
    parser.add_argument("--defaults", action="store_true", help="Generates defaults configuration")
    parser.add_argument("--partitions", action="store_true", help="Generates partitions blob")
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

    parser.add_argument("--generate_smoke_tests",
                        help="Run smithy code generator for smoke tests",
                        action="store_true")
    parser.add_argument("--generate_protocol_tests",
                        help="Run protocol tests generation",
                        action="store_true")

    args = vars(parser.parse_args())
    arg_map = {"debug": args.get("debug", False)}

    if args.get("all", None):
        arg_map["all"] = True
        arg_map["defaults"] = True
        arg_map["partitions"] = True
    elif args.get("api_definition_file", None):
        arg_map["api_definition_file"] = args.get("api_definition_file")
    else:
        raw_client_list = args.get("client_list", None)
        arg_map["all"] = False
        arg_map["defaults"] = False
        arg_map["partitions"] = False
        arg_map["client_list"] = False

        if args.get("defaults", None):
            arg_map["defaults"] = args.get("defaults")

        if args.get("partitions", None):
            arg_map["partitions"] = args.get("partitions")

        if raw_client_list:
            arg_map["client_list"] = raw_client_list.replace(";", ",").split(",")

    output_location = args["output_location"] or None
    if not output_location:
        output_location = os.getcwd()
        if output_location.endswith("scripts"):
            output_location = output_location[:-len("tools/scripts")]
        output_location += "/generated"
    arg_map["output_location"] = output_location

    for cli_argument, default_value in [("path_to_api_definitions", CLIENT_MODEL_FILE_LOCATION),
                                        ("path_to_endpoint_rules", ENDPOINT_RULES_LOCATION)]:
        models_location = args[cli_argument] or default_value
        models_location = str(Path(models_location).absolute())
        if not os.path.exists(models_location):
            if args[cli_argument] is not None and args[cli_argument] != "":
                raise RuntimeError(f"Provided {cli_argument} does not exist!")
            models_location = str(Path(sys.path[0] + "/../" + default_value).absolute())
            if not os.path.exists(models_location) and cli_argument != "path_to_endpoint_rules":
                raise RuntimeError("Could not find api definitions location!")
        arg_map[cli_argument] = models_location

    arg_map["path_to_generator"] = args.get("path_to_generator", None)
    arg_map["prepare_tools"] = args["prepare_tools"] or False
    arg_map["list_all"] = args["list_all"] or False

    raw_generator_arguments = dict()
    for raw_argument in ["license-text", "namespace", "standalone"]:
        if args.get(raw_argument):
            raw_generator_arguments[raw_argument] = args[raw_argument]
    arg_map["raw_generator_arguments"] = raw_generator_arguments
    arg_map["generate_smoke_tests"] = args.get("generate_smoke_tests", None)
    arg_map["generate_protocol_tests"] = args.get("generate_protocol_tests", None)
    if arg_map["debug"]:
        print("args=", arg_map)
    return arg_map


def main():
    """Main entrypoint for this script that wraps AWS-SDK-CPP code generation

    :return: 0 if success, failure otherwise
    """
    args = parse_arguments()

    model_utils = ModelUtils(args)
    if args.get("list_all"):
        model_list = model_utils.models_to_generate.keys()
        print(sorted(model_list))
        return 0

    highly_refined_percent_of_cores_to_take = 0.9
    max_workers = max(1, int(highly_refined_percent_of_cores_to_take * os.cpu_count()))
    if args["debug"]:
        print(f"Parallel executor thread count: {max_workers}")

    with ProcessPoolExecutor(max_workers=max_workers) as executor:
        c2j_gen = LegacyC2jCppGen(args, model_utils.models_to_generate)
        if c2j_gen.generate(executor, max_workers, args) != 0:
            print("ERROR: Failed to generate service client(s)!")
            return -1

        if args["generate_protocol_tests"]:
            protocol_tests_generator = ProtocolTestsGen(args)
            if protocol_tests_generator.generate(executor, max_workers) != 0:
                print("ERROR: Failed to generate protocol test(s)!")
                return -1

    # generate code using smithy for all discoverable clients
    # clients_to_build check is present because user can generate only defaults or partitions or protocol-tests
    clients_to_build = model_utils.get_clients_to_build()
    if args["generate_smoke_tests"] and clients_to_build:
        smoke_tests_gen = SmokeTestsGen(args["debug"])
        if smoke_tests_gen.generate(clients_to_build) != 0:
            print("ERROR: Failed to generate smoke test(s)!")
            return -1

    return 0


if __name__ == "__main__":
    ret_code = main()
    exit(ret_code)
