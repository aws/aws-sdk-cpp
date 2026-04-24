/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for MarketplaceEntitlementService pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/marketplace-entitlement/MarketplaceEntitlementServiceClientPagination.h>
#include <aws/marketplace-entitlement/MarketplaceEntitlementServicePaginationBase.h>
#include <aws/marketplace-entitlement/model/GetEntitlementsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class MarketplaceEntitlementServicePaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(MarketplaceEntitlementServicePaginationCompilationTest, MarketplaceEntitlementServicePaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
