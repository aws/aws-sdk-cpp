# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.

# This script is used to update License end year for those hand crafted files
# Auto-generated files will be automatically updated by code-generator when published to release candidate in our code pipeline
# Simply modify OldLicense and NewLicense before running this script

import fnmatch
import filecmp
import os
import sys
import datetime
import re

highLevelServices = ["aws-cpp-sdk-access-management",
                "aws-cpp-sdk-identity-management",
                "aws-cpp-sdk-queues",
                "aws-cpp-sdk-transfer",
                "aws-cpp-sdk-s3-encryption",
                "aws-cpp-sdk-text-to-speech",
                "aws-cpp-sdk-core",
                "aws-cpp-sdk-polly-sample"
                ]

def skipFile(fileName):
    if (fileName.endswith("gtest.h")):
        return True;
    
    y = re.search(r"\.git", fileName);
    if (y != None):
        return True;

    x = re.search(r"aws-cpp-sdk-[\w-]+", fileName); 
    if (x == None):
        return False;

    if (x.group(0) in highLevelServices):
        return False;

    if (x.group(0).endswith("tests")):
        return False;
    
    return True;

NewLicense = '''/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */'''

NewLicenseScript = '''# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.'''

def updateLicense(inputFile):

    if (skipFile(inputFile)):
        return False;

    print ("Process file: " + inputFile)
    with open(inputFile) as ftarget:
        content = ftarget.read()

    newContent1 = re.sub(r"\/\*.*?Copyright.*?Amazon.com.*?\*\/", NewLicense, content, flags=re.S);
    newContent = re.sub(r"#.*?Copyright.*?Amazon.com.*?under the License\.", NewLicenseScript, newContent1, flags=re.S); 

    if (content == newContent):
        return False;

    with open(inputFile, "w") as fdest:
        fdest.write(newContent)
    return True;

RootDir = os.path.dirname(os.path.dirname(os.path.realpath(__file__)));
for root, dirnames, filenames in os.walk(RootDir):
    for filename in fnmatch.filter(filenames, '*'):
        targetFile = os.path.join(root, filename);
        ret = updateLicense(targetFile)
