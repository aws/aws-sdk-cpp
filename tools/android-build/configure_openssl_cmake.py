# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.
#

import argparse
import os
import shutil
import platform

# openssl doesn't have any cmake files; this script copies in cmake files to appropriate directories
# The CMakeFiles.txt and *.cmake files are variants of what can be found at https://github.com/janbar/openssl-cmake
def CopyCMakeFiles(baseDir, destDir):
    sourceDir = os.path.join(baseDir, "android-build", "cmakefiles", "openssl-cmake")
    dirLength = len(sourceDir)

    for rootDir, dirNames, fileNames in os.walk(sourceDir):
        for fileName in fileNames:
            sourceFile = os.path.join(rootDir, fileName)
            if rootDir == sourceDir:
                finalDestDir = destDir
            else:
                finalDestDir = os.path.join(destDir, rootDir[(dirLength + 1):])

            shutil.copy(sourceFile, finalDestDir)

    return True

def Main():
    parser = argparse.ArgumentParser(description="AWSNativeSDK Android Openssl Update")
    parser.add_argument("--source", action="store")
    parser.add_argument("--dest", action="store")

    args = vars( parser.parse_args() )

    sourceDir = args[ "source" ]
    destDir = args[ "dest" ]

    print ("Copying CMakeLists.txt files")
    if not CopyCMakeFiles(sourceDir, destDir):
        print( "Failed to copy required CMake files" )
        return 1

    return 0


Main()
