#!/bin/bash
# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.

# This script is an example of how to build the SDK with minimize on (debugging information and address sanitizer enabled for Debug builds)
# Directories created and files are prefixed with PREFIX_DIR argument
# A clone of aws-sdk-cpp is expected to be in ${PREFIX_DIR}/aws-sdk-cpp
# Platform: Amazon Linux 2

set -e

if [ "$#" -lt 1 ] || [ "$#" -gt 2 ]; then
  echo "Usage: ${0} PREFIX_DIR [BUILD_TYPE]"
  echo "BUILD_TYPE defaults to Debug if not provided"
  exit 1
fi
PREFIX_DIR="$1"
BUILD_TYPE="${2:-Debug}"

mkdir "${PREFIX_DIR}/al2-build"
mkdir "${PREFIX_DIR}/al2-install"
cd "${PREFIX_DIR}/al2-build"
CMAKE_ARGS=(-GNinja ../aws-sdk-cpp -DCMAKE_BUILD_TYPE="$BUILD_TYPE" -DMINIMIZE_SIZE=ON -DCMAKE_INSTALL_PREFIX="${PREFIX_DIR}/al2-install" -DBUILD_PERFORMANCE_TESTS=ON -DAWS_ENABLE_CORE_INTEGRATION_TEST=ON -DENABLE_SMOKE_TESTS=ON)
if [ "$BUILD_TYPE" = "Debug" ]; then
  CMAKE_ARGS+=(-DCMAKE_CXX_FLAGS="-ggdb -fsanitize=address")
fi
cmake "${CMAKE_ARGS[@]}"
ninja-build -j $(grep -c ^processor /proc/cpuinfo)
ninja-build install
