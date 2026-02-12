/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for Pipes pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/pipes/PipesClientPagination.h>
#include <aws/pipes/PipesPaginationBase.h>
#include <aws/pipes/model/ListPipesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class PipesPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(PipesPaginationCompilationTest, PipesPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
