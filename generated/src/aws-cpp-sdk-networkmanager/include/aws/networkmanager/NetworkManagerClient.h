/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/networkmanager/NetworkManagerServiceClientModel.h>

namespace Aws
{
namespace NetworkManager
{
  /**
   * <p>Amazon Web Services enables you to centrally manage your Amazon Web Services
   * Cloud WAN core network and your Transit Gateway network across Amazon Web
   * Services accounts, Regions, and on-premises locations.</p>
   */
  class AWS_NETWORKMANAGER_API NetworkManagerClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<NetworkManagerClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef NetworkManagerClientConfiguration ClientConfigurationType;
      typedef NetworkManagerEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        NetworkManagerClient(const Aws::NetworkManager::NetworkManagerClientConfiguration& clientConfiguration = Aws::NetworkManager::NetworkManagerClientConfiguration(),
                             std::shared_ptr<NetworkManagerEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        NetworkManagerClient(const Aws::Auth::AWSCredentials& credentials,
                             std::shared_ptr<NetworkManagerEndpointProviderBase> endpointProvider = nullptr,
                             const Aws::NetworkManager::NetworkManagerClientConfiguration& clientConfiguration = Aws::NetworkManager::NetworkManagerClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        NetworkManagerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             std::shared_ptr<NetworkManagerEndpointProviderBase> endpointProvider = nullptr,
                             const Aws::NetworkManager::NetworkManagerClientConfiguration& clientConfiguration = Aws::NetworkManager::NetworkManagerClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        NetworkManagerClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        NetworkManagerClient(const Aws::Auth::AWSCredentials& credentials,
                             const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        NetworkManagerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~NetworkManagerClient();

        /**
         * <p>Accepts a core network attachment request. </p> <p>Once the attachment
         * request is accepted by a core network owner, the attachment is created and
         * connected to a core network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/AcceptAttachment">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptAttachmentOutcome AcceptAttachment(const Model::AcceptAttachmentRequest& request) const;

        /**
         * A Callable wrapper for AcceptAttachment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AcceptAttachmentRequestT = Model::AcceptAttachmentRequest>
        Model::AcceptAttachmentOutcomeCallable AcceptAttachmentCallable(const AcceptAttachmentRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::AcceptAttachment, request);
        }

        /**
         * An Async wrapper for AcceptAttachment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AcceptAttachmentRequestT = Model::AcceptAttachmentRequest>
        void AcceptAttachmentAsync(const AcceptAttachmentRequestT& request, const AcceptAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::AcceptAttachment, request, handler, context);
        }

        /**
         * <p>Associates a core network Connect peer with a device and optionally, with a
         * link. </p> <p>If you specify a link, it must be associated with the specified
         * device. You can only associate core network Connect peers that have been created
         * on a core network Connect attachment on a core network. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/AssociateConnectPeer">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateConnectPeerOutcome AssociateConnectPeer(const Model::AssociateConnectPeerRequest& request) const;

        /**
         * A Callable wrapper for AssociateConnectPeer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateConnectPeerRequestT = Model::AssociateConnectPeerRequest>
        Model::AssociateConnectPeerOutcomeCallable AssociateConnectPeerCallable(const AssociateConnectPeerRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::AssociateConnectPeer, request);
        }

        /**
         * An Async wrapper for AssociateConnectPeer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateConnectPeerRequestT = Model::AssociateConnectPeerRequest>
        void AssociateConnectPeerAsync(const AssociateConnectPeerRequestT& request, const AssociateConnectPeerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::AssociateConnectPeer, request, handler, context);
        }

        /**
         * <p>Associates a customer gateway with a device and optionally, with a link. If
         * you specify a link, it must be associated with the specified device. </p> <p>You
         * can only associate customer gateways that are connected to a VPN attachment on a
         * transit gateway or core network registered in your global network. When you
         * register a transit gateway or core network, customer gateways that are connected
         * to the transit gateway are automatically included in the global network. To list
         * customer gateways that are connected to a transit gateway, use the <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_DescribeVpnConnections.html">DescribeVpnConnections</a>
         * EC2 API and filter by <code>transit-gateway-id</code>.</p> <p>You cannot
         * associate a customer gateway with more than one device and link. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/AssociateCustomerGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateCustomerGatewayOutcome AssociateCustomerGateway(const Model::AssociateCustomerGatewayRequest& request) const;

        /**
         * A Callable wrapper for AssociateCustomerGateway that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateCustomerGatewayRequestT = Model::AssociateCustomerGatewayRequest>
        Model::AssociateCustomerGatewayOutcomeCallable AssociateCustomerGatewayCallable(const AssociateCustomerGatewayRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::AssociateCustomerGateway, request);
        }

        /**
         * An Async wrapper for AssociateCustomerGateway that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateCustomerGatewayRequestT = Model::AssociateCustomerGatewayRequest>
        void AssociateCustomerGatewayAsync(const AssociateCustomerGatewayRequestT& request, const AssociateCustomerGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::AssociateCustomerGateway, request, handler, context);
        }

        /**
         * <p>Associates a link to a device. A device can be associated to multiple links
         * and a link can be associated to multiple devices. The device and link must be in
         * the same global network and the same site.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/AssociateLink">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateLinkOutcome AssociateLink(const Model::AssociateLinkRequest& request) const;

        /**
         * A Callable wrapper for AssociateLink that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateLinkRequestT = Model::AssociateLinkRequest>
        Model::AssociateLinkOutcomeCallable AssociateLinkCallable(const AssociateLinkRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::AssociateLink, request);
        }

        /**
         * An Async wrapper for AssociateLink that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateLinkRequestT = Model::AssociateLinkRequest>
        void AssociateLinkAsync(const AssociateLinkRequestT& request, const AssociateLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::AssociateLink, request, handler, context);
        }

        /**
         * <p>Associates a transit gateway Connect peer with a device, and optionally, with
         * a link. If you specify a link, it must be associated with the specified device.
         * </p> <p>You can only associate transit gateway Connect peers that have been
         * created on a transit gateway that's registered in your global network.</p>
         * <p>You cannot associate a transit gateway Connect peer with more than one device
         * and link. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/AssociateTransitGatewayConnectPeer">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateTransitGatewayConnectPeerOutcome AssociateTransitGatewayConnectPeer(const Model::AssociateTransitGatewayConnectPeerRequest& request) const;

        /**
         * A Callable wrapper for AssociateTransitGatewayConnectPeer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateTransitGatewayConnectPeerRequestT = Model::AssociateTransitGatewayConnectPeerRequest>
        Model::AssociateTransitGatewayConnectPeerOutcomeCallable AssociateTransitGatewayConnectPeerCallable(const AssociateTransitGatewayConnectPeerRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::AssociateTransitGatewayConnectPeer, request);
        }

        /**
         * An Async wrapper for AssociateTransitGatewayConnectPeer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateTransitGatewayConnectPeerRequestT = Model::AssociateTransitGatewayConnectPeerRequest>
        void AssociateTransitGatewayConnectPeerAsync(const AssociateTransitGatewayConnectPeerRequestT& request, const AssociateTransitGatewayConnectPeerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::AssociateTransitGatewayConnectPeer, request, handler, context);
        }

        /**
         * <p>Creates a core network Connect attachment from a specified core network
         * attachment. </p> <p>A core network Connect attachment is a GRE-based tunnel
         * attachment that you can use to establish a connection between a core network and
         * an appliance. A core network Connect attachment uses an existing VPC attachment
         * as the underlying transport mechanism.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/CreateConnectAttachment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConnectAttachmentOutcome CreateConnectAttachment(const Model::CreateConnectAttachmentRequest& request) const;

        /**
         * A Callable wrapper for CreateConnectAttachment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateConnectAttachmentRequestT = Model::CreateConnectAttachmentRequest>
        Model::CreateConnectAttachmentOutcomeCallable CreateConnectAttachmentCallable(const CreateConnectAttachmentRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::CreateConnectAttachment, request);
        }

        /**
         * An Async wrapper for CreateConnectAttachment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateConnectAttachmentRequestT = Model::CreateConnectAttachmentRequest>
        void CreateConnectAttachmentAsync(const CreateConnectAttachmentRequestT& request, const CreateConnectAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::CreateConnectAttachment, request, handler, context);
        }

        /**
         * <p>Creates a core network Connect peer for a specified core network connect
         * attachment between a core network and an appliance. The peer address and transit
         * gateway address must be the same IP address family (IPv4 or IPv6).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/CreateConnectPeer">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConnectPeerOutcome CreateConnectPeer(const Model::CreateConnectPeerRequest& request) const;

        /**
         * A Callable wrapper for CreateConnectPeer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateConnectPeerRequestT = Model::CreateConnectPeerRequest>
        Model::CreateConnectPeerOutcomeCallable CreateConnectPeerCallable(const CreateConnectPeerRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::CreateConnectPeer, request);
        }

        /**
         * An Async wrapper for CreateConnectPeer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateConnectPeerRequestT = Model::CreateConnectPeerRequest>
        void CreateConnectPeerAsync(const CreateConnectPeerRequestT& request, const CreateConnectPeerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::CreateConnectPeer, request, handler, context);
        }

        /**
         * <p>Creates a connection between two devices. The devices can be a physical or
         * virtual appliance that connects to a third-party appliance in a VPC, or a
         * physical appliance that connects to another physical appliance in an on-premises
         * network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/CreateConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConnectionOutcome CreateConnection(const Model::CreateConnectionRequest& request) const;

        /**
         * A Callable wrapper for CreateConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateConnectionRequestT = Model::CreateConnectionRequest>
        Model::CreateConnectionOutcomeCallable CreateConnectionCallable(const CreateConnectionRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::CreateConnection, request);
        }

        /**
         * An Async wrapper for CreateConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateConnectionRequestT = Model::CreateConnectionRequest>
        void CreateConnectionAsync(const CreateConnectionRequestT& request, const CreateConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::CreateConnection, request, handler, context);
        }

        /**
         * <p>Creates a core network as part of your global network, and optionally, with a
         * core network policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/CreateCoreNetwork">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCoreNetworkOutcome CreateCoreNetwork(const Model::CreateCoreNetworkRequest& request) const;

        /**
         * A Callable wrapper for CreateCoreNetwork that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateCoreNetworkRequestT = Model::CreateCoreNetworkRequest>
        Model::CreateCoreNetworkOutcomeCallable CreateCoreNetworkCallable(const CreateCoreNetworkRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::CreateCoreNetwork, request);
        }

        /**
         * An Async wrapper for CreateCoreNetwork that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateCoreNetworkRequestT = Model::CreateCoreNetworkRequest>
        void CreateCoreNetworkAsync(const CreateCoreNetworkRequestT& request, const CreateCoreNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::CreateCoreNetwork, request, handler, context);
        }

        /**
         * <p>Creates a new device in a global network. If you specify both a site ID and a
         * location, the location of the site is used for visualization in the Network
         * Manager console.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/CreateDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDeviceOutcome CreateDevice(const Model::CreateDeviceRequest& request) const;

        /**
         * A Callable wrapper for CreateDevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDeviceRequestT = Model::CreateDeviceRequest>
        Model::CreateDeviceOutcomeCallable CreateDeviceCallable(const CreateDeviceRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::CreateDevice, request);
        }

        /**
         * An Async wrapper for CreateDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDeviceRequestT = Model::CreateDeviceRequest>
        void CreateDeviceAsync(const CreateDeviceRequestT& request, const CreateDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::CreateDevice, request, handler, context);
        }

        /**
         * <p>Creates a new, empty global network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/CreateGlobalNetwork">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGlobalNetworkOutcome CreateGlobalNetwork(const Model::CreateGlobalNetworkRequest& request) const;

        /**
         * A Callable wrapper for CreateGlobalNetwork that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateGlobalNetworkRequestT = Model::CreateGlobalNetworkRequest>
        Model::CreateGlobalNetworkOutcomeCallable CreateGlobalNetworkCallable(const CreateGlobalNetworkRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::CreateGlobalNetwork, request);
        }

        /**
         * An Async wrapper for CreateGlobalNetwork that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateGlobalNetworkRequestT = Model::CreateGlobalNetworkRequest>
        void CreateGlobalNetworkAsync(const CreateGlobalNetworkRequestT& request, const CreateGlobalNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::CreateGlobalNetwork, request, handler, context);
        }

        /**
         * <p>Creates a new link for a specified site.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/CreateLink">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLinkOutcome CreateLink(const Model::CreateLinkRequest& request) const;

        /**
         * A Callable wrapper for CreateLink that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateLinkRequestT = Model::CreateLinkRequest>
        Model::CreateLinkOutcomeCallable CreateLinkCallable(const CreateLinkRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::CreateLink, request);
        }

        /**
         * An Async wrapper for CreateLink that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateLinkRequestT = Model::CreateLinkRequest>
        void CreateLinkAsync(const CreateLinkRequestT& request, const CreateLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::CreateLink, request, handler, context);
        }

        /**
         * <p>Creates a new site in a global network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/CreateSite">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSiteOutcome CreateSite(const Model::CreateSiteRequest& request) const;

        /**
         * A Callable wrapper for CreateSite that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSiteRequestT = Model::CreateSiteRequest>
        Model::CreateSiteOutcomeCallable CreateSiteCallable(const CreateSiteRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::CreateSite, request);
        }

        /**
         * An Async wrapper for CreateSite that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSiteRequestT = Model::CreateSiteRequest>
        void CreateSiteAsync(const CreateSiteRequestT& request, const CreateSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::CreateSite, request, handler, context);
        }

        /**
         * <p>Creates an Amazon Web Services site-to-site VPN attachment on an edge
         * location of a core network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/CreateSiteToSiteVpnAttachment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSiteToSiteVpnAttachmentOutcome CreateSiteToSiteVpnAttachment(const Model::CreateSiteToSiteVpnAttachmentRequest& request) const;

        /**
         * A Callable wrapper for CreateSiteToSiteVpnAttachment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSiteToSiteVpnAttachmentRequestT = Model::CreateSiteToSiteVpnAttachmentRequest>
        Model::CreateSiteToSiteVpnAttachmentOutcomeCallable CreateSiteToSiteVpnAttachmentCallable(const CreateSiteToSiteVpnAttachmentRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::CreateSiteToSiteVpnAttachment, request);
        }

        /**
         * An Async wrapper for CreateSiteToSiteVpnAttachment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSiteToSiteVpnAttachmentRequestT = Model::CreateSiteToSiteVpnAttachmentRequest>
        void CreateSiteToSiteVpnAttachmentAsync(const CreateSiteToSiteVpnAttachmentRequestT& request, const CreateSiteToSiteVpnAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::CreateSiteToSiteVpnAttachment, request, handler, context);
        }

        /**
         * <p>Creates a transit gateway peering connection.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/CreateTransitGatewayPeering">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTransitGatewayPeeringOutcome CreateTransitGatewayPeering(const Model::CreateTransitGatewayPeeringRequest& request) const;

        /**
         * A Callable wrapper for CreateTransitGatewayPeering that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateTransitGatewayPeeringRequestT = Model::CreateTransitGatewayPeeringRequest>
        Model::CreateTransitGatewayPeeringOutcomeCallable CreateTransitGatewayPeeringCallable(const CreateTransitGatewayPeeringRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::CreateTransitGatewayPeering, request);
        }

        /**
         * An Async wrapper for CreateTransitGatewayPeering that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateTransitGatewayPeeringRequestT = Model::CreateTransitGatewayPeeringRequest>
        void CreateTransitGatewayPeeringAsync(const CreateTransitGatewayPeeringRequestT& request, const CreateTransitGatewayPeeringResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::CreateTransitGatewayPeering, request, handler, context);
        }

        /**
         * <p>Creates a transit gateway route table attachment.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/CreateTransitGatewayRouteTableAttachment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTransitGatewayRouteTableAttachmentOutcome CreateTransitGatewayRouteTableAttachment(const Model::CreateTransitGatewayRouteTableAttachmentRequest& request) const;

        /**
         * A Callable wrapper for CreateTransitGatewayRouteTableAttachment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateTransitGatewayRouteTableAttachmentRequestT = Model::CreateTransitGatewayRouteTableAttachmentRequest>
        Model::CreateTransitGatewayRouteTableAttachmentOutcomeCallable CreateTransitGatewayRouteTableAttachmentCallable(const CreateTransitGatewayRouteTableAttachmentRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::CreateTransitGatewayRouteTableAttachment, request);
        }

        /**
         * An Async wrapper for CreateTransitGatewayRouteTableAttachment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateTransitGatewayRouteTableAttachmentRequestT = Model::CreateTransitGatewayRouteTableAttachmentRequest>
        void CreateTransitGatewayRouteTableAttachmentAsync(const CreateTransitGatewayRouteTableAttachmentRequestT& request, const CreateTransitGatewayRouteTableAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::CreateTransitGatewayRouteTableAttachment, request, handler, context);
        }

        /**
         * <p>Creates a VPC attachment on an edge location of a core network.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/CreateVpcAttachment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVpcAttachmentOutcome CreateVpcAttachment(const Model::CreateVpcAttachmentRequest& request) const;

        /**
         * A Callable wrapper for CreateVpcAttachment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateVpcAttachmentRequestT = Model::CreateVpcAttachmentRequest>
        Model::CreateVpcAttachmentOutcomeCallable CreateVpcAttachmentCallable(const CreateVpcAttachmentRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::CreateVpcAttachment, request);
        }

        /**
         * An Async wrapper for CreateVpcAttachment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateVpcAttachmentRequestT = Model::CreateVpcAttachmentRequest>
        void CreateVpcAttachmentAsync(const CreateVpcAttachmentRequestT& request, const CreateVpcAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::CreateVpcAttachment, request, handler, context);
        }

        /**
         * <p>Deletes an attachment. Supports all attachment types.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DeleteAttachment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAttachmentOutcome DeleteAttachment(const Model::DeleteAttachmentRequest& request) const;

        /**
         * A Callable wrapper for DeleteAttachment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAttachmentRequestT = Model::DeleteAttachmentRequest>
        Model::DeleteAttachmentOutcomeCallable DeleteAttachmentCallable(const DeleteAttachmentRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::DeleteAttachment, request);
        }

        /**
         * An Async wrapper for DeleteAttachment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAttachmentRequestT = Model::DeleteAttachmentRequest>
        void DeleteAttachmentAsync(const DeleteAttachmentRequestT& request, const DeleteAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::DeleteAttachment, request, handler, context);
        }

        /**
         * <p>Deletes a Connect peer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DeleteConnectPeer">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConnectPeerOutcome DeleteConnectPeer(const Model::DeleteConnectPeerRequest& request) const;

        /**
         * A Callable wrapper for DeleteConnectPeer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteConnectPeerRequestT = Model::DeleteConnectPeerRequest>
        Model::DeleteConnectPeerOutcomeCallable DeleteConnectPeerCallable(const DeleteConnectPeerRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::DeleteConnectPeer, request);
        }

        /**
         * An Async wrapper for DeleteConnectPeer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteConnectPeerRequestT = Model::DeleteConnectPeerRequest>
        void DeleteConnectPeerAsync(const DeleteConnectPeerRequestT& request, const DeleteConnectPeerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::DeleteConnectPeer, request, handler, context);
        }

        /**
         * <p>Deletes the specified connection in your global network.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DeleteConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConnectionOutcome DeleteConnection(const Model::DeleteConnectionRequest& request) const;

        /**
         * A Callable wrapper for DeleteConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteConnectionRequestT = Model::DeleteConnectionRequest>
        Model::DeleteConnectionOutcomeCallable DeleteConnectionCallable(const DeleteConnectionRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::DeleteConnection, request);
        }

        /**
         * An Async wrapper for DeleteConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteConnectionRequestT = Model::DeleteConnectionRequest>
        void DeleteConnectionAsync(const DeleteConnectionRequestT& request, const DeleteConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::DeleteConnection, request, handler, context);
        }

        /**
         * <p>Deletes a core network along with all core network policies. This can only be
         * done if there are no attachments on a core network.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DeleteCoreNetwork">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCoreNetworkOutcome DeleteCoreNetwork(const Model::DeleteCoreNetworkRequest& request) const;

        /**
         * A Callable wrapper for DeleteCoreNetwork that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteCoreNetworkRequestT = Model::DeleteCoreNetworkRequest>
        Model::DeleteCoreNetworkOutcomeCallable DeleteCoreNetworkCallable(const DeleteCoreNetworkRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::DeleteCoreNetwork, request);
        }

        /**
         * An Async wrapper for DeleteCoreNetwork that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteCoreNetworkRequestT = Model::DeleteCoreNetworkRequest>
        void DeleteCoreNetworkAsync(const DeleteCoreNetworkRequestT& request, const DeleteCoreNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::DeleteCoreNetwork, request, handler, context);
        }

        /**
         * <p>Deletes a policy version from a core network. You can't delete the current
         * LIVE policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DeleteCoreNetworkPolicyVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCoreNetworkPolicyVersionOutcome DeleteCoreNetworkPolicyVersion(const Model::DeleteCoreNetworkPolicyVersionRequest& request) const;

        /**
         * A Callable wrapper for DeleteCoreNetworkPolicyVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteCoreNetworkPolicyVersionRequestT = Model::DeleteCoreNetworkPolicyVersionRequest>
        Model::DeleteCoreNetworkPolicyVersionOutcomeCallable DeleteCoreNetworkPolicyVersionCallable(const DeleteCoreNetworkPolicyVersionRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::DeleteCoreNetworkPolicyVersion, request);
        }

        /**
         * An Async wrapper for DeleteCoreNetworkPolicyVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteCoreNetworkPolicyVersionRequestT = Model::DeleteCoreNetworkPolicyVersionRequest>
        void DeleteCoreNetworkPolicyVersionAsync(const DeleteCoreNetworkPolicyVersionRequestT& request, const DeleteCoreNetworkPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::DeleteCoreNetworkPolicyVersion, request, handler, context);
        }

        /**
         * <p>Deletes an existing device. You must first disassociate the device from any
         * links and customer gateways.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DeleteDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDeviceOutcome DeleteDevice(const Model::DeleteDeviceRequest& request) const;

        /**
         * A Callable wrapper for DeleteDevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDeviceRequestT = Model::DeleteDeviceRequest>
        Model::DeleteDeviceOutcomeCallable DeleteDeviceCallable(const DeleteDeviceRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::DeleteDevice, request);
        }

        /**
         * An Async wrapper for DeleteDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDeviceRequestT = Model::DeleteDeviceRequest>
        void DeleteDeviceAsync(const DeleteDeviceRequestT& request, const DeleteDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::DeleteDevice, request, handler, context);
        }

        /**
         * <p>Deletes an existing global network. You must first delete all global network
         * objects (devices, links, and sites), deregister all transit gateways, and delete
         * any core networks.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DeleteGlobalNetwork">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGlobalNetworkOutcome DeleteGlobalNetwork(const Model::DeleteGlobalNetworkRequest& request) const;

        /**
         * A Callable wrapper for DeleteGlobalNetwork that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteGlobalNetworkRequestT = Model::DeleteGlobalNetworkRequest>
        Model::DeleteGlobalNetworkOutcomeCallable DeleteGlobalNetworkCallable(const DeleteGlobalNetworkRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::DeleteGlobalNetwork, request);
        }

        /**
         * An Async wrapper for DeleteGlobalNetwork that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteGlobalNetworkRequestT = Model::DeleteGlobalNetworkRequest>
        void DeleteGlobalNetworkAsync(const DeleteGlobalNetworkRequestT& request, const DeleteGlobalNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::DeleteGlobalNetwork, request, handler, context);
        }

        /**
         * <p>Deletes an existing link. You must first disassociate the link from any
         * devices and customer gateways.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DeleteLink">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLinkOutcome DeleteLink(const Model::DeleteLinkRequest& request) const;

        /**
         * A Callable wrapper for DeleteLink that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteLinkRequestT = Model::DeleteLinkRequest>
        Model::DeleteLinkOutcomeCallable DeleteLinkCallable(const DeleteLinkRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::DeleteLink, request);
        }

        /**
         * An Async wrapper for DeleteLink that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteLinkRequestT = Model::DeleteLinkRequest>
        void DeleteLinkAsync(const DeleteLinkRequestT& request, const DeleteLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::DeleteLink, request, handler, context);
        }

        /**
         * <p>Deletes an existing peering connection.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DeletePeering">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePeeringOutcome DeletePeering(const Model::DeletePeeringRequest& request) const;

        /**
         * A Callable wrapper for DeletePeering that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeletePeeringRequestT = Model::DeletePeeringRequest>
        Model::DeletePeeringOutcomeCallable DeletePeeringCallable(const DeletePeeringRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::DeletePeering, request);
        }

        /**
         * An Async wrapper for DeletePeering that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeletePeeringRequestT = Model::DeletePeeringRequest>
        void DeletePeeringAsync(const DeletePeeringRequestT& request, const DeletePeeringResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::DeletePeering, request, handler, context);
        }

        /**
         * <p>Deletes a resource policy for the specified resource. This revokes the access
         * of the principals specified in the resource policy.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DeleteResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourcePolicyOutcome DeleteResourcePolicy(const Model::DeleteResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteResourcePolicyRequestT = Model::DeleteResourcePolicyRequest>
        Model::DeleteResourcePolicyOutcomeCallable DeleteResourcePolicyCallable(const DeleteResourcePolicyRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::DeleteResourcePolicy, request);
        }

        /**
         * An Async wrapper for DeleteResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteResourcePolicyRequestT = Model::DeleteResourcePolicyRequest>
        void DeleteResourcePolicyAsync(const DeleteResourcePolicyRequestT& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::DeleteResourcePolicy, request, handler, context);
        }

        /**
         * <p>Deletes an existing site. The site cannot be associated with any device or
         * link.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DeleteSite">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSiteOutcome DeleteSite(const Model::DeleteSiteRequest& request) const;

        /**
         * A Callable wrapper for DeleteSite that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSiteRequestT = Model::DeleteSiteRequest>
        Model::DeleteSiteOutcomeCallable DeleteSiteCallable(const DeleteSiteRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::DeleteSite, request);
        }

        /**
         * An Async wrapper for DeleteSite that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSiteRequestT = Model::DeleteSiteRequest>
        void DeleteSiteAsync(const DeleteSiteRequestT& request, const DeleteSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::DeleteSite, request, handler, context);
        }

        /**
         * <p>Deregisters a transit gateway from your global network. This action does not
         * delete your transit gateway, or modify any of its attachments. This action
         * removes any customer gateway associations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DeregisterTransitGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterTransitGatewayOutcome DeregisterTransitGateway(const Model::DeregisterTransitGatewayRequest& request) const;

        /**
         * A Callable wrapper for DeregisterTransitGateway that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeregisterTransitGatewayRequestT = Model::DeregisterTransitGatewayRequest>
        Model::DeregisterTransitGatewayOutcomeCallable DeregisterTransitGatewayCallable(const DeregisterTransitGatewayRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::DeregisterTransitGateway, request);
        }

        /**
         * An Async wrapper for DeregisterTransitGateway that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeregisterTransitGatewayRequestT = Model::DeregisterTransitGatewayRequest>
        void DeregisterTransitGatewayAsync(const DeregisterTransitGatewayRequestT& request, const DeregisterTransitGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::DeregisterTransitGateway, request, handler, context);
        }

        /**
         * <p>Describes one or more global networks. By default, all global networks are
         * described. To describe the objects in your global network, you must use the
         * appropriate <code>Get*</code> action. For example, to list the transit gateways
         * in your global network, use <a>GetTransitGatewayRegistrations</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DescribeGlobalNetworks">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeGlobalNetworksOutcome DescribeGlobalNetworks(const Model::DescribeGlobalNetworksRequest& request) const;

        /**
         * A Callable wrapper for DescribeGlobalNetworks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeGlobalNetworksRequestT = Model::DescribeGlobalNetworksRequest>
        Model::DescribeGlobalNetworksOutcomeCallable DescribeGlobalNetworksCallable(const DescribeGlobalNetworksRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::DescribeGlobalNetworks, request);
        }

        /**
         * An Async wrapper for DescribeGlobalNetworks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeGlobalNetworksRequestT = Model::DescribeGlobalNetworksRequest>
        void DescribeGlobalNetworksAsync(const DescribeGlobalNetworksRequestT& request, const DescribeGlobalNetworksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::DescribeGlobalNetworks, request, handler, context);
        }

        /**
         * <p>Disassociates a core network Connect peer from a device and a link.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DisassociateConnectPeer">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateConnectPeerOutcome DisassociateConnectPeer(const Model::DisassociateConnectPeerRequest& request) const;

        /**
         * A Callable wrapper for DisassociateConnectPeer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateConnectPeerRequestT = Model::DisassociateConnectPeerRequest>
        Model::DisassociateConnectPeerOutcomeCallable DisassociateConnectPeerCallable(const DisassociateConnectPeerRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::DisassociateConnectPeer, request);
        }

        /**
         * An Async wrapper for DisassociateConnectPeer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateConnectPeerRequestT = Model::DisassociateConnectPeerRequest>
        void DisassociateConnectPeerAsync(const DisassociateConnectPeerRequestT& request, const DisassociateConnectPeerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::DisassociateConnectPeer, request, handler, context);
        }

        /**
         * <p>Disassociates a customer gateway from a device and a link.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DisassociateCustomerGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateCustomerGatewayOutcome DisassociateCustomerGateway(const Model::DisassociateCustomerGatewayRequest& request) const;

        /**
         * A Callable wrapper for DisassociateCustomerGateway that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateCustomerGatewayRequestT = Model::DisassociateCustomerGatewayRequest>
        Model::DisassociateCustomerGatewayOutcomeCallable DisassociateCustomerGatewayCallable(const DisassociateCustomerGatewayRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::DisassociateCustomerGateway, request);
        }

        /**
         * An Async wrapper for DisassociateCustomerGateway that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateCustomerGatewayRequestT = Model::DisassociateCustomerGatewayRequest>
        void DisassociateCustomerGatewayAsync(const DisassociateCustomerGatewayRequestT& request, const DisassociateCustomerGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::DisassociateCustomerGateway, request, handler, context);
        }

        /**
         * <p>Disassociates an existing device from a link. You must first disassociate any
         * customer gateways that are associated with the link.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DisassociateLink">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateLinkOutcome DisassociateLink(const Model::DisassociateLinkRequest& request) const;

        /**
         * A Callable wrapper for DisassociateLink that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateLinkRequestT = Model::DisassociateLinkRequest>
        Model::DisassociateLinkOutcomeCallable DisassociateLinkCallable(const DisassociateLinkRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::DisassociateLink, request);
        }

        /**
         * An Async wrapper for DisassociateLink that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateLinkRequestT = Model::DisassociateLinkRequest>
        void DisassociateLinkAsync(const DisassociateLinkRequestT& request, const DisassociateLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::DisassociateLink, request, handler, context);
        }

        /**
         * <p>Disassociates a transit gateway Connect peer from a device and
         * link.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DisassociateTransitGatewayConnectPeer">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateTransitGatewayConnectPeerOutcome DisassociateTransitGatewayConnectPeer(const Model::DisassociateTransitGatewayConnectPeerRequest& request) const;

        /**
         * A Callable wrapper for DisassociateTransitGatewayConnectPeer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateTransitGatewayConnectPeerRequestT = Model::DisassociateTransitGatewayConnectPeerRequest>
        Model::DisassociateTransitGatewayConnectPeerOutcomeCallable DisassociateTransitGatewayConnectPeerCallable(const DisassociateTransitGatewayConnectPeerRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::DisassociateTransitGatewayConnectPeer, request);
        }

        /**
         * An Async wrapper for DisassociateTransitGatewayConnectPeer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateTransitGatewayConnectPeerRequestT = Model::DisassociateTransitGatewayConnectPeerRequest>
        void DisassociateTransitGatewayConnectPeerAsync(const DisassociateTransitGatewayConnectPeerRequestT& request, const DisassociateTransitGatewayConnectPeerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::DisassociateTransitGatewayConnectPeer, request, handler, context);
        }

        /**
         * <p>Executes a change set on your core network. Deploys changes globally based on
         * the policy submitted..</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/ExecuteCoreNetworkChangeSet">AWS
         * API Reference</a></p>
         */
        virtual Model::ExecuteCoreNetworkChangeSetOutcome ExecuteCoreNetworkChangeSet(const Model::ExecuteCoreNetworkChangeSetRequest& request) const;

        /**
         * A Callable wrapper for ExecuteCoreNetworkChangeSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ExecuteCoreNetworkChangeSetRequestT = Model::ExecuteCoreNetworkChangeSetRequest>
        Model::ExecuteCoreNetworkChangeSetOutcomeCallable ExecuteCoreNetworkChangeSetCallable(const ExecuteCoreNetworkChangeSetRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::ExecuteCoreNetworkChangeSet, request);
        }

        /**
         * An Async wrapper for ExecuteCoreNetworkChangeSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ExecuteCoreNetworkChangeSetRequestT = Model::ExecuteCoreNetworkChangeSetRequest>
        void ExecuteCoreNetworkChangeSetAsync(const ExecuteCoreNetworkChangeSetRequestT& request, const ExecuteCoreNetworkChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::ExecuteCoreNetworkChangeSet, request, handler, context);
        }

        /**
         * <p>Returns information about a core network Connect attachment.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetConnectAttachment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConnectAttachmentOutcome GetConnectAttachment(const Model::GetConnectAttachmentRequest& request) const;

        /**
         * A Callable wrapper for GetConnectAttachment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetConnectAttachmentRequestT = Model::GetConnectAttachmentRequest>
        Model::GetConnectAttachmentOutcomeCallable GetConnectAttachmentCallable(const GetConnectAttachmentRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::GetConnectAttachment, request);
        }

        /**
         * An Async wrapper for GetConnectAttachment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetConnectAttachmentRequestT = Model::GetConnectAttachmentRequest>
        void GetConnectAttachmentAsync(const GetConnectAttachmentRequestT& request, const GetConnectAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::GetConnectAttachment, request, handler, context);
        }

        /**
         * <p>Returns information about a core network Connect peer.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetConnectPeer">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConnectPeerOutcome GetConnectPeer(const Model::GetConnectPeerRequest& request) const;

        /**
         * A Callable wrapper for GetConnectPeer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetConnectPeerRequestT = Model::GetConnectPeerRequest>
        Model::GetConnectPeerOutcomeCallable GetConnectPeerCallable(const GetConnectPeerRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::GetConnectPeer, request);
        }

        /**
         * An Async wrapper for GetConnectPeer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetConnectPeerRequestT = Model::GetConnectPeerRequest>
        void GetConnectPeerAsync(const GetConnectPeerRequestT& request, const GetConnectPeerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::GetConnectPeer, request, handler, context);
        }

        /**
         * <p>Returns information about a core network Connect peer
         * associations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetConnectPeerAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConnectPeerAssociationsOutcome GetConnectPeerAssociations(const Model::GetConnectPeerAssociationsRequest& request) const;

        /**
         * A Callable wrapper for GetConnectPeerAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetConnectPeerAssociationsRequestT = Model::GetConnectPeerAssociationsRequest>
        Model::GetConnectPeerAssociationsOutcomeCallable GetConnectPeerAssociationsCallable(const GetConnectPeerAssociationsRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::GetConnectPeerAssociations, request);
        }

        /**
         * An Async wrapper for GetConnectPeerAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetConnectPeerAssociationsRequestT = Model::GetConnectPeerAssociationsRequest>
        void GetConnectPeerAssociationsAsync(const GetConnectPeerAssociationsRequestT& request, const GetConnectPeerAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::GetConnectPeerAssociations, request, handler, context);
        }

        /**
         * <p>Gets information about one or more of your connections in a global
         * network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetConnections">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConnectionsOutcome GetConnections(const Model::GetConnectionsRequest& request) const;

        /**
         * A Callable wrapper for GetConnections that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetConnectionsRequestT = Model::GetConnectionsRequest>
        Model::GetConnectionsOutcomeCallable GetConnectionsCallable(const GetConnectionsRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::GetConnections, request);
        }

        /**
         * An Async wrapper for GetConnections that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetConnectionsRequestT = Model::GetConnectionsRequest>
        void GetConnectionsAsync(const GetConnectionsRequestT& request, const GetConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::GetConnections, request, handler, context);
        }

        /**
         * <p>Returns information about the LIVE policy for a core network.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetCoreNetwork">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCoreNetworkOutcome GetCoreNetwork(const Model::GetCoreNetworkRequest& request) const;

        /**
         * A Callable wrapper for GetCoreNetwork that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCoreNetworkRequestT = Model::GetCoreNetworkRequest>
        Model::GetCoreNetworkOutcomeCallable GetCoreNetworkCallable(const GetCoreNetworkRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::GetCoreNetwork, request);
        }

        /**
         * An Async wrapper for GetCoreNetwork that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCoreNetworkRequestT = Model::GetCoreNetworkRequest>
        void GetCoreNetworkAsync(const GetCoreNetworkRequestT& request, const GetCoreNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::GetCoreNetwork, request, handler, context);
        }

        /**
         * <p>Returns information about a core network change event.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetCoreNetworkChangeEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCoreNetworkChangeEventsOutcome GetCoreNetworkChangeEvents(const Model::GetCoreNetworkChangeEventsRequest& request) const;

        /**
         * A Callable wrapper for GetCoreNetworkChangeEvents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCoreNetworkChangeEventsRequestT = Model::GetCoreNetworkChangeEventsRequest>
        Model::GetCoreNetworkChangeEventsOutcomeCallable GetCoreNetworkChangeEventsCallable(const GetCoreNetworkChangeEventsRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::GetCoreNetworkChangeEvents, request);
        }

        /**
         * An Async wrapper for GetCoreNetworkChangeEvents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCoreNetworkChangeEventsRequestT = Model::GetCoreNetworkChangeEventsRequest>
        void GetCoreNetworkChangeEventsAsync(const GetCoreNetworkChangeEventsRequestT& request, const GetCoreNetworkChangeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::GetCoreNetworkChangeEvents, request, handler, context);
        }

        /**
         * <p>Returns a change set between the LIVE core network policy and a submitted
         * policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetCoreNetworkChangeSet">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCoreNetworkChangeSetOutcome GetCoreNetworkChangeSet(const Model::GetCoreNetworkChangeSetRequest& request) const;

        /**
         * A Callable wrapper for GetCoreNetworkChangeSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCoreNetworkChangeSetRequestT = Model::GetCoreNetworkChangeSetRequest>
        Model::GetCoreNetworkChangeSetOutcomeCallable GetCoreNetworkChangeSetCallable(const GetCoreNetworkChangeSetRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::GetCoreNetworkChangeSet, request);
        }

        /**
         * An Async wrapper for GetCoreNetworkChangeSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCoreNetworkChangeSetRequestT = Model::GetCoreNetworkChangeSetRequest>
        void GetCoreNetworkChangeSetAsync(const GetCoreNetworkChangeSetRequestT& request, const GetCoreNetworkChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::GetCoreNetworkChangeSet, request, handler, context);
        }

        /**
         * <p>Returns details about a core network policy. You can get details about your
         * current live policy or any previous policy version.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetCoreNetworkPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCoreNetworkPolicyOutcome GetCoreNetworkPolicy(const Model::GetCoreNetworkPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetCoreNetworkPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCoreNetworkPolicyRequestT = Model::GetCoreNetworkPolicyRequest>
        Model::GetCoreNetworkPolicyOutcomeCallable GetCoreNetworkPolicyCallable(const GetCoreNetworkPolicyRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::GetCoreNetworkPolicy, request);
        }

        /**
         * An Async wrapper for GetCoreNetworkPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCoreNetworkPolicyRequestT = Model::GetCoreNetworkPolicyRequest>
        void GetCoreNetworkPolicyAsync(const GetCoreNetworkPolicyRequestT& request, const GetCoreNetworkPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::GetCoreNetworkPolicy, request, handler, context);
        }

        /**
         * <p>Gets the association information for customer gateways that are associated
         * with devices and links in your global network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetCustomerGatewayAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCustomerGatewayAssociationsOutcome GetCustomerGatewayAssociations(const Model::GetCustomerGatewayAssociationsRequest& request) const;

        /**
         * A Callable wrapper for GetCustomerGatewayAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCustomerGatewayAssociationsRequestT = Model::GetCustomerGatewayAssociationsRequest>
        Model::GetCustomerGatewayAssociationsOutcomeCallable GetCustomerGatewayAssociationsCallable(const GetCustomerGatewayAssociationsRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::GetCustomerGatewayAssociations, request);
        }

        /**
         * An Async wrapper for GetCustomerGatewayAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCustomerGatewayAssociationsRequestT = Model::GetCustomerGatewayAssociationsRequest>
        void GetCustomerGatewayAssociationsAsync(const GetCustomerGatewayAssociationsRequestT& request, const GetCustomerGatewayAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::GetCustomerGatewayAssociations, request, handler, context);
        }

        /**
         * <p>Gets information about one or more of your devices in a global
         * network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetDevices">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDevicesOutcome GetDevices(const Model::GetDevicesRequest& request) const;

        /**
         * A Callable wrapper for GetDevices that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDevicesRequestT = Model::GetDevicesRequest>
        Model::GetDevicesOutcomeCallable GetDevicesCallable(const GetDevicesRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::GetDevices, request);
        }

        /**
         * An Async wrapper for GetDevices that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDevicesRequestT = Model::GetDevicesRequest>
        void GetDevicesAsync(const GetDevicesRequestT& request, const GetDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::GetDevices, request, handler, context);
        }

        /**
         * <p>Gets the link associations for a device or a link. Either the device ID or
         * the link ID must be specified.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetLinkAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLinkAssociationsOutcome GetLinkAssociations(const Model::GetLinkAssociationsRequest& request) const;

        /**
         * A Callable wrapper for GetLinkAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetLinkAssociationsRequestT = Model::GetLinkAssociationsRequest>
        Model::GetLinkAssociationsOutcomeCallable GetLinkAssociationsCallable(const GetLinkAssociationsRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::GetLinkAssociations, request);
        }

        /**
         * An Async wrapper for GetLinkAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetLinkAssociationsRequestT = Model::GetLinkAssociationsRequest>
        void GetLinkAssociationsAsync(const GetLinkAssociationsRequestT& request, const GetLinkAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::GetLinkAssociations, request, handler, context);
        }

        /**
         * <p>Gets information about one or more links in a specified global network.</p>
         * <p>If you specify the site ID, you cannot specify the type or provider in the
         * same request. You can specify the type and provider in the same
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetLinks">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLinksOutcome GetLinks(const Model::GetLinksRequest& request) const;

        /**
         * A Callable wrapper for GetLinks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetLinksRequestT = Model::GetLinksRequest>
        Model::GetLinksOutcomeCallable GetLinksCallable(const GetLinksRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::GetLinks, request);
        }

        /**
         * An Async wrapper for GetLinks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetLinksRequestT = Model::GetLinksRequest>
        void GetLinksAsync(const GetLinksRequestT& request, const GetLinksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::GetLinks, request, handler, context);
        }

        /**
         * <p>Gets the count of network resources, by resource type, for the specified
         * global network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetNetworkResourceCounts">AWS
         * API Reference</a></p>
         */
        virtual Model::GetNetworkResourceCountsOutcome GetNetworkResourceCounts(const Model::GetNetworkResourceCountsRequest& request) const;

        /**
         * A Callable wrapper for GetNetworkResourceCounts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetNetworkResourceCountsRequestT = Model::GetNetworkResourceCountsRequest>
        Model::GetNetworkResourceCountsOutcomeCallable GetNetworkResourceCountsCallable(const GetNetworkResourceCountsRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::GetNetworkResourceCounts, request);
        }

        /**
         * An Async wrapper for GetNetworkResourceCounts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetNetworkResourceCountsRequestT = Model::GetNetworkResourceCountsRequest>
        void GetNetworkResourceCountsAsync(const GetNetworkResourceCountsRequestT& request, const GetNetworkResourceCountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::GetNetworkResourceCounts, request, handler, context);
        }

        /**
         * <p>Gets the network resource relationships for the specified global
         * network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetNetworkResourceRelationships">AWS
         * API Reference</a></p>
         */
        virtual Model::GetNetworkResourceRelationshipsOutcome GetNetworkResourceRelationships(const Model::GetNetworkResourceRelationshipsRequest& request) const;

        /**
         * A Callable wrapper for GetNetworkResourceRelationships that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetNetworkResourceRelationshipsRequestT = Model::GetNetworkResourceRelationshipsRequest>
        Model::GetNetworkResourceRelationshipsOutcomeCallable GetNetworkResourceRelationshipsCallable(const GetNetworkResourceRelationshipsRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::GetNetworkResourceRelationships, request);
        }

        /**
         * An Async wrapper for GetNetworkResourceRelationships that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetNetworkResourceRelationshipsRequestT = Model::GetNetworkResourceRelationshipsRequest>
        void GetNetworkResourceRelationshipsAsync(const GetNetworkResourceRelationshipsRequestT& request, const GetNetworkResourceRelationshipsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::GetNetworkResourceRelationships, request, handler, context);
        }

        /**
         * <p>Describes the network resources for the specified global network.</p> <p>The
         * results include information from the corresponding Describe call for the
         * resource, minus any sensitive information such as pre-shared keys.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetNetworkResources">AWS
         * API Reference</a></p>
         */
        virtual Model::GetNetworkResourcesOutcome GetNetworkResources(const Model::GetNetworkResourcesRequest& request) const;

        /**
         * A Callable wrapper for GetNetworkResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetNetworkResourcesRequestT = Model::GetNetworkResourcesRequest>
        Model::GetNetworkResourcesOutcomeCallable GetNetworkResourcesCallable(const GetNetworkResourcesRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::GetNetworkResources, request);
        }

        /**
         * An Async wrapper for GetNetworkResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetNetworkResourcesRequestT = Model::GetNetworkResourcesRequest>
        void GetNetworkResourcesAsync(const GetNetworkResourcesRequestT& request, const GetNetworkResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::GetNetworkResources, request, handler, context);
        }

        /**
         * <p>Gets the network routes of the specified global network.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetNetworkRoutes">AWS
         * API Reference</a></p>
         */
        virtual Model::GetNetworkRoutesOutcome GetNetworkRoutes(const Model::GetNetworkRoutesRequest& request) const;

        /**
         * A Callable wrapper for GetNetworkRoutes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetNetworkRoutesRequestT = Model::GetNetworkRoutesRequest>
        Model::GetNetworkRoutesOutcomeCallable GetNetworkRoutesCallable(const GetNetworkRoutesRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::GetNetworkRoutes, request);
        }

        /**
         * An Async wrapper for GetNetworkRoutes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetNetworkRoutesRequestT = Model::GetNetworkRoutesRequest>
        void GetNetworkRoutesAsync(const GetNetworkRoutesRequestT& request, const GetNetworkRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::GetNetworkRoutes, request, handler, context);
        }

        /**
         * <p>Gets the network telemetry of the specified global network.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetNetworkTelemetry">AWS
         * API Reference</a></p>
         */
        virtual Model::GetNetworkTelemetryOutcome GetNetworkTelemetry(const Model::GetNetworkTelemetryRequest& request) const;

        /**
         * A Callable wrapper for GetNetworkTelemetry that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetNetworkTelemetryRequestT = Model::GetNetworkTelemetryRequest>
        Model::GetNetworkTelemetryOutcomeCallable GetNetworkTelemetryCallable(const GetNetworkTelemetryRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::GetNetworkTelemetry, request);
        }

        /**
         * An Async wrapper for GetNetworkTelemetry that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetNetworkTelemetryRequestT = Model::GetNetworkTelemetryRequest>
        void GetNetworkTelemetryAsync(const GetNetworkTelemetryRequestT& request, const GetNetworkTelemetryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::GetNetworkTelemetry, request, handler, context);
        }

        /**
         * <p>Returns information about a resource policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourcePolicyOutcome GetResourcePolicy(const Model::GetResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for GetResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetResourcePolicyRequestT = Model::GetResourcePolicyRequest>
        Model::GetResourcePolicyOutcomeCallable GetResourcePolicyCallable(const GetResourcePolicyRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::GetResourcePolicy, request);
        }

        /**
         * An Async wrapper for GetResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetResourcePolicyRequestT = Model::GetResourcePolicyRequest>
        void GetResourcePolicyAsync(const GetResourcePolicyRequestT& request, const GetResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::GetResourcePolicy, request, handler, context);
        }

        /**
         * <p>Gets information about the specified route analysis.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetRouteAnalysis">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRouteAnalysisOutcome GetRouteAnalysis(const Model::GetRouteAnalysisRequest& request) const;

        /**
         * A Callable wrapper for GetRouteAnalysis that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRouteAnalysisRequestT = Model::GetRouteAnalysisRequest>
        Model::GetRouteAnalysisOutcomeCallable GetRouteAnalysisCallable(const GetRouteAnalysisRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::GetRouteAnalysis, request);
        }

        /**
         * An Async wrapper for GetRouteAnalysis that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRouteAnalysisRequestT = Model::GetRouteAnalysisRequest>
        void GetRouteAnalysisAsync(const GetRouteAnalysisRequestT& request, const GetRouteAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::GetRouteAnalysis, request, handler, context);
        }

        /**
         * <p>Returns information about a site-to-site VPN attachment.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetSiteToSiteVpnAttachment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSiteToSiteVpnAttachmentOutcome GetSiteToSiteVpnAttachment(const Model::GetSiteToSiteVpnAttachmentRequest& request) const;

        /**
         * A Callable wrapper for GetSiteToSiteVpnAttachment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSiteToSiteVpnAttachmentRequestT = Model::GetSiteToSiteVpnAttachmentRequest>
        Model::GetSiteToSiteVpnAttachmentOutcomeCallable GetSiteToSiteVpnAttachmentCallable(const GetSiteToSiteVpnAttachmentRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::GetSiteToSiteVpnAttachment, request);
        }

        /**
         * An Async wrapper for GetSiteToSiteVpnAttachment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSiteToSiteVpnAttachmentRequestT = Model::GetSiteToSiteVpnAttachmentRequest>
        void GetSiteToSiteVpnAttachmentAsync(const GetSiteToSiteVpnAttachmentRequestT& request, const GetSiteToSiteVpnAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::GetSiteToSiteVpnAttachment, request, handler, context);
        }

        /**
         * <p>Gets information about one or more of your sites in a global
         * network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetSites">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSitesOutcome GetSites(const Model::GetSitesRequest& request) const;

        /**
         * A Callable wrapper for GetSites that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSitesRequestT = Model::GetSitesRequest>
        Model::GetSitesOutcomeCallable GetSitesCallable(const GetSitesRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::GetSites, request);
        }

        /**
         * An Async wrapper for GetSites that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSitesRequestT = Model::GetSitesRequest>
        void GetSitesAsync(const GetSitesRequestT& request, const GetSitesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::GetSites, request, handler, context);
        }

        /**
         * <p>Gets information about one or more of your transit gateway Connect peer
         * associations in a global network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetTransitGatewayConnectPeerAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTransitGatewayConnectPeerAssociationsOutcome GetTransitGatewayConnectPeerAssociations(const Model::GetTransitGatewayConnectPeerAssociationsRequest& request) const;

        /**
         * A Callable wrapper for GetTransitGatewayConnectPeerAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTransitGatewayConnectPeerAssociationsRequestT = Model::GetTransitGatewayConnectPeerAssociationsRequest>
        Model::GetTransitGatewayConnectPeerAssociationsOutcomeCallable GetTransitGatewayConnectPeerAssociationsCallable(const GetTransitGatewayConnectPeerAssociationsRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::GetTransitGatewayConnectPeerAssociations, request);
        }

        /**
         * An Async wrapper for GetTransitGatewayConnectPeerAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTransitGatewayConnectPeerAssociationsRequestT = Model::GetTransitGatewayConnectPeerAssociationsRequest>
        void GetTransitGatewayConnectPeerAssociationsAsync(const GetTransitGatewayConnectPeerAssociationsRequestT& request, const GetTransitGatewayConnectPeerAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::GetTransitGatewayConnectPeerAssociations, request, handler, context);
        }

        /**
         * <p>Returns information about a transit gateway peer.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetTransitGatewayPeering">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTransitGatewayPeeringOutcome GetTransitGatewayPeering(const Model::GetTransitGatewayPeeringRequest& request) const;

        /**
         * A Callable wrapper for GetTransitGatewayPeering that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTransitGatewayPeeringRequestT = Model::GetTransitGatewayPeeringRequest>
        Model::GetTransitGatewayPeeringOutcomeCallable GetTransitGatewayPeeringCallable(const GetTransitGatewayPeeringRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::GetTransitGatewayPeering, request);
        }

        /**
         * An Async wrapper for GetTransitGatewayPeering that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTransitGatewayPeeringRequestT = Model::GetTransitGatewayPeeringRequest>
        void GetTransitGatewayPeeringAsync(const GetTransitGatewayPeeringRequestT& request, const GetTransitGatewayPeeringResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::GetTransitGatewayPeering, request, handler, context);
        }

        /**
         * <p>Gets information about the transit gateway registrations in a specified
         * global network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetTransitGatewayRegistrations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTransitGatewayRegistrationsOutcome GetTransitGatewayRegistrations(const Model::GetTransitGatewayRegistrationsRequest& request) const;

        /**
         * A Callable wrapper for GetTransitGatewayRegistrations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTransitGatewayRegistrationsRequestT = Model::GetTransitGatewayRegistrationsRequest>
        Model::GetTransitGatewayRegistrationsOutcomeCallable GetTransitGatewayRegistrationsCallable(const GetTransitGatewayRegistrationsRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::GetTransitGatewayRegistrations, request);
        }

        /**
         * An Async wrapper for GetTransitGatewayRegistrations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTransitGatewayRegistrationsRequestT = Model::GetTransitGatewayRegistrationsRequest>
        void GetTransitGatewayRegistrationsAsync(const GetTransitGatewayRegistrationsRequestT& request, const GetTransitGatewayRegistrationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::GetTransitGatewayRegistrations, request, handler, context);
        }

        /**
         * <p>Returns information about a transit gateway route table
         * attachment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetTransitGatewayRouteTableAttachment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTransitGatewayRouteTableAttachmentOutcome GetTransitGatewayRouteTableAttachment(const Model::GetTransitGatewayRouteTableAttachmentRequest& request) const;

        /**
         * A Callable wrapper for GetTransitGatewayRouteTableAttachment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTransitGatewayRouteTableAttachmentRequestT = Model::GetTransitGatewayRouteTableAttachmentRequest>
        Model::GetTransitGatewayRouteTableAttachmentOutcomeCallable GetTransitGatewayRouteTableAttachmentCallable(const GetTransitGatewayRouteTableAttachmentRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::GetTransitGatewayRouteTableAttachment, request);
        }

        /**
         * An Async wrapper for GetTransitGatewayRouteTableAttachment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTransitGatewayRouteTableAttachmentRequestT = Model::GetTransitGatewayRouteTableAttachmentRequest>
        void GetTransitGatewayRouteTableAttachmentAsync(const GetTransitGatewayRouteTableAttachmentRequestT& request, const GetTransitGatewayRouteTableAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::GetTransitGatewayRouteTableAttachment, request, handler, context);
        }

        /**
         * <p>Returns information about a VPC attachment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetVpcAttachment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVpcAttachmentOutcome GetVpcAttachment(const Model::GetVpcAttachmentRequest& request) const;

        /**
         * A Callable wrapper for GetVpcAttachment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetVpcAttachmentRequestT = Model::GetVpcAttachmentRequest>
        Model::GetVpcAttachmentOutcomeCallable GetVpcAttachmentCallable(const GetVpcAttachmentRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::GetVpcAttachment, request);
        }

        /**
         * An Async wrapper for GetVpcAttachment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetVpcAttachmentRequestT = Model::GetVpcAttachmentRequest>
        void GetVpcAttachmentAsync(const GetVpcAttachmentRequestT& request, const GetVpcAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::GetVpcAttachment, request, handler, context);
        }

        /**
         * <p>Returns a list of core network attachments.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/ListAttachments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAttachmentsOutcome ListAttachments(const Model::ListAttachmentsRequest& request) const;

        /**
         * A Callable wrapper for ListAttachments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAttachmentsRequestT = Model::ListAttachmentsRequest>
        Model::ListAttachmentsOutcomeCallable ListAttachmentsCallable(const ListAttachmentsRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::ListAttachments, request);
        }

        /**
         * An Async wrapper for ListAttachments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAttachmentsRequestT = Model::ListAttachmentsRequest>
        void ListAttachmentsAsync(const ListAttachmentsRequestT& request, const ListAttachmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::ListAttachments, request, handler, context);
        }

        /**
         * <p>Returns a list of core network Connect peers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/ListConnectPeers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConnectPeersOutcome ListConnectPeers(const Model::ListConnectPeersRequest& request) const;

        /**
         * A Callable wrapper for ListConnectPeers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListConnectPeersRequestT = Model::ListConnectPeersRequest>
        Model::ListConnectPeersOutcomeCallable ListConnectPeersCallable(const ListConnectPeersRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::ListConnectPeers, request);
        }

        /**
         * An Async wrapper for ListConnectPeers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListConnectPeersRequestT = Model::ListConnectPeersRequest>
        void ListConnectPeersAsync(const ListConnectPeersRequestT& request, const ListConnectPeersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::ListConnectPeers, request, handler, context);
        }

        /**
         * <p>Returns a list of core network policy versions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/ListCoreNetworkPolicyVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCoreNetworkPolicyVersionsOutcome ListCoreNetworkPolicyVersions(const Model::ListCoreNetworkPolicyVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListCoreNetworkPolicyVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCoreNetworkPolicyVersionsRequestT = Model::ListCoreNetworkPolicyVersionsRequest>
        Model::ListCoreNetworkPolicyVersionsOutcomeCallable ListCoreNetworkPolicyVersionsCallable(const ListCoreNetworkPolicyVersionsRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::ListCoreNetworkPolicyVersions, request);
        }

        /**
         * An Async wrapper for ListCoreNetworkPolicyVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCoreNetworkPolicyVersionsRequestT = Model::ListCoreNetworkPolicyVersionsRequest>
        void ListCoreNetworkPolicyVersionsAsync(const ListCoreNetworkPolicyVersionsRequestT& request, const ListCoreNetworkPolicyVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::ListCoreNetworkPolicyVersions, request, handler, context);
        }

        /**
         * <p>Returns a list of owned and shared core networks.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/ListCoreNetworks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCoreNetworksOutcome ListCoreNetworks(const Model::ListCoreNetworksRequest& request) const;

        /**
         * A Callable wrapper for ListCoreNetworks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCoreNetworksRequestT = Model::ListCoreNetworksRequest>
        Model::ListCoreNetworksOutcomeCallable ListCoreNetworksCallable(const ListCoreNetworksRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::ListCoreNetworks, request);
        }

        /**
         * An Async wrapper for ListCoreNetworks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCoreNetworksRequestT = Model::ListCoreNetworksRequest>
        void ListCoreNetworksAsync(const ListCoreNetworksRequestT& request, const ListCoreNetworksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::ListCoreNetworks, request, handler, context);
        }

        /**
         * <p>Gets the status of the Service Linked Role (SLR) deployment for the accounts
         * in a given Amazon Web Services Organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/ListOrganizationServiceAccessStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOrganizationServiceAccessStatusOutcome ListOrganizationServiceAccessStatus(const Model::ListOrganizationServiceAccessStatusRequest& request) const;

        /**
         * A Callable wrapper for ListOrganizationServiceAccessStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListOrganizationServiceAccessStatusRequestT = Model::ListOrganizationServiceAccessStatusRequest>
        Model::ListOrganizationServiceAccessStatusOutcomeCallable ListOrganizationServiceAccessStatusCallable(const ListOrganizationServiceAccessStatusRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::ListOrganizationServiceAccessStatus, request);
        }

        /**
         * An Async wrapper for ListOrganizationServiceAccessStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListOrganizationServiceAccessStatusRequestT = Model::ListOrganizationServiceAccessStatusRequest>
        void ListOrganizationServiceAccessStatusAsync(const ListOrganizationServiceAccessStatusRequestT& request, const ListOrganizationServiceAccessStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::ListOrganizationServiceAccessStatus, request, handler, context);
        }

        /**
         * <p>Lists the peerings for a core network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/ListPeerings">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPeeringsOutcome ListPeerings(const Model::ListPeeringsRequest& request) const;

        /**
         * A Callable wrapper for ListPeerings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPeeringsRequestT = Model::ListPeeringsRequest>
        Model::ListPeeringsOutcomeCallable ListPeeringsCallable(const ListPeeringsRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::ListPeerings, request);
        }

        /**
         * An Async wrapper for ListPeerings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPeeringsRequestT = Model::ListPeeringsRequest>
        void ListPeeringsAsync(const ListPeeringsRequestT& request, const ListPeeringsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::ListPeerings, request, handler, context);
        }

        /**
         * <p>Lists the tags for a specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Creates a new, immutable version of a core network policy. A subsequent
         * change set is created showing the differences between the LIVE policy and the
         * submitted policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/PutCoreNetworkPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutCoreNetworkPolicyOutcome PutCoreNetworkPolicy(const Model::PutCoreNetworkPolicyRequest& request) const;

        /**
         * A Callable wrapper for PutCoreNetworkPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutCoreNetworkPolicyRequestT = Model::PutCoreNetworkPolicyRequest>
        Model::PutCoreNetworkPolicyOutcomeCallable PutCoreNetworkPolicyCallable(const PutCoreNetworkPolicyRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::PutCoreNetworkPolicy, request);
        }

        /**
         * An Async wrapper for PutCoreNetworkPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutCoreNetworkPolicyRequestT = Model::PutCoreNetworkPolicyRequest>
        void PutCoreNetworkPolicyAsync(const PutCoreNetworkPolicyRequestT& request, const PutCoreNetworkPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::PutCoreNetworkPolicy, request, handler, context);
        }

        /**
         * <p>Creates or updates a resource policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/PutResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutResourcePolicyOutcome PutResourcePolicy(const Model::PutResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for PutResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutResourcePolicyRequestT = Model::PutResourcePolicyRequest>
        Model::PutResourcePolicyOutcomeCallable PutResourcePolicyCallable(const PutResourcePolicyRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::PutResourcePolicy, request);
        }

        /**
         * An Async wrapper for PutResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutResourcePolicyRequestT = Model::PutResourcePolicyRequest>
        void PutResourcePolicyAsync(const PutResourcePolicyRequestT& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::PutResourcePolicy, request, handler, context);
        }

        /**
         * <p>Registers a transit gateway in your global network. Not all Regions support
         * transit gateways for global networks. For a list of the supported Regions, see
         * <a
         * href="https://docs.aws.amazon.com/network-manager/latest/tgwnm/what-are-global-networks.html#nm-available-regions">Region
         * Availability</a> in the <i>Amazon Web Services Transit Gateways for Global
         * Networks User Guide</i>. The transit gateway can be in any of the supported
         * Amazon Web Services Regions, but it must be owned by the same Amazon Web
         * Services account that owns the global network. You cannot register a transit
         * gateway in more than one global network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/RegisterTransitGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterTransitGatewayOutcome RegisterTransitGateway(const Model::RegisterTransitGatewayRequest& request) const;

        /**
         * A Callable wrapper for RegisterTransitGateway that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RegisterTransitGatewayRequestT = Model::RegisterTransitGatewayRequest>
        Model::RegisterTransitGatewayOutcomeCallable RegisterTransitGatewayCallable(const RegisterTransitGatewayRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::RegisterTransitGateway, request);
        }

        /**
         * An Async wrapper for RegisterTransitGateway that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RegisterTransitGatewayRequestT = Model::RegisterTransitGatewayRequest>
        void RegisterTransitGatewayAsync(const RegisterTransitGatewayRequestT& request, const RegisterTransitGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::RegisterTransitGateway, request, handler, context);
        }

        /**
         * <p>Rejects a core network attachment request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/RejectAttachment">AWS
         * API Reference</a></p>
         */
        virtual Model::RejectAttachmentOutcome RejectAttachment(const Model::RejectAttachmentRequest& request) const;

        /**
         * A Callable wrapper for RejectAttachment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RejectAttachmentRequestT = Model::RejectAttachmentRequest>
        Model::RejectAttachmentOutcomeCallable RejectAttachmentCallable(const RejectAttachmentRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::RejectAttachment, request);
        }

        /**
         * An Async wrapper for RejectAttachment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RejectAttachmentRequestT = Model::RejectAttachmentRequest>
        void RejectAttachmentAsync(const RejectAttachmentRequestT& request, const RejectAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::RejectAttachment, request, handler, context);
        }

        /**
         * <p>Restores a previous policy version as a new, immutable version of a core
         * network policy. A subsequent change set is created showing the differences
         * between the LIVE policy and restored policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/RestoreCoreNetworkPolicyVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreCoreNetworkPolicyVersionOutcome RestoreCoreNetworkPolicyVersion(const Model::RestoreCoreNetworkPolicyVersionRequest& request) const;

        /**
         * A Callable wrapper for RestoreCoreNetworkPolicyVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RestoreCoreNetworkPolicyVersionRequestT = Model::RestoreCoreNetworkPolicyVersionRequest>
        Model::RestoreCoreNetworkPolicyVersionOutcomeCallable RestoreCoreNetworkPolicyVersionCallable(const RestoreCoreNetworkPolicyVersionRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::RestoreCoreNetworkPolicyVersion, request);
        }

        /**
         * An Async wrapper for RestoreCoreNetworkPolicyVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RestoreCoreNetworkPolicyVersionRequestT = Model::RestoreCoreNetworkPolicyVersionRequest>
        void RestoreCoreNetworkPolicyVersionAsync(const RestoreCoreNetworkPolicyVersionRequestT& request, const RestoreCoreNetworkPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::RestoreCoreNetworkPolicyVersion, request, handler, context);
        }

        /**
         * <p>Enables the Network Manager service for an Amazon Web Services Organization.
         * This can only be called by a management account within the organization.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/StartOrganizationServiceAccessUpdate">AWS
         * API Reference</a></p>
         */
        virtual Model::StartOrganizationServiceAccessUpdateOutcome StartOrganizationServiceAccessUpdate(const Model::StartOrganizationServiceAccessUpdateRequest& request) const;

        /**
         * A Callable wrapper for StartOrganizationServiceAccessUpdate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartOrganizationServiceAccessUpdateRequestT = Model::StartOrganizationServiceAccessUpdateRequest>
        Model::StartOrganizationServiceAccessUpdateOutcomeCallable StartOrganizationServiceAccessUpdateCallable(const StartOrganizationServiceAccessUpdateRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::StartOrganizationServiceAccessUpdate, request);
        }

        /**
         * An Async wrapper for StartOrganizationServiceAccessUpdate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartOrganizationServiceAccessUpdateRequestT = Model::StartOrganizationServiceAccessUpdateRequest>
        void StartOrganizationServiceAccessUpdateAsync(const StartOrganizationServiceAccessUpdateRequestT& request, const StartOrganizationServiceAccessUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::StartOrganizationServiceAccessUpdate, request, handler, context);
        }

        /**
         * <p>Starts analyzing the routing path between the specified source and
         * destination. For more information, see <a
         * href="https://docs.aws.amazon.com/vpc/latest/tgw/route-analyzer.html">Route
         * Analyzer</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/StartRouteAnalysis">AWS
         * API Reference</a></p>
         */
        virtual Model::StartRouteAnalysisOutcome StartRouteAnalysis(const Model::StartRouteAnalysisRequest& request) const;

        /**
         * A Callable wrapper for StartRouteAnalysis that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartRouteAnalysisRequestT = Model::StartRouteAnalysisRequest>
        Model::StartRouteAnalysisOutcomeCallable StartRouteAnalysisCallable(const StartRouteAnalysisRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::StartRouteAnalysis, request);
        }

        /**
         * An Async wrapper for StartRouteAnalysis that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartRouteAnalysisRequestT = Model::StartRouteAnalysisRequest>
        void StartRouteAnalysisAsync(const StartRouteAnalysisRequestT& request, const StartRouteAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::StartRouteAnalysis, request, handler, context);
        }

        /**
         * <p>Tags a specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes tags from a specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates the information for an existing connection. To remove information for
         * any of the parameters, specify an empty string.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/UpdateConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConnectionOutcome UpdateConnection(const Model::UpdateConnectionRequest& request) const;

        /**
         * A Callable wrapper for UpdateConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateConnectionRequestT = Model::UpdateConnectionRequest>
        Model::UpdateConnectionOutcomeCallable UpdateConnectionCallable(const UpdateConnectionRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::UpdateConnection, request);
        }

        /**
         * An Async wrapper for UpdateConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateConnectionRequestT = Model::UpdateConnectionRequest>
        void UpdateConnectionAsync(const UpdateConnectionRequestT& request, const UpdateConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::UpdateConnection, request, handler, context);
        }

        /**
         * <p>Updates the description of a core network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/UpdateCoreNetwork">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCoreNetworkOutcome UpdateCoreNetwork(const Model::UpdateCoreNetworkRequest& request) const;

        /**
         * A Callable wrapper for UpdateCoreNetwork that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateCoreNetworkRequestT = Model::UpdateCoreNetworkRequest>
        Model::UpdateCoreNetworkOutcomeCallable UpdateCoreNetworkCallable(const UpdateCoreNetworkRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::UpdateCoreNetwork, request);
        }

        /**
         * An Async wrapper for UpdateCoreNetwork that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateCoreNetworkRequestT = Model::UpdateCoreNetworkRequest>
        void UpdateCoreNetworkAsync(const UpdateCoreNetworkRequestT& request, const UpdateCoreNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::UpdateCoreNetwork, request, handler, context);
        }

        /**
         * <p>Updates the details for an existing device. To remove information for any of
         * the parameters, specify an empty string.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/UpdateDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDeviceOutcome UpdateDevice(const Model::UpdateDeviceRequest& request) const;

        /**
         * A Callable wrapper for UpdateDevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDeviceRequestT = Model::UpdateDeviceRequest>
        Model::UpdateDeviceOutcomeCallable UpdateDeviceCallable(const UpdateDeviceRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::UpdateDevice, request);
        }

        /**
         * An Async wrapper for UpdateDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDeviceRequestT = Model::UpdateDeviceRequest>
        void UpdateDeviceAsync(const UpdateDeviceRequestT& request, const UpdateDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::UpdateDevice, request, handler, context);
        }

        /**
         * <p>Updates an existing global network. To remove information for any of the
         * parameters, specify an empty string.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/UpdateGlobalNetwork">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGlobalNetworkOutcome UpdateGlobalNetwork(const Model::UpdateGlobalNetworkRequest& request) const;

        /**
         * A Callable wrapper for UpdateGlobalNetwork that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateGlobalNetworkRequestT = Model::UpdateGlobalNetworkRequest>
        Model::UpdateGlobalNetworkOutcomeCallable UpdateGlobalNetworkCallable(const UpdateGlobalNetworkRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::UpdateGlobalNetwork, request);
        }

        /**
         * An Async wrapper for UpdateGlobalNetwork that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateGlobalNetworkRequestT = Model::UpdateGlobalNetworkRequest>
        void UpdateGlobalNetworkAsync(const UpdateGlobalNetworkRequestT& request, const UpdateGlobalNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::UpdateGlobalNetwork, request, handler, context);
        }

        /**
         * <p>Updates the details for an existing link. To remove information for any of
         * the parameters, specify an empty string.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/UpdateLink">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLinkOutcome UpdateLink(const Model::UpdateLinkRequest& request) const;

        /**
         * A Callable wrapper for UpdateLink that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateLinkRequestT = Model::UpdateLinkRequest>
        Model::UpdateLinkOutcomeCallable UpdateLinkCallable(const UpdateLinkRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::UpdateLink, request);
        }

        /**
         * An Async wrapper for UpdateLink that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateLinkRequestT = Model::UpdateLinkRequest>
        void UpdateLinkAsync(const UpdateLinkRequestT& request, const UpdateLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::UpdateLink, request, handler, context);
        }

        /**
         * <p>Updates the resource metadata for the specified global network.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/UpdateNetworkResourceMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateNetworkResourceMetadataOutcome UpdateNetworkResourceMetadata(const Model::UpdateNetworkResourceMetadataRequest& request) const;

        /**
         * A Callable wrapper for UpdateNetworkResourceMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateNetworkResourceMetadataRequestT = Model::UpdateNetworkResourceMetadataRequest>
        Model::UpdateNetworkResourceMetadataOutcomeCallable UpdateNetworkResourceMetadataCallable(const UpdateNetworkResourceMetadataRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::UpdateNetworkResourceMetadata, request);
        }

        /**
         * An Async wrapper for UpdateNetworkResourceMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateNetworkResourceMetadataRequestT = Model::UpdateNetworkResourceMetadataRequest>
        void UpdateNetworkResourceMetadataAsync(const UpdateNetworkResourceMetadataRequestT& request, const UpdateNetworkResourceMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::UpdateNetworkResourceMetadata, request, handler, context);
        }

        /**
         * <p>Updates the information for an existing site. To remove information for any
         * of the parameters, specify an empty string.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/UpdateSite">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSiteOutcome UpdateSite(const Model::UpdateSiteRequest& request) const;

        /**
         * A Callable wrapper for UpdateSite that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSiteRequestT = Model::UpdateSiteRequest>
        Model::UpdateSiteOutcomeCallable UpdateSiteCallable(const UpdateSiteRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::UpdateSite, request);
        }

        /**
         * An Async wrapper for UpdateSite that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSiteRequestT = Model::UpdateSiteRequest>
        void UpdateSiteAsync(const UpdateSiteRequestT& request, const UpdateSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::UpdateSite, request, handler, context);
        }

        /**
         * <p>Updates a VPC attachment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/UpdateVpcAttachment">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateVpcAttachmentOutcome UpdateVpcAttachment(const Model::UpdateVpcAttachmentRequest& request) const;

        /**
         * A Callable wrapper for UpdateVpcAttachment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateVpcAttachmentRequestT = Model::UpdateVpcAttachmentRequest>
        Model::UpdateVpcAttachmentOutcomeCallable UpdateVpcAttachmentCallable(const UpdateVpcAttachmentRequestT& request) const
        {
            return SubmitCallable(&NetworkManagerClient::UpdateVpcAttachment, request);
        }

        /**
         * An Async wrapper for UpdateVpcAttachment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateVpcAttachmentRequestT = Model::UpdateVpcAttachmentRequest>
        void UpdateVpcAttachmentAsync(const UpdateVpcAttachmentRequestT& request, const UpdateVpcAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkManagerClient::UpdateVpcAttachment, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<NetworkManagerEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<NetworkManagerClient>;
      void init(const NetworkManagerClientConfiguration& clientConfiguration);

      NetworkManagerClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<NetworkManagerEndpointProviderBase> m_endpointProvider;
  };

} // namespace NetworkManager
} // namespace Aws
