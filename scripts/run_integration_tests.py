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
import os
import stat


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

def AddExecutableBit(file):
    st = os.stat(file)
    os.chmod(file, st.st_mode | stat.S_IEXEC)
    
def Main():
    arguments = ParseArguments()

    configDir = ""
    exeExtension = ""

    #Visual Studio puts executables into a configuration sub-dir, so append that.
    if platform.system() == "Windows":
        configDir = arguments["configuration"]
        exeExtension = ".exe"

    dynamoDbTest = arguments["buildDir"] + "/aws-cpp-sdk-dynamodb-integration-tests/" + configDir + "/runDynamoDBIntegrationTests" + exeExtension
    AddExecutableBit(dynamoDbTest)
    subprocess.check_call(dynamoDbTest)

    sqsTest = arguments["buildDir"] + "/aws-cpp-sdk-sqs-integration-tests/" + configDir + "/runSqsIntegrationTests" + exeExtension
    AddExecutableBit(sqsTest)
    subprocess.check_call(sqsTest)

    s3Test = arguments["buildDir"] + "/aws-cpp-sdk-s3-integration-tests/" + configDir + "/runS3IntegrationTests" + exeExtension
    AddExecutableBit(s3Test)
    subprocess.check_call(s3Test)

    lambdaTest = arguments["buildDir"] + "/aws-cpp-sdk-lambda-integration-tests/" + configDir + "/runLambdaIntegrationTests" + exeExtension
    AddExecutableBit(lambdaTest)   
    subprocess.check_call(lambdaTest)

    cognitoTest = arguments["buildDir"] + "/aws-cpp-sdk-cognitoidentity-integration-tests/" + configDir + "/runCognitoIntegrationTests" + exeExtension
    AddExecutableBit(cognitoTest)   
    subprocess.check_call(cognitoTest)

    transferTest = arguments["buildDir"] + "/aws-cpp-sdk-transfer-tests/" + configDir + "/runTransferIntegrationTests" + exeExtension
    AddExecutableBit(transferTest)  
    subprocess.check_call(transferTest)

    #These will cost you lots of money, don't run them unless you decide you want to test this functionality
    #cloudFrontTests = arguments["buildDir"] + "/aws-cpp-sdk-cloudfront-integration-tests/" + configDir + "/runCloudfrontIntegrationTests" + exeExtension
    #AddExecutableBit(cloudFrontTests)
    #subprocess.check_call(cloudFrontTests)

    #redshiftTests = arguments["buildDir"] + "/aws-cpp-sdk-redshift-integration-tests/" + configDir + "/runRedshiftIntegrationTests" + exeExtension
    #AddExecutableBit(redshiftTests)
    #subprocess.check_call(redshiftTests)

# Run from powershell; make sure msbuild is in PATH environment variable  
Main()


