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

export LD_LIBRARY_PATH="$LD_LIBRARY_PATH:${CODEBUILD_SRC_DIR}/al2-install/lib64/"
cd "${CODEBUILD_SRC_DIR}/al2-build"
python3 "../aws-sdk-cpp/tools/scripts/run_smoke_tests.py" --testDir "${CODEBUILD_SRC_DIR}/al2-build" | tee -a results.txt