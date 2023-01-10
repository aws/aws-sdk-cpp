#!/bin/bash
# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.

# This script is an example of how to build the SDK on Debug build-type with minimize on and address sanitizers
# Directories created and files are prefixed with PREFIX_DIR argument
# SDK installation is expected to be in ${PREFIX_DIR}/al2-install and a clone of aws-sdk-cpp is expected to be in ${PREFIX_DIR}/aws-sdk-cpp
# OUTPUT_DIR is relative to the PREFIX_DIR
# Platform: Amazon Linux 2

set -e

if [ "$#" -ne 2 ]; then
  echo "Usage: ${0} PREFIX_DIR OUTPUT_DIR"
  exit 1
fi
PREFIX_DIR="$1"
OUTPUT_DIR="${PREFIX_DIR}/$2"

mkdir "${PREFIX_DIR}/al2-build"
mkdir "${PREFIX_DIR}/al2-install"
cd "${PREFIX_DIR}/aws-sdk-cpp"
python ./scripts/endpoints_checker.py
cd "${PREFIX_DIR}/al2-build"
cmake -GNinja ../aws-sdk-cpp -DCMAKE_BUILD_TYPE=Debug -DCMAKE_CXX_FLAGS="-ggdb -fsanitize=address" -DMINIMIZE_SIZE=ON -DCMAKE_INSTALL_PREFIX="${PREFIX_DIR}/al2-install"
ninja-build -j $(grep -c ^processor /proc/cpuinfo)
ninja-build install

export VERSION_NUM=$(grep AWS_SDK_VERSION_STRING "${PREFIX_DIR}/aws-sdk-cpp/aws-cpp-sdk-core/include/aws/core/VersionConfig.h" | cut -d '\"' -f2)
echo "Setting config to build docs for version: ${VERSION_NUM}"
sed -i "s/PROJECT_NUMBER .*/PROJECT_NUMBER         = $VERSION_NUM/" "${PREFIX_DIR}/aws-sdk-cpp/doxygen/modules/static/root.config"
sed -i "s/PROJECT_NUMBER .*/PROJECT_NUMBER         = $VERSION_NUM/" "${PREFIX_DIR}/aws-sdk-cpp/doxygen/modules/template/module-template.config"
echo "Running doc generation"
cd "${PREFIX_DIR}/aws-sdk-cpp"
python3 "${PREFIX_DIR}/aws-sdk-cpp/doxygen/modules/scripts/run-doc-generation.py"
echo "Staging static files"
cp "${PREFIX_DIR}/aws-sdk-cpp/LICENSE" "${PREFIX_DIR}/aws-sdk-cpp/doxygen/output/root/html"
mkdir -p "${OUTPUT_DIR}/${VERSION_NUM}"
mkdir -p "${OUTPUT_DIR}/LATEST"
rsync -av "${PREFIX_DIR}"/aws-sdk-cpp/doxygen/output/* "${OUTPUT_DIR}/${VERSION_NUM}"
rsync -av "${PREFIX_DIR}"/aws-sdk-cpp/doxygen/output/* "${OUTPUT_DIR}/LATEST"
echo "Creating Cross Links"
python3 doc_crosslinks_new/generate_cross_link_data.py --apiDefinitionsPath ./code-generation/api-descriptions/ --templatePath ./doc_crosslinks/crosslink_redirect.html --outputPath ./crosslink_redirect.html
cp "${PREFIX_DIR}/aws-sdk-cpp/doxygen/modules/static/index.html" -p "${OUTPUT_DIR}/"
cp "${PREFIX_DIR}/aws-sdk-cpp/doxygen/modules/static/local-index.html" "${OUTPUT_DIR}/LATEST/index.html"
cp "${PREFIX_DIR}/aws-sdk-cpp/doxygen/modules/static/local-index.html" "${OUTPUT_DIR}/${VERSION_NUM}/index.html"
cp "${PREFIX_DIR}/aws-sdk-cpp/crosslink_redirect.html" "${OUTPUT_DIR}/"
