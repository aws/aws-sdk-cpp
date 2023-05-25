#!/bin/bash
# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.

# This script is an example of how to build the SDK on Debug build-type with unity build disabled
# Directories created and files are prefixed with PREFIX_DIR argument
# A clone of aws-sdk-cpp is expected to be in ${PREFIX_DIR}/aws-sdk-cpp
# Platform: Amazon Linux 2

set -e

if [ "$#" -ne 1 ]; then
  echo "Usage: ${0} PREFIX_DIR"
  exit 1
fi
PREFIX_DIR="$1"

mkdir "${PREFIX_DIR}/al2-build"
mkdir "${PREFIX_DIR}/al2-install"
cd "${PREFIX_DIR}/al2-build"
cmake -GNinja ../aws-sdk-cpp -DCMAKE_BUILD_TYPE=Debug -DENABLE_UNITY_BUILD=OFF -DCMAKE_INSTALL_PREFIX="${PREFIX_DIR}/al2-install"
ninja-build -j $(grep -c ^processor /proc/cpuinfo)
ninja-build install
