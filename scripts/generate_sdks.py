﻿# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.
#
import argparse
import shutil
import subprocess
import re
import subprocess
import os
import zipfile
import io
import codecs
from subprocess import PIPE, STDOUT, Popen
from os import listdir
from os.path import isfile, join

def ParseArguments():
    argMap = {}

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
    parser.add_argument("--standalone", help="Build custom client as a separete package, with prebuilt C++ SDK as dependency", action="store_true")
    parser.add_argument("--listAll", help="Lists all available SDKs for generation.", action="store_true")
    parser.add_argument("--enableVirtualOperations", help ="Mark operation functions in service client as virtual functions.", action="store_true")

    args = vars( parser.parse_args() )
    argMap[ "outputLocation" ] = args[ "outputLocation" ] or "./"
    argMap[ "serviceName" ] = args[ "serviceName" ] or None
    argMap[ "clientConfigDefaults" ] = args[ "clientConfigDefaults" ] or None
    argMap[ "apiVersion" ] = args[ "apiVersion" ] or ""
    argMap[ "namespace" ] = args[ "namespace" ] or ""
    argMap[ "licenseText" ] = args[ "licenseText" ] or ""
    argMap[ "pathToApiDefinitions" ] = args["pathToApiDefinitions"] or "./code-generation/api-descriptions"
    argMap[ "pathToGenerator" ] = args["pathToGenerator"] or "./code-generation/generator"
    argMap[ "prepareTools" ] = args["prepareTools"]
    argMap[ "standalone" ] = args["standalone"]
    argMap[ "listAll" ] = args["listAll"]
    argMap[ "enableVirtualOperations" ] = args["enableVirtualOperations"]

    return argMap

serviceNameRemaps = {
    "runtime.lex" : "lex",
    "runtime.lex.v2" : "lexv2-runtime",
    "models.lex.v2" : "lexv2-models",
    "entitlement.marketplace" : "marketplace-entitlement",
    "runtime.sagemaker" : "sagemaker-runtime",
    "transfer" : "awstransfer",
    "transcribe-streaming" : "transcribestreaming",
    "streams.dynamodb" : "dynamodbstreams"
}

def DiscoverAllAvailableSDKs(discoveryPath):
    sdks = {}

    filesInDir = [f for f in listdir(discoveryPath) if isfile(join(discoveryPath, f))]

    for file in filesInDir:
        match = re.search('([\w\d\.-]+)-(\d{4}-\d{2}-\d{2}).normal.json', file)
        if match:
            serviceName = match.group(1)
            if serviceName in serviceNameRemaps:
                serviceName = serviceNameRemaps[serviceName]

            sdk = {}
            sdk['serviceName'] = serviceName
            sdk['apiVersion'] = match.group(2)
            sdk['filePath'] = join(discoveryPath, file)
            sdks['{}-{}'.format(sdk['serviceName'], sdk['apiVersion'])] = sdk

            if serviceName == "s3":
                s3crt = {}
                s3crt['serviceName'] = "s3-crt"
                s3crt['apiVersion'] = sdk['apiVersion']
                s3crt['filePath'] = sdk['filePath']
                sdks['s3-crt-{}'.format(s3crt['apiVersion'])] = s3crt

    return sdks

def PrepareGenerator(generatorPath):
    currentDir = os.getcwd()
    os.chdir(generatorPath)
    process = subprocess.call('mvn package', shell=True)
    os.chdir(currentDir)

def GenerateSdk(generatorPath, sdk, outputDir, namespace, licenseText, standalone, enableVirtualOperations):
    try:
       with codecs.open(sdk['filePath'], 'rb', 'utf-8') as api_definition:
            api_content = api_definition.read()
            jar_path = join(generatorPath, 'target/aws-client-generator-1.0-SNAPSHOT-jar-with-dependencies.jar')
            process = Popen(['java', '-jar', jar_path, '--service', sdk['serviceName'], '--version', sdk['apiVersion'], '--namespace', namespace, '--license-text', licenseText, '--language-binding', 'cpp', '--arbitrary', '--standalone' if standalone else '', '--enable-virtual-operations' if enableVirtualOperations else '' ], stdout=PIPE, stdin=PIPE)
            writer = codecs.getwriter('utf-8')
            stdInWriter = writer(process.stdin)
            stdInWriter.write(api_content)
            process.stdin.close()
            output = process.stdout.read()
            if output:
                 with zipfile.ZipFile(output.strip().decode('utf-8'), 'r') as zip:
                     zip.extractall(outputDir)
    except EnvironmentError as ex:
        print('Error generating sdk {} with error {}'.format(sdk, ex))

def GenerateDefaults(generatorPath, defaultsDefinitionPath, outputDir, namespace, licenseText):
    try:
       with codecs.open(defaultsDefinitionPath, 'rb', 'utf-8') as defaults_definition:
            defaults_content = defaults_definition.read()
            jar_path = join(generatorPath, 'target/aws-client-generator-1.0-SNAPSHOT-jar-with-dependencies.jar')
            process = Popen(['java', '-jar', jar_path, '--defaults', 'global', '--namespace', namespace, '--license-text', licenseText, '--language-binding', 'cpp', '--arbitrary'], stdout=PIPE, stdin=PIPE)
            writer = codecs.getwriter('utf-8')
            stdInWriter = writer(process.stdin)
            stdInWriter.write(defaults_content)
            process.stdin.close()
            output = process.stdout.read()
            if output:
                 with zipfile.ZipFile(output.strip().decode('utf-8'), 'r') as zip:
                     zip.extractall(outputDir)
    except EnvironmentError as ex:
        print('Error generating {} defaults with error {}'.format('global', ex))
    except Exception as ex:
        print('Error generating {} defaults with error {}'.format('global', ex))

def Main():
    arguments = ParseArguments()

    if arguments['prepareTools']:
        PrepareGenerator(arguments['pathToGenerator'])

    sdks = DiscoverAllAvailableSDKs(arguments['pathToApiDefinitions'])

    if arguments['listAll']:
        for key, value in sdks.iteritems():
            print(value)

    if arguments['serviceName']:
        print('Generating {} api version {}.'.format(arguments['serviceName'], arguments['apiVersion']))
        key = '{}-{}'.format(arguments['serviceName'], arguments['apiVersion'])
        GenerateSdk(arguments['pathToGenerator'], sdks[key], arguments['outputLocation'], arguments['namespace'], arguments['licenseText'], arguments['standalone'], arguments['enableVirtualOperations'])

    if arguments['clientConfigDefaults']:
        print('Generating {} defaults api version.'.format(arguments['clientConfigDefaults']))
        defaultsDefinitionPath = './code-generation/defaults/sdk-default-configuration.json'
        GenerateDefaults(arguments['pathToGenerator'], defaultsDefinitionPath, arguments['outputLocation'], arguments['namespace'], arguments['licenseText'])

Main()
