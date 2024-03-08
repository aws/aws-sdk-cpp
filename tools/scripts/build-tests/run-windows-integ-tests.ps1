# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.
#
# This script runs integration tests previously build
# Directories created and files are prefixed with PREFIX_DIR argument
# SDK build to tests is expected to be in ${PREFIX_DIR}/win-build, the source project in ${PREFIX_DIR}/aws-sdk-cpp,
# A AWS_ACCOUNT with proper role setup is required to run the tests
# The following varibles are expected in the environment PREFIX_DIR AWS_ACCOUNT AWS_ROLE_SESSION_NAME
# Platform: Windows

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
cd "${env:PREFIX_DIR}\\win-build"
python3 ../aws-sdk-cpp/tools/scripts/run_integration_tests.py --testDir ./bin/Debug
