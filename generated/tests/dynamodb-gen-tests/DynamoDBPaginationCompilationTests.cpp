/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for DynamoDB pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/dynamodb/DynamoDBClientPagination.h>
#include <aws/dynamodb/DynamoDBPaginationBase.h>
#include <aws/dynamodb/model/ScanPaginationTraits.h>
#include <aws/dynamodb/model/ListContributorInsightsPaginationTraits.h>
#include <aws/dynamodb/model/ListImportsPaginationTraits.h>
#include <aws/dynamodb/model/ListExportsPaginationTraits.h>
#include <aws/dynamodb/model/QueryPaginationTraits.h>
#include <aws/dynamodb/model/ListTablesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class DynamoDBPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(DynamoDBPaginationCompilationTest, DynamoDBPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
