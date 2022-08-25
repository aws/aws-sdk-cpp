#!/usr/bin/env python3

# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0

import argparse
import re
import subprocess
import os
import zipfile
import codecs
from subprocess import PIPE, Popen
from os import listdir
from os.path import isfile, join
import sys


def parse_arguments():
    path_to_exe = os.path.dirname(sys.argv[0])
    cwd_path = os.getcwd()
    parser = argparse.ArgumentParser(
        description="Generates an SDK Service Client given an service model name and version")
    parser.add_argument("--output-path",
                        help="Path to where to generate the code for the client.",
                        default=cwd_path,
                        action="store")
    parser.add_argument("--service-name",
                        help="Name of the service client that needs to be generated.",
                        default=None,
                        action="store")
    parser.add_argument("--generate-config-defaults",
                        help="Generate config defaults from defaults.json.",
                        action="store_true")
    parser.add_argument("--config-defaults-path",
                        help="Path to the json file defining the default config values.",
                        default=os.path.join(path_to_exe, "../code-generation/defaults/sdk-default-configuration.json"),
                        action="store")
    parser.add_argument("--api-version",
                        help="Declaration of API version to be used to select models for generation.",
                        default="",
                        action="store")
    parser.add_argument("--namespace",
                        help="Namespace argument to be passed to the generator.",
                        default="",
                        action="store")
    parser.add_argument("--license",
                        help="License text to be passed to the generator.",
                        default="",
                        action="store")
    parser.add_argument("--api-definitions-path",
                        help="Path to the service api model specification files to read during generation.",
                        default=os.path.join(path_to_exe, "../code-generation/api-descriptions"),
                        action="store")
    parser.add_argument("--code-generator-path",
                        help="Path to the code generation engine.",
                        default=os.path.join(path_to_exe, "../code-generation/generator"),
                        action="store")
    parser.add_argument("--prepare-tools",
                        help="Makes sure generation environment is setup by maven.",
                        action="store_true")
    parser.add_argument("--standalone",
                        help="Pass to generator the requirement for service client to generate separate package "
                             "with dependency on prebuilt C++ SDK.",
                        action="store_true")
    parser.add_argument("--list-all",
                        help="Lists all service clients available for generation.",
                        action="store_true")
    parser.add_argument("--enable-virtual-operations",
                        help="Mark operation functions in service client as virtual functions.",
                        action="store_true")

    return vars(parser.parse_args())


serviceNameRemaps = {
    "runtime.lex": "lex",
    "runtime.lex.v2": "lexv2-runtime",
    "models.lex.v2": "lexv2-models",
    "entitlement.marketplace": "marketplace-entitlement",
    "runtime.sagemaker": "sagemaker-runtime",
    "transfer": "awstransfer",
    "transcribe-streaming": "transcribestreaming",
    "streams.dynamodb": "dynamodbstreams"
}


def discover_all_available_service_models(discovery_path):
    sdks = {}

    files_in_dir = [f for f in listdir(discovery_path) if isfile(join(discovery_path, f))]

    for file in files_in_dir:
        match = re.search(r"([\w.-]+)-(\d{4}-\d{2}-\d{2}).normal.json", file)
        if match:
            service_name = match.group(1)
            if service_name in serviceNameRemaps:
                service_name = serviceNameRemaps[service_name]

            sdk = {'serviceName': service_name, 'apiVersion': match.group(2), 'filePath': join(discovery_path, file)}
            sdks['{}-{}'.format(sdk['serviceName'], sdk['apiVersion'])] = sdk

            if service_name == "s3":
                s3crt = {'serviceName': "s3-crt", 'apiVersion': sdk['apiVersion'], 'filePath': sdk['filePath']}
                sdks['s3-crt-{}'.format(s3crt['apiVersion'])] = s3crt

    return sdks


def prepare_generator(generator_path):
    current_dir = os.getcwd()
    os.chdir(generator_path)
    subprocess.call('mvn package', shell=True)
    os.chdir(current_dir)


def generate_sdk_service_client(generator_path, sdk, output_dir, namespace, license_text, standalone,
                                enable_virtual_operations):
    try:
        with codecs.open(sdk['filePath'], 'rb', 'utf-8') as api_definition:
            api_content = api_definition.read()
            jar_path = join(generator_path, 'target/aws-client-generator-1.0-SNAPSHOT-jar-with-dependencies.jar')
            process = Popen(['java', '-jar', jar_path, '--service', sdk['serviceName'], '--version', sdk['apiVersion'],
                             '--namespace', namespace, '--license-text', license_text, '--language-binding', 'cpp',
                             '--arbitrary', '--standalone' if standalone else '',
                             '--enable-virtual-operations' if enable_virtual_operations else ''],
                            stdout=PIPE, stdin=PIPE)
            generation_io_handling(api_content, output_dir, process)
    except EnvironmentError as ex:
        print('Error generating sdk {} with error {}'.format(sdk, ex))


def generation_io_handling(api_content, output_dir, process):
    writer = codecs.getwriter('utf-8')
    std_in_writer = writer(process.stdin)
    std_in_writer.write(api_content)
    process.stdin.close()
    output = process.stdout.read()
    if output:
        with zipfile.ZipFile(output.strip().decode('utf-8'), 'r') as zip_item:
            zip_item.extractall(output_dir)


def generate_defaults(generator_path, defaults_definition_path, output_dir, namespace, license_text):
    try:
        with codecs.open(defaults_definition_path, 'rb', 'utf-8') as defaults_definition:
            defaults_content = defaults_definition.read()
            jar_path = join(generator_path, 'target/aws-client-generator-1.0-SNAPSHOT-jar-with-dependencies.jar')
            process = Popen(
                ['java', '-jar', jar_path, '--defaults', 'global', '--namespace', namespace, '--license-text',
                 license_text, '--language-binding', 'cpp', '--arbitrary'], stdout=PIPE, stdin=PIPE)
            generation_io_handling(defaults_content, output_dir, process)

    except EnvironmentError as ex:
        print('Error generating {} defaults with error {}'.format('global', ex))
    except Exception as ex:
        print('Error generating {} defaults with error {}'.format('global', ex))


def main():
    # Python before 3.9 doesn't exit on parsing errors.
    min_python = (3, 9)
    if sys.version_info < min_python:
        sys.exit("Python %s.%s or later is required.\n" % min_python)

    arguments = parse_arguments()

    if arguments['prepare_tools']:
        prepare_generator(arguments['code_generator_path'])

    sdks = discover_all_available_service_models(arguments['api_definitions_path'])

    if arguments['list_all']:
        for value in sdks.values():
            print(value)

    if arguments['service_name']:
        print('Generating {} api version {}.'.format(arguments['service_name'], arguments['api_version']))
        key = '{}-{}'.format(arguments['service_name'], arguments['api_version'])
        generate_sdk_service_client(arguments['code_generator_path'], sdks[key], arguments['output_path'],
                                    arguments['namespace'], arguments['license'], arguments['standalone'],
                                    arguments['enable_virtual_operations'])

    if arguments['generate_config_defaults']:
        print('Generating {} defaults api version.'.format(arguments['generate_config_defaults']))
        generate_defaults(arguments['code_generator_path'], arguments['config-defaults-path'],
                          arguments['outputLocation'], arguments['namespace'], arguments['licenseText'])


if __name__ == '__main__':
    main()
