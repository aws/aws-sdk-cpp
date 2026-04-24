/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for ServiceCatalog pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/servicecatalog/ServiceCatalogClientPagination.h>
#include <aws/servicecatalog/ServiceCatalogPaginationBase.h>
#include <aws/servicecatalog/model/GetProvisionedProductOutputsPaginationTraits.h>
#include <aws/servicecatalog/model/SearchProductsPaginationTraits.h>
#include <aws/servicecatalog/model/ListBudgetsForResourcePaginationTraits.h>
#include <aws/servicecatalog/model/ListAcceptedPortfolioSharesPaginationTraits.h>
#include <aws/servicecatalog/model/SearchProductsAsAdminPaginationTraits.h>
#include <aws/servicecatalog/model/SearchProvisionedProductsPaginationTraits.h>
#include <aws/servicecatalog/model/ListConstraintsForPortfolioPaginationTraits.h>
#include <aws/servicecatalog/model/ListServiceActionsPaginationTraits.h>
#include <aws/servicecatalog/model/ListPrincipalsForPortfolioPaginationTraits.h>
#include <aws/servicecatalog/model/ListPortfolioAccessPaginationTraits.h>
#include <aws/servicecatalog/model/ListPortfoliosPaginationTraits.h>
#include <aws/servicecatalog/model/ListLaunchPathsPaginationTraits.h>
#include <aws/servicecatalog/model/DescribePortfolioSharesPaginationTraits.h>
#include <aws/servicecatalog/model/ListOrganizationPortfolioAccessPaginationTraits.h>
#include <aws/servicecatalog/model/ListTagOptionsPaginationTraits.h>
#include <aws/servicecatalog/model/ListServiceActionsForProvisioningArtifactPaginationTraits.h>
#include <aws/servicecatalog/model/ListProvisioningArtifactsForServiceActionPaginationTraits.h>
#include <aws/servicecatalog/model/ListResourcesForTagOptionPaginationTraits.h>
#include <aws/servicecatalog/model/ListPortfoliosForProductPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class ServiceCatalogPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(ServiceCatalogPaginationCompilationTest, ServiceCatalogPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
