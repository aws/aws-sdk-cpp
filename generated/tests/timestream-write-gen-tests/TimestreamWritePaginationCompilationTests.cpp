/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for TimestreamWrite pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/timestream-write/TimestreamWriteClientPagination.h>
#include <aws/timestream-write/TimestreamWritePaginationBase.h>
#include <aws/timestream-write/model/ListBatchLoadTasksPaginationTraits.h>
#include <aws/timestream-write/model/ListDatabasesPaginationTraits.h>
#include <aws/timestream-write/model/ListTablesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class TimestreamWritePaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(TimestreamWritePaginationCompilationTest, TimestreamWritePaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
