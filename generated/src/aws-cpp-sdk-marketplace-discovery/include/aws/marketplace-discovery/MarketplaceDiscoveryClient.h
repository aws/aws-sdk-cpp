/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/MarketplaceDiscoveryPaginationBase.h>
#include <aws/marketplace-discovery/MarketplaceDiscoveryServiceClientModel.h>
#include <aws/marketplace-discovery/MarketplaceDiscoveryWaiter.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>

namespace Aws {
namespace MarketplaceDiscovery {
/**
 * <p>The AWS Marketplace Discovery API provides programmatic access to the AWS
 * Marketplace catalog, including searching and browsing listings, retrieving
 * product details and fulfillment options, and accessing public and private offer
 * pricing and terms.</p>
 */
class AWS_MARKETPLACEDISCOVERY_API MarketplaceDiscoveryClient
    : public Aws::Client::AWSJsonClient,
      public Aws::Client::ClientWithAsyncTemplateMethods<MarketplaceDiscoveryClient>,
      public MarketplaceDiscoveryPaginationBase<MarketplaceDiscoveryClient>,
      public MarketplaceDiscoveryWaiter<MarketplaceDiscoveryClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef MarketplaceDiscoveryClientConfiguration ClientConfigurationType;
  typedef MarketplaceDiscoveryEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  MarketplaceDiscoveryClient(const Aws::MarketplaceDiscovery::MarketplaceDiscoveryClientConfiguration& clientConfiguration =
                                 Aws::MarketplaceDiscovery::MarketplaceDiscoveryClientConfiguration(),
                             std::shared_ptr<MarketplaceDiscoveryEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  MarketplaceDiscoveryClient(const Aws::Auth::AWSCredentials& credentials,
                             std::shared_ptr<MarketplaceDiscoveryEndpointProviderBase> endpointProvider = nullptr,
                             const Aws::MarketplaceDiscovery::MarketplaceDiscoveryClientConfiguration& clientConfiguration =
                                 Aws::MarketplaceDiscovery::MarketplaceDiscoveryClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  MarketplaceDiscoveryClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             std::shared_ptr<MarketplaceDiscoveryEndpointProviderBase> endpointProvider = nullptr,
                             const Aws::MarketplaceDiscovery::MarketplaceDiscoveryClientConfiguration& clientConfiguration =
                                 Aws::MarketplaceDiscovery::MarketplaceDiscoveryClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  MarketplaceDiscoveryClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  MarketplaceDiscoveryClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  MarketplaceDiscoveryClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~MarketplaceDiscoveryClient();

  /**
   * <p>Provides details about a listing, such as descriptions, badges, categories,
   * pricing model summaries, reviews, and associated products and
   * offers.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/GetListing">AWS
   * API Reference</a></p>
   */
  virtual Model::GetListingOutcome GetListing(const Model::GetListingRequest& request) const;

  /**
   * A Callable wrapper for GetListing that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetListingRequestT = Model::GetListingRequest>
  Model::GetListingOutcomeCallable GetListingCallable(const GetListingRequestT& request) const {
    return SubmitCallable(&MarketplaceDiscoveryClient::GetListing, request);
  }

  /**
   * An Async wrapper for GetListing that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetListingRequestT = Model::GetListingRequest>
  void GetListingAsync(const GetListingRequestT& request, const GetListingResponseReceivedHandler& handler,
                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MarketplaceDiscoveryClient::GetListing, request, handler, context);
  }

  /**
   * <p>Provides details about an offer, such as the pricing model, seller of record,
   * availability dates, badges, and associated products.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/GetOffer">AWS
   * API Reference</a></p>
   */
  virtual Model::GetOfferOutcome GetOffer(const Model::GetOfferRequest& request) const;

  /**
   * A Callable wrapper for GetOffer that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetOfferRequestT = Model::GetOfferRequest>
  Model::GetOfferOutcomeCallable GetOfferCallable(const GetOfferRequestT& request) const {
    return SubmitCallable(&MarketplaceDiscoveryClient::GetOffer, request);
  }

  /**
   * An Async wrapper for GetOffer that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetOfferRequestT = Model::GetOfferRequest>
  void GetOfferAsync(const GetOfferRequestT& request, const GetOfferResponseReceivedHandler& handler,
                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MarketplaceDiscoveryClient::GetOffer, request, handler, context);
  }

  /**
   * <p>Provides details about an offer set, which is a bundle of offers across
   * multiple products. Includes the seller, availability dates, buyer notes, and
   * associated product-offer pairs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/GetOfferSet">AWS
   * API Reference</a></p>
   */
  virtual Model::GetOfferSetOutcome GetOfferSet(const Model::GetOfferSetRequest& request) const;

  /**
   * A Callable wrapper for GetOfferSet that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetOfferSetRequestT = Model::GetOfferSetRequest>
  Model::GetOfferSetOutcomeCallable GetOfferSetCallable(const GetOfferSetRequestT& request) const {
    return SubmitCallable(&MarketplaceDiscoveryClient::GetOfferSet, request);
  }

  /**
   * An Async wrapper for GetOfferSet that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetOfferSetRequestT = Model::GetOfferSetRequest>
  void GetOfferSetAsync(const GetOfferSetRequestT& request, const GetOfferSetResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MarketplaceDiscoveryClient::GetOfferSet, request, handler, context);
  }

  /**
   * <p>Returns the terms attached to an offer, such as pricing terms (usage-based,
   * contract, BYOL, free trial), legal terms, payment schedules, validity terms,
   * support terms, and renewal terms.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/GetOfferTerms">AWS
   * API Reference</a></p>
   */
  virtual Model::GetOfferTermsOutcome GetOfferTerms(const Model::GetOfferTermsRequest& request) const;

  /**
   * A Callable wrapper for GetOfferTerms that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetOfferTermsRequestT = Model::GetOfferTermsRequest>
  Model::GetOfferTermsOutcomeCallable GetOfferTermsCallable(const GetOfferTermsRequestT& request) const {
    return SubmitCallable(&MarketplaceDiscoveryClient::GetOfferTerms, request);
  }

  /**
   * An Async wrapper for GetOfferTerms that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetOfferTermsRequestT = Model::GetOfferTermsRequest>
  void GetOfferTermsAsync(const GetOfferTermsRequestT& request, const GetOfferTermsResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MarketplaceDiscoveryClient::GetOfferTerms, request, handler, context);
  }

  /**
   * <p>Provides details about a product, such as descriptions, highlights,
   * categories, fulfillment option summaries, promotional media, and seller
   * engagement options.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/GetProduct">AWS
   * API Reference</a></p>
   */
  virtual Model::GetProductOutcome GetProduct(const Model::GetProductRequest& request) const;

  /**
   * A Callable wrapper for GetProduct that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetProductRequestT = Model::GetProductRequest>
  Model::GetProductOutcomeCallable GetProductCallable(const GetProductRequestT& request) const {
    return SubmitCallable(&MarketplaceDiscoveryClient::GetProduct, request);
  }

  /**
   * An Async wrapper for GetProduct that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetProductRequestT = Model::GetProductRequest>
  void GetProductAsync(const GetProductRequestT& request, const GetProductResponseReceivedHandler& handler,
                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MarketplaceDiscoveryClient::GetProduct, request, handler, context);
  }

  /**
   * <p>Returns the fulfillment options available for a product, including deployment
   * details such as version information, operating systems, usage instructions, and
   * release notes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/ListFulfillmentOptions">AWS
   * API Reference</a></p>
   */
  virtual Model::ListFulfillmentOptionsOutcome ListFulfillmentOptions(const Model::ListFulfillmentOptionsRequest& request) const;

  /**
   * A Callable wrapper for ListFulfillmentOptions that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListFulfillmentOptionsRequestT = Model::ListFulfillmentOptionsRequest>
  Model::ListFulfillmentOptionsOutcomeCallable ListFulfillmentOptionsCallable(const ListFulfillmentOptionsRequestT& request) const {
    return SubmitCallable(&MarketplaceDiscoveryClient::ListFulfillmentOptions, request);
  }

  /**
   * An Async wrapper for ListFulfillmentOptions that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListFulfillmentOptionsRequestT = Model::ListFulfillmentOptionsRequest>
  void ListFulfillmentOptionsAsync(const ListFulfillmentOptionsRequestT& request,
                                   const ListFulfillmentOptionsResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MarketplaceDiscoveryClient::ListFulfillmentOptions, request, handler, context);
  }

  /**
   * <p>Returns the purchase options (offers and offer sets) available to the buyer.
   * You can filter results by product, seller, purchase option type, visibility
   * scope, and availability status.</p>  <p>You must include at least one of
   * the following filters in the request: a <code>PRODUCT_ID</code> filter to
   * specify the product for which to retrieve purchase options, or a
   * <code>VISIBILITY_SCOPE</code> filter to retrieve purchase options by
   * visibility.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/ListPurchaseOptions">AWS
   * API Reference</a></p>
   */
  virtual Model::ListPurchaseOptionsOutcome ListPurchaseOptions(const Model::ListPurchaseOptionsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListPurchaseOptions that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListPurchaseOptionsRequestT = Model::ListPurchaseOptionsRequest>
  Model::ListPurchaseOptionsOutcomeCallable ListPurchaseOptionsCallable(const ListPurchaseOptionsRequestT& request = {}) const {
    return SubmitCallable(&MarketplaceDiscoveryClient::ListPurchaseOptions, request);
  }

  /**
   * An Async wrapper for ListPurchaseOptions that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListPurchaseOptionsRequestT = Model::ListPurchaseOptionsRequest>
  void ListPurchaseOptionsAsync(const ListPurchaseOptionsResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                const ListPurchaseOptionsRequestT& request = {}) const {
    return SubmitAsync(&MarketplaceDiscoveryClient::ListPurchaseOptions, request, handler, context);
  }

  /**
   * <p>Returns available facet values for filtering listings, such as categories,
   * pricing models, fulfillment option types, publishers, and customer ratings. Each
   * facet value includes a count of matching listings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/SearchFacets">AWS
   * API Reference</a></p>
   */
  virtual Model::SearchFacetsOutcome SearchFacets(const Model::SearchFacetsRequest& request = {}) const;

  /**
   * A Callable wrapper for SearchFacets that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename SearchFacetsRequestT = Model::SearchFacetsRequest>
  Model::SearchFacetsOutcomeCallable SearchFacetsCallable(const SearchFacetsRequestT& request = {}) const {
    return SubmitCallable(&MarketplaceDiscoveryClient::SearchFacets, request);
  }

  /**
   * An Async wrapper for SearchFacets that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename SearchFacetsRequestT = Model::SearchFacetsRequest>
  void SearchFacetsAsync(const SearchFacetsResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                         const SearchFacetsRequestT& request = {}) const {
    return SubmitAsync(&MarketplaceDiscoveryClient::SearchFacets, request, handler, context);
  }

  /**
   * <p>Returns a list of product listings based on search criteria and filters. You
   * can search by keyword, filter by category, pricing model, fulfillment type, and
   * other attributes, and sort results by relevance or customer
   * rating.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/SearchListings">AWS
   * API Reference</a></p>
   */
  virtual Model::SearchListingsOutcome SearchListings(const Model::SearchListingsRequest& request = {}) const;

  /**
   * A Callable wrapper for SearchListings that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename SearchListingsRequestT = Model::SearchListingsRequest>
  Model::SearchListingsOutcomeCallable SearchListingsCallable(const SearchListingsRequestT& request = {}) const {
    return SubmitCallable(&MarketplaceDiscoveryClient::SearchListings, request);
  }

  /**
   * An Async wrapper for SearchListings that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename SearchListingsRequestT = Model::SearchListingsRequest>
  void SearchListingsAsync(const SearchListingsResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                           const SearchListingsRequestT& request = {}) const {
    return SubmitAsync(&MarketplaceDiscoveryClient::SearchListings, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<MarketplaceDiscoveryEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<MarketplaceDiscoveryClient>;
  void init(const MarketplaceDiscoveryClientConfiguration& clientConfiguration);

  typedef Aws::Utils::Outcome<Aws::AmazonWebServiceResult<RESPONSE>, MarketplaceDiscoveryError> InvokeOperationOutcome;

  InvokeOperationOutcome InvokeServiceOperation(const AmazonWebServiceRequest& request,
                                                const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
                                                Aws::Http::HttpMethod httpMethod) const;

  MarketplaceDiscoveryClientConfiguration m_clientConfiguration;
  std::shared_ptr<MarketplaceDiscoveryEndpointProviderBase> m_endpointProvider;
};

}  // namespace MarketplaceDiscovery
}  // namespace Aws
