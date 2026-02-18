/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for DataSync pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/datasync/DataSyncClientPagination.h>
#include <aws/datasync/DataSyncPaginationBase.h>
#include <aws/datasync/model/ListLocationsPaginationTraits.h>
#include <aws/datasync/model/ListTasksPaginationTraits.h>
#include <aws/datasync/model/ListTagsForResourcePaginationTraits.h>
#include <aws/datasync/model/ListTaskExecutionsPaginationTraits.h>
#include <aws/datasync/model/ListAgentsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class DataSyncPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(DataSyncPaginationCompilationTest, DataSyncPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
