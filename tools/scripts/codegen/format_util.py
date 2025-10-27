#!/usr/bin/env python3

# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.

"""
Utility for formatting generated C++ code using clang-format
"""
import os
import pathlib
import re
from subprocess import list2cmdline, run
from tempfile import NamedTemporaryFile

CLANG_FORMAT_VERSION = '18.1.6'
CLANG_FORMAT_INCLUDE_REGEX = re.compile(r'^.*\.(cpp|h)$')


def format_directories(directory_list):
    """Format C++ files in the given directories using clang-format"""
    filepaths_file = NamedTemporaryFile(delete=False)
    
    for root_dir in directory_list:
        if os.path.exists(root_dir):
            for dirpath, dirnames, filenames in os.walk(root_dir):
                for filename in filenames:
                    filepath = pathlib.Path(dirpath, filename).as_posix()
                    if CLANG_FORMAT_INCLUDE_REGEX.match(filename):
                        filepaths_file.write(f"{filepath}\n".encode())
    
    filepaths_file.close()

    cmd = ['pipx', 'run', f'clang-format=={CLANG_FORMAT_VERSION}',
           f'--files={filepaths_file.name}', '-i', '-style=file:.clang-format']
    
    print(f"Formatting generated files: {list2cmdline(cmd)}")
    run(cmd)
    
    # Clean up temp file
    os.unlink(filepaths_file.name)