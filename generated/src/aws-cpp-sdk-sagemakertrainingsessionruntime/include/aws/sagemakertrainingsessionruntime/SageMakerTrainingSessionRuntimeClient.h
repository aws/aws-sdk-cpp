/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemakertrainingsessionruntime/SageMakerTrainingSessionRuntimePaginationBase.h>
#include <aws/sagemakertrainingsessionruntime/SageMakerTrainingSessionRuntimeServiceClientModel.h>
#include <aws/sagemakertrainingsessionruntime/SageMakerTrainingSessionRuntimeWaiter.h>
#include <aws/sagemakertrainingsessionruntime/SageMakerTrainingSessionRuntime_EXPORTS.h>

namespace Aws {
namespace SageMakerTrainingSessionRuntime {
/**
 * <p>Amazon SageMaker Training Session Runtime provides APIs for executing
 * training operations and sampling operations against a running training session.
 * Use these APIs to submit asynchronous training steps (such as forward-backward
 * passes, optimizer steps, and checkpoint saves) and to generate text samples from
 * the model being trained.</p>
 */
class AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API SageMakerTrainingSessionRuntimeClient
    : public Aws::Client::AWSJsonClient,
      public Aws::Client::ClientWithAsyncTemplateMethods<SageMakerTrainingSessionRuntimeClient>,
      public SageMakerTrainingSessionRuntimePaginationBase<SageMakerTrainingSessionRuntimeClient>,
      public SageMakerTrainingSessionRuntimeWaiter<SageMakerTrainingSessionRuntimeClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef SageMakerTrainingSessionRuntimeClientConfiguration ClientConfigurationType;
  typedef SageMakerTrainingSessionRuntimeEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  SageMakerTrainingSessionRuntimeClient(
      const Aws::SageMakerTrainingSessionRuntime::SageMakerTrainingSessionRuntimeClientConfiguration& clientConfiguration =
          Aws::SageMakerTrainingSessionRuntime::SageMakerTrainingSessionRuntimeClientConfiguration(),
      std::shared_ptr<SageMakerTrainingSessionRuntimeEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  SageMakerTrainingSessionRuntimeClient(
      const Aws::Auth::AWSCredentials& credentials,
      std::shared_ptr<SageMakerTrainingSessionRuntimeEndpointProviderBase> endpointProvider = nullptr,
      const Aws::SageMakerTrainingSessionRuntime::SageMakerTrainingSessionRuntimeClientConfiguration& clientConfiguration =
          Aws::SageMakerTrainingSessionRuntime::SageMakerTrainingSessionRuntimeClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  SageMakerTrainingSessionRuntimeClient(
      const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
      std::shared_ptr<SageMakerTrainingSessionRuntimeEndpointProviderBase> endpointProvider = nullptr,
      const Aws::SageMakerTrainingSessionRuntime::SageMakerTrainingSessionRuntimeClientConfiguration& clientConfiguration =
          Aws::SageMakerTrainingSessionRuntime::SageMakerTrainingSessionRuntimeClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  SageMakerTrainingSessionRuntimeClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  SageMakerTrainingSessionRuntimeClient(const Aws::Auth::AWSCredentials& credentials,
                                        const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  SageMakerTrainingSessionRuntimeClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                        const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~SageMakerTrainingSessionRuntimeClient();

  /**
   * <p>Submits an asynchronous sampling operation to generate text or compute
   * log-probabilities from the model associated with the specified training session.
   * The session must be in <code>Running</code> or <code>Blocked</code> state. Use
   * <code>GetSamplingOperationResult</code> to poll for the result.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemakertrainingsessionruntime-2025-02-10/ExecuteSamplingOperation">AWS
   * API Reference</a></p>
   */
  virtual Model::ExecuteSamplingOperationOutcome ExecuteSamplingOperation(const Model::ExecuteSamplingOperationRequest& request) const;

  /**
   * A Callable wrapper for ExecuteSamplingOperation that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ExecuteSamplingOperationRequestT = Model::ExecuteSamplingOperationRequest>
  Model::ExecuteSamplingOperationOutcomeCallable ExecuteSamplingOperationCallable(const ExecuteSamplingOperationRequestT& request) const {
    return SubmitCallable(&SageMakerTrainingSessionRuntimeClient::ExecuteSamplingOperation, request);
  }

  /**
   * An Async wrapper for ExecuteSamplingOperation that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ExecuteSamplingOperationRequestT = Model::ExecuteSamplingOperationRequest>
  void ExecuteSamplingOperationAsync(const ExecuteSamplingOperationRequestT& request,
                                     const ExecuteSamplingOperationResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SageMakerTrainingSessionRuntimeClient::ExecuteSamplingOperation, request, handler, context);
  }

  /**
   * <p>Submits an asynchronous training operation to the specified training session.
   * The service executes operations in sequence number order. The session must be in
   * <code>Running</code> or <code>Blocked</code> state. Use
   * <code>GetTrainingOperationResult</code> to poll for the result. Supported
   * operation types: <code>forward</code>, <code>forwardBackward</code>,
   * <code>optimizerStep</code>, <code>saveWeights</code>, <code>saveState</code>,
   * and <code>loadState</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemakertrainingsessionruntime-2025-02-10/ExecuteTrainingOperation">AWS
   * API Reference</a></p>
   */
  virtual Model::ExecuteTrainingOperationOutcome ExecuteTrainingOperation(const Model::ExecuteTrainingOperationRequest& request) const;

  /**
   * A Callable wrapper for ExecuteTrainingOperation that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ExecuteTrainingOperationRequestT = Model::ExecuteTrainingOperationRequest>
  Model::ExecuteTrainingOperationOutcomeCallable ExecuteTrainingOperationCallable(const ExecuteTrainingOperationRequestT& request) const {
    return SubmitCallable(&SageMakerTrainingSessionRuntimeClient::ExecuteTrainingOperation, request);
  }

  /**
   * An Async wrapper for ExecuteTrainingOperation that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ExecuteTrainingOperationRequestT = Model::ExecuteTrainingOperationRequest>
  void ExecuteTrainingOperationAsync(const ExecuteTrainingOperationRequestT& request,
                                     const ExecuteTrainingOperationResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SageMakerTrainingSessionRuntimeClient::ExecuteTrainingOperation, request, handler, context);
  }

  /**
   * <p>Retrieves the current status and result of a previously submitted sampling
   * operation. Poll this operation until the status reaches a terminal state
   * (Completed or Failed).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemakertrainingsessionruntime-2025-02-10/GetSamplingOperationResult">AWS
   * API Reference</a></p>
   */
  virtual Model::GetSamplingOperationResultOutcome GetSamplingOperationResult(
      const Model::GetSamplingOperationResultRequest& request) const;

  /**
   * A Callable wrapper for GetSamplingOperationResult that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename GetSamplingOperationResultRequestT = Model::GetSamplingOperationResultRequest>
  Model::GetSamplingOperationResultOutcomeCallable GetSamplingOperationResultCallable(
      const GetSamplingOperationResultRequestT& request) const {
    return SubmitCallable(&SageMakerTrainingSessionRuntimeClient::GetSamplingOperationResult, request);
  }

  /**
   * An Async wrapper for GetSamplingOperationResult that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetSamplingOperationResultRequestT = Model::GetSamplingOperationResultRequest>
  void GetSamplingOperationResultAsync(const GetSamplingOperationResultRequestT& request,
                                       const GetSamplingOperationResultResponseReceivedHandler& handler,
                                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SageMakerTrainingSessionRuntimeClient::GetSamplingOperationResult, request, handler, context);
  }

  /**
   * <p>Retrieves the current status and result of a previously submitted training
   * operation. Poll this operation until the status reaches a terminal state
   * (Completed, Failed, or Skipped).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemakertrainingsessionruntime-2025-02-10/GetTrainingOperationResult">AWS
   * API Reference</a></p>
   */
  virtual Model::GetTrainingOperationResultOutcome GetTrainingOperationResult(
      const Model::GetTrainingOperationResultRequest& request) const;

  /**
   * A Callable wrapper for GetTrainingOperationResult that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename GetTrainingOperationResultRequestT = Model::GetTrainingOperationResultRequest>
  Model::GetTrainingOperationResultOutcomeCallable GetTrainingOperationResultCallable(
      const GetTrainingOperationResultRequestT& request) const {
    return SubmitCallable(&SageMakerTrainingSessionRuntimeClient::GetTrainingOperationResult, request);
  }

  /**
   * An Async wrapper for GetTrainingOperationResult that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetTrainingOperationResultRequestT = Model::GetTrainingOperationResultRequest>
  void GetTrainingOperationResultAsync(const GetTrainingOperationResultRequestT& request,
                                       const GetTrainingOperationResultResponseReceivedHandler& handler,
                                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SageMakerTrainingSessionRuntimeClient::GetTrainingOperationResult, request, handler, context);
  }

  /**
   * <p>Sends an inference request to the model associated with the specified
   * training session and returns the response synchronously. The service passes the
   * request and response bodies to and from the model without
   * modification.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemakertrainingsessionruntime-2025-02-10/SampleTrainingSession">AWS
   * API Reference</a></p>
   */
  virtual Model::SampleTrainingSessionOutcome SampleTrainingSession(const Model::SampleTrainingSessionRequest& request) const;

  /**
   * A Callable wrapper for SampleTrainingSession that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename SampleTrainingSessionRequestT = Model::SampleTrainingSessionRequest>
  Model::SampleTrainingSessionOutcomeCallable SampleTrainingSessionCallable(const SampleTrainingSessionRequestT& request) const {
    return SubmitCallable(&SageMakerTrainingSessionRuntimeClient::SampleTrainingSession, request);
  }

  /**
   * An Async wrapper for SampleTrainingSession that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename SampleTrainingSessionRequestT = Model::SampleTrainingSessionRequest>
  void SampleTrainingSessionAsync(const SampleTrainingSessionRequestT& request, const SampleTrainingSessionResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SageMakerTrainingSessionRuntimeClient::SampleTrainingSession, request, handler, context);
  }

  /**
   * <p>Streams inference responses from the model associated with the specified
   * training session. Use this operation for real-time token-by-token generation.
   * The service passes the request body to the model without
   * modification.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemakertrainingsessionruntime-2025-02-10/SampleTrainingSessionWithResponseStream">AWS
   * API Reference</a></p>
   */
  virtual Model::SampleTrainingSessionWithResponseStreamOutcome SampleTrainingSessionWithResponseStream(
      const Model::SampleTrainingSessionWithResponseStreamRequest& request) const;

  /**
   * A Callable wrapper for SampleTrainingSessionWithResponseStream that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename SampleTrainingSessionWithResponseStreamRequestT = Model::SampleTrainingSessionWithResponseStreamRequest>
  Model::SampleTrainingSessionWithResponseStreamOutcomeCallable SampleTrainingSessionWithResponseStreamCallable(
      const SampleTrainingSessionWithResponseStreamRequestT& request) const {
    return SubmitCallable(&SageMakerTrainingSessionRuntimeClient::SampleTrainingSessionWithResponseStream, request);
  }

  /**
   * An Async wrapper for SampleTrainingSessionWithResponseStream that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename SampleTrainingSessionWithResponseStreamRequestT = Model::SampleTrainingSessionWithResponseStreamRequest>
  void SampleTrainingSessionWithResponseStreamAsync(const SampleTrainingSessionWithResponseStreamRequestT& request,
                                                    const SampleTrainingSessionWithResponseStreamResponseReceivedHandler& handler,
                                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SageMakerTrainingSessionRuntimeClient::SampleTrainingSessionWithResponseStream, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<SageMakerTrainingSessionRuntimeEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<SageMakerTrainingSessionRuntimeClient>;
  void init(const SageMakerTrainingSessionRuntimeClientConfiguration& clientConfiguration);

  typedef Aws::Utils::Outcome<Aws::AmazonWebServiceResult<RESPONSE>, SageMakerTrainingSessionRuntimeError> InvokeOperationOutcome;

  InvokeOperationOutcome InvokeServiceOperation(const AmazonWebServiceRequest& request,
                                                const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
                                                Aws::Http::HttpMethod httpMethod) const;

  SageMakerTrainingSessionRuntimeClientConfiguration m_clientConfiguration;
  std::shared_ptr<SageMakerTrainingSessionRuntimeEndpointProviderBase> m_endpointProvider;
};

}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
