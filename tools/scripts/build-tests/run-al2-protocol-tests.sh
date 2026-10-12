#!/bin/bash
# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.

# This script runs the protocol tests previously built by build-al2-debug-default.sh against the local mock server
# Directories created and files are prefixed with PREFIX_DIR argument
# SDK build to test is expected to be in ${PREFIX_DIR}/al2-build, the source project in ${PREFIX_DIR}/aws-sdk-cpp,
# and an installed build in ${PREFIX_DIR}/al2-install
# Platform: Amazon Linux 2

set -e

if [ "$#" -ne 1 ]; then
  echo "Usage: ${0} PREFIX_DIR"
  exit 1
fi
PREFIX_DIR="$1"

# The build cleanup removes the core libraries from the build tree; load them from the install directory.
export LD_LIBRARY_PATH="$LD_LIBRARY_PATH:${PREFIX_DIR}/al2-install/lib64/"
# Mock server dependency.
python3 -c 'import flask' 2>/dev/null || python3 -m pip install --user flask
python3 "${PREFIX_DIR}/aws-sdk-cpp/tools/scripts/run_protocol_tests.py" --build_dir "${PREFIX_DIR}/al2-build"
