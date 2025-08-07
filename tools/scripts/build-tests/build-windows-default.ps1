# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.
#
# This script is an example of how the simplest build of the SDK using all default parameters
# Directories created and files are prefixed with PREFIX_DIR argument
# A clone of aws-sdk-cpp is expected to be in ${PREFIX_DIR}/aws-sdk-cpp
# Platform: Windows
param($PREFIX_DIR)

mkdir "${PREFIX_DIR}/win-build"
mkdir "${PREFIX_DIR}/win-install"
cd "${PREFIX_DIR}/win-build"
&'C:\\Program Files\\CMake\\bin\\cmake.exe' ../aws-sdk-cpp -DCMAKE_INSTALL_PREFIX="${PREFIX_DIR}/win-install"
&'C:\\Program Files\\CMake\\bin\\cmake.exe' --build . -j 8
&'C:\\Program Files\\CMake\\bin\\cmake.exe' --build . --target install
&cmd.exe /c "del /s /q *.pdb"
&cmd.exe /c "del /s /q *.ilk"
&cmd.exe /c "del /s /q *.obj"