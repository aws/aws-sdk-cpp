/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for CostExplorer pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/ce/CostExplorerClientPagination.h>
#include <aws/ce/CostExplorerPaginationBase.h>
#include <aws/ce/model/GetReservationPurchaseRecommendationPaginationTraits.h>
#include <aws/ce/model/ListSavingsPlansPurchaseRecommendationGenerationPaginationTraits.h>
#include <aws/ce/model/ListCommitmentPurchaseAnalysesPaginationTraits.h>
#include <aws/ce/model/ListCostAllocationTagBackfillHistoryPaginationTraits.h>
#include <aws/ce/model/GetCostComparisonDriversPaginationTraits.h>
#include <aws/ce/model/GetSavingsPlansCoveragePaginationTraits.h>
#include <aws/ce/model/ListCostAllocationTagsPaginationTraits.h>
#include <aws/ce/model/GetRightsizingRecommendationPaginationTraits.h>
#include <aws/ce/model/GetAnomaliesPaginationTraits.h>
#include <aws/ce/model/GetAnomalySubscriptionsPaginationTraits.h>
#include <aws/ce/model/GetCostAndUsageComparisonsPaginationTraits.h>
#include <aws/ce/model/GetAnomalyMonitorsPaginationTraits.h>
#include <aws/ce/model/ListCostCategoryResourceAssociationsPaginationTraits.h>
#include <aws/ce/model/GetSavingsPlansUtilizationDetailsPaginationTraits.h>
#include <aws/ce/model/ListCostCategoryDefinitionsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class CostExplorerPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(CostExplorerPaginationCompilationTest, CostExplorerPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
