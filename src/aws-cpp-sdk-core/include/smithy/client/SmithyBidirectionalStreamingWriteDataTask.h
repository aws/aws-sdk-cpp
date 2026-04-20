/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <aws/core/Core_EXPORTS.h>
#include <aws/core/NoResult.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientBidirectionalStreaming.h>
#include <aws/core/utils/event/EventDecoderStream.h>
#include <aws/core/utils/event/EventEncoderStream.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/stream/HttpWriteDataStreamBuf.h>
#include <smithy/client/AwsSmithyClientAsyncRequestContext.h>
#include <smithy/client/AwsSmithyClientBase.h>

namespace smithy {
namespace client {

/**
 * Push-based bidirectional streaming task for Smithy clients using the WriteData API.
 * Replaces SmithyBidirectionalStreamingTask when CRT HTTP client is available.
 */
template <typename OutcomeT, typename ClientT, typename RequestT, typename EncoderStreamT, typename HandlerT>
class AWS_CORE_LOCAL SmithyBidirectionalStreamingWriteDataTask final {
 public:
  using AuthResolvedCallback = std::function<void(std::shared_ptr<AwsSmithyClientAsyncRequestContext>)>;
  using EndpointUpdateCallback = std::function<void(Aws::Endpoint::AWSEndpoint&)>;

  SmithyBidirectionalStreamingWriteDataTask(
      const ClientT* client,
      const std::shared_ptr<RequestT>& request,
      const HandlerT& handler,
      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context,
      const std::shared_ptr<EncoderStreamT>& stream,
      std::shared_ptr<Aws::Utils::Stream::HttpWriteDataStreamBuf> writeDataStreamBuf,
      EndpointUpdateCallback&& endpointCallback,
      AuthResolvedCallback&& authCallback)
      : m_client(client),
        m_request(request),
        m_handler(handler),
        m_context(context),
        m_stream(stream),
        m_writeDataStreamBuf(std::move(writeDataStreamBuf)),
        m_authCallback(std::move(authCallback)),
        m_endpointCallback(std::move(endpointCallback)) {

    // Fix decoder pointer after copy construction
    m_request->SetEventStreamHandler(m_request->GetEventStreamHandler());

    std::weak_ptr<RequestT> wRequest = m_request;

    // Wire response stream factory
    m_request->SetResponseStreamFactory([wRequest]() -> Aws::IOStream* {
      auto req = wRequest.lock();
      if (!req) return nullptr;
      req->GetEventStreamDecoder().Reset();
      return Aws::New<Aws::Utils::Event::EventDecoderStream>("SmithyBidirectionalStreamingWriteDataTask",
                                                              req->GetEventStreamDecoder());
    });
  }

