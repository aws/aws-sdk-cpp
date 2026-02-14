/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/MediaConnectPaginationBase.h>
#include <aws/mediaconnect/MediaConnectServiceClientModel.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>

namespace Aws {
namespace MediaConnect {
/**
 * <p>Welcome to the Elemental MediaConnect API reference. </p> <p>MediaConnect is
 * a service that lets you ingest live video content into the cloud and distribute
 * it to destinations all over the world, both inside and outside the Amazon Web
 * Services cloud. This API reference provides descriptions, syntax, and usage
 * examples for each of the actions and data types that are supported by
 * MediaConnect. </p> <p>Use the following links to get started with the
 * MediaConnect API:</p> <ul> <li> <p> <a
 * href="https://docs.aws.amazon.com/mediaconnect/latest/api/API_Operations.html">Actions</a>:
 * An alphabetical list of all MediaConnect API operations.</p> </li> <li> <p> <a
 * href="https://docs.aws.amazon.com/mediaconnect/latest/api/API_Types.html">Data
 * types</a>: An alphabetical list of all MediaConnect data types.</p> </li> <li>
 * <p> <a
 * href="https://docs.aws.amazon.com/mediaconnect/latest/api/CommonParameters.html">Common
 * parameters</a>: Parameters that all operations can use.</p> </li> <li> <p> <a
 * href="https://docs.aws.amazon.com/mediaconnect/latest/api/CommonErrors.html">Common
 * errors</a>: Client and server errors that all operations can return.</p> </li>
 * </ul>
 */
class AWS_MEDIACONNECT_API MediaConnectClient : public Aws::Client::AWSJsonClient,
                                                public Aws::Client::ClientWithAsyncTemplateMethods<MediaConnectClient>,
                                                public MediaConnectPaginationBase<MediaConnectClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef MediaConnectClientConfiguration ClientConfigurationType;
  typedef MediaConnectEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  MediaConnectClient(
      const Aws::MediaConnect::MediaConnectClientConfiguration& clientConfiguration = Aws::MediaConnect::MediaConnectClientConfiguration(),
      std::shared_ptr<MediaConnectEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  MediaConnectClient(
      const Aws::Auth::AWSCredentials& credentials, std::shared_ptr<MediaConnectEndpointProviderBase> endpointProvider = nullptr,
      const Aws::MediaConnect::MediaConnectClientConfiguration& clientConfiguration = Aws::MediaConnect::MediaConnectClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  MediaConnectClient(
      const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
      std::shared_ptr<MediaConnectEndpointProviderBase> endpointProvider = nullptr,
      const Aws::MediaConnect::MediaConnectClientConfiguration& clientConfiguration = Aws::MediaConnect::MediaConnectClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  MediaConnectClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  MediaConnectClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  MediaConnectClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                     const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~MediaConnectClient();

  /**
   * <p> Adds outputs to an existing bridge.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/AddBridgeOutputs">AWS
   * API Reference</a></p>
   */
  virtual Model::AddBridgeOutputsOutcome AddBridgeOutputs(const Model::AddBridgeOutputsRequest& request) const;

  /**
   * A Callable wrapper for AddBridgeOutputs that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename AddBridgeOutputsRequestT = Model::AddBridgeOutputsRequest>
  Model::AddBridgeOutputsOutcomeCallable AddBridgeOutputsCallable(const AddBridgeOutputsRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::AddBridgeOutputs, request);
  }

  /**
   * An Async wrapper for AddBridgeOutputs that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename AddBridgeOutputsRequestT = Model::AddBridgeOutputsRequest>
  void AddBridgeOutputsAsync(const AddBridgeOutputsRequestT& request, const AddBridgeOutputsResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::AddBridgeOutputs, request, handler, context);
  }

  /**
   * <p> Adds sources to an existing bridge.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/AddBridgeSources">AWS
   * API Reference</a></p>
   */
  virtual Model::AddBridgeSourcesOutcome AddBridgeSources(const Model::AddBridgeSourcesRequest& request) const;

  /**
   * A Callable wrapper for AddBridgeSources that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename AddBridgeSourcesRequestT = Model::AddBridgeSourcesRequest>
  Model::AddBridgeSourcesOutcomeCallable AddBridgeSourcesCallable(const AddBridgeSourcesRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::AddBridgeSources, request);
  }

  /**
   * An Async wrapper for AddBridgeSources that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename AddBridgeSourcesRequestT = Model::AddBridgeSourcesRequest>
  void AddBridgeSourcesAsync(const AddBridgeSourcesRequestT& request, const AddBridgeSourcesResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::AddBridgeSources, request, handler, context);
  }

  /**
   * <p> Adds media streams to an existing flow. After you add a media stream to a
   * flow, you can associate it with a source and/or an output that uses the ST 2110
   * JPEG XS or CDI protocol.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/AddFlowMediaStreams">AWS
   * API Reference</a></p>
   */
  virtual Model::AddFlowMediaStreamsOutcome AddFlowMediaStreams(const Model::AddFlowMediaStreamsRequest& request) const;

  /**
   * A Callable wrapper for AddFlowMediaStreams that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename AddFlowMediaStreamsRequestT = Model::AddFlowMediaStreamsRequest>
  Model::AddFlowMediaStreamsOutcomeCallable AddFlowMediaStreamsCallable(const AddFlowMediaStreamsRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::AddFlowMediaStreams, request);
  }

  /**
   * An Async wrapper for AddFlowMediaStreams that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename AddFlowMediaStreamsRequestT = Model::AddFlowMediaStreamsRequest>
  void AddFlowMediaStreamsAsync(const AddFlowMediaStreamsRequestT& request, const AddFlowMediaStreamsResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::AddFlowMediaStreams, request, handler, context);
  }

  /**
   * <p> Adds outputs to an existing flow. You can create up to 50 outputs per
   * flow.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/AddFlowOutputs">AWS
   * API Reference</a></p>
   */
  virtual Model::AddFlowOutputsOutcome AddFlowOutputs(const Model::AddFlowOutputsRequest& request) const;

  /**
   * A Callable wrapper for AddFlowOutputs that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename AddFlowOutputsRequestT = Model::AddFlowOutputsRequest>
  Model::AddFlowOutputsOutcomeCallable AddFlowOutputsCallable(const AddFlowOutputsRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::AddFlowOutputs, request);
  }

  /**
   * An Async wrapper for AddFlowOutputs that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename AddFlowOutputsRequestT = Model::AddFlowOutputsRequest>
  void AddFlowOutputsAsync(const AddFlowOutputsRequestT& request, const AddFlowOutputsResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::AddFlowOutputs, request, handler, context);
  }

  /**
   * <p> Adds sources to a flow.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/AddFlowSources">AWS
   * API Reference</a></p>
   */
  virtual Model::AddFlowSourcesOutcome AddFlowSources(const Model::AddFlowSourcesRequest& request) const;

  /**
   * A Callable wrapper for AddFlowSources that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename AddFlowSourcesRequestT = Model::AddFlowSourcesRequest>
  Model::AddFlowSourcesOutcomeCallable AddFlowSourcesCallable(const AddFlowSourcesRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::AddFlowSources, request);
  }

  /**
   * An Async wrapper for AddFlowSources that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename AddFlowSourcesRequestT = Model::AddFlowSourcesRequest>
  void AddFlowSourcesAsync(const AddFlowSourcesRequestT& request, const AddFlowSourcesResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::AddFlowSources, request, handler, context);
  }

  /**
   * <p> Adds VPC interfaces to a flow.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/AddFlowVpcInterfaces">AWS
   * API Reference</a></p>
   */
  virtual Model::AddFlowVpcInterfacesOutcome AddFlowVpcInterfaces(const Model::AddFlowVpcInterfacesRequest& request) const;

  /**
   * A Callable wrapper for AddFlowVpcInterfaces that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename AddFlowVpcInterfacesRequestT = Model::AddFlowVpcInterfacesRequest>
  Model::AddFlowVpcInterfacesOutcomeCallable AddFlowVpcInterfacesCallable(const AddFlowVpcInterfacesRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::AddFlowVpcInterfaces, request);
  }

  /**
   * An Async wrapper for AddFlowVpcInterfaces that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename AddFlowVpcInterfacesRequestT = Model::AddFlowVpcInterfacesRequest>
  void AddFlowVpcInterfacesAsync(const AddFlowVpcInterfacesRequestT& request, const AddFlowVpcInterfacesResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::AddFlowVpcInterfaces, request, handler, context);
  }

  /**
   * <p>Retrieves information about multiple router inputs in AWS Elemental
   * MediaConnect.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/BatchGetRouterInput">AWS
   * API Reference</a></p>
   */
  virtual Model::BatchGetRouterInputOutcome BatchGetRouterInput(const Model::BatchGetRouterInputRequest& request) const;

  /**
   * A Callable wrapper for BatchGetRouterInput that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename BatchGetRouterInputRequestT = Model::BatchGetRouterInputRequest>
  Model::BatchGetRouterInputOutcomeCallable BatchGetRouterInputCallable(const BatchGetRouterInputRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::BatchGetRouterInput, request);
  }

  /**
   * An Async wrapper for BatchGetRouterInput that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename BatchGetRouterInputRequestT = Model::BatchGetRouterInputRequest>
  void BatchGetRouterInputAsync(const BatchGetRouterInputRequestT& request, const BatchGetRouterInputResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::BatchGetRouterInput, request, handler, context);
  }

  /**
   * <p>Retrieves information about multiple router network interfaces in AWS
   * Elemental MediaConnect.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/BatchGetRouterNetworkInterface">AWS
   * API Reference</a></p>
   */
  virtual Model::BatchGetRouterNetworkInterfaceOutcome BatchGetRouterNetworkInterface(
      const Model::BatchGetRouterNetworkInterfaceRequest& request) const;

  /**
   * A Callable wrapper for BatchGetRouterNetworkInterface that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename BatchGetRouterNetworkInterfaceRequestT = Model::BatchGetRouterNetworkInterfaceRequest>
  Model::BatchGetRouterNetworkInterfaceOutcomeCallable BatchGetRouterNetworkInterfaceCallable(
      const BatchGetRouterNetworkInterfaceRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::BatchGetRouterNetworkInterface, request);
  }

  /**
   * An Async wrapper for BatchGetRouterNetworkInterface that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename BatchGetRouterNetworkInterfaceRequestT = Model::BatchGetRouterNetworkInterfaceRequest>
  void BatchGetRouterNetworkInterfaceAsync(const BatchGetRouterNetworkInterfaceRequestT& request,
                                           const BatchGetRouterNetworkInterfaceResponseReceivedHandler& handler,
                                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::BatchGetRouterNetworkInterface, request, handler, context);
  }

  /**
   * <p>Retrieves information about multiple router outputs in AWS Elemental
   * MediaConnect.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/BatchGetRouterOutput">AWS
   * API Reference</a></p>
   */
  virtual Model::BatchGetRouterOutputOutcome BatchGetRouterOutput(const Model::BatchGetRouterOutputRequest& request) const;

  /**
   * A Callable wrapper for BatchGetRouterOutput that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename BatchGetRouterOutputRequestT = Model::BatchGetRouterOutputRequest>
  Model::BatchGetRouterOutputOutcomeCallable BatchGetRouterOutputCallable(const BatchGetRouterOutputRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::BatchGetRouterOutput, request);
  }

  /**
   * An Async wrapper for BatchGetRouterOutput that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename BatchGetRouterOutputRequestT = Model::BatchGetRouterOutputRequest>
  void BatchGetRouterOutputAsync(const BatchGetRouterOutputRequestT& request, const BatchGetRouterOutputResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::BatchGetRouterOutput, request, handler, context);
  }

  /**
   * <p> Creates a new bridge. The request must include one source.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/CreateBridge">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateBridgeOutcome CreateBridge(const Model::CreateBridgeRequest& request) const;

  /**
   * A Callable wrapper for CreateBridge that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename CreateBridgeRequestT = Model::CreateBridgeRequest>
  Model::CreateBridgeOutcomeCallable CreateBridgeCallable(const CreateBridgeRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::CreateBridge, request);
  }

  /**
   * An Async wrapper for CreateBridge that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CreateBridgeRequestT = Model::CreateBridgeRequest>
  void CreateBridgeAsync(const CreateBridgeRequestT& request, const CreateBridgeResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::CreateBridge, request, handler, context);
  }

  /**
   * <p> Creates a new flow. The request must include one source. The request
   * optionally can include outputs (up to 50) and entitlements (up to
   * 50).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/CreateFlow">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateFlowOutcome CreateFlow(const Model::CreateFlowRequest& request) const;

  /**
   * A Callable wrapper for CreateFlow that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename CreateFlowRequestT = Model::CreateFlowRequest>
  Model::CreateFlowOutcomeCallable CreateFlowCallable(const CreateFlowRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::CreateFlow, request);
  }

  /**
   * An Async wrapper for CreateFlow that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CreateFlowRequestT = Model::CreateFlowRequest>
  void CreateFlowAsync(const CreateFlowRequestT& request, const CreateFlowResponseReceivedHandler& handler,
                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::CreateFlow, request, handler, context);
  }

  /**
   * <p> Creates a new gateway. The request must include at least one network (up to
   * four).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/CreateGateway">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateGatewayOutcome CreateGateway(const Model::CreateGatewayRequest& request) const;

  /**
   * A Callable wrapper for CreateGateway that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename CreateGatewayRequestT = Model::CreateGatewayRequest>
  Model::CreateGatewayOutcomeCallable CreateGatewayCallable(const CreateGatewayRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::CreateGateway, request);
  }

  /**
   * An Async wrapper for CreateGateway that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CreateGatewayRequestT = Model::CreateGatewayRequest>
  void CreateGatewayAsync(const CreateGatewayRequestT& request, const CreateGatewayResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::CreateGateway, request, handler, context);
  }

  /**
   * <p>Creates a new router input in AWS Elemental MediaConnect.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/CreateRouterInput">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateRouterInputOutcome CreateRouterInput(const Model::CreateRouterInputRequest& request) const;

  /**
   * A Callable wrapper for CreateRouterInput that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateRouterInputRequestT = Model::CreateRouterInputRequest>
  Model::CreateRouterInputOutcomeCallable CreateRouterInputCallable(const CreateRouterInputRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::CreateRouterInput, request);
  }

  /**
   * An Async wrapper for CreateRouterInput that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CreateRouterInputRequestT = Model::CreateRouterInputRequest>
  void CreateRouterInputAsync(const CreateRouterInputRequestT& request, const CreateRouterInputResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::CreateRouterInput, request, handler, context);
  }

  /**
   * <p>Creates a new router network interface in AWS Elemental
   * MediaConnect.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/CreateRouterNetworkInterface">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateRouterNetworkInterfaceOutcome CreateRouterNetworkInterface(
      const Model::CreateRouterNetworkInterfaceRequest& request) const;

  /**
   * A Callable wrapper for CreateRouterNetworkInterface that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename CreateRouterNetworkInterfaceRequestT = Model::CreateRouterNetworkInterfaceRequest>
  Model::CreateRouterNetworkInterfaceOutcomeCallable CreateRouterNetworkInterfaceCallable(
      const CreateRouterNetworkInterfaceRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::CreateRouterNetworkInterface, request);
  }

  /**
   * An Async wrapper for CreateRouterNetworkInterface that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename CreateRouterNetworkInterfaceRequestT = Model::CreateRouterNetworkInterfaceRequest>
  void CreateRouterNetworkInterfaceAsync(const CreateRouterNetworkInterfaceRequestT& request,
                                         const CreateRouterNetworkInterfaceResponseReceivedHandler& handler,
                                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::CreateRouterNetworkInterface, request, handler, context);
  }

  /**
   * <p>Creates a new router output in AWS Elemental MediaConnect.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/CreateRouterOutput">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateRouterOutputOutcome CreateRouterOutput(const Model::CreateRouterOutputRequest& request) const;

  /**
   * A Callable wrapper for CreateRouterOutput that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateRouterOutputRequestT = Model::CreateRouterOutputRequest>
  Model::CreateRouterOutputOutcomeCallable CreateRouterOutputCallable(const CreateRouterOutputRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::CreateRouterOutput, request);
  }

  /**
   * An Async wrapper for CreateRouterOutput that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CreateRouterOutputRequestT = Model::CreateRouterOutputRequest>
  void CreateRouterOutputAsync(const CreateRouterOutputRequestT& request, const CreateRouterOutputResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::CreateRouterOutput, request, handler, context);
  }

  /**
   * <p> Deletes a bridge. Before you can delete a bridge, you must stop the
   * bridge.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/DeleteBridge">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteBridgeOutcome DeleteBridge(const Model::DeleteBridgeRequest& request) const;

  /**
   * A Callable wrapper for DeleteBridge that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DeleteBridgeRequestT = Model::DeleteBridgeRequest>
  Model::DeleteBridgeOutcomeCallable DeleteBridgeCallable(const DeleteBridgeRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::DeleteBridge, request);
  }

  /**
   * An Async wrapper for DeleteBridge that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DeleteBridgeRequestT = Model::DeleteBridgeRequest>
  void DeleteBridgeAsync(const DeleteBridgeRequestT& request, const DeleteBridgeResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::DeleteBridge, request, handler, context);
  }

  /**
   * <p> Deletes a flow. Before you can delete a flow, you must stop the
   * flow.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/DeleteFlow">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteFlowOutcome DeleteFlow(const Model::DeleteFlowRequest& request) const;

  /**
   * A Callable wrapper for DeleteFlow that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DeleteFlowRequestT = Model::DeleteFlowRequest>
  Model::DeleteFlowOutcomeCallable DeleteFlowCallable(const DeleteFlowRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::DeleteFlow, request);
  }

  /**
   * An Async wrapper for DeleteFlow that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DeleteFlowRequestT = Model::DeleteFlowRequest>
  void DeleteFlowAsync(const DeleteFlowRequestT& request, const DeleteFlowResponseReceivedHandler& handler,
                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::DeleteFlow, request, handler, context);
  }

  /**
   * <p> Deletes a gateway. Before you can delete a gateway, you must deregister its
   * instances and delete its bridges.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/DeleteGateway">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteGatewayOutcome DeleteGateway(const Model::DeleteGatewayRequest& request) const;

  /**
   * A Callable wrapper for DeleteGateway that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DeleteGatewayRequestT = Model::DeleteGatewayRequest>
  Model::DeleteGatewayOutcomeCallable DeleteGatewayCallable(const DeleteGatewayRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::DeleteGateway, request);
  }

  /**
   * An Async wrapper for DeleteGateway that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DeleteGatewayRequestT = Model::DeleteGatewayRequest>
  void DeleteGatewayAsync(const DeleteGatewayRequestT& request, const DeleteGatewayResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::DeleteGateway, request, handler, context);
  }

  /**
   * <p>Deletes a router input from AWS Elemental MediaConnect.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/DeleteRouterInput">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteRouterInputOutcome DeleteRouterInput(const Model::DeleteRouterInputRequest& request) const;

  /**
   * A Callable wrapper for DeleteRouterInput that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteRouterInputRequestT = Model::DeleteRouterInputRequest>
  Model::DeleteRouterInputOutcomeCallable DeleteRouterInputCallable(const DeleteRouterInputRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::DeleteRouterInput, request);
  }

  /**
   * An Async wrapper for DeleteRouterInput that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DeleteRouterInputRequestT = Model::DeleteRouterInputRequest>
  void DeleteRouterInputAsync(const DeleteRouterInputRequestT& request, const DeleteRouterInputResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::DeleteRouterInput, request, handler, context);
  }

  /**
   * <p>Deletes a router network interface from AWS Elemental
   * MediaConnect.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/DeleteRouterNetworkInterface">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteRouterNetworkInterfaceOutcome DeleteRouterNetworkInterface(
      const Model::DeleteRouterNetworkInterfaceRequest& request) const;

  /**
   * A Callable wrapper for DeleteRouterNetworkInterface that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename DeleteRouterNetworkInterfaceRequestT = Model::DeleteRouterNetworkInterfaceRequest>
  Model::DeleteRouterNetworkInterfaceOutcomeCallable DeleteRouterNetworkInterfaceCallable(
      const DeleteRouterNetworkInterfaceRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::DeleteRouterNetworkInterface, request);
  }

  /**
   * An Async wrapper for DeleteRouterNetworkInterface that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DeleteRouterNetworkInterfaceRequestT = Model::DeleteRouterNetworkInterfaceRequest>
  void DeleteRouterNetworkInterfaceAsync(const DeleteRouterNetworkInterfaceRequestT& request,
                                         const DeleteRouterNetworkInterfaceResponseReceivedHandler& handler,
                                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::DeleteRouterNetworkInterface, request, handler, context);
  }

  /**
   * <p>Deletes a router output from AWS Elemental MediaConnect.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/DeleteRouterOutput">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteRouterOutputOutcome DeleteRouterOutput(const Model::DeleteRouterOutputRequest& request) const;

  /**
   * A Callable wrapper for DeleteRouterOutput that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteRouterOutputRequestT = Model::DeleteRouterOutputRequest>
  Model::DeleteRouterOutputOutcomeCallable DeleteRouterOutputCallable(const DeleteRouterOutputRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::DeleteRouterOutput, request);
  }

  /**
   * An Async wrapper for DeleteRouterOutput that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DeleteRouterOutputRequestT = Model::DeleteRouterOutputRequest>
  void DeleteRouterOutputAsync(const DeleteRouterOutputRequestT& request, const DeleteRouterOutputResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::DeleteRouterOutput, request, handler, context);
  }

  /**
   * <p> Deregisters an instance. Before you deregister an instance, all bridges
   * running on the instance must be stopped. If you want to deregister an instance
   * without stopping the bridges, you must use the --force option.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/DeregisterGatewayInstance">AWS
   * API Reference</a></p>
   */
  virtual Model::DeregisterGatewayInstanceOutcome DeregisterGatewayInstance(const Model::DeregisterGatewayInstanceRequest& request) const;

  /**
   * A Callable wrapper for DeregisterGatewayInstance that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeregisterGatewayInstanceRequestT = Model::DeregisterGatewayInstanceRequest>
  Model::DeregisterGatewayInstanceOutcomeCallable DeregisterGatewayInstanceCallable(
      const DeregisterGatewayInstanceRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::DeregisterGatewayInstance, request);
  }

  /**
   * An Async wrapper for DeregisterGatewayInstance that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DeregisterGatewayInstanceRequestT = Model::DeregisterGatewayInstanceRequest>
  void DeregisterGatewayInstanceAsync(const DeregisterGatewayInstanceRequestT& request,
                                      const DeregisterGatewayInstanceResponseReceivedHandler& handler,
                                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::DeregisterGatewayInstance, request, handler, context);
  }

  /**
   * <p> Displays the details of a bridge.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/DescribeBridge">AWS
   * API Reference</a></p>
   */
  virtual Model::DescribeBridgeOutcome DescribeBridge(const Model::DescribeBridgeRequest& request) const;

  /**
   * A Callable wrapper for DescribeBridge that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DescribeBridgeRequestT = Model::DescribeBridgeRequest>
  Model::DescribeBridgeOutcomeCallable DescribeBridgeCallable(const DescribeBridgeRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::DescribeBridge, request);
  }

  /**
   * An Async wrapper for DescribeBridge that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DescribeBridgeRequestT = Model::DescribeBridgeRequest>
  void DescribeBridgeAsync(const DescribeBridgeRequestT& request, const DescribeBridgeResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::DescribeBridge, request, handler, context);
  }

  /**
   * <p> Displays the details of a flow. The response includes the flow Amazon
   * Resource Name (ARN), name, and Availability Zone, as well as details about the
   * source, outputs, and entitlements.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/DescribeFlow">AWS
   * API Reference</a></p>
   */
  virtual Model::DescribeFlowOutcome DescribeFlow(const Model::DescribeFlowRequest& request) const;

  /**
   * A Callable wrapper for DescribeFlow that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DescribeFlowRequestT = Model::DescribeFlowRequest>
  Model::DescribeFlowOutcomeCallable DescribeFlowCallable(const DescribeFlowRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::DescribeFlow, request);
  }

  /**
   * An Async wrapper for DescribeFlow that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DescribeFlowRequestT = Model::DescribeFlowRequest>
  void DescribeFlowAsync(const DescribeFlowRequestT& request, const DescribeFlowResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::DescribeFlow, request, handler, context);
  }

  /**
   * <p> The <code>DescribeFlowSourceMetadata</code> API is used to view information
   * about the flow's source transport stream and programs. This API displays status
   * messages about the flow's source as well as details about the program's video,
   * audio, and other data. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/DescribeFlowSourceMetadata">AWS
   * API Reference</a></p>
   */
  virtual Model::DescribeFlowSourceMetadataOutcome DescribeFlowSourceMetadata(
      const Model::DescribeFlowSourceMetadataRequest& request) const;

  /**
   * A Callable wrapper for DescribeFlowSourceMetadata that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename DescribeFlowSourceMetadataRequestT = Model::DescribeFlowSourceMetadataRequest>
  Model::DescribeFlowSourceMetadataOutcomeCallable DescribeFlowSourceMetadataCallable(
      const DescribeFlowSourceMetadataRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::DescribeFlowSourceMetadata, request);
  }

  /**
   * An Async wrapper for DescribeFlowSourceMetadata that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DescribeFlowSourceMetadataRequestT = Model::DescribeFlowSourceMetadataRequest>
  void DescribeFlowSourceMetadataAsync(const DescribeFlowSourceMetadataRequestT& request,
                                       const DescribeFlowSourceMetadataResponseReceivedHandler& handler,
                                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::DescribeFlowSourceMetadata, request, handler, context);
  }

  /**
   * <p> Describes the thumbnail for the flow source. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/DescribeFlowSourceThumbnail">AWS
   * API Reference</a></p>
   */
  virtual Model::DescribeFlowSourceThumbnailOutcome DescribeFlowSourceThumbnail(
      const Model::DescribeFlowSourceThumbnailRequest& request) const;

  /**
   * A Callable wrapper for DescribeFlowSourceThumbnail that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename DescribeFlowSourceThumbnailRequestT = Model::DescribeFlowSourceThumbnailRequest>
  Model::DescribeFlowSourceThumbnailOutcomeCallable DescribeFlowSourceThumbnailCallable(
      const DescribeFlowSourceThumbnailRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::DescribeFlowSourceThumbnail, request);
  }

  /**
   * An Async wrapper for DescribeFlowSourceThumbnail that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DescribeFlowSourceThumbnailRequestT = Model::DescribeFlowSourceThumbnailRequest>
  void DescribeFlowSourceThumbnailAsync(const DescribeFlowSourceThumbnailRequestT& request,
                                        const DescribeFlowSourceThumbnailResponseReceivedHandler& handler,
                                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::DescribeFlowSourceThumbnail, request, handler, context);
  }

  /**
   * <p> Displays the details of a gateway. The response includes the gateway Amazon
   * Resource Name (ARN), name, and CIDR blocks, as well as details about the
   * networks.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/DescribeGateway">AWS
   * API Reference</a></p>
   */
  virtual Model::DescribeGatewayOutcome DescribeGateway(const Model::DescribeGatewayRequest& request) const;

  /**
   * A Callable wrapper for DescribeGateway that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DescribeGatewayRequestT = Model::DescribeGatewayRequest>
  Model::DescribeGatewayOutcomeCallable DescribeGatewayCallable(const DescribeGatewayRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::DescribeGateway, request);
  }

  /**
   * An Async wrapper for DescribeGateway that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DescribeGatewayRequestT = Model::DescribeGatewayRequest>
  void DescribeGatewayAsync(const DescribeGatewayRequestT& request, const DescribeGatewayResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::DescribeGateway, request, handler, context);
  }

  /**
   * <p> Displays the details of an instance. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/DescribeGatewayInstance">AWS
   * API Reference</a></p>
   */
  virtual Model::DescribeGatewayInstanceOutcome DescribeGatewayInstance(const Model::DescribeGatewayInstanceRequest& request) const;

  /**
   * A Callable wrapper for DescribeGatewayInstance that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DescribeGatewayInstanceRequestT = Model::DescribeGatewayInstanceRequest>
  Model::DescribeGatewayInstanceOutcomeCallable DescribeGatewayInstanceCallable(const DescribeGatewayInstanceRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::DescribeGatewayInstance, request);
  }

  /**
   * An Async wrapper for DescribeGatewayInstance that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DescribeGatewayInstanceRequestT = Model::DescribeGatewayInstanceRequest>
  void DescribeGatewayInstanceAsync(const DescribeGatewayInstanceRequestT& request,
                                    const DescribeGatewayInstanceResponseReceivedHandler& handler,
                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::DescribeGatewayInstance, request, handler, context);
  }

  /**
   * <p> Displays the details of an offering. The response includes the offering
   * description, duration, outbound bandwidth, price, and Amazon Resource Name
   * (ARN).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/DescribeOffering">AWS
   * API Reference</a></p>
   */
  virtual Model::DescribeOfferingOutcome DescribeOffering(const Model::DescribeOfferingRequest& request) const;

  /**
   * A Callable wrapper for DescribeOffering that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DescribeOfferingRequestT = Model::DescribeOfferingRequest>
  Model::DescribeOfferingOutcomeCallable DescribeOfferingCallable(const DescribeOfferingRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::DescribeOffering, request);
  }

  /**
   * An Async wrapper for DescribeOffering that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DescribeOfferingRequestT = Model::DescribeOfferingRequest>
  void DescribeOfferingAsync(const DescribeOfferingRequestT& request, const DescribeOfferingResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::DescribeOffering, request, handler, context);
  }

  /**
   * <p> Displays the details of a reservation. The response includes the reservation
   * name, state, start date and time, and the details of the offering that make up
   * the rest of the reservation (such as price, duration, and outbound
   * bandwidth).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/DescribeReservation">AWS
   * API Reference</a></p>
   */
  virtual Model::DescribeReservationOutcome DescribeReservation(const Model::DescribeReservationRequest& request) const;

  /**
   * A Callable wrapper for DescribeReservation that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DescribeReservationRequestT = Model::DescribeReservationRequest>
  Model::DescribeReservationOutcomeCallable DescribeReservationCallable(const DescribeReservationRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::DescribeReservation, request);
  }

  /**
   * An Async wrapper for DescribeReservation that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DescribeReservationRequestT = Model::DescribeReservationRequest>
  void DescribeReservationAsync(const DescribeReservationRequestT& request, const DescribeReservationResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::DescribeReservation, request, handler, context);
  }

  /**
   * <p>Retrieves information about a specific router input in AWS Elemental
   * MediaConnect.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/GetRouterInput">AWS
   * API Reference</a></p>
   */
  virtual Model::GetRouterInputOutcome GetRouterInput(const Model::GetRouterInputRequest& request) const;

  /**
   * A Callable wrapper for GetRouterInput that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetRouterInputRequestT = Model::GetRouterInputRequest>
  Model::GetRouterInputOutcomeCallable GetRouterInputCallable(const GetRouterInputRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::GetRouterInput, request);
  }

  /**
   * An Async wrapper for GetRouterInput that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetRouterInputRequestT = Model::GetRouterInputRequest>
  void GetRouterInputAsync(const GetRouterInputRequestT& request, const GetRouterInputResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::GetRouterInput, request, handler, context);
  }

  /**
   * <p>Retrieves detailed metadata information about a specific router input source,
   * including stream details and connection state.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/GetRouterInputSourceMetadata">AWS
   * API Reference</a></p>
   */
  virtual Model::GetRouterInputSourceMetadataOutcome GetRouterInputSourceMetadata(
      const Model::GetRouterInputSourceMetadataRequest& request) const;

  /**
   * A Callable wrapper for GetRouterInputSourceMetadata that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename GetRouterInputSourceMetadataRequestT = Model::GetRouterInputSourceMetadataRequest>
  Model::GetRouterInputSourceMetadataOutcomeCallable GetRouterInputSourceMetadataCallable(
      const GetRouterInputSourceMetadataRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::GetRouterInputSourceMetadata, request);
  }

  /**
   * An Async wrapper for GetRouterInputSourceMetadata that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetRouterInputSourceMetadataRequestT = Model::GetRouterInputSourceMetadataRequest>
  void GetRouterInputSourceMetadataAsync(const GetRouterInputSourceMetadataRequestT& request,
                                         const GetRouterInputSourceMetadataResponseReceivedHandler& handler,
                                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::GetRouterInputSourceMetadata, request, handler, context);
  }

  /**
   * <p>Retrieves the thumbnail for a router input in AWS Elemental
   * MediaConnect.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/GetRouterInputThumbnail">AWS
   * API Reference</a></p>
   */
  virtual Model::GetRouterInputThumbnailOutcome GetRouterInputThumbnail(const Model::GetRouterInputThumbnailRequest& request) const;

  /**
   * A Callable wrapper for GetRouterInputThumbnail that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetRouterInputThumbnailRequestT = Model::GetRouterInputThumbnailRequest>
  Model::GetRouterInputThumbnailOutcomeCallable GetRouterInputThumbnailCallable(const GetRouterInputThumbnailRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::GetRouterInputThumbnail, request);
  }

  /**
   * An Async wrapper for GetRouterInputThumbnail that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetRouterInputThumbnailRequestT = Model::GetRouterInputThumbnailRequest>
  void GetRouterInputThumbnailAsync(const GetRouterInputThumbnailRequestT& request,
                                    const GetRouterInputThumbnailResponseReceivedHandler& handler,
                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::GetRouterInputThumbnail, request, handler, context);
  }

  /**
   * <p>Retrieves information about a specific router network interface in AWS
   * Elemental MediaConnect.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/GetRouterNetworkInterface">AWS
   * API Reference</a></p>
   */
  virtual Model::GetRouterNetworkInterfaceOutcome GetRouterNetworkInterface(const Model::GetRouterNetworkInterfaceRequest& request) const;

  /**
   * A Callable wrapper for GetRouterNetworkInterface that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetRouterNetworkInterfaceRequestT = Model::GetRouterNetworkInterfaceRequest>
  Model::GetRouterNetworkInterfaceOutcomeCallable GetRouterNetworkInterfaceCallable(
      const GetRouterNetworkInterfaceRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::GetRouterNetworkInterface, request);
  }

  /**
   * An Async wrapper for GetRouterNetworkInterface that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetRouterNetworkInterfaceRequestT = Model::GetRouterNetworkInterfaceRequest>
  void GetRouterNetworkInterfaceAsync(const GetRouterNetworkInterfaceRequestT& request,
                                      const GetRouterNetworkInterfaceResponseReceivedHandler& handler,
                                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::GetRouterNetworkInterface, request, handler, context);
  }

  /**
   * <p>Retrieves information about a specific router output in AWS Elemental
   * MediaConnect.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/GetRouterOutput">AWS
   * API Reference</a></p>
   */
  virtual Model::GetRouterOutputOutcome GetRouterOutput(const Model::GetRouterOutputRequest& request) const;

  /**
   * A Callable wrapper for GetRouterOutput that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetRouterOutputRequestT = Model::GetRouterOutputRequest>
  Model::GetRouterOutputOutcomeCallable GetRouterOutputCallable(const GetRouterOutputRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::GetRouterOutput, request);
  }

  /**
   * An Async wrapper for GetRouterOutput that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetRouterOutputRequestT = Model::GetRouterOutputRequest>
  void GetRouterOutputAsync(const GetRouterOutputRequestT& request, const GetRouterOutputResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::GetRouterOutput, request, handler, context);
  }

  /**
   * <p> Grants entitlements to an existing flow.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/GrantFlowEntitlements">AWS
   * API Reference</a></p>
   */
  virtual Model::GrantFlowEntitlementsOutcome GrantFlowEntitlements(const Model::GrantFlowEntitlementsRequest& request) const;

  /**
   * A Callable wrapper for GrantFlowEntitlements that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GrantFlowEntitlementsRequestT = Model::GrantFlowEntitlementsRequest>
  Model::GrantFlowEntitlementsOutcomeCallable GrantFlowEntitlementsCallable(const GrantFlowEntitlementsRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::GrantFlowEntitlements, request);
  }

  /**
   * An Async wrapper for GrantFlowEntitlements that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GrantFlowEntitlementsRequestT = Model::GrantFlowEntitlementsRequest>
  void GrantFlowEntitlementsAsync(const GrantFlowEntitlementsRequestT& request, const GrantFlowEntitlementsResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::GrantFlowEntitlements, request, handler, context);
  }

  /**
   * <p> Displays a list of bridges that are associated with this account and an
   * optionally specified Amazon Resource Name (ARN). This request returns a
   * paginated result.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/ListBridges">AWS
   * API Reference</a></p>
   */
  virtual Model::ListBridgesOutcome ListBridges(const Model::ListBridgesRequest& request = {}) const;

  /**
   * A Callable wrapper for ListBridges that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListBridgesRequestT = Model::ListBridgesRequest>
  Model::ListBridgesOutcomeCallable ListBridgesCallable(const ListBridgesRequestT& request = {}) const {
    return SubmitCallable(&MediaConnectClient::ListBridges, request);
  }

  /**
   * An Async wrapper for ListBridges that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListBridgesRequestT = Model::ListBridgesRequest>
  void ListBridgesAsync(const ListBridgesResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                        const ListBridgesRequestT& request = {}) const {
    return SubmitAsync(&MediaConnectClient::ListBridges, request, handler, context);
  }

  /**
   * <p> Displays a list of all entitlements that have been granted to this account.
   * This request returns 20 results per page.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/ListEntitlements">AWS
   * API Reference</a></p>
   */
  virtual Model::ListEntitlementsOutcome ListEntitlements(const Model::ListEntitlementsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListEntitlements that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListEntitlementsRequestT = Model::ListEntitlementsRequest>
  Model::ListEntitlementsOutcomeCallable ListEntitlementsCallable(const ListEntitlementsRequestT& request = {}) const {
    return SubmitCallable(&MediaConnectClient::ListEntitlements, request);
  }

  /**
   * An Async wrapper for ListEntitlements that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListEntitlementsRequestT = Model::ListEntitlementsRequest>
  void ListEntitlementsAsync(const ListEntitlementsResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                             const ListEntitlementsRequestT& request = {}) const {
    return SubmitAsync(&MediaConnectClient::ListEntitlements, request, handler, context);
  }

  /**
   * <p> Displays a list of flows that are associated with this account. This request
   * returns a paginated result.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/ListFlows">AWS
   * API Reference</a></p>
   */
  virtual Model::ListFlowsOutcome ListFlows(const Model::ListFlowsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListFlows that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListFlowsRequestT = Model::ListFlowsRequest>
  Model::ListFlowsOutcomeCallable ListFlowsCallable(const ListFlowsRequestT& request = {}) const {
    return SubmitCallable(&MediaConnectClient::ListFlows, request);
  }

  /**
   * An Async wrapper for ListFlows that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListFlowsRequestT = Model::ListFlowsRequest>
  void ListFlowsAsync(const ListFlowsResponseReceivedHandler& handler,
                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                      const ListFlowsRequestT& request = {}) const {
    return SubmitAsync(&MediaConnectClient::ListFlows, request, handler, context);
  }

  /**
   * <p> Displays a list of instances associated with the Amazon Web Services
   * account. This request returns a paginated result. You can use the filterArn
   * property to display only the instances associated with the selected Gateway
   * Amazon Resource Name (ARN).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/ListGatewayInstances">AWS
   * API Reference</a></p>
   */
  virtual Model::ListGatewayInstancesOutcome ListGatewayInstances(const Model::ListGatewayInstancesRequest& request = {}) const;

  /**
   * A Callable wrapper for ListGatewayInstances that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListGatewayInstancesRequestT = Model::ListGatewayInstancesRequest>
  Model::ListGatewayInstancesOutcomeCallable ListGatewayInstancesCallable(const ListGatewayInstancesRequestT& request = {}) const {
    return SubmitCallable(&MediaConnectClient::ListGatewayInstances, request);
  }

  /**
   * An Async wrapper for ListGatewayInstances that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListGatewayInstancesRequestT = Model::ListGatewayInstancesRequest>
  void ListGatewayInstancesAsync(const ListGatewayInstancesResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                 const ListGatewayInstancesRequestT& request = {}) const {
    return SubmitAsync(&MediaConnectClient::ListGatewayInstances, request, handler, context);
  }

  /**
   * <p> Displays a list of gateways that are associated with this account. This
   * request returns a paginated result.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/ListGateways">AWS
   * API Reference</a></p>
   */
  virtual Model::ListGatewaysOutcome ListGateways(const Model::ListGatewaysRequest& request = {}) const;

  /**
   * A Callable wrapper for ListGateways that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListGatewaysRequestT = Model::ListGatewaysRequest>
  Model::ListGatewaysOutcomeCallable ListGatewaysCallable(const ListGatewaysRequestT& request = {}) const {
    return SubmitCallable(&MediaConnectClient::ListGateways, request);
  }

  /**
   * An Async wrapper for ListGateways that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListGatewaysRequestT = Model::ListGatewaysRequest>
  void ListGatewaysAsync(const ListGatewaysResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                         const ListGatewaysRequestT& request = {}) const {
    return SubmitAsync(&MediaConnectClient::ListGateways, request, handler, context);
  }

  /**
   * <p> Displays a list of all offerings that are available to this account in the
   * current Amazon Web Services Region. If you have an active reservation (which
   * means you've purchased an offering that has already started and hasn't expired
   * yet), your account isn't eligible for other offerings.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/ListOfferings">AWS
   * API Reference</a></p>
   */
  virtual Model::ListOfferingsOutcome ListOfferings(const Model::ListOfferingsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListOfferings that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListOfferingsRequestT = Model::ListOfferingsRequest>
  Model::ListOfferingsOutcomeCallable ListOfferingsCallable(const ListOfferingsRequestT& request = {}) const {
    return SubmitCallable(&MediaConnectClient::ListOfferings, request);
  }

  /**
   * An Async wrapper for ListOfferings that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListOfferingsRequestT = Model::ListOfferingsRequest>
  void ListOfferingsAsync(const ListOfferingsResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                          const ListOfferingsRequestT& request = {}) const {
    return SubmitAsync(&MediaConnectClient::ListOfferings, request, handler, context);
  }

  /**
   * <p> Displays a list of all reservations that have been purchased by this account
   * in the current Amazon Web Services Region. This list includes all reservations
   * in all states (such as active and expired).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/ListReservations">AWS
   * API Reference</a></p>
   */
  virtual Model::ListReservationsOutcome ListReservations(const Model::ListReservationsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListReservations that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListReservationsRequestT = Model::ListReservationsRequest>
  Model::ListReservationsOutcomeCallable ListReservationsCallable(const ListReservationsRequestT& request = {}) const {
    return SubmitCallable(&MediaConnectClient::ListReservations, request);
  }

  /**
   * An Async wrapper for ListReservations that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListReservationsRequestT = Model::ListReservationsRequest>
  void ListReservationsAsync(const ListReservationsResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                             const ListReservationsRequestT& request = {}) const {
    return SubmitAsync(&MediaConnectClient::ListReservations, request, handler, context);
  }

  /**
   * <p>Retrieves a list of router inputs in AWS Elemental
   * MediaConnect.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/ListRouterInputs">AWS
   * API Reference</a></p>
   */
  virtual Model::ListRouterInputsOutcome ListRouterInputs(const Model::ListRouterInputsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListRouterInputs that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListRouterInputsRequestT = Model::ListRouterInputsRequest>
  Model::ListRouterInputsOutcomeCallable ListRouterInputsCallable(const ListRouterInputsRequestT& request = {}) const {
    return SubmitCallable(&MediaConnectClient::ListRouterInputs, request);
  }

  /**
   * An Async wrapper for ListRouterInputs that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListRouterInputsRequestT = Model::ListRouterInputsRequest>
  void ListRouterInputsAsync(const ListRouterInputsResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                             const ListRouterInputsRequestT& request = {}) const {
    return SubmitAsync(&MediaConnectClient::ListRouterInputs, request, handler, context);
  }

  /**
   * <p>Retrieves a list of router network interfaces in AWS Elemental
   * MediaConnect.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/ListRouterNetworkInterfaces">AWS
   * API Reference</a></p>
   */
  virtual Model::ListRouterNetworkInterfacesOutcome ListRouterNetworkInterfaces(
      const Model::ListRouterNetworkInterfacesRequest& request = {}) const;

  /**
   * A Callable wrapper for ListRouterNetworkInterfaces that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename ListRouterNetworkInterfacesRequestT = Model::ListRouterNetworkInterfacesRequest>
  Model::ListRouterNetworkInterfacesOutcomeCallable ListRouterNetworkInterfacesCallable(
      const ListRouterNetworkInterfacesRequestT& request = {}) const {
    return SubmitCallable(&MediaConnectClient::ListRouterNetworkInterfaces, request);
  }

  /**
   * An Async wrapper for ListRouterNetworkInterfaces that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListRouterNetworkInterfacesRequestT = Model::ListRouterNetworkInterfacesRequest>
  void ListRouterNetworkInterfacesAsync(const ListRouterNetworkInterfacesResponseReceivedHandler& handler,
                                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                        const ListRouterNetworkInterfacesRequestT& request = {}) const {
    return SubmitAsync(&MediaConnectClient::ListRouterNetworkInterfaces, request, handler, context);
  }

  /**
   * <p>Retrieves a list of router outputs in AWS Elemental
   * MediaConnect.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/ListRouterOutputs">AWS
   * API Reference</a></p>
   */
  virtual Model::ListRouterOutputsOutcome ListRouterOutputs(const Model::ListRouterOutputsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListRouterOutputs that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListRouterOutputsRequestT = Model::ListRouterOutputsRequest>
  Model::ListRouterOutputsOutcomeCallable ListRouterOutputsCallable(const ListRouterOutputsRequestT& request = {}) const {
    return SubmitCallable(&MediaConnectClient::ListRouterOutputs, request);
  }

  /**
   * An Async wrapper for ListRouterOutputs that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListRouterOutputsRequestT = Model::ListRouterOutputsRequest>
  void ListRouterOutputsAsync(const ListRouterOutputsResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                              const ListRouterOutputsRequestT& request = {}) const {
    return SubmitAsync(&MediaConnectClient::ListRouterOutputs, request, handler, context);
  }

  /**
   * <p>Lists the tags associated with a global resource in AWS Elemental
   * MediaConnect. The API supports the following global resources: router inputs,
   * router outputs and router network interfaces. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/ListTagsForGlobalResource">AWS
   * API Reference</a></p>
   */
  virtual Model::ListTagsForGlobalResourceOutcome ListTagsForGlobalResource(const Model::ListTagsForGlobalResourceRequest& request) const;

  /**
   * A Callable wrapper for ListTagsForGlobalResource that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListTagsForGlobalResourceRequestT = Model::ListTagsForGlobalResourceRequest>
  Model::ListTagsForGlobalResourceOutcomeCallable ListTagsForGlobalResourceCallable(
      const ListTagsForGlobalResourceRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::ListTagsForGlobalResource, request);
  }

  /**
   * An Async wrapper for ListTagsForGlobalResource that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListTagsForGlobalResourceRequestT = Model::ListTagsForGlobalResourceRequest>
  void ListTagsForGlobalResourceAsync(const ListTagsForGlobalResourceRequestT& request,
                                      const ListTagsForGlobalResourceResponseReceivedHandler& handler,
                                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::ListTagsForGlobalResource, request, handler, context);
  }

  /**
   * <p> List all tags on a MediaConnect resource in the current
   * region.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/ListTagsForResource">AWS
   * API Reference</a></p>
   */
  virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

  /**
   * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::ListTagsForResource, request);
  }

  /**
   * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::ListTagsForResource, request, handler, context);
  }

  /**
   * <p> Submits a request to purchase an offering. If you already have an active
   * reservation, you can't purchase another offering.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/PurchaseOffering">AWS
   * API Reference</a></p>
   */
  virtual Model::PurchaseOfferingOutcome PurchaseOffering(const Model::PurchaseOfferingRequest& request) const;

  /**
   * A Callable wrapper for PurchaseOffering that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename PurchaseOfferingRequestT = Model::PurchaseOfferingRequest>
  Model::PurchaseOfferingOutcomeCallable PurchaseOfferingCallable(const PurchaseOfferingRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::PurchaseOffering, request);
  }

  /**
   * An Async wrapper for PurchaseOffering that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename PurchaseOfferingRequestT = Model::PurchaseOfferingRequest>
  void PurchaseOfferingAsync(const PurchaseOfferingRequestT& request, const PurchaseOfferingResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::PurchaseOffering, request, handler, context);
  }

  /**
   * <p> Removes an output from a bridge.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/RemoveBridgeOutput">AWS
   * API Reference</a></p>
   */
  virtual Model::RemoveBridgeOutputOutcome RemoveBridgeOutput(const Model::RemoveBridgeOutputRequest& request) const;

  /**
   * A Callable wrapper for RemoveBridgeOutput that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename RemoveBridgeOutputRequestT = Model::RemoveBridgeOutputRequest>
  Model::RemoveBridgeOutputOutcomeCallable RemoveBridgeOutputCallable(const RemoveBridgeOutputRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::RemoveBridgeOutput, request);
  }

  /**
   * An Async wrapper for RemoveBridgeOutput that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename RemoveBridgeOutputRequestT = Model::RemoveBridgeOutputRequest>
  void RemoveBridgeOutputAsync(const RemoveBridgeOutputRequestT& request, const RemoveBridgeOutputResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::RemoveBridgeOutput, request, handler, context);
  }

  /**
   * <p> Removes a source from a bridge.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/RemoveBridgeSource">AWS
   * API Reference</a></p>
   */
  virtual Model::RemoveBridgeSourceOutcome RemoveBridgeSource(const Model::RemoveBridgeSourceRequest& request) const;

  /**
   * A Callable wrapper for RemoveBridgeSource that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename RemoveBridgeSourceRequestT = Model::RemoveBridgeSourceRequest>
  Model::RemoveBridgeSourceOutcomeCallable RemoveBridgeSourceCallable(const RemoveBridgeSourceRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::RemoveBridgeSource, request);
  }

  /**
   * An Async wrapper for RemoveBridgeSource that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename RemoveBridgeSourceRequestT = Model::RemoveBridgeSourceRequest>
  void RemoveBridgeSourceAsync(const RemoveBridgeSourceRequestT& request, const RemoveBridgeSourceResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::RemoveBridgeSource, request, handler, context);
  }

  /**
   * <p> Removes a media stream from a flow. This action is only available if the
   * media stream is not associated with a source or output.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/RemoveFlowMediaStream">AWS
   * API Reference</a></p>
   */
  virtual Model::RemoveFlowMediaStreamOutcome RemoveFlowMediaStream(const Model::RemoveFlowMediaStreamRequest& request) const;

  /**
   * A Callable wrapper for RemoveFlowMediaStream that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename RemoveFlowMediaStreamRequestT = Model::RemoveFlowMediaStreamRequest>
  Model::RemoveFlowMediaStreamOutcomeCallable RemoveFlowMediaStreamCallable(const RemoveFlowMediaStreamRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::RemoveFlowMediaStream, request);
  }

  /**
   * An Async wrapper for RemoveFlowMediaStream that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename RemoveFlowMediaStreamRequestT = Model::RemoveFlowMediaStreamRequest>
  void RemoveFlowMediaStreamAsync(const RemoveFlowMediaStreamRequestT& request, const RemoveFlowMediaStreamResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::RemoveFlowMediaStream, request, handler, context);
  }

  /**
   * <p> Removes an output from an existing flow. This request can be made only on an
   * output that does not have an entitlement associated with it. If the output has
   * an entitlement, you must revoke the entitlement instead. When an entitlement is
   * revoked from a flow, the service automatically removes the associated
   * output.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/RemoveFlowOutput">AWS
   * API Reference</a></p>
   */
  virtual Model::RemoveFlowOutputOutcome RemoveFlowOutput(const Model::RemoveFlowOutputRequest& request) const;

  /**
   * A Callable wrapper for RemoveFlowOutput that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename RemoveFlowOutputRequestT = Model::RemoveFlowOutputRequest>
  Model::RemoveFlowOutputOutcomeCallable RemoveFlowOutputCallable(const RemoveFlowOutputRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::RemoveFlowOutput, request);
  }

  /**
   * An Async wrapper for RemoveFlowOutput that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename RemoveFlowOutputRequestT = Model::RemoveFlowOutputRequest>
  void RemoveFlowOutputAsync(const RemoveFlowOutputRequestT& request, const RemoveFlowOutputResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::RemoveFlowOutput, request, handler, context);
  }

  /**
   * <p> Removes a source from an existing flow. This request can be made only if
   * there is more than one source on the flow. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/RemoveFlowSource">AWS
   * API Reference</a></p>
   */
  virtual Model::RemoveFlowSourceOutcome RemoveFlowSource(const Model::RemoveFlowSourceRequest& request) const;

  /**
   * A Callable wrapper for RemoveFlowSource that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename RemoveFlowSourceRequestT = Model::RemoveFlowSourceRequest>
  Model::RemoveFlowSourceOutcomeCallable RemoveFlowSourceCallable(const RemoveFlowSourceRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::RemoveFlowSource, request);
  }

  /**
   * An Async wrapper for RemoveFlowSource that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename RemoveFlowSourceRequestT = Model::RemoveFlowSourceRequest>
  void RemoveFlowSourceAsync(const RemoveFlowSourceRequestT& request, const RemoveFlowSourceResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::RemoveFlowSource, request, handler, context);
  }

  /**
   * <p> Removes a VPC Interface from an existing flow. This request can be made only
   * on a VPC interface that does not have a Source or Output associated with it. If
   * the VPC interface is referenced by a Source or Output, you must first delete or
   * update the Source or Output to no longer reference the VPC
   * interface.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/RemoveFlowVpcInterface">AWS
   * API Reference</a></p>
   */
  virtual Model::RemoveFlowVpcInterfaceOutcome RemoveFlowVpcInterface(const Model::RemoveFlowVpcInterfaceRequest& request) const;

  /**
   * A Callable wrapper for RemoveFlowVpcInterface that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename RemoveFlowVpcInterfaceRequestT = Model::RemoveFlowVpcInterfaceRequest>
  Model::RemoveFlowVpcInterfaceOutcomeCallable RemoveFlowVpcInterfaceCallable(const RemoveFlowVpcInterfaceRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::RemoveFlowVpcInterface, request);
  }

  /**
   * An Async wrapper for RemoveFlowVpcInterface that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename RemoveFlowVpcInterfaceRequestT = Model::RemoveFlowVpcInterfaceRequest>
  void RemoveFlowVpcInterfaceAsync(const RemoveFlowVpcInterfaceRequestT& request,
                                   const RemoveFlowVpcInterfaceResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::RemoveFlowVpcInterface, request, handler, context);
  }

  /**
   * <p>Restarts a router input. This operation can be used to recover from errors or
   * refresh the input state.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/RestartRouterInput">AWS
   * API Reference</a></p>
   */
  virtual Model::RestartRouterInputOutcome RestartRouterInput(const Model::RestartRouterInputRequest& request) const;

  /**
   * A Callable wrapper for RestartRouterInput that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename RestartRouterInputRequestT = Model::RestartRouterInputRequest>
  Model::RestartRouterInputOutcomeCallable RestartRouterInputCallable(const RestartRouterInputRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::RestartRouterInput, request);
  }

  /**
   * An Async wrapper for RestartRouterInput that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename RestartRouterInputRequestT = Model::RestartRouterInputRequest>
  void RestartRouterInputAsync(const RestartRouterInputRequestT& request, const RestartRouterInputResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::RestartRouterInput, request, handler, context);
  }

  /**
   * <p>Restarts a router output. This operation can be used to recover from errors
   * or refresh the output state.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/RestartRouterOutput">AWS
   * API Reference</a></p>
   */
  virtual Model::RestartRouterOutputOutcome RestartRouterOutput(const Model::RestartRouterOutputRequest& request) const;

  /**
   * A Callable wrapper for RestartRouterOutput that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename RestartRouterOutputRequestT = Model::RestartRouterOutputRequest>
  Model::RestartRouterOutputOutcomeCallable RestartRouterOutputCallable(const RestartRouterOutputRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::RestartRouterOutput, request);
  }

  /**
   * An Async wrapper for RestartRouterOutput that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename RestartRouterOutputRequestT = Model::RestartRouterOutputRequest>
  void RestartRouterOutputAsync(const RestartRouterOutputRequestT& request, const RestartRouterOutputResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::RestartRouterOutput, request, handler, context);
  }

  /**
   * <p> Revokes an entitlement from a flow. Once an entitlement is revoked, the
   * content becomes unavailable to the subscriber and the associated output is
   * removed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/RevokeFlowEntitlement">AWS
   * API Reference</a></p>
   */
  virtual Model::RevokeFlowEntitlementOutcome RevokeFlowEntitlement(const Model::RevokeFlowEntitlementRequest& request) const;

  /**
   * A Callable wrapper for RevokeFlowEntitlement that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename RevokeFlowEntitlementRequestT = Model::RevokeFlowEntitlementRequest>
  Model::RevokeFlowEntitlementOutcomeCallable RevokeFlowEntitlementCallable(const RevokeFlowEntitlementRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::RevokeFlowEntitlement, request);
  }

  /**
   * An Async wrapper for RevokeFlowEntitlement that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename RevokeFlowEntitlementRequestT = Model::RevokeFlowEntitlementRequest>
  void RevokeFlowEntitlementAsync(const RevokeFlowEntitlementRequestT& request, const RevokeFlowEntitlementResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::RevokeFlowEntitlement, request, handler, context);
  }

  /**
   * <p> Starts a flow.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/StartFlow">AWS
   * API Reference</a></p>
   */
  virtual Model::StartFlowOutcome StartFlow(const Model::StartFlowRequest& request) const;

  /**
   * A Callable wrapper for StartFlow that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename StartFlowRequestT = Model::StartFlowRequest>
  Model::StartFlowOutcomeCallable StartFlowCallable(const StartFlowRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::StartFlow, request);
  }

  /**
   * An Async wrapper for StartFlow that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename StartFlowRequestT = Model::StartFlowRequest>
  void StartFlowAsync(const StartFlowRequestT& request, const StartFlowResponseReceivedHandler& handler,
                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::StartFlow, request, handler, context);
  }

  /**
   * <p>Starts a router input in AWS Elemental MediaConnect.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/StartRouterInput">AWS
   * API Reference</a></p>
   */
  virtual Model::StartRouterInputOutcome StartRouterInput(const Model::StartRouterInputRequest& request) const;

  /**
   * A Callable wrapper for StartRouterInput that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename StartRouterInputRequestT = Model::StartRouterInputRequest>
  Model::StartRouterInputOutcomeCallable StartRouterInputCallable(const StartRouterInputRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::StartRouterInput, request);
  }

  /**
   * An Async wrapper for StartRouterInput that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename StartRouterInputRequestT = Model::StartRouterInputRequest>
  void StartRouterInputAsync(const StartRouterInputRequestT& request, const StartRouterInputResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::StartRouterInput, request, handler, context);
  }

  /**
   * <p>Starts a router output in AWS Elemental MediaConnect.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/StartRouterOutput">AWS
   * API Reference</a></p>
   */
  virtual Model::StartRouterOutputOutcome StartRouterOutput(const Model::StartRouterOutputRequest& request) const;

  /**
   * A Callable wrapper for StartRouterOutput that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename StartRouterOutputRequestT = Model::StartRouterOutputRequest>
  Model::StartRouterOutputOutcomeCallable StartRouterOutputCallable(const StartRouterOutputRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::StartRouterOutput, request);
  }

  /**
   * An Async wrapper for StartRouterOutput that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename StartRouterOutputRequestT = Model::StartRouterOutputRequest>
  void StartRouterOutputAsync(const StartRouterOutputRequestT& request, const StartRouterOutputResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::StartRouterOutput, request, handler, context);
  }

  /**
   * <p> Stops a flow.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/StopFlow">AWS
   * API Reference</a></p>
   */
  virtual Model::StopFlowOutcome StopFlow(const Model::StopFlowRequest& request) const;

  /**
   * A Callable wrapper for StopFlow that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename StopFlowRequestT = Model::StopFlowRequest>
  Model::StopFlowOutcomeCallable StopFlowCallable(const StopFlowRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::StopFlow, request);
  }

  /**
   * An Async wrapper for StopFlow that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename StopFlowRequestT = Model::StopFlowRequest>
  void StopFlowAsync(const StopFlowRequestT& request, const StopFlowResponseReceivedHandler& handler,
                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::StopFlow, request, handler, context);
  }

  /**
   * <p>Stops a router input in AWS Elemental MediaConnect.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/StopRouterInput">AWS
   * API Reference</a></p>
   */
  virtual Model::StopRouterInputOutcome StopRouterInput(const Model::StopRouterInputRequest& request) const;

  /**
   * A Callable wrapper for StopRouterInput that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename StopRouterInputRequestT = Model::StopRouterInputRequest>
  Model::StopRouterInputOutcomeCallable StopRouterInputCallable(const StopRouterInputRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::StopRouterInput, request);
  }

  /**
   * An Async wrapper for StopRouterInput that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename StopRouterInputRequestT = Model::StopRouterInputRequest>
  void StopRouterInputAsync(const StopRouterInputRequestT& request, const StopRouterInputResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::StopRouterInput, request, handler, context);
  }

  /**
   * <p>Stops a router output in AWS Elemental MediaConnect.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/StopRouterOutput">AWS
   * API Reference</a></p>
   */
  virtual Model::StopRouterOutputOutcome StopRouterOutput(const Model::StopRouterOutputRequest& request) const;

  /**
   * A Callable wrapper for StopRouterOutput that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename StopRouterOutputRequestT = Model::StopRouterOutputRequest>
  Model::StopRouterOutputOutcomeCallable StopRouterOutputCallable(const StopRouterOutputRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::StopRouterOutput, request);
  }

  /**
   * An Async wrapper for StopRouterOutput that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename StopRouterOutputRequestT = Model::StopRouterOutputRequest>
  void StopRouterOutputAsync(const StopRouterOutputRequestT& request, const StopRouterOutputResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::StopRouterOutput, request, handler, context);
  }

  /**
   * <p>Adds tags to a global resource in AWS Elemental MediaConnect. The API
   * supports the following global resources: router inputs, router outputs and
   * router network interfaces. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/TagGlobalResource">AWS
   * API Reference</a></p>
   */
  virtual Model::TagGlobalResourceOutcome TagGlobalResource(const Model::TagGlobalResourceRequest& request) const;

  /**
   * A Callable wrapper for TagGlobalResource that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename TagGlobalResourceRequestT = Model::TagGlobalResourceRequest>
  Model::TagGlobalResourceOutcomeCallable TagGlobalResourceCallable(const TagGlobalResourceRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::TagGlobalResource, request);
  }

  /**
   * An Async wrapper for TagGlobalResource that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename TagGlobalResourceRequestT = Model::TagGlobalResourceRequest>
  void TagGlobalResourceAsync(const TagGlobalResourceRequestT& request, const TagGlobalResourceResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::TagGlobalResource, request, handler, context);
  }

  /**
   * <p> Associates the specified tags to a resource with the specified
   * <code>resourceArn</code> in the current region. If existing tags on a resource
   * are not specified in the request parameters, they are not changed. When a
   * resource is deleted, the tags associated with that resource are deleted as
   * well.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/TagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

  /**
   * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::TagResource, request);
  }

  /**
   * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::TagResource, request, handler, context);
  }

  /**
   * <p>Associates a router input with a router output in AWS Elemental
   * MediaConnect.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/TakeRouterInput">AWS
   * API Reference</a></p>
   */
  virtual Model::TakeRouterInputOutcome TakeRouterInput(const Model::TakeRouterInputRequest& request) const;

  /**
   * A Callable wrapper for TakeRouterInput that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename TakeRouterInputRequestT = Model::TakeRouterInputRequest>
  Model::TakeRouterInputOutcomeCallable TakeRouterInputCallable(const TakeRouterInputRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::TakeRouterInput, request);
  }

  /**
   * An Async wrapper for TakeRouterInput that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename TakeRouterInputRequestT = Model::TakeRouterInputRequest>
  void TakeRouterInputAsync(const TakeRouterInputRequestT& request, const TakeRouterInputResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::TakeRouterInput, request, handler, context);
  }

  /**
   * <p>Removes tags from a global resource in AWS Elemental MediaConnect. The API
   * supports the following global resources: router inputs, router outputs and
   * router network interfaces. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UntagGlobalResource">AWS
   * API Reference</a></p>
   */
  virtual Model::UntagGlobalResourceOutcome UntagGlobalResource(const Model::UntagGlobalResourceRequest& request) const;

  /**
   * A Callable wrapper for UntagGlobalResource that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UntagGlobalResourceRequestT = Model::UntagGlobalResourceRequest>
  Model::UntagGlobalResourceOutcomeCallable UntagGlobalResourceCallable(const UntagGlobalResourceRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::UntagGlobalResource, request);
  }

  /**
   * An Async wrapper for UntagGlobalResource that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename UntagGlobalResourceRequestT = Model::UntagGlobalResourceRequest>
  void UntagGlobalResourceAsync(const UntagGlobalResourceRequestT& request, const UntagGlobalResourceResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::UntagGlobalResource, request, handler, context);
  }

  /**
   * <p> Deletes specified tags from a resource in the current region.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UntagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

  /**
   * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::UntagResource, request);
  }

  /**
   * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::UntagResource, request, handler, context);
  }

  /**
   * <p> Updates the bridge.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UpdateBridge">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateBridgeOutcome UpdateBridge(const Model::UpdateBridgeRequest& request) const;

  /**
   * A Callable wrapper for UpdateBridge that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UpdateBridgeRequestT = Model::UpdateBridgeRequest>
  Model::UpdateBridgeOutcomeCallable UpdateBridgeCallable(const UpdateBridgeRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::UpdateBridge, request);
  }

  /**
   * An Async wrapper for UpdateBridge that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UpdateBridgeRequestT = Model::UpdateBridgeRequest>
  void UpdateBridgeAsync(const UpdateBridgeRequestT& request, const UpdateBridgeResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::UpdateBridge, request, handler, context);
  }

  /**
   * <p> Updates an existing bridge output.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UpdateBridgeOutput">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateBridgeOutputOutcome UpdateBridgeOutput(const Model::UpdateBridgeOutputRequest& request) const;

  /**
   * A Callable wrapper for UpdateBridgeOutput that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateBridgeOutputRequestT = Model::UpdateBridgeOutputRequest>
  Model::UpdateBridgeOutputOutcomeCallable UpdateBridgeOutputCallable(const UpdateBridgeOutputRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::UpdateBridgeOutput, request);
  }

  /**
   * An Async wrapper for UpdateBridgeOutput that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename UpdateBridgeOutputRequestT = Model::UpdateBridgeOutputRequest>
  void UpdateBridgeOutputAsync(const UpdateBridgeOutputRequestT& request, const UpdateBridgeOutputResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::UpdateBridgeOutput, request, handler, context);
  }

  /**
   * <p> Updates an existing bridge source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UpdateBridgeSource">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateBridgeSourceOutcome UpdateBridgeSource(const Model::UpdateBridgeSourceRequest& request) const;

  /**
   * A Callable wrapper for UpdateBridgeSource that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateBridgeSourceRequestT = Model::UpdateBridgeSourceRequest>
  Model::UpdateBridgeSourceOutcomeCallable UpdateBridgeSourceCallable(const UpdateBridgeSourceRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::UpdateBridgeSource, request);
  }

  /**
   * An Async wrapper for UpdateBridgeSource that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename UpdateBridgeSourceRequestT = Model::UpdateBridgeSourceRequest>
  void UpdateBridgeSourceAsync(const UpdateBridgeSourceRequestT& request, const UpdateBridgeSourceResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::UpdateBridgeSource, request, handler, context);
  }

  /**
   * <p> Updates the bridge state. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UpdateBridgeState">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateBridgeStateOutcome UpdateBridgeState(const Model::UpdateBridgeStateRequest& request) const;

  /**
   * A Callable wrapper for UpdateBridgeState that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateBridgeStateRequestT = Model::UpdateBridgeStateRequest>
  Model::UpdateBridgeStateOutcomeCallable UpdateBridgeStateCallable(const UpdateBridgeStateRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::UpdateBridgeState, request);
  }

  /**
   * An Async wrapper for UpdateBridgeState that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename UpdateBridgeStateRequestT = Model::UpdateBridgeStateRequest>
  void UpdateBridgeStateAsync(const UpdateBridgeStateRequestT& request, const UpdateBridgeStateResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::UpdateBridgeState, request, handler, context);
  }

  /**
   * <p> Updates an existing flow.</p>  <p> Because
   * <code>UpdateFlowSources</code> and <code>UpdateFlow</code> are separate
   * operations, you can't change both the source type AND the flow size in a single
   * request. </p> <ul> <li> <p>If you have a <code>MEDIUM</code> flow and you want
   * to change the flow source to NDI®:</p> <ul> <li> <p>First, use the
   * <code>UpdateFlow</code> operation to upgrade the flow size to
   * <code>LARGE</code>. </p> </li> <li> <p>After that, you can then use the
   * <code>UpdateFlowSource</code> operation to configure the NDI source. </p> </li>
   * </ul> </li> <li> <p>If you're switching from an NDI source to a transport stream
   * (TS) source and want to downgrade the flow size: </p> <ul> <li> <p>First, use
   * the <code>UpdateFlowSource</code> operation to change the flow source type. </p>
   * </li> <li> <p>After that, you can then use the <code>UpdateFlow</code> operation
   * to downgrade the flow size to <code>MEDIUM</code>.</p> </li> </ul> </li> </ul>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UpdateFlow">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateFlowOutcome UpdateFlow(const Model::UpdateFlowRequest& request) const;

  /**
   * A Callable wrapper for UpdateFlow that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UpdateFlowRequestT = Model::UpdateFlowRequest>
  Model::UpdateFlowOutcomeCallable UpdateFlowCallable(const UpdateFlowRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::UpdateFlow, request);
  }

  /**
   * An Async wrapper for UpdateFlow that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UpdateFlowRequestT = Model::UpdateFlowRequest>
  void UpdateFlowAsync(const UpdateFlowRequestT& request, const UpdateFlowResponseReceivedHandler& handler,
                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::UpdateFlow, request, handler, context);
  }

  /**
   * <p> Updates an entitlement. You can change an entitlement's description,
   * subscribers, and encryption. If you change the subscribers, the service will
   * remove the outputs that are are used by the subscribers that are
   * removed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UpdateFlowEntitlement">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateFlowEntitlementOutcome UpdateFlowEntitlement(const Model::UpdateFlowEntitlementRequest& request) const;

  /**
   * A Callable wrapper for UpdateFlowEntitlement that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateFlowEntitlementRequestT = Model::UpdateFlowEntitlementRequest>
  Model::UpdateFlowEntitlementOutcomeCallable UpdateFlowEntitlementCallable(const UpdateFlowEntitlementRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::UpdateFlowEntitlement, request);
  }

  /**
   * An Async wrapper for UpdateFlowEntitlement that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename UpdateFlowEntitlementRequestT = Model::UpdateFlowEntitlementRequest>
  void UpdateFlowEntitlementAsync(const UpdateFlowEntitlementRequestT& request, const UpdateFlowEntitlementResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::UpdateFlowEntitlement, request, handler, context);
  }

  /**
   * <p> Updates an existing media stream.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UpdateFlowMediaStream">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateFlowMediaStreamOutcome UpdateFlowMediaStream(const Model::UpdateFlowMediaStreamRequest& request) const;

  /**
   * A Callable wrapper for UpdateFlowMediaStream that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateFlowMediaStreamRequestT = Model::UpdateFlowMediaStreamRequest>
  Model::UpdateFlowMediaStreamOutcomeCallable UpdateFlowMediaStreamCallable(const UpdateFlowMediaStreamRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::UpdateFlowMediaStream, request);
  }

  /**
   * An Async wrapper for UpdateFlowMediaStream that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename UpdateFlowMediaStreamRequestT = Model::UpdateFlowMediaStreamRequest>
  void UpdateFlowMediaStreamAsync(const UpdateFlowMediaStreamRequestT& request, const UpdateFlowMediaStreamResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::UpdateFlowMediaStream, request, handler, context);
  }

  /**
   * <p> Updates an existing flow output.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UpdateFlowOutput">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateFlowOutputOutcome UpdateFlowOutput(const Model::UpdateFlowOutputRequest& request) const;

  /**
   * A Callable wrapper for UpdateFlowOutput that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateFlowOutputRequestT = Model::UpdateFlowOutputRequest>
  Model::UpdateFlowOutputOutcomeCallable UpdateFlowOutputCallable(const UpdateFlowOutputRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::UpdateFlowOutput, request);
  }

  /**
   * An Async wrapper for UpdateFlowOutput that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename UpdateFlowOutputRequestT = Model::UpdateFlowOutputRequest>
  void UpdateFlowOutputAsync(const UpdateFlowOutputRequestT& request, const UpdateFlowOutputResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::UpdateFlowOutput, request, handler, context);
  }

  /**
   * <p> Updates the source of a flow.</p>  <p> Because
   * <code>UpdateFlowSources</code> and <code>UpdateFlow</code> are separate
   * operations, you can't change both the source type AND the flow size in a single
   * request. </p> <ul> <li> <p>If you have a <code>MEDIUM</code> flow and you want
   * to change the flow source to NDI®:</p> <ul> <li> <p>First, use the
   * <code>UpdateFlow</code> operation to upgrade the flow size to
   * <code>LARGE</code>. </p> </li> <li> <p>After that, you can then use the
   * <code>UpdateFlowSource</code> operation to configure the NDI source. </p> </li>
   * </ul> </li> <li> <p>If you're switching from an NDI source to a transport stream
   * (TS) source and want to downgrade the flow size: </p> <ul> <li> <p>First, use
   * the <code>UpdateFlowSource</code> operation to change the flow source type. </p>
   * </li> <li> <p>After that, you can then use the <code>UpdateFlow</code> operation
   * to downgrade the flow size to <code>MEDIUM</code>.</p> </li> </ul> </li> </ul>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UpdateFlowSource">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateFlowSourceOutcome UpdateFlowSource(const Model::UpdateFlowSourceRequest& request) const;

  /**
   * A Callable wrapper for UpdateFlowSource that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateFlowSourceRequestT = Model::UpdateFlowSourceRequest>
  Model::UpdateFlowSourceOutcomeCallable UpdateFlowSourceCallable(const UpdateFlowSourceRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::UpdateFlowSource, request);
  }

  /**
   * An Async wrapper for UpdateFlowSource that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename UpdateFlowSourceRequestT = Model::UpdateFlowSourceRequest>
  void UpdateFlowSourceAsync(const UpdateFlowSourceRequestT& request, const UpdateFlowSourceResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::UpdateFlowSource, request, handler, context);
  }

  /**
   * <p>Updates an existing gateway instance. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UpdateGatewayInstance">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateGatewayInstanceOutcome UpdateGatewayInstance(const Model::UpdateGatewayInstanceRequest& request) const;

  /**
   * A Callable wrapper for UpdateGatewayInstance that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateGatewayInstanceRequestT = Model::UpdateGatewayInstanceRequest>
  Model::UpdateGatewayInstanceOutcomeCallable UpdateGatewayInstanceCallable(const UpdateGatewayInstanceRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::UpdateGatewayInstance, request);
  }

  /**
   * An Async wrapper for UpdateGatewayInstance that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename UpdateGatewayInstanceRequestT = Model::UpdateGatewayInstanceRequest>
  void UpdateGatewayInstanceAsync(const UpdateGatewayInstanceRequestT& request, const UpdateGatewayInstanceResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::UpdateGatewayInstance, request, handler, context);
  }

  /**
   * <p>Updates the configuration of an existing router input in AWS Elemental
   * MediaConnect.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UpdateRouterInput">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateRouterInputOutcome UpdateRouterInput(const Model::UpdateRouterInputRequest& request) const;

  /**
   * A Callable wrapper for UpdateRouterInput that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateRouterInputRequestT = Model::UpdateRouterInputRequest>
  Model::UpdateRouterInputOutcomeCallable UpdateRouterInputCallable(const UpdateRouterInputRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::UpdateRouterInput, request);
  }

  /**
   * An Async wrapper for UpdateRouterInput that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename UpdateRouterInputRequestT = Model::UpdateRouterInputRequest>
  void UpdateRouterInputAsync(const UpdateRouterInputRequestT& request, const UpdateRouterInputResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::UpdateRouterInput, request, handler, context);
  }

  /**
   * <p>Updates the configuration of an existing router network interface in AWS
   * Elemental MediaConnect.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UpdateRouterNetworkInterface">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateRouterNetworkInterfaceOutcome UpdateRouterNetworkInterface(
      const Model::UpdateRouterNetworkInterfaceRequest& request) const;

  /**
   * A Callable wrapper for UpdateRouterNetworkInterface that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename UpdateRouterNetworkInterfaceRequestT = Model::UpdateRouterNetworkInterfaceRequest>
  Model::UpdateRouterNetworkInterfaceOutcomeCallable UpdateRouterNetworkInterfaceCallable(
      const UpdateRouterNetworkInterfaceRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::UpdateRouterNetworkInterface, request);
  }

  /**
   * An Async wrapper for UpdateRouterNetworkInterface that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename UpdateRouterNetworkInterfaceRequestT = Model::UpdateRouterNetworkInterfaceRequest>
  void UpdateRouterNetworkInterfaceAsync(const UpdateRouterNetworkInterfaceRequestT& request,
                                         const UpdateRouterNetworkInterfaceResponseReceivedHandler& handler,
                                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::UpdateRouterNetworkInterface, request, handler, context);
  }

  /**
   * <p>Updates the configuration of an existing router output in AWS Elemental
   * MediaConnect.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UpdateRouterOutput">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateRouterOutputOutcome UpdateRouterOutput(const Model::UpdateRouterOutputRequest& request) const;

  /**
   * A Callable wrapper for UpdateRouterOutput that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateRouterOutputRequestT = Model::UpdateRouterOutputRequest>
  Model::UpdateRouterOutputOutcomeCallable UpdateRouterOutputCallable(const UpdateRouterOutputRequestT& request) const {
    return SubmitCallable(&MediaConnectClient::UpdateRouterOutput, request);
  }

  /**
   * An Async wrapper for UpdateRouterOutput that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename UpdateRouterOutputRequestT = Model::UpdateRouterOutputRequest>
  void UpdateRouterOutputAsync(const UpdateRouterOutputRequestT& request, const UpdateRouterOutputResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MediaConnectClient::UpdateRouterOutput, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<MediaConnectEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<MediaConnectClient>;
  void init(const MediaConnectClientConfiguration& clientConfiguration);

  MediaConnectClientConfiguration m_clientConfiguration;
  std::shared_ptr<MediaConnectEndpointProviderBase> m_endpointProvider;
};

}  // namespace MediaConnect
}  // namespace Aws
