# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.
#
import argparse
import os
import stat
import subprocess
import platform
import random
import string


def parse_arguments():
    arg_map = {}

    parser = argparse.ArgumentParser(description="AWSNativeSDK Run all Integration Tests")
    parser.add_argument("--testDir", action="store")

    args = vars(parser.parse_args())
    arg_map["testDir"] = args["testDir"] or "./build"

    return arg_map


def add_executable_bit(file):
    st = os.stat(file)
    os.chmod(file, st.st_mode | stat.S_IEXEC)


def main():
    arguments = parse_arguments()

    test_has_parent_dir = platform.system() != "Windows"
    exe_extension = ".exe" if platform.system() == "Windows" else ""

    test_list = [  # "aws-cpp-sdk-transcribestreaming-integration-tests", # Temporarily disabled while investigated
        "aws-cpp-sdk-dynamodb-integration-tests",
        "aws-cpp-sdk-sqs-integration-tests",
        #"aws-cpp-sdk-s3-integration-tests",
        #"aws-cpp-sdk-s3-crt-integration-tests",
        #"aws-cpp-sdk-s3control-integration-tests",
        "aws-cpp-sdk-lambda-integration-tests",
        "aws-cpp-sdk-cognitoidentity-integration-tests",
        #"aws-cpp-sdk-transfer-tests",
        #"aws-cpp-sdk-s3-encryption-integration-tests",
        "aws-cpp-sdk-kinesis-integration-tests",
        "aws-cpp-sdk-logs-integration-tests",
        "aws-cpp-sdk-elasticfilesystem-integration-tests",
        #"aws-cpp-sdk-rds-integration-tests",
        "aws-cpp-sdk-ec2-integration-tests"]

    random.shuffle(test_list)

    for testName in test_list:
        test_exe = os.path.join(arguments["testDir"], testName if test_has_parent_dir else "", testName) + exe_extension
        # when build with BUILD_ONLY, not all test binaries will be generated.
        if not os.path.isfile(test_exe):
            print("Test: \"{}\" doesn't exist, skipped.".format(test_exe))
            continue
        prefix = "--aws_resource_prefix=" + ''.join(
            random.choice(string.ascii_lowercase + string.digits) for _ in range(8))
        print("testExe = " + test_exe)
        print("prefix = " + prefix)
        gtest_brief = "--gtest_brief=1"
        add_executable_bit(test_exe)
        subprocess.check_call([test_exe, prefix, gtest_brief])


# Run from powershell; make sure msbuild is in PATH environment variable
if __name__ == "__main__":
    main()
