/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/core/client/AWSError.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-discovery/MarketplaceDiscoveryEndpointProvider.h>
#include <aws/marketplace-discovery/MarketplaceDiscoveryErrors.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in MarketplaceDiscoveryClient header */
#include <aws/marketplace-discovery/model/GetListingResult.h>
#include <aws/marketplace-discovery/model/GetOfferResult.h>
#include <aws/marketplace-discovery/model/GetOfferSetResult.h>
#include <aws/marketplace-discovery/model/GetOfferTermsResult.h>
#include <aws/marketplace-discovery/model/GetProductResult.h>
#include <aws/marketplace-discovery/model/ListFulfillmentOptionsResult.h>
#include <aws/marketplace-discovery/model/ListPurchaseOptionsRequest.h>
#include <aws/marketplace-discovery/model/ListPurchaseOptionsResult.h>
#include <aws/marketplace-discovery/model/SearchFacetsRequest.h>
#include <aws/marketplace-discovery/model/SearchFacetsResult.h>
#include <aws/marketplace-discovery/model/SearchListingsRequest.h>
#include <aws/marketplace-discovery/model/SearchListingsResult.h>
/* End of service model headers required in MarketplaceDiscoveryClient header */

namespace Aws {
namespace Http {
class HttpClient;
class HttpClientFactory;
}  // namespace Http

namespace Utils {
template <typename R, typename E>
class Outcome;

namespace Threading {
class Executor;
}  // namespace Threading
}  // namespace Utils

namespace Auth {
class AWSCredentials;
class AWSCredentialsProvider;
}  // namespace Auth

namespace Client {
class RetryStrategy;
}  // namespace Client

namespace MarketplaceDiscovery {
using MarketplaceDiscoveryClientConfiguration = Aws::Client::GenericClientConfiguration;
using MarketplaceDiscoveryEndpointProviderBase = Aws::MarketplaceDiscovery::Endpoint::MarketplaceDiscoveryEndpointProviderBase;
using MarketplaceDiscoveryEndpointProvider = Aws::MarketplaceDiscovery::Endpoint::MarketplaceDiscoveryEndpointProvider;

namespace Model {
/* Service model forward declarations required in MarketplaceDiscoveryClient header */
class GetListingRequest;
class GetOfferRequest;
class GetOfferSetRequest;
class GetOfferTermsRequest;
class GetProductRequest;
class ListFulfillmentOptionsRequest;
class ListPurchaseOptionsRequest;
class SearchFacetsRequest;
class SearchListingsRequest;
/* End of service model forward declarations required in MarketplaceDiscoveryClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<GetListingResult, MarketplaceDiscoveryError> GetListingOutcome;
typedef Aws::Utils::Outcome<GetOfferResult, MarketplaceDiscoveryError> GetOfferOutcome;
typedef Aws::Utils::Outcome<GetOfferSetResult, MarketplaceDiscoveryError> GetOfferSetOutcome;
typedef Aws::Utils::Outcome<GetOfferTermsResult, MarketplaceDiscoveryError> GetOfferTermsOutcome;
typedef Aws::Utils::Outcome<GetProductResult, MarketplaceDiscoveryError> GetProductOutcome;
typedef Aws::Utils::Outcome<ListFulfillmentOptionsResult, MarketplaceDiscoveryError> ListFulfillmentOptionsOutcome;
typedef Aws::Utils::Outcome<ListPurchaseOptionsResult, MarketplaceDiscoveryError> ListPurchaseOptionsOutcome;
typedef Aws::Utils::Outcome<SearchFacetsResult, MarketplaceDiscoveryError> SearchFacetsOutcome;
typedef Aws::Utils::Outcome<SearchListingsResult, MarketplaceDiscoveryError> SearchListingsOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<GetListingOutcome> GetListingOutcomeCallable;
typedef std::future<GetOfferOutcome> GetOfferOutcomeCallable;
typedef std::future<GetOfferSetOutcome> GetOfferSetOutcomeCallable;
typedef std::future<GetOfferTermsOutcome> GetOfferTermsOutcomeCallable;
typedef std::future<GetProductOutcome> GetProductOutcomeCallable;
typedef std::future<ListFulfillmentOptionsOutcome> ListFulfillmentOptionsOutcomeCallable;
typedef std::future<ListPurchaseOptionsOutcome> ListPurchaseOptionsOutcomeCallable;
typedef std::future<SearchFacetsOutcome> SearchFacetsOutcomeCallable;
typedef std::future<SearchListingsOutcome> SearchListingsOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class MarketplaceDiscoveryClient;

/* Service model async handlers definitions */
typedef std::function<void(const MarketplaceDiscoveryClient*, const Model::GetListingRequest&, const Model::GetListingOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetListingResponseReceivedHandler;
typedef std::function<void(const MarketplaceDiscoveryClient*, const Model::GetOfferRequest&, const Model::GetOfferOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetOfferResponseReceivedHandler;
typedef std::function<void(const MarketplaceDiscoveryClient*, const Model::GetOfferSetRequest&, const Model::GetOfferSetOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetOfferSetResponseReceivedHandler;
typedef std::function<void(const MarketplaceDiscoveryClient*, const Model::GetOfferTermsRequest&, const Model::GetOfferTermsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetOfferTermsResponseReceivedHandler;
typedef std::function<void(const MarketplaceDiscoveryClient*, const Model::GetProductRequest&, const Model::GetProductOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetProductResponseReceivedHandler;
typedef std::function<void(const MarketplaceDiscoveryClient*, const Model::ListFulfillmentOptionsRequest&,
                           const Model::ListFulfillmentOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListFulfillmentOptionsResponseReceivedHandler;
typedef std::function<void(const MarketplaceDiscoveryClient*, const Model::ListPurchaseOptionsRequest&,
                           const Model::ListPurchaseOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListPurchaseOptionsResponseReceivedHandler;
typedef std::function<void(const MarketplaceDiscoveryClient*, const Model::SearchFacetsRequest&, const Model::SearchFacetsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    SearchFacetsResponseReceivedHandler;
typedef std::function<void(const MarketplaceDiscoveryClient*, const Model::SearchListingsRequest&, const Model::SearchListingsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    SearchListingsResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace MarketplaceDiscovery
}  // namespace Aws
