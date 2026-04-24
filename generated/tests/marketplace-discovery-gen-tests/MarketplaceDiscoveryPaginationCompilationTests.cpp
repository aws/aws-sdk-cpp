/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for MarketplaceDiscovery pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/marketplace-discovery/MarketplaceDiscoveryClientPagination.h>
#include <aws/marketplace-discovery/MarketplaceDiscoveryPaginationBase.h>
#include <aws/marketplace-discovery/model/GetOfferTermsPaginationTraits.h>
#include <aws/marketplace-discovery/model/ListPurchaseOptionsPaginationTraits.h>
#include <aws/marketplace-discovery/model/SearchListingsPaginationTraits.h>
#include <aws/marketplace-discovery/model/ListFulfillmentOptionsPaginationTraits.h>
#include <aws/marketplace-discovery/model/SearchFacetsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class MarketplaceDiscoveryPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(MarketplaceDiscoveryPaginationCompilationTest, MarketplaceDiscoveryPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
