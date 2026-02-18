/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for repostspace pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/repostspace/RepostspaceClientPagination.h>
#include <aws/repostspace/RepostspacePaginationBase.h>
#include <aws/repostspace/model/ListChannelsPaginationTraits.h>
#include <aws/repostspace/model/ListSpacesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class repostspacePaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(repostspacePaginationCompilationTest, repostspacePaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
