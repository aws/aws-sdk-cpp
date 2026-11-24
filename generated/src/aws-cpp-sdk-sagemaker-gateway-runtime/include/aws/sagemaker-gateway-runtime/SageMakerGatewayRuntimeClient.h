/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker-gateway-runtime/SageMakerGatewayRuntimePaginationBase.h>
#include <aws/sagemaker-gateway-runtime/SageMakerGatewayRuntimeServiceClientModel.h>
#include <aws/sagemaker-gateway-runtime/SageMakerGatewayRuntimeWaiter.h>
#include <aws/sagemaker-gateway-runtime/SageMakerGatewayRuntime_EXPORTS.h>

namespace Aws {
namespace SageMakerGatewayRuntime {
/**
 * <p>Use the Amazon SageMaker Gateway Runtime API to run inference through a
 * Global Inference Gateway. A Global Inference Gateway routes each request to an
 * inference gateway that serves the model named in the request.</p> <p>The request
 * body is an OpenAI-compatible JSON object, sent with <code>Content-Type:
 * application/json</code>, and the model is selected by the <code>model</code> key
 * in that body. The content of the body is passed to the model server unchanged,
 * except for the <code>stream</code> flag, which each operation sets.</p>
 * <p>Requests are signed with Signature Version 4 under the <code>sagemaker</code>
 * signing name. IAM actions are in the <code>sagemaker</code> namespace, for
 * example <code>sagemaker:InvokeGlobalInferenceGateway</code>. The default
 * regional endpoint is
 * <code>gateway-runtime.sagemaker.{region}.amazonaws.com</code>.</p>
 */
class AWS_SAGEMAKERGATEWAYRUNTIME_API SageMakerGatewayRuntimeClient
    : public Aws::Client::AWSJsonClient,
      public Aws::Client::ClientWithAsyncTemplateMethods<SageMakerGatewayRuntimeClient>,
      public SageMakerGatewayRuntimePaginationBase<SageMakerGatewayRuntimeClient>,
      public SageMakerGatewayRuntimeWaiter<SageMakerGatewayRuntimeClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef SageMakerGatewayRuntimeClientConfiguration ClientConfigurationType;
  typedef SageMakerGatewayRuntimeEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  SageMakerGatewayRuntimeClient(const Aws::SageMakerGatewayRuntime::SageMakerGatewayRuntimeClientConfiguration& clientConfiguration =
                                    Aws::SageMakerGatewayRuntime::SageMakerGatewayRuntimeClientConfiguration(),
                                std::shared_ptr<SageMakerGatewayRuntimeEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  SageMakerGatewayRuntimeClient(const Aws::Auth::AWSCredentials& credentials,
                                std::shared_ptr<SageMakerGatewayRuntimeEndpointProviderBase> endpointProvider = nullptr,
                                const Aws::SageMakerGatewayRuntime::SageMakerGatewayRuntimeClientConfiguration& clientConfiguration =
                                    Aws::SageMakerGatewayRuntime::SageMakerGatewayRuntimeClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  SageMakerGatewayRuntimeClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                std::shared_ptr<SageMakerGatewayRuntimeEndpointProviderBase> endpointProvider = nullptr,
                                const Aws::SageMakerGatewayRuntime::SageMakerGatewayRuntimeClientConfiguration& clientConfiguration =
                                    Aws::SageMakerGatewayRuntime::SageMakerGatewayRuntimeClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  SageMakerGatewayRuntimeClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  SageMakerGatewayRuntimeClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  SageMakerGatewayRuntimeClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~SageMakerGatewayRuntimeClient();

  /**
   * <p>Buffered (non-streaming) inference. Returns the full OpenAI completion
   * body.</p> <p>Errors carry their origin in the <code>Message</code> prefix. Every
   * typed error's text is in the <code>Message</code> member (JSON key
   * <code>Message</code>), and starts with one of these prefixes:</p> <ul>
   * <li><code>Global Inference Gateway:</code> -- the gateway rejected or failed the
   * request itself: validation, authorization, throttling, routing (the gateway or
   * model was not found, or no capacity is available), a gateway limit or time
   * limit, or failing to reach the inference gateway (<code>Global Inference
   * Gateway: could not reach the inference gateway: &lt;reason&gt;</code>, or
   * <code>Global Inference Gateway: timed out waiting for the inference
   * gateway</code>). This includes the 400 for an invalid request and the 413 for a
   * request body that is too large.</li> <li><code>inference gateway:</code> -- the
   * inference gateway serving the model returned an error status. The message gives
   * that status code and up to 256 bytes of its error message, for example
   * <code>inference gateway: 503 &lt;message&gt;</code>. A BadGatewayException can
   * instead read <code>inference gateway: response ended unexpectedly</code>, with
   * no status, when the inference gateway's connection failed while it was sending
   * the response.</li> <li><code>inference gateway (&lt;component&gt;):</code> --
   * the same, when the inference gateway reports which of its components produced
   * the error, for example <code>inference gateway (model server): 502
   * &lt;message&gt;</code>. The component is one of: <ul> <li><code>config</code> --
   * the inference gateway's configuration and proxy layer.</li>
   * <li><code>scheduler</code> -- the inference gateway's request scheduler.</li>
   * <li><code>model selector</code> -- the inference gateway's model selector.</li>
   * <li><code>model server</code> -- the model server.</li> </ul> </li> </ul>
   * <p>Every error status the inference gateway returns is a typed error, chosen by
   * that status:</p> <ul> <li>400 and any other 4xx not listed here -- a 400
   * validation error.</li> <li>401 and 403 -- AccessDeniedException (403).</li>
   * <li>404 -- ResourceNotFoundException.</li> <li>408 -- GatewayTimeoutException
   * (504).</li> <li>429 -- ThrottlingException, with the <code>Retry-After</code>
   * header.</li> <li>502, and 500, 503 or any other 5xx not listed here --
   * BadGatewayException (502). A 500 or 503 from the inference gateway comes after
   * the request was dispatched, so it is not modeled as retryable, and the gateway
   * may already have tried another inference gateway. Standard SDK retry modes may
   * still retry a 5xx status; set max attempts to 1 if a repeated inference is
   * unacceptable.</li> <li>504 -- GatewayTimeoutException.</li> </ul><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-gateway-runtime-2026-10-01/InvokeGlobalInferenceGateway">AWS
   * API Reference</a></p>
   */
  virtual Model::InvokeGlobalInferenceGatewayOutcome InvokeGlobalInferenceGateway(
      const Model::InvokeGlobalInferenceGatewayRequest& request) const;

  /**
   * A Callable wrapper for InvokeGlobalInferenceGateway that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename InvokeGlobalInferenceGatewayRequestT = Model::InvokeGlobalInferenceGatewayRequest>
  Model::InvokeGlobalInferenceGatewayOutcomeCallable InvokeGlobalInferenceGatewayCallable(
      const InvokeGlobalInferenceGatewayRequestT& request) const {
    return SubmitCallable(&SageMakerGatewayRuntimeClient::InvokeGlobalInferenceGateway, request);
  }

  /**
   * An Async wrapper for InvokeGlobalInferenceGateway that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename InvokeGlobalInferenceGatewayRequestT = Model::InvokeGlobalInferenceGatewayRequest>
  void InvokeGlobalInferenceGatewayAsync(const InvokeGlobalInferenceGatewayRequestT& request,
                                         const InvokeGlobalInferenceGatewayResponseReceivedHandler& handler,
                                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SageMakerGatewayRuntimeClient::InvokeGlobalInferenceGateway, request, handler, context);
  }

  /**
   * <p>Streaming inference. Returns an AWS event stream of PayloadPart events that
   * carry the model server's server-sent event (SSE) bytes, so SDKs decode the
   * stream into events for you.</p> <p>The errors listed for this operation, other
   * than ModelStreamError and InternalStreamFailure, are returned before the
   * response starts (before the 200 status), so they end the request, not the
   * stream. None of them can occur after the 200. ModelStreamError and
   * InternalStreamFailure appear only as events in the stream, after the 200. Once
   * the 200 is sent, the stream carries the response as PayloadPart events. If
   * reading the inference gateway's response fails, the stream carries one
   * InternalStreamFailure event and then ends. ModelStreamError is reserved and is
   * not currently sent.</p> <p>Errors carry their origin in the <code>Message</code>
   * prefix. Every typed error's text is in the <code>Message</code> member (JSON key
   * <code>Message</code>), and starts with one of these prefixes:</p> <ul>
   * <li><code>Global Inference Gateway:</code> -- the gateway rejected or failed the
   * request itself: validation, authorization, throttling, routing (the gateway or
   * model was not found, or no capacity is available), a gateway limit or time
   * limit, or failing to reach the inference gateway (<code>Global Inference
   * Gateway: could not reach the inference gateway: &lt;reason&gt;</code>, or
   * <code>Global Inference Gateway: timed out waiting for the inference
   * gateway</code>). This includes the 400 for an invalid request and the 413 for a
   * request body that is too large.</li> <li><code>inference gateway:</code> -- the
   * inference gateway serving the model returned an error status. The message gives
   * that status code and up to 256 bytes of its error message, for example
   * <code>inference gateway: 503 &lt;message&gt;</code>.</li> <li><code>inference
   * gateway (&lt;component&gt;):</code> -- the same, when the inference gateway
   * reports which of its components produced the error, for example <code>inference
   * gateway (model server): 502 &lt;message&gt;</code>. The component is one of:
   * <ul> <li><code>config</code> -- the inference gateway's configuration and proxy
   * layer.</li> <li><code>scheduler</code> -- the inference gateway's request
   * scheduler.</li> <li><code>model selector</code> -- the inference gateway's model
   * selector.</li> <li><code>model server</code> -- the model server.</li> </ul>
   * </li> </ul> <p>An InternalStreamFailure event's <code>Message</code> uses the
   * same prefixes, with the same text the buffered operation uses for the same
   * failure. Its <code>inference gateway:</code> message carries no status:
   * <code>inference gateway: response ended unexpectedly</code> when the inference
   * gateway's connection failed while it was sending the response.</p> <p>Every
   * error status the inference gateway returns before the 200 is a typed error,
   * chosen by that status as for InvokeGlobalInferenceGateway:</p> <ul> <li>400 and
   * any other 4xx not listed here -- a 400 validation error.</li> <li>401 and 403 --
   * AccessDeniedException (403).</li> <li>404 -- ResourceNotFoundException.</li>
   * <li>408 -- GatewayTimeoutException (504).</li> <li>429 -- ThrottlingException,
   * with the <code>Retry-After</code> header.</li> <li>502, and 500, 503 or any
   * other 5xx not listed here -- BadGatewayException (502). A 500 or 503 from the
   * inference gateway comes after the request was dispatched, so it is not modeled
   * as retryable, and the gateway may already have tried another inference gateway.
   * Standard SDK retry modes may still retry a 5xx status; set max attempts to 1 if
   * a repeated inference is unacceptable.</li> <li>504 --
   * GatewayTimeoutException.</li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-gateway-runtime-2026-10-01/InvokeGlobalInferenceGatewayWithResponseStream">AWS
   * API Reference</a></p>
   */
  virtual Model::InvokeGlobalInferenceGatewayWithResponseStreamOutcome InvokeGlobalInferenceGatewayWithResponseStream(
      Model::InvokeGlobalInferenceGatewayWithResponseStreamRequest& request) const;

  /**
   * A Callable wrapper for InvokeGlobalInferenceGatewayWithResponseStream that returns a future to the operation so that it can be executed
   * in parallel to other requests.
   */
  template <typename InvokeGlobalInferenceGatewayWithResponseStreamRequestT = Model::InvokeGlobalInferenceGatewayWithResponseStreamRequest>
  Model::InvokeGlobalInferenceGatewayWithResponseStreamOutcomeCallable InvokeGlobalInferenceGatewayWithResponseStreamCallable(
      InvokeGlobalInferenceGatewayWithResponseStreamRequestT& request) const {
    return SubmitCallable(&SageMakerGatewayRuntimeClient::InvokeGlobalInferenceGatewayWithResponseStream, request);
  }

  /**
   * An Async wrapper for InvokeGlobalInferenceGatewayWithResponseStream that queues the request into a thread executor and triggers
   * associated callback when operation has finished.
   */
  template <typename InvokeGlobalInferenceGatewayWithResponseStreamRequestT = Model::InvokeGlobalInferenceGatewayWithResponseStreamRequest>
  void InvokeGlobalInferenceGatewayWithResponseStreamAsync(
      InvokeGlobalInferenceGatewayWithResponseStreamRequestT& request,
      const InvokeGlobalInferenceGatewayWithResponseStreamResponseReceivedHandler& handler,
      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SageMakerGatewayRuntimeClient::InvokeGlobalInferenceGatewayWithResponseStream, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<SageMakerGatewayRuntimeEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<SageMakerGatewayRuntimeClient>;
  void init(const SageMakerGatewayRuntimeClientConfiguration& clientConfiguration);

  typedef Aws::Utils::Outcome<Aws::AmazonWebServiceResult<RESPONSE>, SageMakerGatewayRuntimeError> InvokeOperationOutcome;

  InvokeOperationOutcome InvokeServiceOperation(const AmazonWebServiceRequest& request,
                                                const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
                                                Aws::Http::HttpMethod httpMethod) const;

  SageMakerGatewayRuntimeClientConfiguration m_clientConfiguration;
  std::shared_ptr<SageMakerGatewayRuntimeEndpointProviderBase> m_endpointProvider;
};

}  // namespace SageMakerGatewayRuntime
}  // namespace Aws
