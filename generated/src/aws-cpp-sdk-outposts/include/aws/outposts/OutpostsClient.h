/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/outposts/OutpostsServiceClientModel.h>

namespace Aws
{
namespace Outposts
{
  /**
   * <p>Amazon Web Services Outposts is a fully managed service that extends Amazon
   * Web Services infrastructure, APIs, and tools to customer premises. By providing
   * local access to Amazon Web Services managed infrastructure, Amazon Web Services
   * Outposts enables customers to build and run applications on premises using the
   * same programming interfaces as in Amazon Web Services Regions, while using local
   * compute and storage resources for lower latency and local data processing
   * needs.</p>
   */
  class AWS_OUTPOSTS_API OutpostsClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<OutpostsClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef OutpostsClientConfiguration ClientConfigurationType;
      typedef OutpostsEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        OutpostsClient(const Aws::Outposts::OutpostsClientConfiguration& clientConfiguration = Aws::Outposts::OutpostsClientConfiguration(),
                       std::shared_ptr<OutpostsEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        OutpostsClient(const Aws::Auth::AWSCredentials& credentials,
                       std::shared_ptr<OutpostsEndpointProviderBase> endpointProvider = nullptr,
                       const Aws::Outposts::OutpostsClientConfiguration& clientConfiguration = Aws::Outposts::OutpostsClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        OutpostsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       std::shared_ptr<OutpostsEndpointProviderBase> endpointProvider = nullptr,
                       const Aws::Outposts::OutpostsClientConfiguration& clientConfiguration = Aws::Outposts::OutpostsClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        OutpostsClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        OutpostsClient(const Aws::Auth::AWSCredentials& credentials,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        OutpostsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~OutpostsClient();

        /**
         * <p>Cancels the specified order for an Outpost.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/CancelOrder">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelOrderOutcome CancelOrder(const Model::CancelOrderRequest& request) const;

        /**
         * A Callable wrapper for CancelOrder that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelOrderRequestT = Model::CancelOrderRequest>
        Model::CancelOrderOutcomeCallable CancelOrderCallable(const CancelOrderRequestT& request) const
        {
            return SubmitCallable(&OutpostsClient::CancelOrder, request);
        }

        /**
         * An Async wrapper for CancelOrder that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelOrderRequestT = Model::CancelOrderRequest>
        void CancelOrderAsync(const CancelOrderRequestT& request, const CancelOrderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OutpostsClient::CancelOrder, request, handler, context);
        }

        /**
         * <p>Creates an order for an Outpost.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/CreateOrder">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateOrderOutcome CreateOrder(const Model::CreateOrderRequest& request) const;

        /**
         * A Callable wrapper for CreateOrder that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateOrderRequestT = Model::CreateOrderRequest>
        Model::CreateOrderOutcomeCallable CreateOrderCallable(const CreateOrderRequestT& request) const
        {
            return SubmitCallable(&OutpostsClient::CreateOrder, request);
        }

        /**
         * An Async wrapper for CreateOrder that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateOrderRequestT = Model::CreateOrderRequest>
        void CreateOrderAsync(const CreateOrderRequestT& request, const CreateOrderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OutpostsClient::CreateOrder, request, handler, context);
        }

        /**
         * <p>Creates an Outpost.</p> <p>You can specify either an Availability one or an
         * AZ ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/CreateOutpost">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateOutpostOutcome CreateOutpost(const Model::CreateOutpostRequest& request) const;

        /**
         * A Callable wrapper for CreateOutpost that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateOutpostRequestT = Model::CreateOutpostRequest>
        Model::CreateOutpostOutcomeCallable CreateOutpostCallable(const CreateOutpostRequestT& request) const
        {
            return SubmitCallable(&OutpostsClient::CreateOutpost, request);
        }

        /**
         * An Async wrapper for CreateOutpost that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateOutpostRequestT = Model::CreateOutpostRequest>
        void CreateOutpostAsync(const CreateOutpostRequestT& request, const CreateOutpostResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OutpostsClient::CreateOutpost, request, handler, context);
        }

        /**
         * <p> Creates a site for an Outpost. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/CreateSite">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSiteOutcome CreateSite(const Model::CreateSiteRequest& request) const;

        /**
         * A Callable wrapper for CreateSite that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSiteRequestT = Model::CreateSiteRequest>
        Model::CreateSiteOutcomeCallable CreateSiteCallable(const CreateSiteRequestT& request) const
        {
            return SubmitCallable(&OutpostsClient::CreateSite, request);
        }

        /**
         * An Async wrapper for CreateSite that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSiteRequestT = Model::CreateSiteRequest>
        void CreateSiteAsync(const CreateSiteRequestT& request, const CreateSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OutpostsClient::CreateSite, request, handler, context);
        }

        /**
         * <p>Deletes the specified Outpost.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/DeleteOutpost">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteOutpostOutcome DeleteOutpost(const Model::DeleteOutpostRequest& request) const;

        /**
         * A Callable wrapper for DeleteOutpost that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteOutpostRequestT = Model::DeleteOutpostRequest>
        Model::DeleteOutpostOutcomeCallable DeleteOutpostCallable(const DeleteOutpostRequestT& request) const
        {
            return SubmitCallable(&OutpostsClient::DeleteOutpost, request);
        }

        /**
         * An Async wrapper for DeleteOutpost that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteOutpostRequestT = Model::DeleteOutpostRequest>
        void DeleteOutpostAsync(const DeleteOutpostRequestT& request, const DeleteOutpostResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OutpostsClient::DeleteOutpost, request, handler, context);
        }

        /**
         * <p>Deletes the specified site.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/DeleteSite">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSiteOutcome DeleteSite(const Model::DeleteSiteRequest& request) const;

        /**
         * A Callable wrapper for DeleteSite that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSiteRequestT = Model::DeleteSiteRequest>
        Model::DeleteSiteOutcomeCallable DeleteSiteCallable(const DeleteSiteRequestT& request) const
        {
            return SubmitCallable(&OutpostsClient::DeleteSite, request);
        }

        /**
         * An Async wrapper for DeleteSite that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSiteRequestT = Model::DeleteSiteRequest>
        void DeleteSiteAsync(const DeleteSiteRequestT& request, const DeleteSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OutpostsClient::DeleteSite, request, handler, context);
        }

        /**
         * <p>Gets information about the specified catalog item.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/GetCatalogItem">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCatalogItemOutcome GetCatalogItem(const Model::GetCatalogItemRequest& request) const;

        /**
         * A Callable wrapper for GetCatalogItem that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCatalogItemRequestT = Model::GetCatalogItemRequest>
        Model::GetCatalogItemOutcomeCallable GetCatalogItemCallable(const GetCatalogItemRequestT& request) const
        {
            return SubmitCallable(&OutpostsClient::GetCatalogItem, request);
        }

        /**
         * An Async wrapper for GetCatalogItem that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCatalogItemRequestT = Model::GetCatalogItemRequest>
        void GetCatalogItemAsync(const GetCatalogItemRequestT& request, const GetCatalogItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OutpostsClient::GetCatalogItem, request, handler, context);
        }

        /**
         *  <p> Amazon Web Services uses this action to install Outpost servers.</p>
         *  <p> Gets information about the specified connection. </p> <p> Use
         * CloudTrail to monitor this action or Amazon Web Services managed policy for
         * Amazon Web Services Outposts to secure it. For more information, see <a
         * href="https://docs.aws.amazon.com/outposts/latest/userguide/security-iam-awsmanpol.html">
         * Amazon Web Services managed policies for Amazon Web Services Outposts</a> and <a
         * href="https://docs.aws.amazon.com/outposts/latest/userguide/logging-using-cloudtrail.html">
         * Logging Amazon Web Services Outposts API calls with Amazon Web Services
         * CloudTrail</a> in the <i>Amazon Web Services Outposts User Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/GetConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConnectionOutcome GetConnection(const Model::GetConnectionRequest& request) const;

        /**
         * A Callable wrapper for GetConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetConnectionRequestT = Model::GetConnectionRequest>
        Model::GetConnectionOutcomeCallable GetConnectionCallable(const GetConnectionRequestT& request) const
        {
            return SubmitCallable(&OutpostsClient::GetConnection, request);
        }

        /**
         * An Async wrapper for GetConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetConnectionRequestT = Model::GetConnectionRequest>
        void GetConnectionAsync(const GetConnectionRequestT& request, const GetConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OutpostsClient::GetConnection, request, handler, context);
        }

        /**
         * <p>Gets information about the specified order.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/GetOrder">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOrderOutcome GetOrder(const Model::GetOrderRequest& request) const;

        /**
         * A Callable wrapper for GetOrder that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetOrderRequestT = Model::GetOrderRequest>
        Model::GetOrderOutcomeCallable GetOrderCallable(const GetOrderRequestT& request) const
        {
            return SubmitCallable(&OutpostsClient::GetOrder, request);
        }

        /**
         * An Async wrapper for GetOrder that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetOrderRequestT = Model::GetOrderRequest>
        void GetOrderAsync(const GetOrderRequestT& request, const GetOrderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OutpostsClient::GetOrder, request, handler, context);
        }

        /**
         * <p>Gets information about the specified Outpost.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/GetOutpost">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOutpostOutcome GetOutpost(const Model::GetOutpostRequest& request) const;

        /**
         * A Callable wrapper for GetOutpost that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetOutpostRequestT = Model::GetOutpostRequest>
        Model::GetOutpostOutcomeCallable GetOutpostCallable(const GetOutpostRequestT& request) const
        {
            return SubmitCallable(&OutpostsClient::GetOutpost, request);
        }

        /**
         * An Async wrapper for GetOutpost that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetOutpostRequestT = Model::GetOutpostRequest>
        void GetOutpostAsync(const GetOutpostRequestT& request, const GetOutpostResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OutpostsClient::GetOutpost, request, handler, context);
        }

        /**
         * <p>Gets the instance types for the specified Outpost.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/GetOutpostInstanceTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOutpostInstanceTypesOutcome GetOutpostInstanceTypes(const Model::GetOutpostInstanceTypesRequest& request) const;

        /**
         * A Callable wrapper for GetOutpostInstanceTypes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetOutpostInstanceTypesRequestT = Model::GetOutpostInstanceTypesRequest>
        Model::GetOutpostInstanceTypesOutcomeCallable GetOutpostInstanceTypesCallable(const GetOutpostInstanceTypesRequestT& request) const
        {
            return SubmitCallable(&OutpostsClient::GetOutpostInstanceTypes, request);
        }

        /**
         * An Async wrapper for GetOutpostInstanceTypes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetOutpostInstanceTypesRequestT = Model::GetOutpostInstanceTypesRequest>
        void GetOutpostInstanceTypesAsync(const GetOutpostInstanceTypesRequestT& request, const GetOutpostInstanceTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OutpostsClient::GetOutpostInstanceTypes, request, handler, context);
        }

        /**
         * <p>Gets information about the specified Outpost site.</p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/GetSite">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSiteOutcome GetSite(const Model::GetSiteRequest& request) const;

        /**
         * A Callable wrapper for GetSite that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSiteRequestT = Model::GetSiteRequest>
        Model::GetSiteOutcomeCallable GetSiteCallable(const GetSiteRequestT& request) const
        {
            return SubmitCallable(&OutpostsClient::GetSite, request);
        }

        /**
         * An Async wrapper for GetSite that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSiteRequestT = Model::GetSiteRequest>
        void GetSiteAsync(const GetSiteRequestT& request, const GetSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OutpostsClient::GetSite, request, handler, context);
        }

        /**
         * <p> Gets the site address of the specified site. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/GetSiteAddress">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSiteAddressOutcome GetSiteAddress(const Model::GetSiteAddressRequest& request) const;

        /**
         * A Callable wrapper for GetSiteAddress that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSiteAddressRequestT = Model::GetSiteAddressRequest>
        Model::GetSiteAddressOutcomeCallable GetSiteAddressCallable(const GetSiteAddressRequestT& request) const
        {
            return SubmitCallable(&OutpostsClient::GetSiteAddress, request);
        }

        /**
         * An Async wrapper for GetSiteAddress that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSiteAddressRequestT = Model::GetSiteAddressRequest>
        void GetSiteAddressAsync(const GetSiteAddressRequestT& request, const GetSiteAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OutpostsClient::GetSiteAddress, request, handler, context);
        }

        /**
         * <p>Lists the hardware assets for the specified Outpost.</p> <p>Use filters to
         * return specific results. If you specify multiple filters, the results include
         * only the resources that match all of the specified filters. For a filter where
         * you can specify multiple values, the results include items that match any of the
         * values that you specify for the filter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/ListAssets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssetsOutcome ListAssets(const Model::ListAssetsRequest& request) const;

        /**
         * A Callable wrapper for ListAssets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAssetsRequestT = Model::ListAssetsRequest>
        Model::ListAssetsOutcomeCallable ListAssetsCallable(const ListAssetsRequestT& request) const
        {
            return SubmitCallable(&OutpostsClient::ListAssets, request);
        }

        /**
         * An Async wrapper for ListAssets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAssetsRequestT = Model::ListAssetsRequest>
        void ListAssetsAsync(const ListAssetsRequestT& request, const ListAssetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OutpostsClient::ListAssets, request, handler, context);
        }

        /**
         * <p>Lists the items in the catalog.</p> <p>Use filters to return specific
         * results. If you specify multiple filters, the results include only the resources
         * that match all of the specified filters. For a filter where you can specify
         * multiple values, the results include items that match any of the values that you
         * specify for the filter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/ListCatalogItems">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCatalogItemsOutcome ListCatalogItems(const Model::ListCatalogItemsRequest& request) const;

        /**
         * A Callable wrapper for ListCatalogItems that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCatalogItemsRequestT = Model::ListCatalogItemsRequest>
        Model::ListCatalogItemsOutcomeCallable ListCatalogItemsCallable(const ListCatalogItemsRequestT& request) const
        {
            return SubmitCallable(&OutpostsClient::ListCatalogItems, request);
        }

        /**
         * An Async wrapper for ListCatalogItems that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCatalogItemsRequestT = Model::ListCatalogItemsRequest>
        void ListCatalogItemsAsync(const ListCatalogItemsRequestT& request, const ListCatalogItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OutpostsClient::ListCatalogItems, request, handler, context);
        }

        /**
         * <p>Lists the Outpost orders for your Amazon Web Services account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/ListOrders">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOrdersOutcome ListOrders(const Model::ListOrdersRequest& request) const;

        /**
         * A Callable wrapper for ListOrders that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListOrdersRequestT = Model::ListOrdersRequest>
        Model::ListOrdersOutcomeCallable ListOrdersCallable(const ListOrdersRequestT& request) const
        {
            return SubmitCallable(&OutpostsClient::ListOrders, request);
        }

        /**
         * An Async wrapper for ListOrders that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListOrdersRequestT = Model::ListOrdersRequest>
        void ListOrdersAsync(const ListOrdersRequestT& request, const ListOrdersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OutpostsClient::ListOrders, request, handler, context);
        }

        /**
         * <p>Lists the Outposts for your Amazon Web Services account.</p> <p>Use filters
         * to return specific results. If you specify multiple filters, the results include
         * only the resources that match all of the specified filters. For a filter where
         * you can specify multiple values, the results include items that match any of the
         * values that you specify for the filter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/ListOutposts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOutpostsOutcome ListOutposts(const Model::ListOutpostsRequest& request) const;

        /**
         * A Callable wrapper for ListOutposts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListOutpostsRequestT = Model::ListOutpostsRequest>
        Model::ListOutpostsOutcomeCallable ListOutpostsCallable(const ListOutpostsRequestT& request) const
        {
            return SubmitCallable(&OutpostsClient::ListOutposts, request);
        }

        /**
         * An Async wrapper for ListOutposts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListOutpostsRequestT = Model::ListOutpostsRequest>
        void ListOutpostsAsync(const ListOutpostsRequestT& request, const ListOutpostsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OutpostsClient::ListOutposts, request, handler, context);
        }

        /**
         * <p>Lists the Outpost sites for your Amazon Web Services account. Use filters to
         * return specific results.</p> <p>Use filters to return specific results. If you
         * specify multiple filters, the results include only the resources that match all
         * of the specified filters. For a filter where you can specify multiple values,
         * the results include items that match any of the values that you specify for the
         * filter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/ListSites">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSitesOutcome ListSites(const Model::ListSitesRequest& request) const;

        /**
         * A Callable wrapper for ListSites that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSitesRequestT = Model::ListSitesRequest>
        Model::ListSitesOutcomeCallable ListSitesCallable(const ListSitesRequestT& request) const
        {
            return SubmitCallable(&OutpostsClient::ListSites, request);
        }

        /**
         * An Async wrapper for ListSites that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSitesRequestT = Model::ListSitesRequest>
        void ListSitesAsync(const ListSitesRequestT& request, const ListSitesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OutpostsClient::ListSites, request, handler, context);
        }

        /**
         * <p>Lists the tags for the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&OutpostsClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OutpostsClient::ListTagsForResource, request, handler, context);
        }

        /**
         *  <p> Amazon Web Services uses this action to install Outpost servers.</p>
         *  <p> Starts the connection required for Outpost server installation. </p>
         * <p> Use CloudTrail to monitor this action or Amazon Web Services managed policy
         * for Amazon Web Services Outposts to secure it. For more information, see <a
         * href="https://docs.aws.amazon.com/outposts/latest/userguide/security-iam-awsmanpol.html">
         * Amazon Web Services managed policies for Amazon Web Services Outposts</a> and <a
         * href="https://docs.aws.amazon.com/outposts/latest/userguide/logging-using-cloudtrail.html">
         * Logging Amazon Web Services Outposts API calls with Amazon Web Services
         * CloudTrail</a> in the <i>Amazon Web Services Outposts User Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/StartConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::StartConnectionOutcome StartConnection(const Model::StartConnectionRequest& request) const;

        /**
         * A Callable wrapper for StartConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartConnectionRequestT = Model::StartConnectionRequest>
        Model::StartConnectionOutcomeCallable StartConnectionCallable(const StartConnectionRequestT& request) const
        {
            return SubmitCallable(&OutpostsClient::StartConnection, request);
        }

        /**
         * An Async wrapper for StartConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartConnectionRequestT = Model::StartConnectionRequest>
        void StartConnectionAsync(const StartConnectionRequestT& request, const StartConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OutpostsClient::StartConnection, request, handler, context);
        }

        /**
         * <p>Adds tags to the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&OutpostsClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OutpostsClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes tags from the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&OutpostsClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OutpostsClient::UntagResource, request, handler, context);
        }

        /**
         * <p> Updates an Outpost. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/UpdateOutpost">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateOutpostOutcome UpdateOutpost(const Model::UpdateOutpostRequest& request) const;

        /**
         * A Callable wrapper for UpdateOutpost that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateOutpostRequestT = Model::UpdateOutpostRequest>
        Model::UpdateOutpostOutcomeCallable UpdateOutpostCallable(const UpdateOutpostRequestT& request) const
        {
            return SubmitCallable(&OutpostsClient::UpdateOutpost, request);
        }

        /**
         * An Async wrapper for UpdateOutpost that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateOutpostRequestT = Model::UpdateOutpostRequest>
        void UpdateOutpostAsync(const UpdateOutpostRequestT& request, const UpdateOutpostResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OutpostsClient::UpdateOutpost, request, handler, context);
        }

        /**
         * <p>Updates the specified site.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/UpdateSite">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSiteOutcome UpdateSite(const Model::UpdateSiteRequest& request) const;

        /**
         * A Callable wrapper for UpdateSite that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSiteRequestT = Model::UpdateSiteRequest>
        Model::UpdateSiteOutcomeCallable UpdateSiteCallable(const UpdateSiteRequestT& request) const
        {
            return SubmitCallable(&OutpostsClient::UpdateSite, request);
        }

        /**
         * An Async wrapper for UpdateSite that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSiteRequestT = Model::UpdateSiteRequest>
        void UpdateSiteAsync(const UpdateSiteRequestT& request, const UpdateSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OutpostsClient::UpdateSite, request, handler, context);
        }

        /**
         * <p>Updates the address of the specified site.</p> <p>You can't update a site
         * address if there is an order in progress. You must wait for the order to
         * complete or cancel the order.</p> <p>You can update the operating address before
         * you place an order at the site, or after all Outposts that belong to the site
         * have been deactivated.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/UpdateSiteAddress">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSiteAddressOutcome UpdateSiteAddress(const Model::UpdateSiteAddressRequest& request) const;

        /**
         * A Callable wrapper for UpdateSiteAddress that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSiteAddressRequestT = Model::UpdateSiteAddressRequest>
        Model::UpdateSiteAddressOutcomeCallable UpdateSiteAddressCallable(const UpdateSiteAddressRequestT& request) const
        {
            return SubmitCallable(&OutpostsClient::UpdateSiteAddress, request);
        }

        /**
         * An Async wrapper for UpdateSiteAddress that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSiteAddressRequestT = Model::UpdateSiteAddressRequest>
        void UpdateSiteAddressAsync(const UpdateSiteAddressRequestT& request, const UpdateSiteAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OutpostsClient::UpdateSiteAddress, request, handler, context);
        }

        /**
         * <p>Update the physical and logistical details for a rack at a site. For more
         * information about hardware requirements for racks, see <a
         * href="https://docs.aws.amazon.com/outposts/latest/userguide/outposts-requirements.html#checklist">Network
         * readiness checklist</a> in the Amazon Web Services Outposts User Guide. </p>
         * <p>To update a rack at a site with an order of <code>IN_PROGRESS</code>, you
         * must wait for the order to complete or cancel the order.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/UpdateSiteRackPhysicalProperties">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSiteRackPhysicalPropertiesOutcome UpdateSiteRackPhysicalProperties(const Model::UpdateSiteRackPhysicalPropertiesRequest& request) const;

        /**
         * A Callable wrapper for UpdateSiteRackPhysicalProperties that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSiteRackPhysicalPropertiesRequestT = Model::UpdateSiteRackPhysicalPropertiesRequest>
        Model::UpdateSiteRackPhysicalPropertiesOutcomeCallable UpdateSiteRackPhysicalPropertiesCallable(const UpdateSiteRackPhysicalPropertiesRequestT& request) const
        {
            return SubmitCallable(&OutpostsClient::UpdateSiteRackPhysicalProperties, request);
        }

        /**
         * An Async wrapper for UpdateSiteRackPhysicalProperties that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSiteRackPhysicalPropertiesRequestT = Model::UpdateSiteRackPhysicalPropertiesRequest>
        void UpdateSiteRackPhysicalPropertiesAsync(const UpdateSiteRackPhysicalPropertiesRequestT& request, const UpdateSiteRackPhysicalPropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OutpostsClient::UpdateSiteRackPhysicalProperties, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<OutpostsEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<OutpostsClient>;
      void init(const OutpostsClientConfiguration& clientConfiguration);

      OutpostsClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<OutpostsEndpointProviderBase> m_endpointProvider;
  };

} // namespace Outposts
} // namespace Aws
