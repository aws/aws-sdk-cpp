/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for TimestreamQuery pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/timestream-query/TimestreamQueryClientPagination.h>
#include <aws/timestream-query/TimestreamQueryPaginationBase.h>
#include <aws/timestream-query/model/QueryPaginationTraits.h>
#include <aws/timestream-query/model/ListScheduledQueriesPaginationTraits.h>
#include <aws/timestream-query/model/ListTagsForResourcePaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class TimestreamQueryPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(TimestreamQueryPaginationCompilationTest, TimestreamQueryPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
