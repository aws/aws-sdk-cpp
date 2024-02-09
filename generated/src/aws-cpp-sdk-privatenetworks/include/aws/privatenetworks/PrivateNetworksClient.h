/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/privatenetworks/PrivateNetworksServiceClientModel.h>
#include <aws/privatenetworks/model/PingRequest.h>

namespace Aws
{
namespace PrivateNetworks
{
  /**
   * <p>Amazon Web Services Private 5G is a managed service that makes it easy to
   * deploy, operate, and scale your own private mobile network at your on-premises
   * location. Private 5G provides the pre-configured hardware and software for
   * mobile networks, helps automate setup, and scales capacity on demand to support
   * additional devices as needed.</p>
   */
  class AWS_PRIVATENETWORKS_API PrivateNetworksClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<PrivateNetworksClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef PrivateNetworksClientConfiguration ClientConfigurationType;
      typedef PrivateNetworksEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PrivateNetworksClient(const Aws::PrivateNetworks::PrivateNetworksClientConfiguration& clientConfiguration = Aws::PrivateNetworks::PrivateNetworksClientConfiguration(),
                              std::shared_ptr<PrivateNetworksEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PrivateNetworksClient(const Aws::Auth::AWSCredentials& credentials,
                              std::shared_ptr<PrivateNetworksEndpointProviderBase> endpointProvider = nullptr,
                              const Aws::PrivateNetworks::PrivateNetworksClientConfiguration& clientConfiguration = Aws::PrivateNetworks::PrivateNetworksClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        PrivateNetworksClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                              std::shared_ptr<PrivateNetworksEndpointProviderBase> endpointProvider = nullptr,
                              const Aws::PrivateNetworks::PrivateNetworksClientConfiguration& clientConfiguration = Aws::PrivateNetworks::PrivateNetworksClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PrivateNetworksClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PrivateNetworksClient(const Aws::Auth::AWSCredentials& credentials,
                              const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        PrivateNetworksClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                              const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~PrivateNetworksClient();

        /**
         * <p>Acknowledges that the specified network order was received.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/AcknowledgeOrderReceipt">AWS
         * API Reference</a></p>
         */
        virtual Model::AcknowledgeOrderReceiptOutcome AcknowledgeOrderReceipt(const Model::AcknowledgeOrderReceiptRequest& request) const;

        /**
         * A Callable wrapper for AcknowledgeOrderReceipt that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AcknowledgeOrderReceiptRequestT = Model::AcknowledgeOrderReceiptRequest>
        Model::AcknowledgeOrderReceiptOutcomeCallable AcknowledgeOrderReceiptCallable(const AcknowledgeOrderReceiptRequestT& request) const
        {
            return SubmitCallable(&PrivateNetworksClient::AcknowledgeOrderReceipt, request);
        }

        /**
         * An Async wrapper for AcknowledgeOrderReceipt that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AcknowledgeOrderReceiptRequestT = Model::AcknowledgeOrderReceiptRequest>
        void AcknowledgeOrderReceiptAsync(const AcknowledgeOrderReceiptRequestT& request, const AcknowledgeOrderReceiptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrivateNetworksClient::AcknowledgeOrderReceipt, request, handler, context);
        }

        /**
         * <p>Activates the specified device identifier.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/ActivateDeviceIdentifier">AWS
         * API Reference</a></p>
         */
        virtual Model::ActivateDeviceIdentifierOutcome ActivateDeviceIdentifier(const Model::ActivateDeviceIdentifierRequest& request) const;

        /**
         * A Callable wrapper for ActivateDeviceIdentifier that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ActivateDeviceIdentifierRequestT = Model::ActivateDeviceIdentifierRequest>
        Model::ActivateDeviceIdentifierOutcomeCallable ActivateDeviceIdentifierCallable(const ActivateDeviceIdentifierRequestT& request) const
        {
            return SubmitCallable(&PrivateNetworksClient::ActivateDeviceIdentifier, request);
        }

        /**
         * An Async wrapper for ActivateDeviceIdentifier that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ActivateDeviceIdentifierRequestT = Model::ActivateDeviceIdentifierRequest>
        void ActivateDeviceIdentifierAsync(const ActivateDeviceIdentifierRequestT& request, const ActivateDeviceIdentifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrivateNetworksClient::ActivateDeviceIdentifier, request, handler, context);
        }

        /**
         * <p>Activates the specified network site.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/ActivateNetworkSite">AWS
         * API Reference</a></p>
         */
        virtual Model::ActivateNetworkSiteOutcome ActivateNetworkSite(const Model::ActivateNetworkSiteRequest& request) const;

        /**
         * A Callable wrapper for ActivateNetworkSite that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ActivateNetworkSiteRequestT = Model::ActivateNetworkSiteRequest>
        Model::ActivateNetworkSiteOutcomeCallable ActivateNetworkSiteCallable(const ActivateNetworkSiteRequestT& request) const
        {
            return SubmitCallable(&PrivateNetworksClient::ActivateNetworkSite, request);
        }

        /**
         * An Async wrapper for ActivateNetworkSite that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ActivateNetworkSiteRequestT = Model::ActivateNetworkSiteRequest>
        void ActivateNetworkSiteAsync(const ActivateNetworkSiteRequestT& request, const ActivateNetworkSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrivateNetworksClient::ActivateNetworkSite, request, handler, context);
        }

        /**
         * <p>Configures the specified network resource. </p> <p> Use this action to
         * specify the geographic position of the hardware. You must provide Certified
         * Professional Installer (CPI) credentials in the request so that we can obtain
         * spectrum grants. For more information, see <a
         * href="https://docs.aws.amazon.com/private-networks/latest/userguide/radio-units.html">Radio
         * units</a> in the <i>Amazon Web Services Private 5G User Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/ConfigureAccessPoint">AWS
         * API Reference</a></p>
         */
        virtual Model::ConfigureAccessPointOutcome ConfigureAccessPoint(const Model::ConfigureAccessPointRequest& request) const;

        /**
         * A Callable wrapper for ConfigureAccessPoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ConfigureAccessPointRequestT = Model::ConfigureAccessPointRequest>
        Model::ConfigureAccessPointOutcomeCallable ConfigureAccessPointCallable(const ConfigureAccessPointRequestT& request) const
        {
            return SubmitCallable(&PrivateNetworksClient::ConfigureAccessPoint, request);
        }

        /**
         * An Async wrapper for ConfigureAccessPoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ConfigureAccessPointRequestT = Model::ConfigureAccessPointRequest>
        void ConfigureAccessPointAsync(const ConfigureAccessPointRequestT& request, const ConfigureAccessPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrivateNetworksClient::ConfigureAccessPoint, request, handler, context);
        }

        /**
         * <p>Creates a network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/CreateNetwork">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNetworkOutcome CreateNetwork(const Model::CreateNetworkRequest& request) const;

        /**
         * A Callable wrapper for CreateNetwork that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateNetworkRequestT = Model::CreateNetworkRequest>
        Model::CreateNetworkOutcomeCallable CreateNetworkCallable(const CreateNetworkRequestT& request) const
        {
            return SubmitCallable(&PrivateNetworksClient::CreateNetwork, request);
        }

        /**
         * An Async wrapper for CreateNetwork that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateNetworkRequestT = Model::CreateNetworkRequest>
        void CreateNetworkAsync(const CreateNetworkRequestT& request, const CreateNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrivateNetworksClient::CreateNetwork, request, handler, context);
        }

        /**
         * <p>Creates a network site.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/CreateNetworkSite">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNetworkSiteOutcome CreateNetworkSite(const Model::CreateNetworkSiteRequest& request) const;

        /**
         * A Callable wrapper for CreateNetworkSite that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateNetworkSiteRequestT = Model::CreateNetworkSiteRequest>
        Model::CreateNetworkSiteOutcomeCallable CreateNetworkSiteCallable(const CreateNetworkSiteRequestT& request) const
        {
            return SubmitCallable(&PrivateNetworksClient::CreateNetworkSite, request);
        }

        /**
         * An Async wrapper for CreateNetworkSite that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateNetworkSiteRequestT = Model::CreateNetworkSiteRequest>
        void CreateNetworkSiteAsync(const CreateNetworkSiteRequestT& request, const CreateNetworkSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrivateNetworksClient::CreateNetworkSite, request, handler, context);
        }

        /**
         * <p>Deactivates the specified device identifier.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/DeactivateDeviceIdentifier">AWS
         * API Reference</a></p>
         */
        virtual Model::DeactivateDeviceIdentifierOutcome DeactivateDeviceIdentifier(const Model::DeactivateDeviceIdentifierRequest& request) const;

        /**
         * A Callable wrapper for DeactivateDeviceIdentifier that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeactivateDeviceIdentifierRequestT = Model::DeactivateDeviceIdentifierRequest>
        Model::DeactivateDeviceIdentifierOutcomeCallable DeactivateDeviceIdentifierCallable(const DeactivateDeviceIdentifierRequestT& request) const
        {
            return SubmitCallable(&PrivateNetworksClient::DeactivateDeviceIdentifier, request);
        }

        /**
         * An Async wrapper for DeactivateDeviceIdentifier that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeactivateDeviceIdentifierRequestT = Model::DeactivateDeviceIdentifierRequest>
        void DeactivateDeviceIdentifierAsync(const DeactivateDeviceIdentifierRequestT& request, const DeactivateDeviceIdentifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrivateNetworksClient::DeactivateDeviceIdentifier, request, handler, context);
        }

        /**
         * <p>Deletes the specified network. You must delete network sites before you
         * delete the network. For more information, see <a
         * href="https://docs.aws.amazon.com/private-networks/latest/APIReference/API_DeleteNetworkSite.html">DeleteNetworkSite</a>
         * in the <i>API Reference for Amazon Web Services Private 5G</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/DeleteNetwork">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNetworkOutcome DeleteNetwork(const Model::DeleteNetworkRequest& request) const;

        /**
         * A Callable wrapper for DeleteNetwork that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteNetworkRequestT = Model::DeleteNetworkRequest>
        Model::DeleteNetworkOutcomeCallable DeleteNetworkCallable(const DeleteNetworkRequestT& request) const
        {
            return SubmitCallable(&PrivateNetworksClient::DeleteNetwork, request);
        }

        /**
         * An Async wrapper for DeleteNetwork that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteNetworkRequestT = Model::DeleteNetworkRequest>
        void DeleteNetworkAsync(const DeleteNetworkRequestT& request, const DeleteNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrivateNetworksClient::DeleteNetwork, request, handler, context);
        }

        /**
         * <p>Deletes the specified network site. Return the hardware after you delete the
         * network site. You are responsible for minimum charges. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/private-networks/latest/userguide/hardware-maintenance.html">Hardware
         * returns</a> in the <i>Amazon Web Services Private 5G User Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/DeleteNetworkSite">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNetworkSiteOutcome DeleteNetworkSite(const Model::DeleteNetworkSiteRequest& request) const;

        /**
         * A Callable wrapper for DeleteNetworkSite that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteNetworkSiteRequestT = Model::DeleteNetworkSiteRequest>
        Model::DeleteNetworkSiteOutcomeCallable DeleteNetworkSiteCallable(const DeleteNetworkSiteRequestT& request) const
        {
            return SubmitCallable(&PrivateNetworksClient::DeleteNetworkSite, request);
        }

        /**
         * An Async wrapper for DeleteNetworkSite that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteNetworkSiteRequestT = Model::DeleteNetworkSiteRequest>
        void DeleteNetworkSiteAsync(const DeleteNetworkSiteRequestT& request, const DeleteNetworkSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrivateNetworksClient::DeleteNetworkSite, request, handler, context);
        }

        /**
         * <p>Gets the specified device identifier.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/GetDeviceIdentifier">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeviceIdentifierOutcome GetDeviceIdentifier(const Model::GetDeviceIdentifierRequest& request) const;

        /**
         * A Callable wrapper for GetDeviceIdentifier that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDeviceIdentifierRequestT = Model::GetDeviceIdentifierRequest>
        Model::GetDeviceIdentifierOutcomeCallable GetDeviceIdentifierCallable(const GetDeviceIdentifierRequestT& request) const
        {
            return SubmitCallable(&PrivateNetworksClient::GetDeviceIdentifier, request);
        }

        /**
         * An Async wrapper for GetDeviceIdentifier that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDeviceIdentifierRequestT = Model::GetDeviceIdentifierRequest>
        void GetDeviceIdentifierAsync(const GetDeviceIdentifierRequestT& request, const GetDeviceIdentifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrivateNetworksClient::GetDeviceIdentifier, request, handler, context);
        }

        /**
         * <p>Gets the specified network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/GetNetwork">AWS
         * API Reference</a></p>
         */
        virtual Model::GetNetworkOutcome GetNetwork(const Model::GetNetworkRequest& request) const;

        /**
         * A Callable wrapper for GetNetwork that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetNetworkRequestT = Model::GetNetworkRequest>
        Model::GetNetworkOutcomeCallable GetNetworkCallable(const GetNetworkRequestT& request) const
        {
            return SubmitCallable(&PrivateNetworksClient::GetNetwork, request);
        }

        /**
         * An Async wrapper for GetNetwork that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetNetworkRequestT = Model::GetNetworkRequest>
        void GetNetworkAsync(const GetNetworkRequestT& request, const GetNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrivateNetworksClient::GetNetwork, request, handler, context);
        }

        /**
         * <p>Gets the specified network resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/GetNetworkResource">AWS
         * API Reference</a></p>
         */
        virtual Model::GetNetworkResourceOutcome GetNetworkResource(const Model::GetNetworkResourceRequest& request) const;

        /**
         * A Callable wrapper for GetNetworkResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetNetworkResourceRequestT = Model::GetNetworkResourceRequest>
        Model::GetNetworkResourceOutcomeCallable GetNetworkResourceCallable(const GetNetworkResourceRequestT& request) const
        {
            return SubmitCallable(&PrivateNetworksClient::GetNetworkResource, request);
        }

        /**
         * An Async wrapper for GetNetworkResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetNetworkResourceRequestT = Model::GetNetworkResourceRequest>
        void GetNetworkResourceAsync(const GetNetworkResourceRequestT& request, const GetNetworkResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrivateNetworksClient::GetNetworkResource, request, handler, context);
        }

        /**
         * <p>Gets the specified network site.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/GetNetworkSite">AWS
         * API Reference</a></p>
         */
        virtual Model::GetNetworkSiteOutcome GetNetworkSite(const Model::GetNetworkSiteRequest& request) const;

        /**
         * A Callable wrapper for GetNetworkSite that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetNetworkSiteRequestT = Model::GetNetworkSiteRequest>
        Model::GetNetworkSiteOutcomeCallable GetNetworkSiteCallable(const GetNetworkSiteRequestT& request) const
        {
            return SubmitCallable(&PrivateNetworksClient::GetNetworkSite, request);
        }

        /**
         * An Async wrapper for GetNetworkSite that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetNetworkSiteRequestT = Model::GetNetworkSiteRequest>
        void GetNetworkSiteAsync(const GetNetworkSiteRequestT& request, const GetNetworkSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrivateNetworksClient::GetNetworkSite, request, handler, context);
        }

        /**
         * <p>Gets the specified order.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/GetOrder">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOrderOutcome GetOrder(const Model::GetOrderRequest& request) const;

        /**
         * A Callable wrapper for GetOrder that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetOrderRequestT = Model::GetOrderRequest>
        Model::GetOrderOutcomeCallable GetOrderCallable(const GetOrderRequestT& request) const
        {
            return SubmitCallable(&PrivateNetworksClient::GetOrder, request);
        }

        /**
         * An Async wrapper for GetOrder that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetOrderRequestT = Model::GetOrderRequest>
        void GetOrderAsync(const GetOrderRequestT& request, const GetOrderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrivateNetworksClient::GetOrder, request, handler, context);
        }

        /**
         * <p>Lists device identifiers. Add filters to your request to return a more
         * specific list of results. Use filters to match the Amazon Resource Name (ARN) of
         * an order, the status of device identifiers, or the ARN of the traffic group.</p>
         * <p>If you specify multiple filters, filters are joined with an OR, and the
         * request returns results that match all of the specified filters.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/ListDeviceIdentifiers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDeviceIdentifiersOutcome ListDeviceIdentifiers(const Model::ListDeviceIdentifiersRequest& request) const;

        /**
         * A Callable wrapper for ListDeviceIdentifiers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDeviceIdentifiersRequestT = Model::ListDeviceIdentifiersRequest>
        Model::ListDeviceIdentifiersOutcomeCallable ListDeviceIdentifiersCallable(const ListDeviceIdentifiersRequestT& request) const
        {
            return SubmitCallable(&PrivateNetworksClient::ListDeviceIdentifiers, request);
        }

        /**
         * An Async wrapper for ListDeviceIdentifiers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDeviceIdentifiersRequestT = Model::ListDeviceIdentifiersRequest>
        void ListDeviceIdentifiersAsync(const ListDeviceIdentifiersRequestT& request, const ListDeviceIdentifiersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrivateNetworksClient::ListDeviceIdentifiers, request, handler, context);
        }

        /**
         * <p>Lists network resources. Add filters to your request to return a more
         * specific list of results. Use filters to match the Amazon Resource Name (ARN) of
         * an order or the status of network resources.</p> <p>If you specify multiple
         * filters, filters are joined with an OR, and the request returns results that
         * match all of the specified filters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/ListNetworkResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNetworkResourcesOutcome ListNetworkResources(const Model::ListNetworkResourcesRequest& request) const;

        /**
         * A Callable wrapper for ListNetworkResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListNetworkResourcesRequestT = Model::ListNetworkResourcesRequest>
        Model::ListNetworkResourcesOutcomeCallable ListNetworkResourcesCallable(const ListNetworkResourcesRequestT& request) const
        {
            return SubmitCallable(&PrivateNetworksClient::ListNetworkResources, request);
        }

        /**
         * An Async wrapper for ListNetworkResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListNetworkResourcesRequestT = Model::ListNetworkResourcesRequest>
        void ListNetworkResourcesAsync(const ListNetworkResourcesRequestT& request, const ListNetworkResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrivateNetworksClient::ListNetworkResources, request, handler, context);
        }

        /**
         * <p>Lists network sites. Add filters to your request to return a more specific
         * list of results. Use filters to match the status of the network
         * site.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/ListNetworkSites">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNetworkSitesOutcome ListNetworkSites(const Model::ListNetworkSitesRequest& request) const;

        /**
         * A Callable wrapper for ListNetworkSites that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListNetworkSitesRequestT = Model::ListNetworkSitesRequest>
        Model::ListNetworkSitesOutcomeCallable ListNetworkSitesCallable(const ListNetworkSitesRequestT& request) const
        {
            return SubmitCallable(&PrivateNetworksClient::ListNetworkSites, request);
        }

        /**
         * An Async wrapper for ListNetworkSites that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListNetworkSitesRequestT = Model::ListNetworkSitesRequest>
        void ListNetworkSitesAsync(const ListNetworkSitesRequestT& request, const ListNetworkSitesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrivateNetworksClient::ListNetworkSites, request, handler, context);
        }

        /**
         * <p>Lists networks. Add filters to your request to return a more specific list of
         * results. Use filters to match the status of the network.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/ListNetworks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNetworksOutcome ListNetworks(const Model::ListNetworksRequest& request) const;

        /**
         * A Callable wrapper for ListNetworks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListNetworksRequestT = Model::ListNetworksRequest>
        Model::ListNetworksOutcomeCallable ListNetworksCallable(const ListNetworksRequestT& request) const
        {
            return SubmitCallable(&PrivateNetworksClient::ListNetworks, request);
        }

        /**
         * An Async wrapper for ListNetworks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListNetworksRequestT = Model::ListNetworksRequest>
        void ListNetworksAsync(const ListNetworksRequestT& request, const ListNetworksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrivateNetworksClient::ListNetworks, request, handler, context);
        }

        /**
         * <p>Lists orders. Add filters to your request to return a more specific list of
         * results. Use filters to match the Amazon Resource Name (ARN) of the network site
         * or the status of the order.</p> <p>If you specify multiple filters, filters are
         * joined with an OR, and the request returns results that match all of the
         * specified filters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/ListOrders">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOrdersOutcome ListOrders(const Model::ListOrdersRequest& request) const;

        /**
         * A Callable wrapper for ListOrders that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListOrdersRequestT = Model::ListOrdersRequest>
        Model::ListOrdersOutcomeCallable ListOrdersCallable(const ListOrdersRequestT& request) const
        {
            return SubmitCallable(&PrivateNetworksClient::ListOrders, request);
        }

        /**
         * An Async wrapper for ListOrders that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListOrdersRequestT = Model::ListOrdersRequest>
        void ListOrdersAsync(const ListOrdersRequestT& request, const ListOrdersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrivateNetworksClient::ListOrders, request, handler, context);
        }

        /**
         * <p>Lists the tags for the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&PrivateNetworksClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrivateNetworksClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Checks the health of the service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/Ping">AWS
         * API Reference</a></p>
         */
        virtual Model::PingOutcome Ping(const Model::PingRequest& request = {}) const;

        /**
         * A Callable wrapper for Ping that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PingRequestT = Model::PingRequest>
        Model::PingOutcomeCallable PingCallable(const PingRequestT& request = {}) const
        {
            return SubmitCallable(&PrivateNetworksClient::Ping, request);
        }

        /**
         * An Async wrapper for Ping that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PingRequestT = Model::PingRequest>
        void PingAsync(const PingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const PingRequestT& request = {}) const
        {
            return SubmitAsync(&PrivateNetworksClient::Ping, request, handler, context);
        }

        /**
         * <p>Use this action to do the following tasks:</p> <ul> <li> <p>Update the
         * duration and renewal status of the commitment period for a radio unit. The
         * update goes into effect immediately.</p> </li> <li> <p>Request a replacement for
         * a network resource.</p> </li> <li> <p>Request that you return a network
         * resource.</p> </li> </ul> <p>After you submit a request to replace or return a
         * network resource, the status of the network resource changes to
         * <code>CREATING_SHIPPING_LABEL</code>. The shipping label is available when the
         * status of the network resource is <code>PENDING_RETURN</code>. After the network
         * resource is successfully returned, its status changes to <code>DELETED</code>.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/private-networks/latest/userguide/radio-units.html#return-radio-unit">Return
         * a radio unit</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/StartNetworkResourceUpdate">AWS
         * API Reference</a></p>
         */
        virtual Model::StartNetworkResourceUpdateOutcome StartNetworkResourceUpdate(const Model::StartNetworkResourceUpdateRequest& request) const;

        /**
         * A Callable wrapper for StartNetworkResourceUpdate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartNetworkResourceUpdateRequestT = Model::StartNetworkResourceUpdateRequest>
        Model::StartNetworkResourceUpdateOutcomeCallable StartNetworkResourceUpdateCallable(const StartNetworkResourceUpdateRequestT& request) const
        {
            return SubmitCallable(&PrivateNetworksClient::StartNetworkResourceUpdate, request);
        }

        /**
         * An Async wrapper for StartNetworkResourceUpdate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartNetworkResourceUpdateRequestT = Model::StartNetworkResourceUpdateRequest>
        void StartNetworkResourceUpdateAsync(const StartNetworkResourceUpdateRequestT& request, const StartNetworkResourceUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrivateNetworksClient::StartNetworkResourceUpdate, request, handler, context);
        }

        /**
         * <p> Adds tags to the specified resource. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&PrivateNetworksClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrivateNetworksClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes tags from the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&PrivateNetworksClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrivateNetworksClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates the specified network site.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/UpdateNetworkSite">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateNetworkSiteOutcome UpdateNetworkSite(const Model::UpdateNetworkSiteRequest& request) const;

        /**
         * A Callable wrapper for UpdateNetworkSite that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateNetworkSiteRequestT = Model::UpdateNetworkSiteRequest>
        Model::UpdateNetworkSiteOutcomeCallable UpdateNetworkSiteCallable(const UpdateNetworkSiteRequestT& request) const
        {
            return SubmitCallable(&PrivateNetworksClient::UpdateNetworkSite, request);
        }

        /**
         * An Async wrapper for UpdateNetworkSite that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateNetworkSiteRequestT = Model::UpdateNetworkSiteRequest>
        void UpdateNetworkSiteAsync(const UpdateNetworkSiteRequestT& request, const UpdateNetworkSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrivateNetworksClient::UpdateNetworkSite, request, handler, context);
        }

        /**
         * <p>Updates the specified network site plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/UpdateNetworkSitePlan">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateNetworkSitePlanOutcome UpdateNetworkSitePlan(const Model::UpdateNetworkSitePlanRequest& request) const;

        /**
         * A Callable wrapper for UpdateNetworkSitePlan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateNetworkSitePlanRequestT = Model::UpdateNetworkSitePlanRequest>
        Model::UpdateNetworkSitePlanOutcomeCallable UpdateNetworkSitePlanCallable(const UpdateNetworkSitePlanRequestT& request) const
        {
            return SubmitCallable(&PrivateNetworksClient::UpdateNetworkSitePlan, request);
        }

        /**
         * An Async wrapper for UpdateNetworkSitePlan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateNetworkSitePlanRequestT = Model::UpdateNetworkSitePlanRequest>
        void UpdateNetworkSitePlanAsync(const UpdateNetworkSitePlanRequestT& request, const UpdateNetworkSitePlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrivateNetworksClient::UpdateNetworkSitePlan, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<PrivateNetworksEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<PrivateNetworksClient>;
      void init(const PrivateNetworksClientConfiguration& clientConfiguration);

      PrivateNetworksClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<PrivateNetworksEndpointProviderBase> m_endpointProvider;
  };

} // namespace PrivateNetworks
} // namespace Aws
