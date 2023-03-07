#!/bin/bash
# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.

# This script builds a sample app
# Directories created and files are prefixed with PREFIX_DIR argument
# SDK installation is expected to be in ${PREFIX_DIR}/mac-install and a clone of aws-sdk-cpp is expected to be in ${PREFIX_DIR}/aws-sdk-cpp
# A AWS_ACCOUNT with proper role setup is required to run the built app, if passed argument, app is tried to run after build
# Platform: Windows

param($PREFIX_DIR)

cd "${PREFIX_DIR}/aws-sdk-cpp/tools/CI/install-test"
mkdir "${PREFIX_DIR}/sample-build"
mkdir "${PREFIX_DIR}/sample-install"
cd "${PREFIX_DIR}/sample-build"
&'C:\\Program Files\\CMake\\bin\\cmake.exe' ../aws-sdk-cpp/tools/CI/install-test -DCMAKE_CXX_FLAGS="-ggdb -fsanitize=address" -DCMAKE_PREFIX_PATH="${PREFIX_DIR}/win-install" -DCMAKE_INSTALL_PREFIX="${PREFIX_DIR}/sample_install"
&'C:\\Program Files\\CMake\\bin\\cmake.exe' --build .
&'C:\\Program Files\\CMake\\bin\\cmake.exe' --build . --target install

echo "Setting the run environment"
$TEST_ASSUME_ROLE_ARN = "arn:aws:iam::${env:AWS_ACCOUNT}:role/IntegrationTest"
${env:TEST_LAMBDA_CODE_PATH} = "${env:PREFIX_DIR}/aws-sdk-cpp/tests/aws-cpp-sdk-lambda-integration-tests/resources"
$sts = aws sts assume-role --role-arn "${TEST_ASSUME_ROLE_ARN}" --role-session-name "${env:AWS_ROLE_SESSION_NAME}" --query "Credentials.[AccessKeyId, SecretAccessKey, SessionToken]"
$sts
aws configure set aws_access_key_id (${sts}[1] -replace " " -replace "`"" -replace ",")
aws configure set aws_secret_access_key (${sts}[2] -replace " " -replace "`"" -replace ",")
aws configure set aws_session_token (${sts}[3] -replace " " -replace "`"" -replace ",")
aws configure list
# Run tests
cd "${PREFIX_DIR}/sample_install/bin"
app
