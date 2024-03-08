/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/MediaConnectServiceClientModel.h>

namespace Aws
{
namespace MediaConnect
{
  /**
   * API for AWS Elemental MediaConnect
   */
  class AWS_MEDIACONNECT_API MediaConnectClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<MediaConnectClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef MediaConnectClientConfiguration ClientConfigurationType;
      typedef MediaConnectEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaConnectClient(const Aws::MediaConnect::MediaConnectClientConfiguration& clientConfiguration = Aws::MediaConnect::MediaConnectClientConfiguration(),
                           std::shared_ptr<MediaConnectEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaConnectClient(const Aws::Auth::AWSCredentials& credentials,
                           std::shared_ptr<MediaConnectEndpointProviderBase> endpointProvider = nullptr,
                           const Aws::MediaConnect::MediaConnectClientConfiguration& clientConfiguration = Aws::MediaConnect::MediaConnectClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MediaConnectClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<MediaConnectEndpointProviderBase> endpointProvider = nullptr,
                           const Aws::MediaConnect::MediaConnectClientConfiguration& clientConfiguration = Aws::MediaConnect::MediaConnectClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaConnectClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaConnectClient(const Aws::Auth::AWSCredentials& credentials,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MediaConnectClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~MediaConnectClient();

        /**
         * Adds outputs to an existing bridge.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/AddBridgeOutputs">AWS
         * API Reference</a></p>
         */
        virtual Model::AddBridgeOutputsOutcome AddBridgeOutputs(const Model::AddBridgeOutputsRequest& request) const;

        /**
         * A Callable wrapper for AddBridgeOutputs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AddBridgeOutputsRequestT = Model::AddBridgeOutputsRequest>
        Model::AddBridgeOutputsOutcomeCallable AddBridgeOutputsCallable(const AddBridgeOutputsRequestT& request) const
        {
            return SubmitCallable(&MediaConnectClient::AddBridgeOutputs, request);
        }

        /**
         * An Async wrapper for AddBridgeOutputs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AddBridgeOutputsRequestT = Model::AddBridgeOutputsRequest>
        void AddBridgeOutputsAsync(const AddBridgeOutputsRequestT& request, const AddBridgeOutputsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConnectClient::AddBridgeOutputs, request, handler, context);
        }

        /**
         * Adds sources to an existing bridge.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/AddBridgeSources">AWS
         * API Reference</a></p>
         */
        virtual Model::AddBridgeSourcesOutcome AddBridgeSources(const Model::AddBridgeSourcesRequest& request) const;

        /**
         * A Callable wrapper for AddBridgeSources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AddBridgeSourcesRequestT = Model::AddBridgeSourcesRequest>
        Model::AddBridgeSourcesOutcomeCallable AddBridgeSourcesCallable(const AddBridgeSourcesRequestT& request) const
        {
            return SubmitCallable(&MediaConnectClient::AddBridgeSources, request);
        }

        /**
         * An Async wrapper for AddBridgeSources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AddBridgeSourcesRequestT = Model::AddBridgeSourcesRequest>
        void AddBridgeSourcesAsync(const AddBridgeSourcesRequestT& request, const AddBridgeSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConnectClient::AddBridgeSources, request, handler, context);
        }

        /**
         * Adds media streams to an existing flow. After you add a media stream to a flow,
         * you can associate it with a source and/or an output that uses the ST 2110 JPEG
         * XS or CDI protocol.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/AddFlowMediaStreams">AWS
         * API Reference</a></p>
         */
        virtual Model::AddFlowMediaStreamsOutcome AddFlowMediaStreams(const Model::AddFlowMediaStreamsRequest& request) const;

        /**
         * A Callable wrapper for AddFlowMediaStreams that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AddFlowMediaStreamsRequestT = Model::AddFlowMediaStreamsRequest>
        Model::AddFlowMediaStreamsOutcomeCallable AddFlowMediaStreamsCallable(const AddFlowMediaStreamsRequestT& request) const
        {
            return SubmitCallable(&MediaConnectClient::AddFlowMediaStreams, request);
        }

        /**
         * An Async wrapper for AddFlowMediaStreams that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AddFlowMediaStreamsRequestT = Model::AddFlowMediaStreamsRequest>
        void AddFlowMediaStreamsAsync(const AddFlowMediaStreamsRequestT& request, const AddFlowMediaStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConnectClient::AddFlowMediaStreams, request, handler, context);
        }

        /**
         * Adds outputs to an existing flow. You can create up to 50 outputs per
         * flow.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/AddFlowOutputs">AWS
         * API Reference</a></p>
         */
        virtual Model::AddFlowOutputsOutcome AddFlowOutputs(const Model::AddFlowOutputsRequest& request) const;

        /**
         * A Callable wrapper for AddFlowOutputs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AddFlowOutputsRequestT = Model::AddFlowOutputsRequest>
        Model::AddFlowOutputsOutcomeCallable AddFlowOutputsCallable(const AddFlowOutputsRequestT& request) const
        {
            return SubmitCallable(&MediaConnectClient::AddFlowOutputs, request);
        }

        /**
         * An Async wrapper for AddFlowOutputs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AddFlowOutputsRequestT = Model::AddFlowOutputsRequest>
        void AddFlowOutputsAsync(const AddFlowOutputsRequestT& request, const AddFlowOutputsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConnectClient::AddFlowOutputs, request, handler, context);
        }

        /**
         * Adds Sources to flow<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/AddFlowSources">AWS
         * API Reference</a></p>
         */
        virtual Model::AddFlowSourcesOutcome AddFlowSources(const Model::AddFlowSourcesRequest& request) const;

        /**
         * A Callable wrapper for AddFlowSources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AddFlowSourcesRequestT = Model::AddFlowSourcesRequest>
        Model::AddFlowSourcesOutcomeCallable AddFlowSourcesCallable(const AddFlowSourcesRequestT& request) const
        {
            return SubmitCallable(&MediaConnectClient::AddFlowSources, request);
        }

        /**
         * An Async wrapper for AddFlowSources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AddFlowSourcesRequestT = Model::AddFlowSourcesRequest>
        void AddFlowSourcesAsync(const AddFlowSourcesRequestT& request, const AddFlowSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConnectClient::AddFlowSources, request, handler, context);
        }

        /**
         * Adds VPC interfaces to flow<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/AddFlowVpcInterfaces">AWS
         * API Reference</a></p>
         */
        virtual Model::AddFlowVpcInterfacesOutcome AddFlowVpcInterfaces(const Model::AddFlowVpcInterfacesRequest& request) const;

        /**
         * A Callable wrapper for AddFlowVpcInterfaces that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AddFlowVpcInterfacesRequestT = Model::AddFlowVpcInterfacesRequest>
        Model::AddFlowVpcInterfacesOutcomeCallable AddFlowVpcInterfacesCallable(const AddFlowVpcInterfacesRequestT& request) const
        {
            return SubmitCallable(&MediaConnectClient::AddFlowVpcInterfaces, request);
        }

        /**
         * An Async wrapper for AddFlowVpcInterfaces that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AddFlowVpcInterfacesRequestT = Model::AddFlowVpcInterfacesRequest>
        void AddFlowVpcInterfacesAsync(const AddFlowVpcInterfacesRequestT& request, const AddFlowVpcInterfacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConnectClient::AddFlowVpcInterfaces, request, handler, context);
        }

        /**
         * Creates a new bridge. The request must include one source.<p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/CreateBridge">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBridgeOutcome CreateBridge(const Model::CreateBridgeRequest& request) const;

        /**
         * A Callable wrapper for CreateBridge that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateBridgeRequestT = Model::CreateBridgeRequest>
        Model::CreateBridgeOutcomeCallable CreateBridgeCallable(const CreateBridgeRequestT& request) const
        {
            return SubmitCallable(&MediaConnectClient::CreateBridge, request);
        }

        /**
         * An Async wrapper for CreateBridge that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateBridgeRequestT = Model::CreateBridgeRequest>
        void CreateBridgeAsync(const CreateBridgeRequestT& request, const CreateBridgeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConnectClient::CreateBridge, request, handler, context);
        }

        /**
         * Creates a new flow. The request must include one source. The request optionally
         * can include outputs (up to 50) and entitlements (up to 50).<p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/CreateFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFlowOutcome CreateFlow(const Model::CreateFlowRequest& request) const;

        /**
         * A Callable wrapper for CreateFlow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateFlowRequestT = Model::CreateFlowRequest>
        Model::CreateFlowOutcomeCallable CreateFlowCallable(const CreateFlowRequestT& request) const
        {
            return SubmitCallable(&MediaConnectClient::CreateFlow, request);
        }

        /**
         * An Async wrapper for CreateFlow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateFlowRequestT = Model::CreateFlowRequest>
        void CreateFlowAsync(const CreateFlowRequestT& request, const CreateFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConnectClient::CreateFlow, request, handler, context);
        }

        /**
         * Creates a new gateway. The request must include at least one network (up to
         * 4).<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/CreateGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGatewayOutcome CreateGateway(const Model::CreateGatewayRequest& request) const;

        /**
         * A Callable wrapper for CreateGateway that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateGatewayRequestT = Model::CreateGatewayRequest>
        Model::CreateGatewayOutcomeCallable CreateGatewayCallable(const CreateGatewayRequestT& request) const
        {
            return SubmitCallable(&MediaConnectClient::CreateGateway, request);
        }

        /**
         * An Async wrapper for CreateGateway that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateGatewayRequestT = Model::CreateGatewayRequest>
        void CreateGatewayAsync(const CreateGatewayRequestT& request, const CreateGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConnectClient::CreateGateway, request, handler, context);
        }

        /**
         * Deletes a bridge. Before you can delete a bridge, you must stop the
         * bridge.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/DeleteBridge">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBridgeOutcome DeleteBridge(const Model::DeleteBridgeRequest& request) const;

        /**
         * A Callable wrapper for DeleteBridge that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteBridgeRequestT = Model::DeleteBridgeRequest>
        Model::DeleteBridgeOutcomeCallable DeleteBridgeCallable(const DeleteBridgeRequestT& request) const
        {
            return SubmitCallable(&MediaConnectClient::DeleteBridge, request);
        }

        /**
         * An Async wrapper for DeleteBridge that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteBridgeRequestT = Model::DeleteBridgeRequest>
        void DeleteBridgeAsync(const DeleteBridgeRequestT& request, const DeleteBridgeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConnectClient::DeleteBridge, request, handler, context);
        }

        /**
         * Deletes a flow. Before you can delete a flow, you must stop the flow.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/DeleteFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFlowOutcome DeleteFlow(const Model::DeleteFlowRequest& request) const;

        /**
         * A Callable wrapper for DeleteFlow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteFlowRequestT = Model::DeleteFlowRequest>
        Model::DeleteFlowOutcomeCallable DeleteFlowCallable(const DeleteFlowRequestT& request) const
        {
            return SubmitCallable(&MediaConnectClient::DeleteFlow, request);
        }

        /**
         * An Async wrapper for DeleteFlow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteFlowRequestT = Model::DeleteFlowRequest>
        void DeleteFlowAsync(const DeleteFlowRequestT& request, const DeleteFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConnectClient::DeleteFlow, request, handler, context);
        }

        /**
         * Deletes a gateway. Before you can delete a gateway, you must deregister its
         * instances and delete its bridges.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/DeleteGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGatewayOutcome DeleteGateway(const Model::DeleteGatewayRequest& request) const;

        /**
         * A Callable wrapper for DeleteGateway that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteGatewayRequestT = Model::DeleteGatewayRequest>
        Model::DeleteGatewayOutcomeCallable DeleteGatewayCallable(const DeleteGatewayRequestT& request) const
        {
            return SubmitCallable(&MediaConnectClient::DeleteGateway, request);
        }

        /**
         * An Async wrapper for DeleteGateway that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteGatewayRequestT = Model::DeleteGatewayRequest>
        void DeleteGatewayAsync(const DeleteGatewayRequestT& request, const DeleteGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConnectClient::DeleteGateway, request, handler, context);
        }

        /**
         * Deregisters an instance. Before you deregister an instance, all bridges running
         * on the instance must be stopped. If you want to deregister an instance without
         * stopping the bridges, you must use the --force option.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/DeregisterGatewayInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterGatewayInstanceOutcome DeregisterGatewayInstance(const Model::DeregisterGatewayInstanceRequest& request) const;

        /**
         * A Callable wrapper for DeregisterGatewayInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeregisterGatewayInstanceRequestT = Model::DeregisterGatewayInstanceRequest>
        Model::DeregisterGatewayInstanceOutcomeCallable DeregisterGatewayInstanceCallable(const DeregisterGatewayInstanceRequestT& request) const
        {
            return SubmitCallable(&MediaConnectClient::DeregisterGatewayInstance, request);
        }

        /**
         * An Async wrapper for DeregisterGatewayInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeregisterGatewayInstanceRequestT = Model::DeregisterGatewayInstanceRequest>
        void DeregisterGatewayInstanceAsync(const DeregisterGatewayInstanceRequestT& request, const DeregisterGatewayInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConnectClient::DeregisterGatewayInstance, request, handler, context);
        }

        /**
         * Displays the details of a bridge.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/DescribeBridge">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBridgeOutcome DescribeBridge(const Model::DescribeBridgeRequest& request) const;

        /**
         * A Callable wrapper for DescribeBridge that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeBridgeRequestT = Model::DescribeBridgeRequest>
        Model::DescribeBridgeOutcomeCallable DescribeBridgeCallable(const DescribeBridgeRequestT& request) const
        {
            return SubmitCallable(&MediaConnectClient::DescribeBridge, request);
        }

        /**
         * An Async wrapper for DescribeBridge that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeBridgeRequestT = Model::DescribeBridgeRequest>
        void DescribeBridgeAsync(const DescribeBridgeRequestT& request, const DescribeBridgeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConnectClient::DescribeBridge, request, handler, context);
        }

        /**
         * Displays the details of a flow. The response includes the flow ARN, name, and
         * Availability Zone, as well as details about the source, outputs, and
         * entitlements.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/DescribeFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFlowOutcome DescribeFlow(const Model::DescribeFlowRequest& request) const;

        /**
         * A Callable wrapper for DescribeFlow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeFlowRequestT = Model::DescribeFlowRequest>
        Model::DescribeFlowOutcomeCallable DescribeFlowCallable(const DescribeFlowRequestT& request) const
        {
            return SubmitCallable(&MediaConnectClient::DescribeFlow, request);
        }

        /**
         * An Async wrapper for DescribeFlow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeFlowRequestT = Model::DescribeFlowRequest>
        void DescribeFlowAsync(const DescribeFlowRequestT& request, const DescribeFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConnectClient::DescribeFlow, request, handler, context);
        }

        /**
         * Displays details of the flow's source stream. The response contains information
         * about the contents of the stream and its programs.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/DescribeFlowSourceMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFlowSourceMetadataOutcome DescribeFlowSourceMetadata(const Model::DescribeFlowSourceMetadataRequest& request) const;

        /**
         * A Callable wrapper for DescribeFlowSourceMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeFlowSourceMetadataRequestT = Model::DescribeFlowSourceMetadataRequest>
        Model::DescribeFlowSourceMetadataOutcomeCallable DescribeFlowSourceMetadataCallable(const DescribeFlowSourceMetadataRequestT& request) const
        {
            return SubmitCallable(&MediaConnectClient::DescribeFlowSourceMetadata, request);
        }

        /**
         * An Async wrapper for DescribeFlowSourceMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeFlowSourceMetadataRequestT = Model::DescribeFlowSourceMetadataRequest>
        void DescribeFlowSourceMetadataAsync(const DescribeFlowSourceMetadataRequestT& request, const DescribeFlowSourceMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConnectClient::DescribeFlowSourceMetadata, request, handler, context);
        }

        /**
         * Displays the details of a gateway. The response includes the gateway ARN, name,
         * and CIDR blocks, as well as details about the networks.<p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/DescribeGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeGatewayOutcome DescribeGateway(const Model::DescribeGatewayRequest& request) const;

        /**
         * A Callable wrapper for DescribeGateway that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeGatewayRequestT = Model::DescribeGatewayRequest>
        Model::DescribeGatewayOutcomeCallable DescribeGatewayCallable(const DescribeGatewayRequestT& request) const
        {
            return SubmitCallable(&MediaConnectClient::DescribeGateway, request);
        }

        /**
         * An Async wrapper for DescribeGateway that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeGatewayRequestT = Model::DescribeGatewayRequest>
        void DescribeGatewayAsync(const DescribeGatewayRequestT& request, const DescribeGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConnectClient::DescribeGateway, request, handler, context);
        }

        /**
         * Displays the details of an instance.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/DescribeGatewayInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeGatewayInstanceOutcome DescribeGatewayInstance(const Model::DescribeGatewayInstanceRequest& request) const;

        /**
         * A Callable wrapper for DescribeGatewayInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeGatewayInstanceRequestT = Model::DescribeGatewayInstanceRequest>
        Model::DescribeGatewayInstanceOutcomeCallable DescribeGatewayInstanceCallable(const DescribeGatewayInstanceRequestT& request) const
        {
            return SubmitCallable(&MediaConnectClient::DescribeGatewayInstance, request);
        }

        /**
         * An Async wrapper for DescribeGatewayInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeGatewayInstanceRequestT = Model::DescribeGatewayInstanceRequest>
        void DescribeGatewayInstanceAsync(const DescribeGatewayInstanceRequestT& request, const DescribeGatewayInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConnectClient::DescribeGatewayInstance, request, handler, context);
        }

        /**
         * Displays the details of an offering. The response includes the offering
         * description, duration, outbound bandwidth, price, and Amazon Resource Name
         * (ARN).<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/DescribeOffering">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOfferingOutcome DescribeOffering(const Model::DescribeOfferingRequest& request) const;

        /**
         * A Callable wrapper for DescribeOffering that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeOfferingRequestT = Model::DescribeOfferingRequest>
        Model::DescribeOfferingOutcomeCallable DescribeOfferingCallable(const DescribeOfferingRequestT& request) const
        {
            return SubmitCallable(&MediaConnectClient::DescribeOffering, request);
        }

        /**
         * An Async wrapper for DescribeOffering that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeOfferingRequestT = Model::DescribeOfferingRequest>
        void DescribeOfferingAsync(const DescribeOfferingRequestT& request, const DescribeOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConnectClient::DescribeOffering, request, handler, context);
        }

        /**
         * Displays the details of a reservation. The response includes the reservation
         * name, state, start date and time, and the details of the offering that make up
         * the rest of the reservation (such as price, duration, and outbound
         * bandwidth).<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/DescribeReservation">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReservationOutcome DescribeReservation(const Model::DescribeReservationRequest& request) const;

        /**
         * A Callable wrapper for DescribeReservation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeReservationRequestT = Model::DescribeReservationRequest>
        Model::DescribeReservationOutcomeCallable DescribeReservationCallable(const DescribeReservationRequestT& request) const
        {
            return SubmitCallable(&MediaConnectClient::DescribeReservation, request);
        }

        /**
         * An Async wrapper for DescribeReservation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeReservationRequestT = Model::DescribeReservationRequest>
        void DescribeReservationAsync(const DescribeReservationRequestT& request, const DescribeReservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConnectClient::DescribeReservation, request, handler, context);
        }

        /**
         * Grants entitlements to an existing flow.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/GrantFlowEntitlements">AWS
         * API Reference</a></p>
         */
        virtual Model::GrantFlowEntitlementsOutcome GrantFlowEntitlements(const Model::GrantFlowEntitlementsRequest& request) const;

        /**
         * A Callable wrapper for GrantFlowEntitlements that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GrantFlowEntitlementsRequestT = Model::GrantFlowEntitlementsRequest>
        Model::GrantFlowEntitlementsOutcomeCallable GrantFlowEntitlementsCallable(const GrantFlowEntitlementsRequestT& request) const
        {
            return SubmitCallable(&MediaConnectClient::GrantFlowEntitlements, request);
        }

        /**
         * An Async wrapper for GrantFlowEntitlements that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GrantFlowEntitlementsRequestT = Model::GrantFlowEntitlementsRequest>
        void GrantFlowEntitlementsAsync(const GrantFlowEntitlementsRequestT& request, const GrantFlowEntitlementsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConnectClient::GrantFlowEntitlements, request, handler, context);
        }

        /**
         * Displays a list of bridges that are associated with this account and an
         * optionally specified Arn. This request returns a paginated result.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/ListBridges">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBridgesOutcome ListBridges(const Model::ListBridgesRequest& request) const;

        /**
         * A Callable wrapper for ListBridges that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListBridgesRequestT = Model::ListBridgesRequest>
        Model::ListBridgesOutcomeCallable ListBridgesCallable(const ListBridgesRequestT& request) const
        {
            return SubmitCallable(&MediaConnectClient::ListBridges, request);
        }

        /**
         * An Async wrapper for ListBridges that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListBridgesRequestT = Model::ListBridgesRequest>
        void ListBridgesAsync(const ListBridgesRequestT& request, const ListBridgesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConnectClient::ListBridges, request, handler, context);
        }

        /**
         * Displays a list of all entitlements that have been granted to this account. This
         * request returns 20 results per page.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/ListEntitlements">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEntitlementsOutcome ListEntitlements(const Model::ListEntitlementsRequest& request) const;

        /**
         * A Callable wrapper for ListEntitlements that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListEntitlementsRequestT = Model::ListEntitlementsRequest>
        Model::ListEntitlementsOutcomeCallable ListEntitlementsCallable(const ListEntitlementsRequestT& request) const
        {
            return SubmitCallable(&MediaConnectClient::ListEntitlements, request);
        }

        /**
         * An Async wrapper for ListEntitlements that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEntitlementsRequestT = Model::ListEntitlementsRequest>
        void ListEntitlementsAsync(const ListEntitlementsRequestT& request, const ListEntitlementsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConnectClient::ListEntitlements, request, handler, context);
        }

        /**
         * Displays a list of flows that are associated with this account. This request
         * returns a paginated result.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/ListFlows">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFlowsOutcome ListFlows(const Model::ListFlowsRequest& request) const;

        /**
         * A Callable wrapper for ListFlows that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListFlowsRequestT = Model::ListFlowsRequest>
        Model::ListFlowsOutcomeCallable ListFlowsCallable(const ListFlowsRequestT& request) const
        {
            return SubmitCallable(&MediaConnectClient::ListFlows, request);
        }

        /**
         * An Async wrapper for ListFlows that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListFlowsRequestT = Model::ListFlowsRequest>
        void ListFlowsAsync(const ListFlowsRequestT& request, const ListFlowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConnectClient::ListFlows, request, handler, context);
        }

        /**
         * Displays a list of instances associated with the AWS account. This request
         * returns a paginated result. You can use the filterArn property to display only
         * the instances associated with the selected Gateway Amazon Resource Name
         * (ARN).<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/ListGatewayInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGatewayInstancesOutcome ListGatewayInstances(const Model::ListGatewayInstancesRequest& request) const;

        /**
         * A Callable wrapper for ListGatewayInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListGatewayInstancesRequestT = Model::ListGatewayInstancesRequest>
        Model::ListGatewayInstancesOutcomeCallable ListGatewayInstancesCallable(const ListGatewayInstancesRequestT& request) const
        {
            return SubmitCallable(&MediaConnectClient::ListGatewayInstances, request);
        }

        /**
         * An Async wrapper for ListGatewayInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListGatewayInstancesRequestT = Model::ListGatewayInstancesRequest>
        void ListGatewayInstancesAsync(const ListGatewayInstancesRequestT& request, const ListGatewayInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConnectClient::ListGatewayInstances, request, handler, context);
        }

        /**
         * Displays a list of gateways that are associated with this account. This request
         * returns a paginated result.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/ListGateways">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGatewaysOutcome ListGateways(const Model::ListGatewaysRequest& request) const;

        /**
         * A Callable wrapper for ListGateways that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListGatewaysRequestT = Model::ListGatewaysRequest>
        Model::ListGatewaysOutcomeCallable ListGatewaysCallable(const ListGatewaysRequestT& request) const
        {
            return SubmitCallable(&MediaConnectClient::ListGateways, request);
        }

        /**
         * An Async wrapper for ListGateways that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListGatewaysRequestT = Model::ListGatewaysRequest>
        void ListGatewaysAsync(const ListGatewaysRequestT& request, const ListGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConnectClient::ListGateways, request, handler, context);
        }

        /**
         * Displays a list of all offerings that are available to this account in the
         * current AWS Region. If you have an active reservation (which means you've
         * purchased an offering that has already started and hasn't expired yet), your
         * account isn't eligible for other offerings.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/ListOfferings">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOfferingsOutcome ListOfferings(const Model::ListOfferingsRequest& request) const;

        /**
         * A Callable wrapper for ListOfferings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListOfferingsRequestT = Model::ListOfferingsRequest>
        Model::ListOfferingsOutcomeCallable ListOfferingsCallable(const ListOfferingsRequestT& request) const
        {
            return SubmitCallable(&MediaConnectClient::ListOfferings, request);
        }

        /**
         * An Async wrapper for ListOfferings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListOfferingsRequestT = Model::ListOfferingsRequest>
        void ListOfferingsAsync(const ListOfferingsRequestT& request, const ListOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConnectClient::ListOfferings, request, handler, context);
        }

        /**
         * Displays a list of all reservations that have been purchased by this account in
         * the current AWS Region. This list includes all reservations in all states (such
         * as active and expired).<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/ListReservations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReservationsOutcome ListReservations(const Model::ListReservationsRequest& request) const;

        /**
         * A Callable wrapper for ListReservations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListReservationsRequestT = Model::ListReservationsRequest>
        Model::ListReservationsOutcomeCallable ListReservationsCallable(const ListReservationsRequestT& request) const
        {
            return SubmitCallable(&MediaConnectClient::ListReservations, request);
        }

        /**
         * An Async wrapper for ListReservations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListReservationsRequestT = Model::ListReservationsRequest>
        void ListReservationsAsync(const ListReservationsRequestT& request, const ListReservationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConnectClient::ListReservations, request, handler, context);
        }

        /**
         * List all tags on an AWS Elemental MediaConnect resource<p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&MediaConnectClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConnectClient::ListTagsForResource, request, handler, context);
        }

        /**
         * Submits a request to purchase an offering. If you already have an active
         * reservation, you can't purchase another offering.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/PurchaseOffering">AWS
         * API Reference</a></p>
         */
        virtual Model::PurchaseOfferingOutcome PurchaseOffering(const Model::PurchaseOfferingRequest& request) const;

        /**
         * A Callable wrapper for PurchaseOffering that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PurchaseOfferingRequestT = Model::PurchaseOfferingRequest>
        Model::PurchaseOfferingOutcomeCallable PurchaseOfferingCallable(const PurchaseOfferingRequestT& request) const
        {
            return SubmitCallable(&MediaConnectClient::PurchaseOffering, request);
        }

        /**
         * An Async wrapper for PurchaseOffering that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PurchaseOfferingRequestT = Model::PurchaseOfferingRequest>
        void PurchaseOfferingAsync(const PurchaseOfferingRequestT& request, const PurchaseOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConnectClient::PurchaseOffering, request, handler, context);
        }

        /**
         * Removes an output from a bridge.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/RemoveBridgeOutput">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveBridgeOutputOutcome RemoveBridgeOutput(const Model::RemoveBridgeOutputRequest& request) const;

        /**
         * A Callable wrapper for RemoveBridgeOutput that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RemoveBridgeOutputRequestT = Model::RemoveBridgeOutputRequest>
        Model::RemoveBridgeOutputOutcomeCallable RemoveBridgeOutputCallable(const RemoveBridgeOutputRequestT& request) const
        {
            return SubmitCallable(&MediaConnectClient::RemoveBridgeOutput, request);
        }

        /**
         * An Async wrapper for RemoveBridgeOutput that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RemoveBridgeOutputRequestT = Model::RemoveBridgeOutputRequest>
        void RemoveBridgeOutputAsync(const RemoveBridgeOutputRequestT& request, const RemoveBridgeOutputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConnectClient::RemoveBridgeOutput, request, handler, context);
        }

        /**
         * Removes a source from a bridge.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/RemoveBridgeSource">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveBridgeSourceOutcome RemoveBridgeSource(const Model::RemoveBridgeSourceRequest& request) const;

        /**
         * A Callable wrapper for RemoveBridgeSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RemoveBridgeSourceRequestT = Model::RemoveBridgeSourceRequest>
        Model::RemoveBridgeSourceOutcomeCallable RemoveBridgeSourceCallable(const RemoveBridgeSourceRequestT& request) const
        {
            return SubmitCallable(&MediaConnectClient::RemoveBridgeSource, request);
        }

        /**
         * An Async wrapper for RemoveBridgeSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RemoveBridgeSourceRequestT = Model::RemoveBridgeSourceRequest>
        void RemoveBridgeSourceAsync(const RemoveBridgeSourceRequestT& request, const RemoveBridgeSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConnectClient::RemoveBridgeSource, request, handler, context);
        }

        /**
         * Removes a media stream from a flow. This action is only available if the media
         * stream is not associated with a source or output.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/RemoveFlowMediaStream">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveFlowMediaStreamOutcome RemoveFlowMediaStream(const Model::RemoveFlowMediaStreamRequest& request) const;

        /**
         * A Callable wrapper for RemoveFlowMediaStream that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RemoveFlowMediaStreamRequestT = Model::RemoveFlowMediaStreamRequest>
        Model::RemoveFlowMediaStreamOutcomeCallable RemoveFlowMediaStreamCallable(const RemoveFlowMediaStreamRequestT& request) const
        {
            return SubmitCallable(&MediaConnectClient::RemoveFlowMediaStream, request);
        }

        /**
         * An Async wrapper for RemoveFlowMediaStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RemoveFlowMediaStreamRequestT = Model::RemoveFlowMediaStreamRequest>
        void RemoveFlowMediaStreamAsync(const RemoveFlowMediaStreamRequestT& request, const RemoveFlowMediaStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConnectClient::RemoveFlowMediaStream, request, handler, context);
        }

        /**
         * Removes an output from an existing flow. This request can be made only on an
         * output that does not have an entitlement associated with it. If the output has
         * an entitlement, you must revoke the entitlement instead. When an entitlement is
         * revoked from a flow, the service automatically removes the associated
         * output.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/RemoveFlowOutput">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveFlowOutputOutcome RemoveFlowOutput(const Model::RemoveFlowOutputRequest& request) const;

        /**
         * A Callable wrapper for RemoveFlowOutput that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RemoveFlowOutputRequestT = Model::RemoveFlowOutputRequest>
        Model::RemoveFlowOutputOutcomeCallable RemoveFlowOutputCallable(const RemoveFlowOutputRequestT& request) const
        {
            return SubmitCallable(&MediaConnectClient::RemoveFlowOutput, request);
        }

        /**
         * An Async wrapper for RemoveFlowOutput that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RemoveFlowOutputRequestT = Model::RemoveFlowOutputRequest>
        void RemoveFlowOutputAsync(const RemoveFlowOutputRequestT& request, const RemoveFlowOutputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConnectClient::RemoveFlowOutput, request, handler, context);
        }

        /**
         * Removes a source from an existing flow. This request can be made only if there
         * is more than one source on the flow.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/RemoveFlowSource">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveFlowSourceOutcome RemoveFlowSource(const Model::RemoveFlowSourceRequest& request) const;

        /**
         * A Callable wrapper for RemoveFlowSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RemoveFlowSourceRequestT = Model::RemoveFlowSourceRequest>
        Model::RemoveFlowSourceOutcomeCallable RemoveFlowSourceCallable(const RemoveFlowSourceRequestT& request) const
        {
            return SubmitCallable(&MediaConnectClient::RemoveFlowSource, request);
        }

        /**
         * An Async wrapper for RemoveFlowSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RemoveFlowSourceRequestT = Model::RemoveFlowSourceRequest>
        void RemoveFlowSourceAsync(const RemoveFlowSourceRequestT& request, const RemoveFlowSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConnectClient::RemoveFlowSource, request, handler, context);
        }

        /**
         * Removes a VPC Interface from an existing flow. This request can be made only on
         * a VPC interface that does not have a Source or Output associated with it. If the
         * VPC interface is referenced by a Source or Output, you must first delete or
         * update the Source or Output to no longer reference the VPC interface.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/RemoveFlowVpcInterface">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveFlowVpcInterfaceOutcome RemoveFlowVpcInterface(const Model::RemoveFlowVpcInterfaceRequest& request) const;

        /**
         * A Callable wrapper for RemoveFlowVpcInterface that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RemoveFlowVpcInterfaceRequestT = Model::RemoveFlowVpcInterfaceRequest>
        Model::RemoveFlowVpcInterfaceOutcomeCallable RemoveFlowVpcInterfaceCallable(const RemoveFlowVpcInterfaceRequestT& request) const
        {
            return SubmitCallable(&MediaConnectClient::RemoveFlowVpcInterface, request);
        }

        /**
         * An Async wrapper for RemoveFlowVpcInterface that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RemoveFlowVpcInterfaceRequestT = Model::RemoveFlowVpcInterfaceRequest>
        void RemoveFlowVpcInterfaceAsync(const RemoveFlowVpcInterfaceRequestT& request, const RemoveFlowVpcInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConnectClient::RemoveFlowVpcInterface, request, handler, context);
        }

        /**
         * Revokes an entitlement from a flow. Once an entitlement is revoked, the content
         * becomes unavailable to the subscriber and the associated output is
         * removed.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/RevokeFlowEntitlement">AWS
         * API Reference</a></p>
         */
        virtual Model::RevokeFlowEntitlementOutcome RevokeFlowEntitlement(const Model::RevokeFlowEntitlementRequest& request) const;

        /**
         * A Callable wrapper for RevokeFlowEntitlement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RevokeFlowEntitlementRequestT = Model::RevokeFlowEntitlementRequest>
        Model::RevokeFlowEntitlementOutcomeCallable RevokeFlowEntitlementCallable(const RevokeFlowEntitlementRequestT& request) const
        {
            return SubmitCallable(&MediaConnectClient::RevokeFlowEntitlement, request);
        }

        /**
         * An Async wrapper for RevokeFlowEntitlement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RevokeFlowEntitlementRequestT = Model::RevokeFlowEntitlementRequest>
        void RevokeFlowEntitlementAsync(const RevokeFlowEntitlementRequestT& request, const RevokeFlowEntitlementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConnectClient::RevokeFlowEntitlement, request, handler, context);
        }

        /**
         * Starts a flow.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/StartFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::StartFlowOutcome StartFlow(const Model::StartFlowRequest& request) const;

        /**
         * A Callable wrapper for StartFlow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartFlowRequestT = Model::StartFlowRequest>
        Model::StartFlowOutcomeCallable StartFlowCallable(const StartFlowRequestT& request) const
        {
            return SubmitCallable(&MediaConnectClient::StartFlow, request);
        }

        /**
         * An Async wrapper for StartFlow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartFlowRequestT = Model::StartFlowRequest>
        void StartFlowAsync(const StartFlowRequestT& request, const StartFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConnectClient::StartFlow, request, handler, context);
        }

        /**
         * Stops a flow.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/StopFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::StopFlowOutcome StopFlow(const Model::StopFlowRequest& request) const;

        /**
         * A Callable wrapper for StopFlow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopFlowRequestT = Model::StopFlowRequest>
        Model::StopFlowOutcomeCallable StopFlowCallable(const StopFlowRequestT& request) const
        {
            return SubmitCallable(&MediaConnectClient::StopFlow, request);
        }

        /**
         * An Async wrapper for StopFlow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopFlowRequestT = Model::StopFlowRequest>
        void StopFlowAsync(const StopFlowRequestT& request, const StopFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConnectClient::StopFlow, request, handler, context);
        }

        /**
         * Associates the specified tags to a resource with the specified resourceArn. If
         * existing tags on a resource are not specified in the request parameters, they
         * are not changed. When a resource is deleted, the tags associated with that
         * resource are deleted as well.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&MediaConnectClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConnectClient::TagResource, request, handler, context);
        }

        /**
         * Deletes specified tags from a resource.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&MediaConnectClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConnectClient::UntagResource, request, handler, context);
        }

        /**
         * Updates the bridge<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UpdateBridge">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBridgeOutcome UpdateBridge(const Model::UpdateBridgeRequest& request) const;

        /**
         * A Callable wrapper for UpdateBridge that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateBridgeRequestT = Model::UpdateBridgeRequest>
        Model::UpdateBridgeOutcomeCallable UpdateBridgeCallable(const UpdateBridgeRequestT& request) const
        {
            return SubmitCallable(&MediaConnectClient::UpdateBridge, request);
        }

        /**
         * An Async wrapper for UpdateBridge that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateBridgeRequestT = Model::UpdateBridgeRequest>
        void UpdateBridgeAsync(const UpdateBridgeRequestT& request, const UpdateBridgeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConnectClient::UpdateBridge, request, handler, context);
        }

        /**
         * Updates an existing bridge output.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UpdateBridgeOutput">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBridgeOutputOutcome UpdateBridgeOutput(const Model::UpdateBridgeOutputRequest& request) const;

        /**
         * A Callable wrapper for UpdateBridgeOutput that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateBridgeOutputRequestT = Model::UpdateBridgeOutputRequest>
        Model::UpdateBridgeOutputOutcomeCallable UpdateBridgeOutputCallable(const UpdateBridgeOutputRequestT& request) const
        {
            return SubmitCallable(&MediaConnectClient::UpdateBridgeOutput, request);
        }

        /**
         * An Async wrapper for UpdateBridgeOutput that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateBridgeOutputRequestT = Model::UpdateBridgeOutputRequest>
        void UpdateBridgeOutputAsync(const UpdateBridgeOutputRequestT& request, const UpdateBridgeOutputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConnectClient::UpdateBridgeOutput, request, handler, context);
        }

        /**
         * Updates an existing bridge source.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UpdateBridgeSource">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBridgeSourceOutcome UpdateBridgeSource(const Model::UpdateBridgeSourceRequest& request) const;

        /**
         * A Callable wrapper for UpdateBridgeSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateBridgeSourceRequestT = Model::UpdateBridgeSourceRequest>
        Model::UpdateBridgeSourceOutcomeCallable UpdateBridgeSourceCallable(const UpdateBridgeSourceRequestT& request) const
        {
            return SubmitCallable(&MediaConnectClient::UpdateBridgeSource, request);
        }

        /**
         * An Async wrapper for UpdateBridgeSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateBridgeSourceRequestT = Model::UpdateBridgeSourceRequest>
        void UpdateBridgeSourceAsync(const UpdateBridgeSourceRequestT& request, const UpdateBridgeSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConnectClient::UpdateBridgeSource, request, handler, context);
        }

        /**
         * Updates the bridge state<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UpdateBridgeState">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBridgeStateOutcome UpdateBridgeState(const Model::UpdateBridgeStateRequest& request) const;

        /**
         * A Callable wrapper for UpdateBridgeState that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateBridgeStateRequestT = Model::UpdateBridgeStateRequest>
        Model::UpdateBridgeStateOutcomeCallable UpdateBridgeStateCallable(const UpdateBridgeStateRequestT& request) const
        {
            return SubmitCallable(&MediaConnectClient::UpdateBridgeState, request);
        }

        /**
         * An Async wrapper for UpdateBridgeState that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateBridgeStateRequestT = Model::UpdateBridgeStateRequest>
        void UpdateBridgeStateAsync(const UpdateBridgeStateRequestT& request, const UpdateBridgeStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConnectClient::UpdateBridgeState, request, handler, context);
        }

        /**
         * Updates flow<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UpdateFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFlowOutcome UpdateFlow(const Model::UpdateFlowRequest& request) const;

        /**
         * A Callable wrapper for UpdateFlow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateFlowRequestT = Model::UpdateFlowRequest>
        Model::UpdateFlowOutcomeCallable UpdateFlowCallable(const UpdateFlowRequestT& request) const
        {
            return SubmitCallable(&MediaConnectClient::UpdateFlow, request);
        }

        /**
         * An Async wrapper for UpdateFlow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateFlowRequestT = Model::UpdateFlowRequest>
        void UpdateFlowAsync(const UpdateFlowRequestT& request, const UpdateFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConnectClient::UpdateFlow, request, handler, context);
        }

        /**
         * You can change an entitlement's description, subscribers, and encryption. If you
         * change the subscribers, the service will remove the outputs that are are used by
         * the subscribers that are removed.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UpdateFlowEntitlement">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFlowEntitlementOutcome UpdateFlowEntitlement(const Model::UpdateFlowEntitlementRequest& request) const;

        /**
         * A Callable wrapper for UpdateFlowEntitlement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateFlowEntitlementRequestT = Model::UpdateFlowEntitlementRequest>
        Model::UpdateFlowEntitlementOutcomeCallable UpdateFlowEntitlementCallable(const UpdateFlowEntitlementRequestT& request) const
        {
            return SubmitCallable(&MediaConnectClient::UpdateFlowEntitlement, request);
        }

        /**
         * An Async wrapper for UpdateFlowEntitlement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateFlowEntitlementRequestT = Model::UpdateFlowEntitlementRequest>
        void UpdateFlowEntitlementAsync(const UpdateFlowEntitlementRequestT& request, const UpdateFlowEntitlementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConnectClient::UpdateFlowEntitlement, request, handler, context);
        }

        /**
         * Updates an existing media stream.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UpdateFlowMediaStream">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFlowMediaStreamOutcome UpdateFlowMediaStream(const Model::UpdateFlowMediaStreamRequest& request) const;

        /**
         * A Callable wrapper for UpdateFlowMediaStream that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateFlowMediaStreamRequestT = Model::UpdateFlowMediaStreamRequest>
        Model::UpdateFlowMediaStreamOutcomeCallable UpdateFlowMediaStreamCallable(const UpdateFlowMediaStreamRequestT& request) const
        {
            return SubmitCallable(&MediaConnectClient::UpdateFlowMediaStream, request);
        }

        /**
         * An Async wrapper for UpdateFlowMediaStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateFlowMediaStreamRequestT = Model::UpdateFlowMediaStreamRequest>
        void UpdateFlowMediaStreamAsync(const UpdateFlowMediaStreamRequestT& request, const UpdateFlowMediaStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConnectClient::UpdateFlowMediaStream, request, handler, context);
        }

        /**
         * Updates an existing flow output.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UpdateFlowOutput">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFlowOutputOutcome UpdateFlowOutput(const Model::UpdateFlowOutputRequest& request) const;

        /**
         * A Callable wrapper for UpdateFlowOutput that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateFlowOutputRequestT = Model::UpdateFlowOutputRequest>
        Model::UpdateFlowOutputOutcomeCallable UpdateFlowOutputCallable(const UpdateFlowOutputRequestT& request) const
        {
            return SubmitCallable(&MediaConnectClient::UpdateFlowOutput, request);
        }

        /**
         * An Async wrapper for UpdateFlowOutput that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateFlowOutputRequestT = Model::UpdateFlowOutputRequest>
        void UpdateFlowOutputAsync(const UpdateFlowOutputRequestT& request, const UpdateFlowOutputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConnectClient::UpdateFlowOutput, request, handler, context);
        }

        /**
         * Updates the source of a flow.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UpdateFlowSource">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFlowSourceOutcome UpdateFlowSource(const Model::UpdateFlowSourceRequest& request) const;

        /**
         * A Callable wrapper for UpdateFlowSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateFlowSourceRequestT = Model::UpdateFlowSourceRequest>
        Model::UpdateFlowSourceOutcomeCallable UpdateFlowSourceCallable(const UpdateFlowSourceRequestT& request) const
        {
            return SubmitCallable(&MediaConnectClient::UpdateFlowSource, request);
        }

        /**
         * An Async wrapper for UpdateFlowSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateFlowSourceRequestT = Model::UpdateFlowSourceRequest>
        void UpdateFlowSourceAsync(const UpdateFlowSourceRequestT& request, const UpdateFlowSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConnectClient::UpdateFlowSource, request, handler, context);
        }

        /**
         * Updates the configuration of an existing Gateway Instance.<p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UpdateGatewayInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGatewayInstanceOutcome UpdateGatewayInstance(const Model::UpdateGatewayInstanceRequest& request) const;

        /**
         * A Callable wrapper for UpdateGatewayInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateGatewayInstanceRequestT = Model::UpdateGatewayInstanceRequest>
        Model::UpdateGatewayInstanceOutcomeCallable UpdateGatewayInstanceCallable(const UpdateGatewayInstanceRequestT& request) const
        {
            return SubmitCallable(&MediaConnectClient::UpdateGatewayInstance, request);
        }

        /**
         * An Async wrapper for UpdateGatewayInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateGatewayInstanceRequestT = Model::UpdateGatewayInstanceRequest>
        void UpdateGatewayInstanceAsync(const UpdateGatewayInstanceRequestT& request, const UpdateGatewayInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConnectClient::UpdateGatewayInstance, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<MediaConnectEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<MediaConnectClient>;
      void init(const MediaConnectClientConfiguration& clientConfiguration);

      MediaConnectClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<MediaConnectEndpointProviderBase> m_endpointProvider;
  };

} // namespace MediaConnect
} // namespace Aws
