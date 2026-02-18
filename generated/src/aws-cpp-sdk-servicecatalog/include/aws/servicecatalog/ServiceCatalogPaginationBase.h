/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
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

#include <memory>

namespace Aws {
namespace ServiceCatalog {

class ServiceCatalogClient;

template <typename DerivedClient>
class ServiceCatalogPaginationBase {
 public:
  /**
   * Create a paginator for DescribePortfolioShares operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribePortfolioSharesRequest,
                                    Pagination::DescribePortfolioSharesPaginationTraits<DerivedClient>>
  DescribePortfolioSharesPaginator(const Model::DescribePortfolioSharesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribePortfolioSharesRequest,
                                             Pagination::DescribePortfolioSharesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetProvisionedProductOutputs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetProvisionedProductOutputsRequest,
                                    Pagination::GetProvisionedProductOutputsPaginationTraits<DerivedClient>>
  GetProvisionedProductOutputsPaginator(const Model::GetProvisionedProductOutputsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetProvisionedProductOutputsRequest,
                                             Pagination::GetProvisionedProductOutputsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAcceptedPortfolioShares operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAcceptedPortfolioSharesRequest,
                                    Pagination::ListAcceptedPortfolioSharesPaginationTraits<DerivedClient>>
  ListAcceptedPortfolioSharesPaginator(const Model::ListAcceptedPortfolioSharesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAcceptedPortfolioSharesRequest,
                                             Pagination::ListAcceptedPortfolioSharesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListBudgetsForResource operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBudgetsForResourceRequest,
                                    Pagination::ListBudgetsForResourcePaginationTraits<DerivedClient>>
  ListBudgetsForResourcePaginator(const Model::ListBudgetsForResourceRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBudgetsForResourceRequest,
                                             Pagination::ListBudgetsForResourcePaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListConstraintsForPortfolio operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConstraintsForPortfolioRequest,
                                    Pagination::ListConstraintsForPortfolioPaginationTraits<DerivedClient>>
  ListConstraintsForPortfolioPaginator(const Model::ListConstraintsForPortfolioRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConstraintsForPortfolioRequest,
                                             Pagination::ListConstraintsForPortfolioPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListLaunchPaths operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLaunchPathsRequest,
                                    Pagination::ListLaunchPathsPaginationTraits<DerivedClient>>
  ListLaunchPathsPaginator(const Model::ListLaunchPathsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLaunchPathsRequest,
                                             Pagination::ListLaunchPathsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListOrganizationPortfolioAccess operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOrganizationPortfolioAccessRequest,
                                    Pagination::ListOrganizationPortfolioAccessPaginationTraits<DerivedClient>>
  ListOrganizationPortfolioAccessPaginator(const Model::ListOrganizationPortfolioAccessRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOrganizationPortfolioAccessRequest,
                                             Pagination::ListOrganizationPortfolioAccessPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPortfolioAccess operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPortfolioAccessRequest,
                                    Pagination::ListPortfolioAccessPaginationTraits<DerivedClient>>
  ListPortfolioAccessPaginator(const Model::ListPortfolioAccessRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPortfolioAccessRequest,
                                             Pagination::ListPortfolioAccessPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPortfolios operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPortfoliosRequest, Pagination::ListPortfoliosPaginationTraits<DerivedClient>>
  ListPortfoliosPaginator(const Model::ListPortfoliosRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPortfoliosRequest,
                                             Pagination::ListPortfoliosPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListPortfoliosForProduct operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPortfoliosForProductRequest,
                                    Pagination::ListPortfoliosForProductPaginationTraits<DerivedClient>>
  ListPortfoliosForProductPaginator(const Model::ListPortfoliosForProductRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPortfoliosForProductRequest,
                                             Pagination::ListPortfoliosForProductPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPrincipalsForPortfolio operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPrincipalsForPortfolioRequest,
                                    Pagination::ListPrincipalsForPortfolioPaginationTraits<DerivedClient>>
  ListPrincipalsForPortfolioPaginator(const Model::ListPrincipalsForPortfolioRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPrincipalsForPortfolioRequest,
                                             Pagination::ListPrincipalsForPortfolioPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListProvisioningArtifactsForServiceAction operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProvisioningArtifactsForServiceActionRequest,
                                    Pagination::ListProvisioningArtifactsForServiceActionPaginationTraits<DerivedClient>>
  ListProvisioningArtifactsForServiceActionPaginator(const Model::ListProvisioningArtifactsForServiceActionRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProvisioningArtifactsForServiceActionRequest,
                                             Pagination::ListProvisioningArtifactsForServiceActionPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListResourcesForTagOption operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourcesForTagOptionRequest,
                                    Pagination::ListResourcesForTagOptionPaginationTraits<DerivedClient>>
  ListResourcesForTagOptionPaginator(const Model::ListResourcesForTagOptionRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourcesForTagOptionRequest,
                                             Pagination::ListResourcesForTagOptionPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListServiceActions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServiceActionsRequest,
                                    Pagination::ListServiceActionsPaginationTraits<DerivedClient>>
  ListServiceActionsPaginator(const Model::ListServiceActionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServiceActionsRequest,
                                             Pagination::ListServiceActionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListServiceActionsForProvisioningArtifact operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServiceActionsForProvisioningArtifactRequest,
                                    Pagination::ListServiceActionsForProvisioningArtifactPaginationTraits<DerivedClient>>
  ListServiceActionsForProvisioningArtifactPaginator(const Model::ListServiceActionsForProvisioningArtifactRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServiceActionsForProvisioningArtifactRequest,
                                             Pagination::ListServiceActionsForProvisioningArtifactPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTagOptions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTagOptionsRequest, Pagination::ListTagOptionsPaginationTraits<DerivedClient>>
  ListTagOptionsPaginator(const Model::ListTagOptionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTagOptionsRequest,
                                             Pagination::ListTagOptionsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for SearchProducts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchProductsRequest, Pagination::SearchProductsPaginationTraits<DerivedClient>>
  SearchProductsPaginator(const Model::SearchProductsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchProductsRequest,
                                             Pagination::SearchProductsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for SearchProductsAsAdmin operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchProductsAsAdminRequest,
                                    Pagination::SearchProductsAsAdminPaginationTraits<DerivedClient>>
  SearchProductsAsAdminPaginator(const Model::SearchProductsAsAdminRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchProductsAsAdminRequest,
                                             Pagination::SearchProductsAsAdminPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for SearchProvisionedProducts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchProvisionedProductsRequest,
                                    Pagination::SearchProvisionedProductsPaginationTraits<DerivedClient>>
  SearchProvisionedProductsPaginator(const Model::SearchProvisionedProductsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchProvisionedProductsRequest,
                                             Pagination::SearchProvisionedProductsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace ServiceCatalog
}  // namespace Aws