  void operator()() {
    // Resolve auth and endpoint
    auto pExecutor = Aws::MakeShared<Aws::Utils::Threading::DefaultExecutor>("SmithyBidiWriteData");
    auto authResolver = m_request->GetRequestSpecificSupportedAuth().empty() ? nullptr
        : Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>("SmithyBidiWriteData",
            m_request->GetRequestSpecificSupportedAuth());
    auto ctx = Aws::MakeShared<AwsSmithyClientAsyncRequestContext>("SmithyBidiWriteData",
        m_request.get(), m_request->GetServiceRequestName(), pExecutor, authResolver);
    ctx->m_method = Aws::Http::HttpMethod::HTTP_POST;

    bool resolvedIdenity = m_client->ResolveIdentityAuth(
        ctx,
        [](AwsSmithyClientBase::HttpResponseOutcome&& outcome) {
          if (!outcome.IsSuccess()) {
            AWS_LOGSTREAM_ERROR("SmithyBidiWriteData", "Failed to resolve identity/auth");
          }
        },
        EndpointUpdateCallback(m_endpointCallback));

    if (!resolvedIdenity) {
      m_handler(m_client, *m_request,
          OutcomeT(Aws::Client::AWSError<Aws::Client::CoreErrors>(
              Aws::Client::CoreErrors::CLIENT_SIGNING_FAILURE, "", "Failed to resolve identity", false)),
          m_context);
      return;
    }

    // Wire event signing
    if (m_authCallback) {
      m_authCallback(ctx);
    }

    // Validate host name
    if (!Aws::Utils::IsValidHost(ctx->m_endpoint.GetURI().GetHost())) {
      m_handler(m_client, *m_request,
                OutcomeT(Aws::Client::AWSError<Aws::Client::CoreErrors>(Aws::Client::CoreErrors::VALIDATION, "",
                                                                        "Invalid DNS Label found in URI host", false)),
                m_context);
      return;
    }

    // Build and sign HTTP request
    m_client->UpdateAuthSchemeFromEndpoint(ctx->m_endpoint, ctx->m_authSchemeOption);
    auto httpRequest = m_client->BuildHttpRequest(ctx, ctx->m_endpoint.GetURI(), Aws::Http::HttpMethod::HTTP_POST);
    if (!httpRequest) {
      m_handler(m_client, *m_request,
          OutcomeT(Aws::Client::AWSError<Aws::Client::CoreErrors>(
              Aws::Client::CoreErrors::VALIDATION, "", "Unable to create HttpRequest", false)),
          m_context);
      return;
    }
    httpRequest->SetEventStreamRequest(true);
    httpRequest->SetHasEventStreamResponse(true);
    httpRequest->SetResponseStreamFactory(m_request->GetResponseStreamFactory());

    // Wire initial response handler on httpRequest (CRT reads it from here)
    std::weak_ptr<RequestT> wReq = m_request;
    httpRequest->SetHeadersReceivedEventHandler(
        [wReq](const Aws::Http::HttpRequest*, Aws::Http::HttpResponse* response) {
          auto req = wReq.lock();
          if (!req || !response) return;
          auto& cb = req->GetEventStreamHandler().GetInitialResponseCallbackEx();
          if (cb) {
            cb({response->GetHeaders()}, Aws::Utils::Event::InitialResponseType::ON_RESPONSE);
          }
        });

    auto signingOutcome = m_client->SignHttpRequest(httpRequest, *ctx);
    if (!signingOutcome.IsSuccess()) {
      m_handler(m_client, *m_request,
          OutcomeT(Aws::Client::AWSError<Aws::Client::CoreErrors>(
              Aws::Client::CoreErrors::CLIENT_SIGNING_FAILURE, "", "Failed to sign request", false)),
          m_context);
      return;
    }
    httpRequest = signingOutcome.GetResultWithOwnership();

    // Seed event signing
    m_stream->SetSignatureSeed(Aws::Client::GetAuthorizationHeader(*httpRequest));

    // Initialize connection
    auto initError = m_writeDataStreamBuf->Initialize(httpRequest);
    if (initError.has_value()) {
      m_handler(m_client, *m_request, OutcomeT(initError.value()), m_context);
      return;
    }

    // Signal that stream is ready (caller is waiting on semaphore)
    m_sem->ReleaseAll();

    // Wait for stream to complete
    m_writeDataStreamBuf->WaitForStreamComplete();
    auto response = m_writeDataStreamBuf->GetResponse();

    // Flush any remaining buffered response data through the EventDecoderStream
    if (response) {
      response->GetResponseBody().flush();
    }
    if (response && response->HasClientError()) {
      m_stream->Close();
      m_handler(m_client, *m_request,
          OutcomeT(Aws::Client::AWSError<Aws::Client::CoreErrors>(
              response->GetClientErrorType(), "", response->GetClientErrorMessage(), false)),
          m_context);
    } else {
      m_handler(m_client, *m_request, OutcomeT(Aws::NoResult()), m_context);
    }
  }

  const std::shared_ptr<Aws::Utils::Threading::Semaphore>& GetSemaphore() const { return m_sem; }

 private:
  const ClientT* m_client;
  std::shared_ptr<RequestT> m_request;
  HandlerT m_handler;
  std::shared_ptr<const Aws::Client::AsyncCallerContext> m_context;
  std::shared_ptr<EncoderStreamT> m_stream;
  std::shared_ptr<Aws::Utils::Stream::HttpWriteDataStreamBuf> m_writeDataStreamBuf;
  AuthResolvedCallback m_authCallback;
  EndpointUpdateCallback m_endpointCallback;
  std::shared_ptr<Aws::Utils::Threading::Semaphore> m_sem{
      Aws::MakeShared<Aws::Utils::Threading::Semaphore>("SmithyBidiWriteData", 0, 1)};
};

template <typename OutcomeT, typename ClientT, typename RequestT, typename EncoderStreamT, typename HandlerT>
static SmithyBidirectionalStreamingWriteDataTask<OutcomeT, ClientT, RequestT, EncoderStreamT, HandlerT>
CreateSmithyBidirectionalWriteDataTask(
    const ClientT* client,
    std::shared_ptr<RequestT> request,
    const HandlerT& handler,
    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context,
    const std::shared_ptr<EncoderStreamT>& stream,
    std::shared_ptr<Aws::Utils::Stream::HttpWriteDataStreamBuf> writeDataStreamBuf,
    std::function<void(Aws::Endpoint::AWSEndpoint&)>&& endpointCallback,
    std::function<void(std::shared_ptr<AwsSmithyClientAsyncRequestContext>)>&& authCallback) {
  return SmithyBidirectionalStreamingWriteDataTask<OutcomeT, ClientT, RequestT, EncoderStreamT, HandlerT>(
      client, request, handler, context, stream, std::move(writeDataStreamBuf),
      std::move(endpointCallback), std::move(authCallback));
}

}  // namespace client
}  // namespace smithy
