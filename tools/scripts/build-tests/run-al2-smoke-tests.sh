#!/bin/bash
# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.

# This script runs smoke tests previously built
# Directories created and files are prefixed with PREFIX_DIR argument
# SDK build to tests is expected to be in ${PREFIX_DIR}/al2-build, the source project in ${PREFIX_DIR}/aws-sdk-cpp,
# and an installed build to test in ${PREFIX_DIR}/al2-install
# Platform: Amazon Linux 2

set -e

if [ "$#" -ne 3 ]; then
  echo "Usage: ${0} CODEBUILD_SRC_DIR"
  exit 1
fi
CODEBUILD_SRC_DIR="$1"

echo "Setting the run environment"
export LD_LIBRARY_PATH="${CODEBUILD_SRC_DIR}/al2-install/lib:${CODEBUILD_SRC_DIR}/al2-build/tests/testing-resources/"
cd "${CODEBUILD_SRC_DIR}/al2-build"
if [ -f "${CODEBUILD_SRC_DIR}/aws-sdk-cpp/tools/scripts/suppressions.txt" ]; then export LSAN_OPTIONS=suppressions="${CODEBUILD_SRC_DIR}/aws-sdk-cpp/tools/scripts/suppressions.txt"; fi
python3 ../aws-sdk-cpp/tools/scripts/run_smoke_tests_simple.py --testDir ./tests