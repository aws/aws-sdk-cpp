#!/bin/bash
# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.

# This script runs the pre-built DynamoDB performance test executable
# Expects SDK build directory at ${PREFIX_DIR}/al2-build, source project at ${PREFIX_DIR}/aws-sdk-cpp,
# and SDK installation directory at ${PREFIX_DIR}/al2-install
# Platform: Amazon Linux 2

set -e

DEFAULT_REGION="us-east-1"
DEFAULT_ITERATIONS=10
DEFAULT_BUILD_MODE="unknown"

if [ "$#" -lt 1 ]; then
  echo "Error: Missing required argument. Usage: ${0} PREFIX_DIR [-r|--region REGION] [-i|--iterations NUM] [-b|--build-mode BUILD_MODE]"
  exit 1
fi

PREFIX_DIR="$1"
shift

REGION="$DEFAULT_REGION"
ITERATIONS="$DEFAULT_ITERATIONS"
BUILD_MODE="$DEFAULT_BUILD_MODE"

while [[ "$#" -gt 0 ]]; do
  case "$1" in
    -r|--region) REGION="$2"; shift 2 ;;
    -i|--iterations) ITERATIONS="$2"; shift 2 ;;
    -b|--build-mode) BUILD_MODE="$2"; shift 2 ;;
    *) echo "Unknown parameter: $1"; exit 1 ;;
  esac
done

SDK_REPO_PATH="${PREFIX_DIR}/aws-sdk-cpp"
if [ -d "$SDK_REPO_PATH" ]; then
  COMMIT_ID=$(cd "$SDK_REPO_PATH" && git rev-parse HEAD)
else
  echo "Error: Git repository not found at $SDK_REPO_PATH"
  exit 1
fi

export LD_LIBRARY_PATH="$LD_LIBRARY_PATH:${PREFIX_DIR}/al2-install/lib64/"

cd "${PREFIX_DIR}/al2-build"
if [ "$BUILD_MODE" != "release" ] && [ -f "${PREFIX_DIR}/aws-sdk-cpp/tools/scripts/suppressions.txt" ]; then
  export LSAN_OPTIONS=suppressions="${PREFIX_DIR}/aws-sdk-cpp/tools/scripts/suppressions.txt"
fi
./tests/performance-tests/dynamodb-performance-test --region "$REGION" --iterations "$ITERATIONS" --commit-id "$COMMIT_ID" --build-mode "$BUILD_MODE"
cat dynamodb-performance-test-results.json