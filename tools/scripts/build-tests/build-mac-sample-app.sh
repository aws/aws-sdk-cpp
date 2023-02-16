#!/bin/bash
# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.

# This script builds a sample app
# Directories created and files are prefixed with PREFIX_DIR argument
# SDK installation is expected to be in ${PREFIX_DIR}/mac-install and a clone of aws-sdk-cpp is expected to be in ${PREFIX_DIR}/aws-sdk-cpp
# A AWS_ACCOUNT with proper role setup is required to run the built app, if passed argument, app is tried to run after build
# Platform: MacOS

set -e

if [ "$#" -eq 1 ]; then
  AUTORUN=0
elif [ "$#" -eq 3 ]; then
  AUTORUN=1
  AWS_ACCOUNT="$2"
  AWS_ROLE_SESSION_NAME="$3"
else
  echo "Usage: ${0} PREFIX_DIR AWS_ACCOUNT ROLE_SESSION_NAME"
  exit 1
fi
PREFIX_DIR="$1"

echo "Building the Sample App"

cd aws-sdk-cpp/tools/CI/install-test
mkdir "${PREFIX_DIR}/sample-build"
mkdir "${PREFIX_DIR}/sample-install"
cd "${PREFIX_DIR}/sample-build"
cmake ../aws-sdk-cpp/tools/CI/install-test -DCMAKE_CXX_FLAGS="-ggdb -fsanitize=address" -DCMAKE_PREFIX_PATH="${PREFIX_DIR}/mac-install" -DCMAKE_INSTALL_PREFIX="${PREFIX_DIR}/sample_install"
cmake --build .
cmake --install .

if [ "${AUTORUN}" -eq 0 ]; then
  # Only continue if there is a scheduled autorun
  exit 0
fi

echo "Setting the run environment"
export TEST_ASSUME_ROLE_ARN=arn:aws:iam::${AWS_ACCOUNT}:role/IntegrationTest
export TEST_LAMBDA_CODE_PATH=${PREFIX_DIR}/aws-sdk-cpp/tests/aws-cpp-sdk-lambda-integration-tests/resources
export sts=$(aws sts assume-role --role-arn "$TEST_ASSUME_ROLE_ARN" --role-session-name "${AWS_ROLE_SESSION_NAME}" --query 'Credentials.[AccessKeyId,SecretAccessKey,SessionToken]')
export profile=sdk-integ-test
aws configure set aws_access_key_id $(echo "$sts" | jq -r '.[0]') --profile "$profile"
aws configure set aws_secret_access_key $(echo "$sts" | jq -r '.[1]') --profile "$profile"
aws configure set aws_session_token $(echo "$sts" | jq -r '.[2]') --profile "$profile"
aws configure list --profile "$profile"
export AWS_PROFILE=$profile
export DYLD_LIBRARY_PATH=$CATAPULT_WORKSPACE_DIR/mac-install/lib
echo "Running the app"
cd "${PREFIX_DIR}/sample_install/bin"
./app
