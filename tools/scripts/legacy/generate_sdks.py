# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.
#
import argparse
import re
import subprocess
import os
import zipfile
import codecs
from subprocess import PIPE, Popen
from os import listdir
from os.path import isfile, join


def parse_arguments():
    arg_map = {}

    parser = argparse.ArgumentParser(description="Generates an SDK given an sdk name and version")
    parser.add_argument("--outputLocation", action="store")
    parser.add_argument("--serviceName", action="store")
    parser.add_argument("--clientConfigDefaults", action="store")
    parser.add_argument("--apiVersion", action="store")
    parser.add_argument("--namespace", action="store")
    parser.add_argument("--licenseText", action="store")
    parser.add_argument("--pathToApiDefinitions", action="store")
    parser.add_argument("--pathToGenerator", action="store")
    parser.add_argument("--prepareTools", help="Makes sure generation environment is setup.", action="store_true")
    parser.add_argument("--standalone",
                        help="Build custom client as a separate package, with prebuilt C++ SDK as dependency",
                        action="store_true")
    parser.add_argument("--listAll", help="Lists all available SDKs for generation.", action="store_true")
    parser.add_argument("--enableVirtualOperations",
                        help="Mark operation functions in service client as virtual functions.", action="store_true")

    args = vars(parser.parse_args())
    arg_map["outputLocation"] = args["outputLocation"] or "./"
    arg_map["serviceName"] = args["serviceName"] or None
    arg_map["clientConfigDefaults"] = args["clientConfigDefaults"] or None
    arg_map["apiVersion"] = args["apiVersion"] or ""
    arg_map["namespace"] = args["namespace"] or ""
    arg_map["licenseText"] = args["licenseText"] or ""
    arg_map["pathToApiDefinitions"] = args["pathToApiDefinitions"] or "./code-generation/api-descriptions"
    arg_map["pathToGenerator"] = args["pathToGenerator"] or "./code-generation/generator"
    arg_map["prepareTools"] = args["prepareTools"]
    arg_map["standalone"] = args["standalone"]
    arg_map["listAll"] = args["listAll"]
    arg_map["enableVirtualOperations"] = args["enableVirtualOperations"]

    return arg_map


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


def discover_all_available_models(discovery_path):
    sdks = {}

    files_in_dir = [f for f in listdir(discovery_path) if isfile(join(discovery_path, f))]

    for file in files_in_dir:
        match = re.search(r'([\w.-]+)-(\d{4}-\d{2}-\d{2}).normal.json', file)
        if match:
            service_name = match.group(1)
            if service_name in serviceNameRemaps:
                service_name = serviceNameRemaps[service_name]

            sdk = {'service_name': service_name, 'apiVersion': match.group(2), 'filePath': join(discovery_path, file)}
            sdks['{}-{}'.format(sdk['service_name'], sdk['apiVersion'])] = sdk

            if service_name == "s3":
                s3crt = {'service_name': "s3-crt", 'apiVersion': sdk['apiVersion'], 'filePath': sdk['filePath']}
                sdks['s3-crt-{}'.format(s3crt['apiVersion'])] = s3crt

    return sdks


def prepare_generator(generator_path):
    current_dir = os.getcwd()
    os.chdir(generator_path)
    subprocess.call('mvn package', shell=True)
    os.chdir(current_dir)


def generate_sdk(generator_path, sdk, output_dir, namespace, license_text, standalone, enable_virtual_operations):
    try:
        with codecs.open(sdk['filePath'], 'rb', 'utf-8') as api_definition:
            api_content = api_definition.read()
            jar_path = join(generator_path, 'target/aws-client-generator-1.0-SNAPSHOT-jar-with-dependencies.jar')
            process = Popen(['java', '-jar', jar_path, '--service', sdk['serviceName'], '--version', sdk['apiVersion'],
                             '--namespace', namespace, '--license-text', license_text, '--language-binding', 'cpp',
                             '--arbitrary', '--standalone' if standalone else '',
                             '--enable-virtual-operations' if enable_virtual_operations else ''],
                            stdout=PIPE,
                            stdin=PIPE)
            writer = codecs.getwriter('utf-8')
            std_in_writer = writer(process.stdin)
            std_in_writer.write(api_content)
            process.stdin.close()
            output = process.stdout.read()
            if output:
                with zipfile.ZipFile(output.strip().decode('utf-8'), 'r') as zipped:
                    zipped.extractall(output_dir)
    except EnvironmentError as ex:
        print('Error generating sdk {} with error {}'.format(sdk, ex))


def generate_defaults(generator_path, defaults_definition_path, output_dir, namespace, license_text):
    try:
        with codecs.open(defaults_definition_path, 'rb', 'utf-8') as defaults_definition:
            defaults_content = defaults_definition.read()
            jar_path = join(generator_path, 'target/aws-client-generator-1.0-SNAPSHOT-jar-with-dependencies.jar')
            process = Popen(
                ['java', '-jar', jar_path, '--defaults', 'global', '--namespace', namespace, '--license-text',
                 license_text, '--language-binding', 'cpp', '--arbitrary'], stdout=PIPE, stdin=PIPE)
            writer = codecs.getwriter('utf-8')
            std_in_writer = writer(process.stdin)
            std_in_writer.write(defaults_content)
            process.stdin.close()
            output = process.stdout.read()
            if output:
                with zipfile.ZipFile(output.strip().decode('utf-8'), 'r') as zipped:
                    zipped.extractall(output_dir)
    except EnvironmentError as ex:
        print('Error generating {} defaults with error {}'.format('global', ex))
    except Exception as ex:
        print('Error generating {} defaults with error {}'.format('global', ex))


def main():
    arguments = parse_arguments()

    if arguments['prepareTools']:
        prepare_generator(arguments['pathToGenerator'])

    sdks = discover_all_available_models(arguments['pathToApiDefinitions'])

    if arguments['listAll']:
        for key, value in sdks.items():
            print(value)

    if arguments['serviceName']:
        print('Generating {} api version {}.'.format(arguments['serviceName'], arguments['apiVersion']))
        key = '{}-{}'.format(arguments['serviceName'], arguments['apiVersion'])
        generate_sdk(arguments['pathToGenerator'], sdks[key], arguments['outputLocation'], arguments['namespace'],
                     arguments['licenseText'], arguments['standalone'], arguments['enableVirtualOperations'])

    if arguments['clientConfigDefaults']:
        print('Generating {} defaults api version.'.format(arguments['clientConfigDefaults']))
        defaults_definition_path = './code-generation/defaults/sdk-default-configuration.json'
        generate_defaults(arguments['pathToGenerator'], defaults_definition_path, arguments['outputLocation'],
                          arguments['namespace'], arguments['licenseText'])


if __name__ == "__main__":
    main()
