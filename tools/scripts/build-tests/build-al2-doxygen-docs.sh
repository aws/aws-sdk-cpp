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
SRC_DIR="${PREFIX_DIR}/aws-sdk-cpp"

export VERSION_NUM=$(grep AWS_SDK_VERSION_STRING "${SRC_DIR}/src/aws-cpp-sdk-core/include/aws/core/VersionConfig.h" | cut -d '"' -f2)
echo "Setting config to build docs for version: ${VERSION_NUM}"
sed -i "s/PROJECT_NUMBER .*/PROJECT_NUMBER         = ${VERSION_NUM}/" "${SRC_DIR}/tools/doxygen/modules/static/root.config"
sed -i "s/PROJECT_NUMBER .*/PROJECT_NUMBER         = ${VERSION_NUM}/" "${SRC_DIR}/tools/doxygen/modules/template/module-template.config"

echo "Running doc generation"
cd "${SRC_DIR}"
python3 "${SRC_DIR}/tools/doxygen/modules/scripts/run-doc-generation.py"
echo "Staging static files"
mkdir -p "${OUTPUT_DIR}/root/html"
cp "${SRC_DIR}/LICENSE" "${OUTPUT_DIR}/root/html"
mkdir -p "${OUTPUT_DIR}/${VERSION_NUM}"
mkdir -p "${OUTPUT_DIR}/LATEST"
rsync -av "${SRC_DIR}"/doxygen/output/* "${OUTPUT_DIR}/${VERSION_NUM}"
rsync -av "${SRC_DIR}"/doxygen/output/* "${OUTPUT_DIR}/LATEST"
echo "Creating Cross Links"
python3 doc_crosslinks_new/generate_cross_link_data.py --apiDefinitionsPath ./tools/code-generation/api-descriptions/ --templatePath ./doc_crosslinks_new/crosslink_redirect.html --outputPath ./crosslink_redirect.html
cp "${SRC_DIR}/doxygen/modules/static/index.html" -p "${OUTPUT_DIR}/"
cp "${SRC_DIR}/doxygen/modules/static/local-index.html" "${OUTPUT_DIR}/LATEST/index.html"
cp "${SRC_DIR}/doxygen/modules/static/local-index.html" "${OUTPUT_DIR}/${VERSION_NUM}/index.html"
cp "${SRC_DIR}/crosslink_redirect.html" "${OUTPUT_DIR}/"
