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
echo "AWS_SDK_VERSION: ${VERSION_NUM}"

echo "Running doc generation"
cd "${SRC_DIR}"
# curl https://raw.githubusercontent.com/jothepro/doxygen-awesome-css/main/doxygen-awesome.css -o "${SRC_DIR}/docs/doxygen/static/doxygen-awesome.css"
python3 "${SRC_DIR}/docs/doxygen/run_docs_generation.py" --sdk_root "${SRC_DIR}" --sdk_version "${VERSION_NUM}" --output_dir "${OUTPUT_DIR}/${VERSION_NUM}"

echo "Creating Cross Links"
python3 "${SRC_DIR}/docs/doxygen/generate_cross_link_data.py" \
  --apiDefinitionsPath "${SRC_DIR}/tools/code-generation/api-descriptions/" \
  --templatePath "${SRC_DIR}/docs/doxygen/static/crosslink_redirect.html" \
  --outputPath "${OUTPUT_DIR}/crosslink_redirect.html"

echo "Staging static files"
mkdir -p "${OUTPUT_DIR}/root/html"
cp "${SRC_DIR}/LICENSE" "${OUTPUT_DIR}/root/html"
mkdir -p "${OUTPUT_DIR}/LATEST"
rsync -av "${OUTPUT_DIR}"/"${VERSION_NUM}"/* "${OUTPUT_DIR}/LATEST"

cp "${SRC_DIR}/docs/doxygen/static/index.html" -p "${OUTPUT_DIR}/"
cp "${SRC_DIR}/docs/doxygen/static/index.html" "${OUTPUT_DIR}/LATEST/index.html"
cp "${SRC_DIR}/docs/doxygen/static/index.html" "${OUTPUT_DIR}/${VERSION_NUM}/index.html"
