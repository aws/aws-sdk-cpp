#
# Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
import stat
import subprocess
import platform

def ParseArguments():
    argMap = {}

    parser = argparse.ArgumentParser(description="AWSNativeSDK Run all Integration Tests")
    parser.add_argument("--testDir", action="store")

    args = vars( parser.parse_args() )
    argMap[ "testDir" ] = args[ "testDir" ] or "./build"

    return argMap

def AddExecutableBit(file):
    st = os.stat(file)
    os.chmod(file, st.st_mode | stat.S_IEXEC)

def Main():
    arguments = ParseArguments()

    testHasParentDir = platform.system() != "Windows"
    exeExtension = ".exe" if platform.system() == "Windows" else ""

    testList = [ "aws-cpp-sdk-transcribestreaming-integration-tests",
                 "aws-cpp-sdk-dynamodb-integration-tests",
                 "aws-cpp-sdk-sqs-integration-tests",
                 "aws-cpp-sdk-s3-integration-tests",
                 "aws-cpp-sdk-s3control-integration-tests",
                 "aws-cpp-sdk-lambda-integration-tests",
                 "aws-cpp-sdk-cognitoidentity-integration-tests",
                 "aws-cpp-sdk-transfer-tests",
                 "aws-cpp-sdk-s3-encryption-integration-tests",
                 "aws-cpp-sdk-mediastore-data-integration-tests",
                 "aws-cpp-sdk-kinesis-integration-tests",
                 "aws-cpp-sdk-logs-integration-tests",
                 #"aws-cpp-sdk-redshift-integration-tests", # Don't run this test unless you really want to, it will cost you a lot of money. The test takes around a half hour to finish.
                 #"aws-cpp-sdk-cloudfront-integration-tests", # This test will cost you a lot of money as well.
                 "aws-cpp-sdk-ec2-integration-tests" ]

    for testName in testList:
        testExe = os.path.join(arguments[ "testDir" ], testName if testHasParentDir else "", testName) + exeExtension
        # when build with BUILD_ONLY, not all test binaries will be generated.
        if not os.path.isfile(testExe):
            print("Test: \"{}\" doesn't exist, skipped.".format(testExe))
            continue
        prefix = "--aws_resource_prefix=" + platform.system().lower()
        print("testExe = " + testExe)
        print("prefix = " + prefix)
        AddExecutableBit(testExe)
        subprocess.check_call([testExe, prefix])


# Run from powershell; make sure msbuild is in PATH environment variable
Main()


