# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.
#

import os
import re

"""
endpoints = [
        "us-east-1", "us-east-2",
        "us-west-1", "us-west-2",
        "eu-west-1", "eu-west-2", "eu-west-3", 
        "eu-central-1", 
        "eu-north-1",
        "ap-southeast-1", "ap-southeast-2", 
        "ap-northeast-1", "ap-northeast-2", "ap-northeast-3", 
        "ap-south-1", 
        "ap-east-1",
        "sa-east-1",
        "cn-north-1", 
        "cn-northwest-1",
        "ca-central-1",
        "us-gov-west-1","us-gov-east-1",
        "us-iso-west-1",
        "me-south-1",
        "af-south-1"
        ];
"""


def remove_cpp_comments(text):
    def replacer(match):
        s = match.group(0)
        if s.startswith('/'):
            return " "  # int/**/x=5 -> int x=5, instead of intx=5.
        else:
            return s

    pattern = re.compile(r'//.*?$|/\*.*?\*/|"(?:\\.|[^\\"])*"', re.DOTALL | re.MULTILINE)
    return re.sub(pattern, replacer, text)


def skip_file(filename):
    skip_file_pattern = re.compile(r'.*source/model/BucketLocationConstraint.cpp'
                                   '|.*source/S3Client.cpp'
                                   '|.*source/model/.*Region.*.cpp'
                                   '|.*source/[^/]+Endpoint.cpp'
                                   '|.*aws-cpp-sdk-core/include/aws/core/Region.h'
                                   '|.*tests/.*Test.cpp'
                                   # add more white lists here
                                   )
    if skip_file_pattern.match(filename):
        return True
    return False


def scan_content(content):
    endpoints_pattern = re.compile(
        r'us-east-1|us-east-2|'
        r'us-west-1|us-west-2|'
        r'eu-west-1|eu-west-2|eu-west-3|'
        r'eu-central-1|'
        r'eu-north-1|'
        r'ap-southeast-1|ap-southeast-2|'
        r'ap-northeast-1|ap-northeast-2|ap-northeast-3|'
        r'ap-south-1|'
        r'ap-east-1|'
        r'sa-east-1|'
        r'cn-north-1|'
        r'cn-northwest-1|'
        r'ca-central-1|'
        r'us-gov-west-1|us-gov-east-1|'
        r'us-iso-west-1|'
        r'me-south-1|'
        r'af-south-1')
    return re.search(endpoints_pattern, content)


def check_file(input_file):
    if skip_file(input_file):
        return False

    with open(input_file) as input_file_handler:
        content = input_file_handler.read()

    stripped_content = remove_cpp_comments(content)
    match = scan_content(stripped_content)
    if match:
        print(input_file)
        print("..." + stripped_content[match.start(): match.end()] + "...")
        return True

    return False


def main():
    # Test Start
    assert remove_cpp_comments("") == ""
    assert remove_cpp_comments("/") == "/"
    assert remove_cpp_comments("//") == " "
    assert remove_cpp_comments("abc//test") == "abc "
    assert remove_cpp_comments("//test") == " "
    assert remove_cpp_comments("abc") == "abc"
    assert remove_cpp_comments("/abc") == "/abc"
    assert remove_cpp_comments("/abc/") == "/abc/"
    assert remove_cpp_comments("/**/") == " "
    assert remove_cpp_comments("/*") == "/*"
    assert remove_cpp_comments("*/") == "*/"
    assert remove_cpp_comments("/*/") == "/*/"
    assert remove_cpp_comments("\"") == "\""
    assert remove_cpp_comments(r'"Hello \"/*test*/World\""') == r'"Hello \"/*test*/World\""'
    assert remove_cpp_comments("/*abc*/") == " "
    assert remove_cpp_comments(r'abc="//"//comments') == r'abc="//" '
    assert remove_cpp_comments(r'abc="/*inner comments*/"/*\
            multiline\
            comments*/') == r'abc="/*inner comments*/" '

    assert skip_file("source/model/Regionabc.cpp") is True
    assert skip_file("source/model/abcRegion.cpp") is True
    assert skip_file("source/abcEndpoint.cpp") is True
    assert skip_file("aws-cpp-sdk-core/include/aws/core/Region.h") is True
    assert skip_file("aws-cpp-sdk-s3/source/model/BucketLocationConstraint.cpp") is True
    assert skip_file("aws-cpp-sdk-s3/source/S3Client.cpp") is True
    assert skip_file("source/model/abc.cpp") is False
    assert skip_file("source/model/absEndpoint.cpp") is False
    assert skip_file("source/model/Endpointabs.cpp") is False
    assert skip_file("Endpoint.cpp") is False

    assert scan_content("us-west-1") is not None
    assert scan_content("avbcap-southeast-1") is not None
    assert scan_content("eu-central-1") is not None
    assert scan_content("\"cn-north-1 is in BJS\"") is not None
    assert scan_content("\"cn-north-2 doesn't exist\"") is None
    # Test End

    print("Start checking hard coded endpoints in source files...")
    exit_code = 0
    root_dir = os.path.dirname(os.path.dirname(os.path.realpath(__file__)))
    for root, dirnames, file_names in os.walk(root_dir):
        for fileName in file_names:
            if not root.endswith('-tests') and fileName.endswith(('.h', '.cpp')):
                target_file = os.path.join(root, fileName)
                exit_code |= check_file(target_file)
    print("Finished checking hard coded endpoints in source files with exit code", exit_code, ".")
    exit(exit_code)


if __name__ == "__main__":
    main()
