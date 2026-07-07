/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for PartnerCentralRevenueMeasurement pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/partnercentral-revenue-measurement/PartnerCentralRevenueMeasurementClientPagination.h>
#include <aws/partnercentral-revenue-measurement/PartnerCentralRevenueMeasurementPaginationBase.h>
#include <aws/partnercentral-revenue-measurement/model/ListMarketplaceRevenueSharesPaginationTraits.h>
#include <aws/partnercentral-revenue-measurement/model/ListMarketplaceRevenueShareAllocationsPaginationTraits.h>
#include <aws/partnercentral-revenue-measurement/model/ListRevenueAttributionAllocationsPaginationTraits.h>
#include <aws/partnercentral-revenue-measurement/model/ListRevenueAttributionsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class PartnerCentralRevenueMeasurementPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(PartnerCentralRevenueMeasurementPaginationCompilationTest, PartnerCentralRevenueMeasurementPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
