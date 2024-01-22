/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/TestingEnvironment.h>


int main(int argc, char** argv)
{
    Aws::Testing::SetDefaultSigPipeHandler();

    Aws::Testing::ParseArgs(argc, argv);

    ::testing::InitGoogleTest(&argc, argv);
    int exitCode = RUN_ALL_TESTS();

    return exitCode;
}
