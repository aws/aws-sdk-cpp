#!/bin/bash
# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.

# This script runs integration tests previously build
# Directories created and files are prefixed with PREFIX_DIR argument
# SDK build to tests is expected to be in ${PREFIX_DIR}/al2-build, the source project in ${PREFIX_DIR}/aws-sdk-cpp,
# and an installed build to test in ${PREFIX_DIR}/al2-install
# A AWS_ACCOUNT with proper role setup is required to run the tests
# Platform: Amazon Linux 2

set -e

if [ "$#" -ne 3 ]; then
  echo "Usage: ${0} PREFIX_DIR AWS_ACCOUNT ROLE_SESSION_NAME"
  exit 1
fi
PREFIX_DIR="$1"
AWS_ACCOUNT="$2"
AWS_ROLE_SESSION_NAME="$3"

echo "Setting the run environment"
export TEST_ASSUME_ROLE_ARN=arn:aws:iam::${AWS_ACCOUNT}:role/IntegrationTest
export TEST_LAMBDA_CODE_PATH=${PREFIX_DIR}/aws-sdk-cpp/tools/aws-cpp-sdk-lambda-integration-tests/resources
export sts=$(aws sts assume-role --role-arn "$TEST_ASSUME_ROLE_ARN" --role-session-name "${AWS_ROLE_SESSION_NAME}" --query 'Credentials.[AccessKeyId,SecretAccessKey,SessionToken]')
export profile=sdk-integ-test
aws configure set aws_access_key_id $(echo "$sts" | jq -r '.[0]') --profile "$profile"
aws configure set aws_secret_access_key $(echo "$sts" | jq -r '.[1]') --profile "$profile"
aws configure set aws_session_token $(echo "$sts" | jq -r '.[2]') --profile "$profile"
aws configure list --profile "$profile"
export AWS_PROFILE=$profile
export LD_LIBRARY_PATH="$LD_LIBRARY_PATH:${PREFIX_DIR}/al2-install/lib64/"
cd "${PREFIX_DIR}/al2-build"
if [ -f "${PREFIX_DIR}/aws-sdk-cpp/tools/scripts/suppressions.txt" ]; then export LSAN_OPTIONS=suppressions="${PREFIX_DIR}/aws-sdk-cpp/tools/scripts/suppressions.txt"; fi
python3 ../aws-sdk-cpp/tools/scripts/run_integration_tests.py --testDir ./tests
