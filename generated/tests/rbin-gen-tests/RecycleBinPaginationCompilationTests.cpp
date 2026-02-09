/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for RecycleBin pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/rbin/RecycleBinClientPagination.h>
#include <aws/rbin/RecycleBinPaginationBase.h>
#include <aws/rbin/model/ListRulesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class RecycleBinPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(RecycleBinPaginationCompilationTest, RecycleBinPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
