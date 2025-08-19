#!/bin/bash
# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.

# This script runs smoke tests previously built
# Directories created and files are prefixed with PREFIX_DIR argument
# SDK build to tests is expected to be in ${PREFIX_DIR}/al2-build, the source project in ${PREFIX_DIR}/aws-sdk-cpp,
# and an installed build to test in ${PREFIX_DIR}/al2-install
# Platform: Amazon Linux 2

set -e

if [ -z "$CODEBUILD_SRC_DIR" ]; then
  echo "Error: CODEBUILD_SRC_DIR environment variable is not set"
  exit 1
fi

if [ -z "$CATAPULT_TEST_ACCOUNT" ]; then
  echo "Error: CATAPULT_TEST_ACCOUNT environment variable is not set"
  exit 1
fi

echo "Setting up AWS authentication"
export TEST_ASSUME_ROLE_ARN=arn:aws:iam::${CATAPULT_TEST_ACCOUNT}:role/SmokeTest
echo "Attempting to assume role: $TEST_ASSUME_ROLE_ARN"
if export sts=$(aws sts assume-role --role-arn "$TEST_ASSUME_ROLE_ARN" --role-session-name "catapult-smoke-test" --query 'Credentials.[AccessKeyId,SecretAccessKey,SessionToken]' 2>/dev/null) && [ -n "$sts" ] && [ "$sts" != "null" ]; then
    echo "Successfully assumed SmokeTest role"
    export profile=sdk-smoke-test
    aws configure set aws_access_key_id $(echo "$sts" | jq -r '.[0]') --profile "$profile"
    aws configure set aws_secret_access_key $(echo "$sts" | jq -r '.[1]') --profile "$profile"
    aws configure set aws_session_token $(echo "$sts" | jq -r '.[2]') --profile "$profile"
    aws configure list --profile "$profile"
    export AWS_PROFILE=$profile
else
    echo "Failed to assume SmokeTest role, using current credentials"
    aws sts get-caller-identity
fi

echo "Setting the run environment"
echo "Contents of CODEBUILD_SRC_DIR: ${CODEBUILD_SRC_DIR}"
ls -la "${CODEBUILD_SRC_DIR}/al2-build"
ls -la "${CODEBUILD_SRC_DIR}/al2-build/lib"
ls -la "${CODEBUILD_SRC_DIR}/al2-build/lib/libs2n.so"
ls -la "${CODEBUILD_SRC_DIR}/al2-build/lib/libs2n.so.1"
ls -la "${CODEBUILD_SRC_DIR}/al2-build/lib/libs2n.so.1.0.0"
export LD_LIBRARY_PATH="${CODEBUILD_SRC_DIR}/al2-install/lib:${CODEBUILD_SRC_DIR}/al2-build/lib:${CODEBUILD_SRC_DIR}/al2-build/tests/testing-resources:${CODEBUILD_SRC_DIR}/al2-build/generated/src/aws-cpp-sdk-core"
cd "${CODEBUILD_SRC_DIR}/al2-build"
if [ -f "${CODEBUILD_SRC_DIR}/aws-sdk-cpp/tools/scripts/suppressions.txt" ]; then export LSAN_OPTIONS=suppressions="${CODEBUILD_SRC_DIR}/aws-sdk-cpp/tools/scripts/suppressions.txt"; fi
python3 ../aws-sdk-cpp/tools/scripts/run_smoke_tests_simple.py --testDir "${CODEBUILD_SRC_DIR}/al2-build"