/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker-inference-router-runtime/SageMakerInferenceRouterRuntimePaginationBase.h>
#include <aws/sagemaker-inference-router-runtime/SageMakerInferenceRouterRuntimeServiceClientModel.h>
#include <aws/sagemaker-inference-router-runtime/SageMakerInferenceRouterRuntimeWaiter.h>
#include <aws/sagemaker-inference-router-runtime/SageMakerInferenceRouterRuntime_EXPORTS.h>

namespace Aws {
namespace SageMakerInferenceRouterRuntime {
/**
 * <p>Amazon SageMaker Inference Router Runtime is the runtime API for Amazon
 * SageMaker AI inference routers. An inference router sends each request that you
 * make to one of the destinations of a routing target. A destination is a
 * SageMaker AI endpoint or inference component, in your account or in another
 * account, in the router's Amazon Web Services Region or in another Region in the
 * same Amazon Web Services partition. The router chooses a healthy destination
 * with capacity, and prefers destinations in its own Region.</p> <p>Use
 * <code>InvokeInferenceRouter</code> to get an inference in real time. Use
 * <code>InvokeInferenceRouterAsync</code> to submit a request whose input and
 * response are stored in Amazon S3.</p> <p>The inference router runtime endpoint
 * supports HTTP/1.1 only. HTTP/2 isn't supported. If you use the Amazon Web
 * Services SDKs or the Amazon Web Services CLI, you don't need to change
 * anything.</p>
 */
class AWS_SAGEMAKERINFERENCEROUTERRUNTIME_API SageMakerInferenceRouterRuntimeClient
    : public Aws::Client::AWSJsonClient,
      public Aws::Client::ClientWithAsyncTemplateMethods<SageMakerInferenceRouterRuntimeClient>,
      public SageMakerInferenceRouterRuntimePaginationBase<SageMakerInferenceRouterRuntimeClient>,
      public SageMakerInferenceRouterRuntimeWaiter<SageMakerInferenceRouterRuntimeClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef SageMakerInferenceRouterRuntimeClientConfiguration ClientConfigurationType;
  typedef SageMakerInferenceRouterRuntimeEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  SageMakerInferenceRouterRuntimeClient(
      const Aws::SageMakerInferenceRouterRuntime::SageMakerInferenceRouterRuntimeClientConfiguration& clientConfiguration =
          Aws::SageMakerInferenceRouterRuntime::SageMakerInferenceRouterRuntimeClientConfiguration(),
      std::shared_ptr<SageMakerInferenceRouterRuntimeEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  SageMakerInferenceRouterRuntimeClient(
      const Aws::Auth::AWSCredentials& credentials,
      std::shared_ptr<SageMakerInferenceRouterRuntimeEndpointProviderBase> endpointProvider = nullptr,
      const Aws::SageMakerInferenceRouterRuntime::SageMakerInferenceRouterRuntimeClientConfiguration& clientConfiguration =
          Aws::SageMakerInferenceRouterRuntime::SageMakerInferenceRouterRuntimeClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  SageMakerInferenceRouterRuntimeClient(
      const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
      std::shared_ptr<SageMakerInferenceRouterRuntimeEndpointProviderBase> endpointProvider = nullptr,
      const Aws::SageMakerInferenceRouterRuntime::SageMakerInferenceRouterRuntimeClientConfiguration& clientConfiguration =
          Aws::SageMakerInferenceRouterRuntime::SageMakerInferenceRouterRuntimeClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  SageMakerInferenceRouterRuntimeClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  SageMakerInferenceRouterRuntimeClient(const Aws::Auth::AWSCredentials& credentials,
                                        const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  SageMakerInferenceRouterRuntimeClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                        const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~SageMakerInferenceRouterRuntimeClient();

  /**
   * <p>Sends a real-time inference request to an inference router. In the request,
   * you name the routing target, and the router sends the request to one of the
   * routing target's destinations. The response includes the destination that served
   * the request and the reason that the router chose it.</p> <p>The following limits
   * apply:</p> <ul> <li> <p>The maximum request payload is 6 MB. A request with a
   * larger body fails with HTTP status code 413.</p> </li> <li> <p>Your model has up
   * to 60 seconds for each attempt, the same limit as <code>InvokeEndpoint</code>.
   * If your account has a higher model execution timeout for
   * <code>InvokeEndpoint</code>, it doesn't apply through an inference router. For
   * models that take longer, use <code>InvokeInferenceRouterAsync</code>.</p> </li>
   * </ul> <p>If a destination returns an error that the router can retry, such as a
   * throttling error, before your model produces a response, the router retries the
   * request once on another destination. A request that times out on a destination
   * isn't retried. Because a request can make two attempts, set your client read
   * timeout to at least 170 seconds.</p> <p>The caller needs permission to invoke
   * the inference router and every destination of the routing target. For
   * information about permissions, see <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/dg/inference-router.html">Route
   * requests across Regions with inference routers</a>.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-inference-router-runtime-2026-01-01/InvokeInferenceRouter">AWS
   * API Reference</a></p>
   */
  virtual Model::InvokeInferenceRouterOutcome InvokeInferenceRouter(const Model::InvokeInferenceRouterRequest& request) const;

  /**
   * A Callable wrapper for InvokeInferenceRouter that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename InvokeInferenceRouterRequestT = Model::InvokeInferenceRouterRequest>
  Model::InvokeInferenceRouterOutcomeCallable InvokeInferenceRouterCallable(const InvokeInferenceRouterRequestT& request) const {
    return SubmitCallable(&SageMakerInferenceRouterRuntimeClient::InvokeInferenceRouter, request);
  }

  /**
   * An Async wrapper for InvokeInferenceRouter that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename InvokeInferenceRouterRequestT = Model::InvokeInferenceRouterRequest>
  void InvokeInferenceRouterAsync(const InvokeInferenceRouterRequestT& request, const InvokeInferenceRouterResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SageMakerInferenceRouterRuntimeClient::InvokeInferenceRouter, request, handler, context);
  }

  /**
   * <p>Submits an asynchronous inference request to an inference router. Before you
   * call this operation, upload the input data to Amazon S3 in the router's Amazon
   * Web Services Region. The router returns as soon as it accepts the request, and
   * sends the request to one of the destinations of the routing target. The
   * destination reads the input from Amazon S3, and the inference response is
   * written to the Amazon S3 output path that the routing target specifies.</p>
   * <p>If a destination doesn't start the request within the routing target's
   * <code>MaxTimeInBacklogSeconds</code>, the router moves the request to another
   * destination. After your model starts processing the request, the request doesn't
   * move. If no destination can take the request before
   * <code>RequestTTLSeconds</code> runs out, or every destination has been tried,
   * the router writes a failure object to the <code>FailureLocation</code> and
   * publishes a notification to the routing target's error topic, if one is
   * configured.</p> <p>For information about the permissions that the caller and
   * each destination need, see <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/dg/inference-router-async.html">Send
   * asynchronous requests through an inference router</a>.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-inference-router-runtime-2026-01-01/InvokeInferenceRouterAsync">AWS
   * API Reference</a></p>
   */
  virtual Model::InvokeInferenceRouterAsyncOutcome InvokeInferenceRouterAsync(
      const Model::InvokeInferenceRouterAsyncRequest& request) const;

  /**
   * A Callable wrapper for InvokeInferenceRouterAsync that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename InvokeInferenceRouterAsyncRequestT = Model::InvokeInferenceRouterAsyncRequest>
  Model::InvokeInferenceRouterAsyncOutcomeCallable InvokeInferenceRouterAsyncCallable(
      const InvokeInferenceRouterAsyncRequestT& request) const {
    return SubmitCallable(&SageMakerInferenceRouterRuntimeClient::InvokeInferenceRouterAsync, request);
  }

  /**
   * An Async wrapper for InvokeInferenceRouterAsync that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename InvokeInferenceRouterAsyncRequestT = Model::InvokeInferenceRouterAsyncRequest>
  void InvokeInferenceRouterAsyncAsync(const InvokeInferenceRouterAsyncRequestT& request,
                                       const InvokeInferenceRouterAsyncResponseReceivedHandler& handler,
                                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SageMakerInferenceRouterRuntimeClient::InvokeInferenceRouterAsync, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<SageMakerInferenceRouterRuntimeEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<SageMakerInferenceRouterRuntimeClient>;
  void init(const SageMakerInferenceRouterRuntimeClientConfiguration& clientConfiguration);

  typedef Aws::Utils::Outcome<Aws::AmazonWebServiceResult<RESPONSE>, SageMakerInferenceRouterRuntimeError> InvokeOperationOutcome;

  InvokeOperationOutcome InvokeServiceOperation(const AmazonWebServiceRequest& request,
                                                const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
                                                Aws::Http::HttpMethod httpMethod) const;

  SageMakerInferenceRouterRuntimeClientConfiguration m_clientConfiguration;
  std::shared_ptr<SageMakerInferenceRouterRuntimeEndpointProviderBase> m_endpointProvider;
};

}  // namespace SageMakerInferenceRouterRuntime
}  // namespace Aws
