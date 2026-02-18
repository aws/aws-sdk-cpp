/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker-runtime-http2/SageMakerRuntimeHTTP2PaginationBase.h>
#include <aws/sagemaker-runtime-http2/SageMakerRuntimeHTTP2ServiceClientModel.h>
#include <aws/sagemaker-runtime-http2/SageMakerRuntimeHTTP2_EXPORTS.h>

namespace Aws {
namespace SageMakerRuntimeHTTP2 {
/**
 * <p> The Amazon SageMaker AI runtime HTTP/2 API. </p>
 */
class AWS_SAGEMAKERRUNTIMEHTTP2_API SageMakerRuntimeHTTP2Client
    : public Aws::Client::AWSJsonClient,
      public Aws::Client::ClientWithAsyncTemplateMethods<SageMakerRuntimeHTTP2Client>,
      public SageMakerRuntimeHTTP2PaginationBase<SageMakerRuntimeHTTP2Client> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef SageMakerRuntimeHTTP2ClientConfiguration ClientConfigurationType;
  typedef SageMakerRuntimeHTTP2EndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  SageMakerRuntimeHTTP2Client(const Aws::SageMakerRuntimeHTTP2::SageMakerRuntimeHTTP2ClientConfiguration& clientConfiguration =
                                  Aws::SageMakerRuntimeHTTP2::SageMakerRuntimeHTTP2ClientConfiguration(),
                              std::shared_ptr<SageMakerRuntimeHTTP2EndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  SageMakerRuntimeHTTP2Client(const Aws::Auth::AWSCredentials& credentials,
                              std::shared_ptr<SageMakerRuntimeHTTP2EndpointProviderBase> endpointProvider = nullptr,
                              const Aws::SageMakerRuntimeHTTP2::SageMakerRuntimeHTTP2ClientConfiguration& clientConfiguration =
                                  Aws::SageMakerRuntimeHTTP2::SageMakerRuntimeHTTP2ClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  SageMakerRuntimeHTTP2Client(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                              std::shared_ptr<SageMakerRuntimeHTTP2EndpointProviderBase> endpointProvider = nullptr,
                              const Aws::SageMakerRuntimeHTTP2::SageMakerRuntimeHTTP2ClientConfiguration& clientConfiguration =
                                  Aws::SageMakerRuntimeHTTP2::SageMakerRuntimeHTTP2ClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  SageMakerRuntimeHTTP2Client(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  SageMakerRuntimeHTTP2Client(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  SageMakerRuntimeHTTP2Client(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                              const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~SageMakerRuntimeHTTP2Client();

  /**
   * <p>Invokes a model endpoint with bidirectional streaming capabilities. This
   * operation establishes a persistent connection that allows you to send multiple
   * requests and receive streaming responses from the model in real-time.</p>
   * <p>Bidirectional streaming is useful for interactive applications such as
   * chatbots, real-time translation, or any scenario where you need to maintain a
   * conversation-like interaction with the model. The connection remains open,
   * allowing you to send additional input and receive responses without establishing
   * a new connection for each request.</p> <p>For an overview of Amazon SageMaker
   * AI, see <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/dg/how-it-works.html">How It
   * Works</a>.</p> <p>Amazon SageMaker AI strips all POST headers except those
   * supported by the API. Amazon SageMaker AI might add additional headers. You
   * should not rely on the behavior of headers outside those enumerated in the
   * request syntax. </p> <p>Calls to
   * <code>InvokeEndpointWithBidirectionalStream</code> are authenticated by using
   * Amazon Web Services Signature Version 4. For information, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sig-v4-authenticating-requests.html">Authenticating
   * Requests (Amazon Web Services Signature Version 4)</a> in the <i>Amazon S3 API
   * Reference</i>.</p> <p>The bidirectional stream maintains the connection until
   * either the client closes it or the model indicates completion. Each request and
   * response in the stream is sent as an event with optional headers for data type
   * and completion state.</p>  <p>Endpoints are scoped to an individual
   * account, and are not public. The URL does not contain the account ID, but Amazon
   * SageMaker AI determines the account ID from the authentication token that is
   * supplied by the caller.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-runtime-http2-2025-10-01/InvokeEndpointWithBidirectionalStream">AWS
   * API Reference</a></p>
   *
   * Queues the request into a thread executor.
   * The streamReadyHandler is triggered when the stream is ready to be written to.
   * The handler is triggered when the request is finished.
   */
  virtual void InvokeEndpointWithBidirectionalStreamAsync(
      Model::InvokeEndpointWithBidirectionalStreamRequest& request,
      const InvokeEndpointWithBidirectionalStreamStreamReadyHandler& streamReadyHandler,
      const InvokeEndpointWithBidirectionalStreamResponseReceivedHandler& handler,
      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& handlerContext = nullptr) const;

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<SageMakerRuntimeHTTP2EndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<SageMakerRuntimeHTTP2Client>;
  void init(const SageMakerRuntimeHTTP2ClientConfiguration& clientConfiguration);

  SageMakerRuntimeHTTP2ClientConfiguration m_clientConfiguration;
  std::shared_ptr<SageMakerRuntimeHTTP2EndpointProviderBase> m_endpointProvider;
};

}  // namespace SageMakerRuntimeHTTP2
}  // namespace Aws
