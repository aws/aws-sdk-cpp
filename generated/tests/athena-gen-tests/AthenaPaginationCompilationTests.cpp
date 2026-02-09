/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for Athena pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/athena/AthenaClientPagination.h>
#include <aws/athena/AthenaPaginationBase.h>
#include <aws/athena/model/ListWorkGroupsPaginationTraits.h>
#include <aws/athena/model/ListCalculationExecutionsPaginationTraits.h>
#include <aws/athena/model/ListPreparedStatementsPaginationTraits.h>
#include <aws/athena/model/GetQueryResultsPaginationTraits.h>
#include <aws/athena/model/ListDataCatalogsPaginationTraits.h>
#include <aws/athena/model/ListTableMetadataPaginationTraits.h>
#include <aws/athena/model/ListCapacityReservationsPaginationTraits.h>
#include <aws/athena/model/ListDatabasesPaginationTraits.h>
#include <aws/athena/model/ListEngineVersionsPaginationTraits.h>
#include <aws/athena/model/ListExecutorsPaginationTraits.h>
#include <aws/athena/model/ListApplicationDPUSizesPaginationTraits.h>
#include <aws/athena/model/ListSessionsPaginationTraits.h>
#include <aws/athena/model/ListTagsForResourcePaginationTraits.h>
#include <aws/athena/model/ListQueryExecutionsPaginationTraits.h>
#include <aws/athena/model/ListNamedQueriesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class AthenaPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(AthenaPaginationCompilationTest, AthenaPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
