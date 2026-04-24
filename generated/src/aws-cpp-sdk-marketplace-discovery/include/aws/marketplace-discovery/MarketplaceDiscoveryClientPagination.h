/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/marketplace-discovery/MarketplaceDiscoveryClient.h>
#include <aws/marketplace-discovery/model/GetOfferTermsPaginationTraits.h>
#include <aws/marketplace-discovery/model/ListFulfillmentOptionsPaginationTraits.h>
#include <aws/marketplace-discovery/model/ListPurchaseOptionsPaginationTraits.h>
#include <aws/marketplace-discovery/model/SearchFacetsPaginationTraits.h>
#include <aws/marketplace-discovery/model/SearchListingsPaginationTraits.h>

namespace Aws {
namespace MarketplaceDiscovery {

using GetOfferTermsPaginator = Aws::Utils::Pagination::Paginator<MarketplaceDiscoveryClient, Model::GetOfferTermsRequest,
                                                                 Pagination::GetOfferTermsPaginationTraits<MarketplaceDiscoveryClient>>;
using ListFulfillmentOptionsPaginator =
    Aws::Utils::Pagination::Paginator<MarketplaceDiscoveryClient, Model::ListFulfillmentOptionsRequest,
                                      Pagination::ListFulfillmentOptionsPaginationTraits<MarketplaceDiscoveryClient>>;
using ListPurchaseOptionsPaginator =
    Aws::Utils::Pagination::Paginator<MarketplaceDiscoveryClient, Model::ListPurchaseOptionsRequest,
                                      Pagination::ListPurchaseOptionsPaginationTraits<MarketplaceDiscoveryClient>>;
using SearchFacetsPaginator = Aws::Utils::Pagination::Paginator<MarketplaceDiscoveryClient, Model::SearchFacetsRequest,
                                                                Pagination::SearchFacetsPaginationTraits<MarketplaceDiscoveryClient>>;
using SearchListingsPaginator = Aws::Utils::Pagination::Paginator<MarketplaceDiscoveryClient, Model::SearchListingsRequest,
                                                                  Pagination::SearchListingsPaginationTraits<MarketplaceDiscoveryClient>>;

}  // namespace MarketplaceDiscovery
}  // namespace Aws
