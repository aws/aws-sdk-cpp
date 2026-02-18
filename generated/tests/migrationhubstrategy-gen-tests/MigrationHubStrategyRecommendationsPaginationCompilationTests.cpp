/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for MigrationHubStrategyRecommendations pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendationsClientPagination.h>
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendationsPaginationBase.h>
#include <aws/migrationhubstrategy/model/GetServerDetailsPaginationTraits.h>
#include <aws/migrationhubstrategy/model/ListServersPaginationTraits.h>
#include <aws/migrationhubstrategy/model/ListImportFileTaskPaginationTraits.h>
#include <aws/migrationhubstrategy/model/ListAnalyzableServersPaginationTraits.h>
#include <aws/migrationhubstrategy/model/ListCollectorsPaginationTraits.h>
#include <aws/migrationhubstrategy/model/ListApplicationComponentsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class MigrationHubStrategyRecommendationsPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(MigrationHubStrategyRecommendationsPaginationCompilationTest, MigrationHubStrategyRecommendationsPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
