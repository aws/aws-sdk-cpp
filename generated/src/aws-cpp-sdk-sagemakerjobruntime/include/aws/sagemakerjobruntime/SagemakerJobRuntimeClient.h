/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemakerjobruntime/SagemakerJobRuntimePaginationBase.h>
#include <aws/sagemakerjobruntime/SagemakerJobRuntimeServiceClientModel.h>
#include <aws/sagemakerjobruntime/SagemakerJobRuntimeWaiter.h>
#include <aws/sagemakerjobruntime/SagemakerJobRuntime_EXPORTS.h>

namespace Aws {
namespace SagemakerJobRuntime {
/**
 * <p>Agentic RFT Runtime Service - manages trajectory and transition data for
 * reinforcement fine-tuning jobs.</p>
 */
class AWS_SAGEMAKERJOBRUNTIME_API SagemakerJobRuntimeClient : public Aws::Client::AWSJsonClient,
                                                              public Aws::Client::ClientWithAsyncTemplateMethods<SagemakerJobRuntimeClient>,
                                                              public SagemakerJobRuntimePaginationBase<SagemakerJobRuntimeClient>,
                                                              public SagemakerJobRuntimeWaiter<SagemakerJobRuntimeClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef SagemakerJobRuntimeClientConfiguration ClientConfigurationType;
  typedef SagemakerJobRuntimeEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  SagemakerJobRuntimeClient(const Aws::SagemakerJobRuntime::SagemakerJobRuntimeClientConfiguration& clientConfiguration =
                                Aws::SagemakerJobRuntime::SagemakerJobRuntimeClientConfiguration(),
                            std::shared_ptr<SagemakerJobRuntimeEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  SagemakerJobRuntimeClient(const Aws::Auth::AWSCredentials& credentials,
                            std::shared_ptr<SagemakerJobRuntimeEndpointProviderBase> endpointProvider = nullptr,
                            const Aws::SagemakerJobRuntime::SagemakerJobRuntimeClientConfiguration& clientConfiguration =
                                Aws::SagemakerJobRuntime::SagemakerJobRuntimeClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  SagemakerJobRuntimeClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            std::shared_ptr<SagemakerJobRuntimeEndpointProviderBase> endpointProvider = nullptr,
                            const Aws::SagemakerJobRuntime::SagemakerJobRuntimeClientConfiguration& clientConfiguration =
                                Aws::SagemakerJobRuntime::SagemakerJobRuntimeClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  SagemakerJobRuntimeClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  SagemakerJobRuntimeClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  SagemakerJobRuntimeClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~SagemakerJobRuntimeClient();

  /**
   * <p>Marks a rollout as complete, indicating that no further turns will be
   * appended to the trajectory. After calling this operation, the trajectory is
   * sealed and eligible for reward submission via the UpdateReward
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemakerjobruntime-2026-02-01/CompleteRollout">AWS
   * API Reference</a></p>
   */
  virtual Model::CompleteRolloutOutcome CompleteRollout(const Model::CompleteRolloutRequest& request) const;

  /**
   * A Callable wrapper for CompleteRollout that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename CompleteRolloutRequestT = Model::CompleteRolloutRequest>
  Model::CompleteRolloutOutcomeCallable CompleteRolloutCallable(const CompleteRolloutRequestT& request) const {
    return SubmitCallable(&SagemakerJobRuntimeClient::CompleteRollout, request);
  }

  /**
   * An Async wrapper for CompleteRollout that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CompleteRolloutRequestT = Model::CompleteRolloutRequest>
  void CompleteRolloutAsync(const CompleteRolloutRequestT& request, const CompleteRolloutResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SagemakerJobRuntimeClient::CompleteRollout, request, handler, context);
  }

  /**
   * <p>Sends an inference request to the model during a job execution. The request
   * and response bodies are forwarded to and from the model without modification.
   * Each turn (prompt and response) is captured for later use.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemakerjobruntime-2026-02-01/Sample">AWS
   * API Reference</a></p>
   */
  virtual Model::SampleOutcome Sample(const Model::SampleRequest& request) const;

  /**
   * A Callable wrapper for Sample that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename SampleRequestT = Model::SampleRequest>
  Model::SampleOutcomeCallable SampleCallable(const SampleRequestT& request) const {
    return SubmitCallable(&SagemakerJobRuntimeClient::Sample, request);
  }

  /**
   * An Async wrapper for Sample that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename SampleRequestT = Model::SampleRequest>
  void SampleAsync(const SampleRequestT& request, const SampleResponseReceivedHandler& handler,
                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SagemakerJobRuntimeClient::Sample, request, handler, context);
  }

  /**
   * <p>Sends a streaming inference request to the model during a job execution.
   * Returns the response as a stream of payload chunks. Each turn is captured for
   * later use.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemakerjobruntime-2026-02-01/SampleWithResponseStream">AWS
   * API Reference</a></p>
   */
  virtual Model::SampleWithResponseStreamOutcome SampleWithResponseStream(const Model::SampleWithResponseStreamRequest& request) const;

  /**
   * A Callable wrapper for SampleWithResponseStream that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename SampleWithResponseStreamRequestT = Model::SampleWithResponseStreamRequest>
  Model::SampleWithResponseStreamOutcomeCallable SampleWithResponseStreamCallable(const SampleWithResponseStreamRequestT& request) const {
    return SubmitCallable(&SagemakerJobRuntimeClient::SampleWithResponseStream, request);
  }

  /**
   * An Async wrapper for SampleWithResponseStream that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename SampleWithResponseStreamRequestT = Model::SampleWithResponseStreamRequest>
  void SampleWithResponseStreamAsync(const SampleWithResponseStreamRequestT& request,
                                     const SampleWithResponseStreamResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SagemakerJobRuntimeClient::SampleWithResponseStream, request, handler, context);
  }

  /**
   * <p>Updates the reward values for a trajectory and transitions it to
   * reward-received status, signaling that it is eligible for processing. Call this
   * operation after CompleteRollout to provide the computed reward
   * scores.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemakerjobruntime-2026-02-01/UpdateReward">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateRewardOutcome UpdateReward(const Model::UpdateRewardRequest& request) const;

  /**
   * A Callable wrapper for UpdateReward that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UpdateRewardRequestT = Model::UpdateRewardRequest>
  Model::UpdateRewardOutcomeCallable UpdateRewardCallable(const UpdateRewardRequestT& request) const {
    return SubmitCallable(&SagemakerJobRuntimeClient::UpdateReward, request);
  }

  /**
   * An Async wrapper for UpdateReward that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UpdateRewardRequestT = Model::UpdateRewardRequest>
  void UpdateRewardAsync(const UpdateRewardRequestT& request, const UpdateRewardResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SagemakerJobRuntimeClient::UpdateReward, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<SagemakerJobRuntimeEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<SagemakerJobRuntimeClient>;
  void init(const SagemakerJobRuntimeClientConfiguration& clientConfiguration);

  typedef Aws::Utils::Outcome<Aws::AmazonWebServiceResult<RESPONSE>, SagemakerJobRuntimeError> InvokeOperationOutcome;

  InvokeOperationOutcome InvokeServiceOperation(const AmazonWebServiceRequest& request,
                                                const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
                                                Aws::Http::HttpMethod httpMethod) const;

  SagemakerJobRuntimeClientConfiguration m_clientConfiguration;
  std::shared_ptr<SagemakerJobRuntimeEndpointProviderBase> m_endpointProvider;
};

}  // namespace SagemakerJobRuntime
}  // namespace Aws
