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

    testList = [ "aws-cpp-sdk-dynamodb-integration-tests",
                 "aws-cpp-sdk-sqs-integration-tests",
                 "aws-cpp-sdk-s3-integration-tests",
                 "aws-cpp-sdk-lambda-integration-tests",
                 "aws-cpp-sdk-cognitoidentity-integration-tests",
                 "aws-cpp-sdk-transfer-tests",
                 "aws-cpp-sdk-s3-encryption-integration-tests",
                 "aws-cpp-sdk-ec2-integration-tests" ]

    for testName in testList:
        testExe = arguments["buildDir"] + "/" + testName + "/" + configDir + "/" + testName + exeExtension
        prefix = platform.system().lower()
        print("testExe = " + testExe)
        print("prefix = " + prefix)
        AddExecutableBit(testExe)
        subprocess.check_call([testExe, prefix])


# Run from powershell; make sure msbuild is in PATH environment variable  
Main()


