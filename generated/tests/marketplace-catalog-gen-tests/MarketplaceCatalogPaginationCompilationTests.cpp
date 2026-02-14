/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for MarketplaceCatalog pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/marketplace-catalog/MarketplaceCatalogClientPagination.h>
#include <aws/marketplace-catalog/MarketplaceCatalogPaginationBase.h>
#include <aws/marketplace-catalog/model/ListChangeSetsPaginationTraits.h>
#include <aws/marketplace-catalog/model/ListEntitiesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class MarketplaceCatalogPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(MarketplaceCatalogPaginationCompilationTest, MarketplaceCatalogPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
