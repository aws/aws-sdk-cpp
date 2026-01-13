/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/servicecatalog/ServiceCatalogClient.h>
#include <aws/servicecatalog/model/DescribePortfolioSharesPaginationTraits.h>
#include <aws/servicecatalog/model/GetProvisionedProductOutputsPaginationTraits.h>
#include <aws/servicecatalog/model/ListAcceptedPortfolioSharesPaginationTraits.h>
#include <aws/servicecatalog/model/ListBudgetsForResourcePaginationTraits.h>
#include <aws/servicecatalog/model/ListConstraintsForPortfolioPaginationTraits.h>
#include <aws/servicecatalog/model/ListLaunchPathsPaginationTraits.h>
#include <aws/servicecatalog/model/ListOrganizationPortfolioAccessPaginationTraits.h>
#include <aws/servicecatalog/model/ListPortfolioAccessPaginationTraits.h>
#include <aws/servicecatalog/model/ListPortfoliosForProductPaginationTraits.h>
#include <aws/servicecatalog/model/ListPortfoliosPaginationTraits.h>
#include <aws/servicecatalog/model/ListPrincipalsForPortfolioPaginationTraits.h>
#include <aws/servicecatalog/model/ListProvisioningArtifactsForServiceActionPaginationTraits.h>
#include <aws/servicecatalog/model/ListResourcesForTagOptionPaginationTraits.h>
#include <aws/servicecatalog/model/ListServiceActionsForProvisioningArtifactPaginationTraits.h>
#include <aws/servicecatalog/model/ListServiceActionsPaginationTraits.h>
#include <aws/servicecatalog/model/ListTagOptionsPaginationTraits.h>
#include <aws/servicecatalog/model/SearchProductsAsAdminPaginationTraits.h>
#include <aws/servicecatalog/model/SearchProductsPaginationTraits.h>
#include <aws/servicecatalog/model/SearchProvisionedProductsPaginationTraits.h>

namespace Aws {
namespace ServiceCatalog {

using DescribePortfolioSharesPaginator =
    Aws::Utils::Pagination::Paginator<ServiceCatalogClient, Model::DescribePortfolioSharesRequest,
                                      Pagination::DescribePortfolioSharesPaginationTraits<ServiceCatalogClient>>;
using GetProvisionedProductOutputsPaginator =
    Aws::Utils::Pagination::Paginator<ServiceCatalogClient, Model::GetProvisionedProductOutputsRequest,
                                      Pagination::GetProvisionedProductOutputsPaginationTraits<ServiceCatalogClient>>;
using ListAcceptedPortfolioSharesPaginator =
    Aws::Utils::Pagination::Paginator<ServiceCatalogClient, Model::ListAcceptedPortfolioSharesRequest,
                                      Pagination::ListAcceptedPortfolioSharesPaginationTraits<ServiceCatalogClient>>;
using ListBudgetsForResourcePaginator =
    Aws::Utils::Pagination::Paginator<ServiceCatalogClient, Model::ListBudgetsForResourceRequest,
                                      Pagination::ListBudgetsForResourcePaginationTraits<ServiceCatalogClient>>;
using ListConstraintsForPortfolioPaginator =
    Aws::Utils::Pagination::Paginator<ServiceCatalogClient, Model::ListConstraintsForPortfolioRequest,
                                      Pagination::ListConstraintsForPortfolioPaginationTraits<ServiceCatalogClient>>;
using ListLaunchPathsPaginator = Aws::Utils::Pagination::Paginator<ServiceCatalogClient, Model::ListLaunchPathsRequest,
                                                                   Pagination::ListLaunchPathsPaginationTraits<ServiceCatalogClient>>;
using ListOrganizationPortfolioAccessPaginator =
    Aws::Utils::Pagination::Paginator<ServiceCatalogClient, Model::ListOrganizationPortfolioAccessRequest,
                                      Pagination::ListOrganizationPortfolioAccessPaginationTraits<ServiceCatalogClient>>;
using ListPortfolioAccessPaginator =
    Aws::Utils::Pagination::Paginator<ServiceCatalogClient, Model::ListPortfolioAccessRequest,
                                      Pagination::ListPortfolioAccessPaginationTraits<ServiceCatalogClient>>;
using ListPortfoliosPaginator = Aws::Utils::Pagination::Paginator<ServiceCatalogClient, Model::ListPortfoliosRequest,
                                                                  Pagination::ListPortfoliosPaginationTraits<ServiceCatalogClient>>;
using ListPortfoliosForProductPaginator =
    Aws::Utils::Pagination::Paginator<ServiceCatalogClient, Model::ListPortfoliosForProductRequest,
                                      Pagination::ListPortfoliosForProductPaginationTraits<ServiceCatalogClient>>;
using ListPrincipalsForPortfolioPaginator =
    Aws::Utils::Pagination::Paginator<ServiceCatalogClient, Model::ListPrincipalsForPortfolioRequest,
                                      Pagination::ListPrincipalsForPortfolioPaginationTraits<ServiceCatalogClient>>;
using ListProvisioningArtifactsForServiceActionPaginator =
    Aws::Utils::Pagination::Paginator<ServiceCatalogClient, Model::ListProvisioningArtifactsForServiceActionRequest,
                                      Pagination::ListProvisioningArtifactsForServiceActionPaginationTraits<ServiceCatalogClient>>;
using ListResourcesForTagOptionPaginator =
    Aws::Utils::Pagination::Paginator<ServiceCatalogClient, Model::ListResourcesForTagOptionRequest,
                                      Pagination::ListResourcesForTagOptionPaginationTraits<ServiceCatalogClient>>;
using ListServiceActionsPaginator = Aws::Utils::Pagination::Paginator<ServiceCatalogClient, Model::ListServiceActionsRequest,
                                                                      Pagination::ListServiceActionsPaginationTraits<ServiceCatalogClient>>;
using ListServiceActionsForProvisioningArtifactPaginator =
    Aws::Utils::Pagination::Paginator<ServiceCatalogClient, Model::ListServiceActionsForProvisioningArtifactRequest,
                                      Pagination::ListServiceActionsForProvisioningArtifactPaginationTraits<ServiceCatalogClient>>;
using ListTagOptionsPaginator = Aws::Utils::Pagination::Paginator<ServiceCatalogClient, Model::ListTagOptionsRequest,
                                                                  Pagination::ListTagOptionsPaginationTraits<ServiceCatalogClient>>;
using SearchProductsPaginator = Aws::Utils::Pagination::Paginator<ServiceCatalogClient, Model::SearchProductsRequest,
                                                                  Pagination::SearchProductsPaginationTraits<ServiceCatalogClient>>;
using SearchProductsAsAdminPaginator =
    Aws::Utils::Pagination::Paginator<ServiceCatalogClient, Model::SearchProductsAsAdminRequest,
                                      Pagination::SearchProductsAsAdminPaginationTraits<ServiceCatalogClient>>;
using SearchProvisionedProductsPaginator =
    Aws::Utils::Pagination::Paginator<ServiceCatalogClient, Model::SearchProvisionedProductsRequest,
                                      Pagination::SearchProvisionedProductsPaginationTraits<ServiceCatalogClient>>;

}  // namespace ServiceCatalog
}  // namespace Aws
