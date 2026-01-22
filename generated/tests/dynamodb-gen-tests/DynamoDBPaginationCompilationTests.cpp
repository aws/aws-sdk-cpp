/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for DynamoDB pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/dynamodb/DynamoDBClientPagination.h>
#include <aws/dynamodb/model/pagination/ScanPaginationTraits.h>
#include <aws/dynamodb/model/pagination/ListContributorInsightsPaginationTraits.h>
#include <aws/dynamodb/model/pagination/ListExportsPaginationTraits.h>
#include <aws/dynamodb/model/pagination/QueryPaginationTraits.h>
#include <aws/dynamodb/model/pagination/ListTablesPaginationTraits.h>
#include <aws/dynamodb/model/pagination/ListImportsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class DynamoDBPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(DynamoDBPaginationCompilationTest, DynamoDBPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
