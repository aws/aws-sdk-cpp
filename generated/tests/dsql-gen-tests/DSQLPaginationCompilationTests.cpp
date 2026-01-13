/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for DSQL pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/dsql/DSQLClientPagination.h>
#include <aws/dsql/DSQLPaginationBase.h>
#include <aws/dsql/model/ListClustersPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class DSQLPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(DSQLPaginationCompilationTest, DSQLPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
