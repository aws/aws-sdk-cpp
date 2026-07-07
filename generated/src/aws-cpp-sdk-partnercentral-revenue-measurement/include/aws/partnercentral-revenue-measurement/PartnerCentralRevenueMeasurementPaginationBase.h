/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/partnercentral-revenue-measurement/model/ListMarketplaceRevenueShareAllocationsPaginationTraits.h>
#include <aws/partnercentral-revenue-measurement/model/ListMarketplaceRevenueSharesPaginationTraits.h>
#include <aws/partnercentral-revenue-measurement/model/ListRevenueAttributionAllocationsPaginationTraits.h>
#include <aws/partnercentral-revenue-measurement/model/ListRevenueAttributionsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace PartnerCentralRevenueMeasurement {

template <typename DerivedClient>
class PartnerCentralRevenueMeasurementPaginationBase {
 public:
  /**
   * Create a paginator for ListMarketplaceRevenueShareAllocations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMarketplaceRevenueShareAllocationsRequest,
                                    Pagination::ListMarketplaceRevenueShareAllocationsPaginationTraits<DerivedClient>>
  ListMarketplaceRevenueShareAllocationsPaginator(const Model::ListMarketplaceRevenueShareAllocationsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMarketplaceRevenueShareAllocationsRequest,
                                             Pagination::ListMarketplaceRevenueShareAllocationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListMarketplaceRevenueShares operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMarketplaceRevenueSharesRequest,
                                    Pagination::ListMarketplaceRevenueSharesPaginationTraits<DerivedClient>>
  ListMarketplaceRevenueSharesPaginator(const Model::ListMarketplaceRevenueSharesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMarketplaceRevenueSharesRequest,
                                             Pagination::ListMarketplaceRevenueSharesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRevenueAttributionAllocations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRevenueAttributionAllocationsRequest,
                                    Pagination::ListRevenueAttributionAllocationsPaginationTraits<DerivedClient>>
  ListRevenueAttributionAllocationsPaginator(const Model::ListRevenueAttributionAllocationsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRevenueAttributionAllocationsRequest,
                                             Pagination::ListRevenueAttributionAllocationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRevenueAttributions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRevenueAttributionsRequest,
                                    Pagination::ListRevenueAttributionsPaginationTraits<DerivedClient>>
  ListRevenueAttributionsPaginator(const Model::ListRevenueAttributionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRevenueAttributionsRequest,
                                             Pagination::ListRevenueAttributionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
