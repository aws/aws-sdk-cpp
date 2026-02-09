/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for LakeFormation pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/lakeformation/LakeFormationClientPagination.h>
#include <aws/lakeformation/LakeFormationPaginationBase.h>
#include <aws/lakeformation/model/ListDataCellsFilterPaginationTraits.h>
#include <aws/lakeformation/model/ListLakeFormationOptInsPaginationTraits.h>
#include <aws/lakeformation/model/SearchDatabasesByLFTagsPaginationTraits.h>
#include <aws/lakeformation/model/GetTableObjectsPaginationTraits.h>
#include <aws/lakeformation/model/ListResourcesPaginationTraits.h>
#include <aws/lakeformation/model/ListLFTagsPaginationTraits.h>
#include <aws/lakeformation/model/ListLFTagExpressionsPaginationTraits.h>
#include <aws/lakeformation/model/ListPermissionsPaginationTraits.h>
#include <aws/lakeformation/model/GetEffectivePermissionsForPathPaginationTraits.h>
#include <aws/lakeformation/model/SearchTablesByLFTagsPaginationTraits.h>
#include <aws/lakeformation/model/GetWorkUnitsPaginationTraits.h>
#include <aws/lakeformation/model/ListTableStorageOptimizersPaginationTraits.h>
#include <aws/lakeformation/model/ListTransactionsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class LakeFormationPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(LakeFormationPaginationCompilationTest, LakeFormationPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
