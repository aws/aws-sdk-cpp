/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/marketplace-discovery/model/GetOfferTermsPaginationTraits.h>
#include <aws/marketplace-discovery/model/ListFulfillmentOptionsPaginationTraits.h>
#include <aws/marketplace-discovery/model/ListPurchaseOptionsPaginationTraits.h>
#include <aws/marketplace-discovery/model/SearchFacetsPaginationTraits.h>
#include <aws/marketplace-discovery/model/SearchListingsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace MarketplaceDiscovery {

class MarketplaceDiscoveryClient;

template <typename DerivedClient>
class MarketplaceDiscoveryPaginationBase {
 public:
  /**
   * Create a paginator for GetOfferTerms operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetOfferTermsRequest, Pagination::GetOfferTermsPaginationTraits<DerivedClient>>
  GetOfferTermsPaginator(const Model::GetOfferTermsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetOfferTermsRequest,
                                             Pagination::GetOfferTermsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListFulfillmentOptions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFulfillmentOptionsRequest,
                                    Pagination::ListFulfillmentOptionsPaginationTraits<DerivedClient>>
  ListFulfillmentOptionsPaginator(const Model::ListFulfillmentOptionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFulfillmentOptionsRequest,
                                             Pagination::ListFulfillmentOptionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPurchaseOptions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPurchaseOptionsRequest,
                                    Pagination::ListPurchaseOptionsPaginationTraits<DerivedClient>>
  ListPurchaseOptionsPaginator(const Model::ListPurchaseOptionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPurchaseOptionsRequest,
                                             Pagination::ListPurchaseOptionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for SearchFacets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchFacetsRequest, Pagination::SearchFacetsPaginationTraits<DerivedClient>>
  SearchFacetsPaginator(const Model::SearchFacetsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchFacetsRequest,
                                             Pagination::SearchFacetsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for SearchListings operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchListingsRequest, Pagination::SearchListingsPaginationTraits<DerivedClient>>
  SearchListingsPaginator(const Model::SearchListingsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchListingsRequest,
                                             Pagination::SearchListingsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }
};
}  // namespace MarketplaceDiscovery
}  // namespace Aws
