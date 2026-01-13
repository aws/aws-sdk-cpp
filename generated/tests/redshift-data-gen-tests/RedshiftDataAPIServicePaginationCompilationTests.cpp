/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for RedshiftDataAPIService pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/redshift-data/RedshiftDataAPIServiceClientPagination.h>
#include <aws/redshift-data/RedshiftDataAPIServicePaginationBase.h>
#include <aws/redshift-data/model/ListStatementsPaginationTraits.h>
#include <aws/redshift-data/model/GetStatementResultV2PaginationTraits.h>
#include <aws/redshift-data/model/ListDatabasesPaginationTraits.h>
#include <aws/redshift-data/model/DescribeTablePaginationTraits.h>
#include <aws/redshift-data/model/GetStatementResultPaginationTraits.h>
#include <aws/redshift-data/model/ListSchemasPaginationTraits.h>
#include <aws/redshift-data/model/ListTablesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class RedshiftDataAPIServicePaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(RedshiftDataAPIServicePaginationCompilationTest, RedshiftDataAPIServicePaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
