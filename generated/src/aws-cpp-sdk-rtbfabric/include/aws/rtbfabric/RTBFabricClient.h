/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rtbfabric/RTBFabricPaginationBase.h>
#include <aws/rtbfabric/RTBFabricServiceClientModel.h>
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>

namespace Aws {
namespace RTBFabric {
/**
 * <p>Amazon Web Services RTB Fabric provides secure, low-latency infrastructure
 * for connecting real-time bidding (RTB) applications. Rather than hosting
 * applications directly, RTB Fabric acts as the connecting fabric that enables
 * your applications to communicate efficiently over private networks instead of
 * the public internet. You maintain complete control over your applications, data,
 * and bidding decisions, while RTB Fabric provides the underlying infrastructure
 * for secure, reliable connectivity.</p> <p>You can use these APIs to complete RTB
 * Fabric tasks, such as setting up audit log ingestions or viewing user access.
 * For more information about RTB Fabric, including the required permissions to use
 * the service, see the <a
 * href="https://docs.aws.amazon.com/rtb-fabric/latest/userguide/">Amazon Web
 * Services RTB Fabric User Guide</a>.</p>
 */
class AWS_RTBFABRIC_API RTBFabricClient : public Aws::Client::AWSJsonClient,
                                          public Aws::Client::ClientWithAsyncTemplateMethods<RTBFabricClient>,
                                          public RTBFabricPaginationBase<RTBFabricClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef RTBFabricClientConfiguration ClientConfigurationType;
  typedef RTBFabricEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  RTBFabricClient(const Aws::RTBFabric::RTBFabricClientConfiguration& clientConfiguration = Aws::RTBFabric::RTBFabricClientConfiguration(),
                  std::shared_ptr<RTBFabricEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  RTBFabricClient(const Aws::Auth::AWSCredentials& credentials, std::shared_ptr<RTBFabricEndpointProviderBase> endpointProvider = nullptr,
                  const Aws::RTBFabric::RTBFabricClientConfiguration& clientConfiguration = Aws::RTBFabric::RTBFabricClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  RTBFabricClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  std::shared_ptr<RTBFabricEndpointProviderBase> endpointProvider = nullptr,
                  const Aws::RTBFabric::RTBFabricClientConfiguration& clientConfiguration = Aws::RTBFabric::RTBFabricClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  RTBFabricClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  RTBFabricClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  RTBFabricClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~RTBFabricClient();

  /**
   * <p>Accepts a link request between gateways.</p> <p>When a requester gateway
   * requests to link with a responder gateway, the responder can use this operation
   * to accept the link request and establish the connection.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rtbfabric-2023-05-15/AcceptLink">AWS
   * API Reference</a></p>
   */
  virtual Model::AcceptLinkOutcome AcceptLink(const Model::AcceptLinkRequest& request) const;

  /**
   * A Callable wrapper for AcceptLink that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename AcceptLinkRequestT = Model::AcceptLinkRequest>
  Model::AcceptLinkOutcomeCallable AcceptLinkCallable(const AcceptLinkRequestT& request) const {
    return SubmitCallable(&RTBFabricClient::AcceptLink, request);
  }

  /**
   * An Async wrapper for AcceptLink that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename AcceptLinkRequestT = Model::AcceptLinkRequest>
  void AcceptLinkAsync(const AcceptLinkRequestT& request, const AcceptLinkResponseReceivedHandler& handler,
                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&RTBFabricClient::AcceptLink, request, handler, context);
  }

  /**
   * <p>Creates an inbound external link.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rtbfabric-2023-05-15/CreateInboundExternalLink">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateInboundExternalLinkOutcome CreateInboundExternalLink(const Model::CreateInboundExternalLinkRequest& request) const;

  /**
   * A Callable wrapper for CreateInboundExternalLink that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateInboundExternalLinkRequestT = Model::CreateInboundExternalLinkRequest>
  Model::CreateInboundExternalLinkOutcomeCallable CreateInboundExternalLinkCallable(
      const CreateInboundExternalLinkRequestT& request) const {
    return SubmitCallable(&RTBFabricClient::CreateInboundExternalLink, request);
  }

  /**
   * An Async wrapper for CreateInboundExternalLink that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename CreateInboundExternalLinkRequestT = Model::CreateInboundExternalLinkRequest>
  void CreateInboundExternalLinkAsync(const CreateInboundExternalLinkRequestT& request,
                                      const CreateInboundExternalLinkResponseReceivedHandler& handler,
                                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&RTBFabricClient::CreateInboundExternalLink, request, handler, context);
  }

  /**
   * <p>Creates a new link between gateways.</p> <p>Establishes a connection that
   * allows gateways to communicate and exchange bid requests and
   * responses.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rtbfabric-2023-05-15/CreateLink">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateLinkOutcome CreateLink(const Model::CreateLinkRequest& request) const;

  /**
   * A Callable wrapper for CreateLink that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename CreateLinkRequestT = Model::CreateLinkRequest>
  Model::CreateLinkOutcomeCallable CreateLinkCallable(const CreateLinkRequestT& request) const {
    return SubmitCallable(&RTBFabricClient::CreateLink, request);
  }

  /**
   * An Async wrapper for CreateLink that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CreateLinkRequestT = Model::CreateLinkRequest>
  void CreateLinkAsync(const CreateLinkRequestT& request, const CreateLinkResponseReceivedHandler& handler,
                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&RTBFabricClient::CreateLink, request, handler, context);
  }

  /**
   * <p>Creates an outbound external link.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rtbfabric-2023-05-15/CreateOutboundExternalLink">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateOutboundExternalLinkOutcome CreateOutboundExternalLink(
      const Model::CreateOutboundExternalLinkRequest& request) const;

  /**
   * A Callable wrapper for CreateOutboundExternalLink that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename CreateOutboundExternalLinkRequestT = Model::CreateOutboundExternalLinkRequest>
  Model::CreateOutboundExternalLinkOutcomeCallable CreateOutboundExternalLinkCallable(
      const CreateOutboundExternalLinkRequestT& request) const {
    return SubmitCallable(&RTBFabricClient::CreateOutboundExternalLink, request);
  }

  /**
   * An Async wrapper for CreateOutboundExternalLink that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename CreateOutboundExternalLinkRequestT = Model::CreateOutboundExternalLinkRequest>
  void CreateOutboundExternalLinkAsync(const CreateOutboundExternalLinkRequestT& request,
                                       const CreateOutboundExternalLinkResponseReceivedHandler& handler,
                                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&RTBFabricClient::CreateOutboundExternalLink, request, handler, context);
  }

  /**
   * <p>Creates a requester gateway.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rtbfabric-2023-05-15/CreateRequesterGateway">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateRequesterGatewayOutcome CreateRequesterGateway(const Model::CreateRequesterGatewayRequest& request) const;

  /**
   * A Callable wrapper for CreateRequesterGateway that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateRequesterGatewayRequestT = Model::CreateRequesterGatewayRequest>
  Model::CreateRequesterGatewayOutcomeCallable CreateRequesterGatewayCallable(const CreateRequesterGatewayRequestT& request) const {
    return SubmitCallable(&RTBFabricClient::CreateRequesterGateway, request);
  }

  /**
   * An Async wrapper for CreateRequesterGateway that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename CreateRequesterGatewayRequestT = Model::CreateRequesterGatewayRequest>
  void CreateRequesterGatewayAsync(const CreateRequesterGatewayRequestT& request,
                                   const CreateRequesterGatewayResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&RTBFabricClient::CreateRequesterGateway, request, handler, context);
  }

  /**
   * <p>Creates a responder gateway.</p>  <p>A domain name or managed
   * endpoint is required.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rtbfabric-2023-05-15/CreateResponderGateway">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateResponderGatewayOutcome CreateResponderGateway(const Model::CreateResponderGatewayRequest& request) const;

  /**
   * A Callable wrapper for CreateResponderGateway that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateResponderGatewayRequestT = Model::CreateResponderGatewayRequest>
  Model::CreateResponderGatewayOutcomeCallable CreateResponderGatewayCallable(const CreateResponderGatewayRequestT& request) const {
    return SubmitCallable(&RTBFabricClient::CreateResponderGateway, request);
  }

  /**
   * An Async wrapper for CreateResponderGateway that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename CreateResponderGatewayRequestT = Model::CreateResponderGatewayRequest>
  void CreateResponderGatewayAsync(const CreateResponderGatewayRequestT& request,
                                   const CreateResponderGatewayResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&RTBFabricClient::CreateResponderGateway, request, handler, context);
  }

  /**
   * <p>Deletes an inbound external link.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rtbfabric-2023-05-15/DeleteInboundExternalLink">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteInboundExternalLinkOutcome DeleteInboundExternalLink(const Model::DeleteInboundExternalLinkRequest& request) const;

  /**
   * A Callable wrapper for DeleteInboundExternalLink that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteInboundExternalLinkRequestT = Model::DeleteInboundExternalLinkRequest>
  Model::DeleteInboundExternalLinkOutcomeCallable DeleteInboundExternalLinkCallable(
      const DeleteInboundExternalLinkRequestT& request) const {
    return SubmitCallable(&RTBFabricClient::DeleteInboundExternalLink, request);
  }

  /**
   * An Async wrapper for DeleteInboundExternalLink that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DeleteInboundExternalLinkRequestT = Model::DeleteInboundExternalLinkRequest>
  void DeleteInboundExternalLinkAsync(const DeleteInboundExternalLinkRequestT& request,
                                      const DeleteInboundExternalLinkResponseReceivedHandler& handler,
                                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&RTBFabricClient::DeleteInboundExternalLink, request, handler, context);
  }

  /**
   * <p>Deletes a link between gateways.</p> <p>Permanently removes the connection
   * between gateways. This action cannot be undone.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rtbfabric-2023-05-15/DeleteLink">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteLinkOutcome DeleteLink(const Model::DeleteLinkRequest& request) const;

  /**
   * A Callable wrapper for DeleteLink that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DeleteLinkRequestT = Model::DeleteLinkRequest>
  Model::DeleteLinkOutcomeCallable DeleteLinkCallable(const DeleteLinkRequestT& request) const {
    return SubmitCallable(&RTBFabricClient::DeleteLink, request);
  }

  /**
   * An Async wrapper for DeleteLink that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DeleteLinkRequestT = Model::DeleteLinkRequest>
  void DeleteLinkAsync(const DeleteLinkRequestT& request, const DeleteLinkResponseReceivedHandler& handler,
                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&RTBFabricClient::DeleteLink, request, handler, context);
  }

  /**
   * <p>Deletes an outbound external link.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rtbfabric-2023-05-15/DeleteOutboundExternalLink">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteOutboundExternalLinkOutcome DeleteOutboundExternalLink(
      const Model::DeleteOutboundExternalLinkRequest& request) const;

  /**
   * A Callable wrapper for DeleteOutboundExternalLink that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename DeleteOutboundExternalLinkRequestT = Model::DeleteOutboundExternalLinkRequest>
  Model::DeleteOutboundExternalLinkOutcomeCallable DeleteOutboundExternalLinkCallable(
      const DeleteOutboundExternalLinkRequestT& request) const {
    return SubmitCallable(&RTBFabricClient::DeleteOutboundExternalLink, request);
  }

  /**
   * An Async wrapper for DeleteOutboundExternalLink that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DeleteOutboundExternalLinkRequestT = Model::DeleteOutboundExternalLinkRequest>
  void DeleteOutboundExternalLinkAsync(const DeleteOutboundExternalLinkRequestT& request,
                                       const DeleteOutboundExternalLinkResponseReceivedHandler& handler,
                                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&RTBFabricClient::DeleteOutboundExternalLink, request, handler, context);
  }

  /**
   * <p>Deletes a requester gateway.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rtbfabric-2023-05-15/DeleteRequesterGateway">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteRequesterGatewayOutcome DeleteRequesterGateway(const Model::DeleteRequesterGatewayRequest& request) const;

  /**
   * A Callable wrapper for DeleteRequesterGateway that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteRequesterGatewayRequestT = Model::DeleteRequesterGatewayRequest>
  Model::DeleteRequesterGatewayOutcomeCallable DeleteRequesterGatewayCallable(const DeleteRequesterGatewayRequestT& request) const {
    return SubmitCallable(&RTBFabricClient::DeleteRequesterGateway, request);
  }

  /**
   * An Async wrapper for DeleteRequesterGateway that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DeleteRequesterGatewayRequestT = Model::DeleteRequesterGatewayRequest>
  void DeleteRequesterGatewayAsync(const DeleteRequesterGatewayRequestT& request,
                                   const DeleteRequesterGatewayResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&RTBFabricClient::DeleteRequesterGateway, request, handler, context);
  }

  /**
   * <p>Deletes a responder gateway.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rtbfabric-2023-05-15/DeleteResponderGateway">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteResponderGatewayOutcome DeleteResponderGateway(const Model::DeleteResponderGatewayRequest& request) const;

  /**
   * A Callable wrapper for DeleteResponderGateway that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteResponderGatewayRequestT = Model::DeleteResponderGatewayRequest>
  Model::DeleteResponderGatewayOutcomeCallable DeleteResponderGatewayCallable(const DeleteResponderGatewayRequestT& request) const {
    return SubmitCallable(&RTBFabricClient::DeleteResponderGateway, request);
  }

  /**
   * An Async wrapper for DeleteResponderGateway that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DeleteResponderGatewayRequestT = Model::DeleteResponderGatewayRequest>
  void DeleteResponderGatewayAsync(const DeleteResponderGatewayRequestT& request,
                                   const DeleteResponderGatewayResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&RTBFabricClient::DeleteResponderGateway, request, handler, context);
  }

  /**
   * <p>Retrieves information about an inbound external link.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rtbfabric-2023-05-15/GetInboundExternalLink">AWS
   * API Reference</a></p>
   */
  virtual Model::GetInboundExternalLinkOutcome GetInboundExternalLink(const Model::GetInboundExternalLinkRequest& request) const;

  /**
   * A Callable wrapper for GetInboundExternalLink that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetInboundExternalLinkRequestT = Model::GetInboundExternalLinkRequest>
  Model::GetInboundExternalLinkOutcomeCallable GetInboundExternalLinkCallable(const GetInboundExternalLinkRequestT& request) const {
    return SubmitCallable(&RTBFabricClient::GetInboundExternalLink, request);
  }

  /**
   * An Async wrapper for GetInboundExternalLink that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetInboundExternalLinkRequestT = Model::GetInboundExternalLinkRequest>
  void GetInboundExternalLinkAsync(const GetInboundExternalLinkRequestT& request,
                                   const GetInboundExternalLinkResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&RTBFabricClient::GetInboundExternalLink, request, handler, context);
  }

  /**
   * <p>Retrieves information about a link between gateways.</p> <p>Returns detailed
   * information about the link configuration, status, and associated
   * gateways.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rtbfabric-2023-05-15/GetLink">AWS
   * API Reference</a></p>
   */
  virtual Model::GetLinkOutcome GetLink(const Model::GetLinkRequest& request) const;

  /**
   * A Callable wrapper for GetLink that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetLinkRequestT = Model::GetLinkRequest>
  Model::GetLinkOutcomeCallable GetLinkCallable(const GetLinkRequestT& request) const {
    return SubmitCallable(&RTBFabricClient::GetLink, request);
  }

  /**
   * An Async wrapper for GetLink that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetLinkRequestT = Model::GetLinkRequest>
  void GetLinkAsync(const GetLinkRequestT& request, const GetLinkResponseReceivedHandler& handler,
                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&RTBFabricClient::GetLink, request, handler, context);
  }

  /**
   * <p>Retrieves information about an outbound external link.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rtbfabric-2023-05-15/GetOutboundExternalLink">AWS
   * API Reference</a></p>
   */
  virtual Model::GetOutboundExternalLinkOutcome GetOutboundExternalLink(const Model::GetOutboundExternalLinkRequest& request) const;

  /**
   * A Callable wrapper for GetOutboundExternalLink that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetOutboundExternalLinkRequestT = Model::GetOutboundExternalLinkRequest>
  Model::GetOutboundExternalLinkOutcomeCallable GetOutboundExternalLinkCallable(const GetOutboundExternalLinkRequestT& request) const {
    return SubmitCallable(&RTBFabricClient::GetOutboundExternalLink, request);
  }

  /**
   * An Async wrapper for GetOutboundExternalLink that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetOutboundExternalLinkRequestT = Model::GetOutboundExternalLinkRequest>
  void GetOutboundExternalLinkAsync(const GetOutboundExternalLinkRequestT& request,
                                    const GetOutboundExternalLinkResponseReceivedHandler& handler,
                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&RTBFabricClient::GetOutboundExternalLink, request, handler, context);
  }

  /**
   * <p>Retrieves information about a requester gateway.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rtbfabric-2023-05-15/GetRequesterGateway">AWS
   * API Reference</a></p>
   */
  virtual Model::GetRequesterGatewayOutcome GetRequesterGateway(const Model::GetRequesterGatewayRequest& request) const;

  /**
   * A Callable wrapper for GetRequesterGateway that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetRequesterGatewayRequestT = Model::GetRequesterGatewayRequest>
  Model::GetRequesterGatewayOutcomeCallable GetRequesterGatewayCallable(const GetRequesterGatewayRequestT& request) const {
    return SubmitCallable(&RTBFabricClient::GetRequesterGateway, request);
  }

  /**
   * An Async wrapper for GetRequesterGateway that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename GetRequesterGatewayRequestT = Model::GetRequesterGatewayRequest>
  void GetRequesterGatewayAsync(const GetRequesterGatewayRequestT& request, const GetRequesterGatewayResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&RTBFabricClient::GetRequesterGateway, request, handler, context);
  }

  /**
   * <p>Retrieves information about a responder gateway.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rtbfabric-2023-05-15/GetResponderGateway">AWS
   * API Reference</a></p>
   */
  virtual Model::GetResponderGatewayOutcome GetResponderGateway(const Model::GetResponderGatewayRequest& request) const;

  /**
   * A Callable wrapper for GetResponderGateway that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetResponderGatewayRequestT = Model::GetResponderGatewayRequest>
  Model::GetResponderGatewayOutcomeCallable GetResponderGatewayCallable(const GetResponderGatewayRequestT& request) const {
    return SubmitCallable(&RTBFabricClient::GetResponderGateway, request);
  }

  /**
   * An Async wrapper for GetResponderGateway that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename GetResponderGatewayRequestT = Model::GetResponderGatewayRequest>
  void GetResponderGatewayAsync(const GetResponderGatewayRequestT& request, const GetResponderGatewayResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&RTBFabricClient::GetResponderGateway, request, handler, context);
  }

  /**
   * <p>Lists links associated with gateways.</p> <p>Returns a list of all links for
   * the specified gateways, including their status and configuration
   * details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rtbfabric-2023-05-15/ListLinks">AWS
   * API Reference</a></p>
   */
  virtual Model::ListLinksOutcome ListLinks(const Model::ListLinksRequest& request) const;

  /**
   * A Callable wrapper for ListLinks that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListLinksRequestT = Model::ListLinksRequest>
  Model::ListLinksOutcomeCallable ListLinksCallable(const ListLinksRequestT& request) const {
    return SubmitCallable(&RTBFabricClient::ListLinks, request);
  }

  /**
   * An Async wrapper for ListLinks that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListLinksRequestT = Model::ListLinksRequest>
  void ListLinksAsync(const ListLinksRequestT& request, const ListLinksResponseReceivedHandler& handler,
                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&RTBFabricClient::ListLinks, request, handler, context);
  }

  /**
   * <p>Lists requester gateways.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rtbfabric-2023-05-15/ListRequesterGateways">AWS
   * API Reference</a></p>
   */
  virtual Model::ListRequesterGatewaysOutcome ListRequesterGateways(const Model::ListRequesterGatewaysRequest& request = {}) const;

  /**
   * A Callable wrapper for ListRequesterGateways that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListRequesterGatewaysRequestT = Model::ListRequesterGatewaysRequest>
  Model::ListRequesterGatewaysOutcomeCallable ListRequesterGatewaysCallable(const ListRequesterGatewaysRequestT& request = {}) const {
    return SubmitCallable(&RTBFabricClient::ListRequesterGateways, request);
  }

  /**
   * An Async wrapper for ListRequesterGateways that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListRequesterGatewaysRequestT = Model::ListRequesterGatewaysRequest>
  void ListRequesterGatewaysAsync(const ListRequesterGatewaysResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                  const ListRequesterGatewaysRequestT& request = {}) const {
    return SubmitAsync(&RTBFabricClient::ListRequesterGateways, request, handler, context);
  }

  /**
   * <p>Lists reponder gateways.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rtbfabric-2023-05-15/ListResponderGateways">AWS
   * API Reference</a></p>
   */
  virtual Model::ListResponderGatewaysOutcome ListResponderGateways(const Model::ListResponderGatewaysRequest& request = {}) const;

  /**
   * A Callable wrapper for ListResponderGateways that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListResponderGatewaysRequestT = Model::ListResponderGatewaysRequest>
  Model::ListResponderGatewaysOutcomeCallable ListResponderGatewaysCallable(const ListResponderGatewaysRequestT& request = {}) const {
    return SubmitCallable(&RTBFabricClient::ListResponderGateways, request);
  }

  /**
   * An Async wrapper for ListResponderGateways that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListResponderGatewaysRequestT = Model::ListResponderGatewaysRequest>
  void ListResponderGatewaysAsync(const ListResponderGatewaysResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                  const ListResponderGatewaysRequestT& request = {}) const {
    return SubmitAsync(&RTBFabricClient::ListResponderGateways, request, handler, context);
  }

  /**
   * <p>Lists tags for a resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rtbfabric-2023-05-15/ListTagsForResource">AWS
   * API Reference</a></p>
   */
  virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

  /**
   * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const {
    return SubmitCallable(&RTBFabricClient::ListTagsForResource, request);
  }

  /**
   * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&RTBFabricClient::ListTagsForResource, request, handler, context);
  }

  /**
   * <p>Rejects a link request between gateways.</p> <p>When a requester gateway
   * requests to link with a responder gateway, the responder can use this operation
   * to decline the link request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rtbfabric-2023-05-15/RejectLink">AWS
   * API Reference</a></p>
   */
  virtual Model::RejectLinkOutcome RejectLink(const Model::RejectLinkRequest& request) const;

  /**
   * A Callable wrapper for RejectLink that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename RejectLinkRequestT = Model::RejectLinkRequest>
  Model::RejectLinkOutcomeCallable RejectLinkCallable(const RejectLinkRequestT& request) const {
    return SubmitCallable(&RTBFabricClient::RejectLink, request);
  }

  /**
   * An Async wrapper for RejectLink that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename RejectLinkRequestT = Model::RejectLinkRequest>
  void RejectLinkAsync(const RejectLinkRequestT& request, const RejectLinkResponseReceivedHandler& handler,
                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&RTBFabricClient::RejectLink, request, handler, context);
  }

  /**
   * <p>Assigns one or more tags (key-value pairs) to the specified
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rtbfabric-2023-05-15/TagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

  /**
   * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const {
    return SubmitCallable(&RTBFabricClient::TagResource, request);
  }

  /**
   * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&RTBFabricClient::TagResource, request, handler, context);
  }

  /**
   * <p>Removes a tag or tags from a resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rtbfabric-2023-05-15/UntagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

  /**
   * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const {
    return SubmitCallable(&RTBFabricClient::UntagResource, request);
  }

  /**
   * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&RTBFabricClient::UntagResource, request, handler, context);
  }

  /**
   * <p>Updates the configuration of a link between gateways.</p> <p>Allows you to
   * modify settings and parameters for an existing link.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rtbfabric-2023-05-15/UpdateLink">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateLinkOutcome UpdateLink(const Model::UpdateLinkRequest& request) const;

  /**
   * A Callable wrapper for UpdateLink that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UpdateLinkRequestT = Model::UpdateLinkRequest>
  Model::UpdateLinkOutcomeCallable UpdateLinkCallable(const UpdateLinkRequestT& request) const {
    return SubmitCallable(&RTBFabricClient::UpdateLink, request);
  }

  /**
   * An Async wrapper for UpdateLink that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UpdateLinkRequestT = Model::UpdateLinkRequest>
  void UpdateLinkAsync(const UpdateLinkRequestT& request, const UpdateLinkResponseReceivedHandler& handler,
                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&RTBFabricClient::UpdateLink, request, handler, context);
  }

  /**
   * <p>Updates a link module flow.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rtbfabric-2023-05-15/UpdateLinkModuleFlow">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateLinkModuleFlowOutcome UpdateLinkModuleFlow(const Model::UpdateLinkModuleFlowRequest& request) const;

  /**
   * A Callable wrapper for UpdateLinkModuleFlow that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateLinkModuleFlowRequestT = Model::UpdateLinkModuleFlowRequest>
  Model::UpdateLinkModuleFlowOutcomeCallable UpdateLinkModuleFlowCallable(const UpdateLinkModuleFlowRequestT& request) const {
    return SubmitCallable(&RTBFabricClient::UpdateLinkModuleFlow, request);
  }

  /**
   * An Async wrapper for UpdateLinkModuleFlow that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename UpdateLinkModuleFlowRequestT = Model::UpdateLinkModuleFlowRequest>
  void UpdateLinkModuleFlowAsync(const UpdateLinkModuleFlowRequestT& request, const UpdateLinkModuleFlowResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&RTBFabricClient::UpdateLinkModuleFlow, request, handler, context);
  }

  /**
   * <p>Updates a requester gateway.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rtbfabric-2023-05-15/UpdateRequesterGateway">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateRequesterGatewayOutcome UpdateRequesterGateway(const Model::UpdateRequesterGatewayRequest& request) const;

  /**
   * A Callable wrapper for UpdateRequesterGateway that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateRequesterGatewayRequestT = Model::UpdateRequesterGatewayRequest>
  Model::UpdateRequesterGatewayOutcomeCallable UpdateRequesterGatewayCallable(const UpdateRequesterGatewayRequestT& request) const {
    return SubmitCallable(&RTBFabricClient::UpdateRequesterGateway, request);
  }

  /**
   * An Async wrapper for UpdateRequesterGateway that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename UpdateRequesterGatewayRequestT = Model::UpdateRequesterGatewayRequest>
  void UpdateRequesterGatewayAsync(const UpdateRequesterGatewayRequestT& request,
                                   const UpdateRequesterGatewayResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&RTBFabricClient::UpdateRequesterGateway, request, handler, context);
  }

  /**
   * <p>Updates a responder gateway.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rtbfabric-2023-05-15/UpdateResponderGateway">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateResponderGatewayOutcome UpdateResponderGateway(const Model::UpdateResponderGatewayRequest& request) const;

  /**
   * A Callable wrapper for UpdateResponderGateway that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateResponderGatewayRequestT = Model::UpdateResponderGatewayRequest>
  Model::UpdateResponderGatewayOutcomeCallable UpdateResponderGatewayCallable(const UpdateResponderGatewayRequestT& request) const {
    return SubmitCallable(&RTBFabricClient::UpdateResponderGateway, request);
  }

  /**
   * An Async wrapper for UpdateResponderGateway that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename UpdateResponderGatewayRequestT = Model::UpdateResponderGatewayRequest>
  void UpdateResponderGatewayAsync(const UpdateResponderGatewayRequestT& request,
                                   const UpdateResponderGatewayResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&RTBFabricClient::UpdateResponderGateway, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<RTBFabricEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<RTBFabricClient>;
  void init(const RTBFabricClientConfiguration& clientConfiguration);

  RTBFabricClientConfiguration m_clientConfiguration;
  std::shared_ptr<RTBFabricEndpointProviderBase> m_endpointProvider;
};

}  // namespace RTBFabric
}  // namespace Aws
