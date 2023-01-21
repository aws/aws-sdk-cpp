#!/bin/bash
# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.

# This script is an example of how the simplest build of the SDK using all default parameters
# Directories created and files are prefixed with PREFIX_DIR argument
# A clone of aws-sdk-cpp is expected to be in ${PREFIX_DIR}/aws-sdk-cpp
# Platform: MacOS

set -e

if [ "$#" -ne 1 ]; then
  echo "Usage: ${0} PREFIX_DIR"
  exit 1
fi
PREFIX_DIR="$1"

mkdir "${PREFIX_DIR}/mac-build"
mkdir "${PREFIX_DIR}/mac-install"
cd "${PREFIX_DIR}/mac-build"
cmake ../aws-sdk-cpp -DCMAKE_INSTALL_PREFIX="${PREFIX_DIR}/mac-install"
cmake --build . --parallel $(sysctl -n hw.ncpu)
cmake --install .
