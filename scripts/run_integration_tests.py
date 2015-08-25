#
# Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
# 
# Licensed under the Apache License, Version 2.0 (the "License").
# You may not use this file except in compliance with the License.
# A copy of the License is located at
# 
#  http://aws.amazon.com/apache2.0
# 
# or in the "license" file accompanying this file. This file is distributed
# on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
# express or implied. See the License for the specific language governing
# permissions and limitations under the License.
#

import argparse
import os
import shutil
import subprocess
import platform

def ParseArguments():
    argMap = {}

    parser = argparse.ArgumentParser(description="AWSNativeSDK Run all Integration Tests")
    parser.add_argument("--buildDir", action="store")
    parser.add_argument("--configuration", action="store")

    args = vars( parser.parse_args() )
    argMap[ "buildDir" ] = args[ "buildDir" ] or "./build"
    argMap[ "configuration" ] = args[ "configuration" ] or "Debug"
    
    return argMap
    
def Main():
    arguments = ParseArguments()

    configDir = ""

    #Visual Studio puts executables into a configuration sub-dir, so append that.
    if platform.system() == "Windows":
        configDir = arguments["configuration"]

    dynamoDbTest = arguments["buildDir"] + "/aws-cpp-sdk-dynamodb-integration-tests/" + configDir + "/runDynamoDBIntegrationTests"
    print "executing " + dynamoDbTest
    subprocess.check_call(dynamoDbTest)

    sqsTest = arguments["buildDir"] + "/aws-cpp-sdk-sqs-integration-tests/" + configDir + "/runSqsIntegrationTests"
    subprocess.check_call(sqsTest)

    s3Test = arguments["buildDir"] + "/aws-cpp-sdk-s3-integration-tests/" + configDir + "/runS3IntegrationTests"
    subprocess.check_call(s3Test)

    lambdaTest = arguments["buildDir"] + "/aws-cpp-sdk-lambda-integration-tests/" + configDir + "/runLambdaIntegrationTests"
    subprocess.check_call(lambdaTest)

    cognitoTest = arguments["buildDir"] + "/aws-cpp-sdk-cognitoidentity-integration-tests/" + configDir + "/runCognitoIntegrationTests"
    subprocess.check_call(cognitoTest)

    transferTest = arguments["buildDir"] + "/aws-cpp-sdk-transfer-tests/" + configDir + "/runTransferIntegrationTests"
    subprocess.check_call(transferTest)  
    

# Run from powershell; make sure msbuild is in PATH environment variable  
Main()


