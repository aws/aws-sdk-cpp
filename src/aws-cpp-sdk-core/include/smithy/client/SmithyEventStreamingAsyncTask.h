/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/Core_EXPORTS.h>
#include <aws/core/NoResult.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/event/EventDecoderStream.h>
#include <aws/core/utils/event/EventEncoderStream.h>
#include <aws/core/utils/event/EventStreamHandler.h>
#include <aws/core/utils/logging/ErrorMacros.h>


namespace Aws {
  namespace Client {
    class AsyncCallerContext;
  }
}

namespace smithy {
namespace client {

/**
 * Smithy-compatible bi-directional streaming task for modern AWS clients
 */
template <typename OutcomeT, typename ClientT, typename RequestT, typename HandlerT>
class AWS_CORE_LOCAL SmithyBidirectionalStreamingTask final {
 public:
  using AuthResolvedCallback = std::function<void(std::shared_ptr<smithy::client::AwsSmithyClientAsyncRequestContext>)>;
  using EndpointUpdateCallback = std::function<void(Aws::Endpoint::AWSEndpoint&)>;

  SmithyBidirectionalStreamingTask(const ClientT* client, const std::shared_ptr<RequestT>& request, const HandlerT& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context,
                                   const std::shared_ptr<Aws::Utils::Event::EventEncoderStream>& stream,
                                   EndpointUpdateCallback&& endpointCallback,
                                   AuthResolvedCallback&& authCallback)
      : m_client(client), m_request(request), m_handler(handler), m_context(context), m_stream(stream),
        m_sem(Aws::MakeShared<Aws::Utils::Threading::Semaphore>("SmithyBidirectionalStreamingTask", 0, 1)) {

    m_authCallback = std::move(authCallback);
    m_endpointCallback = std::move(endpointCallback);

    m_request->SetEventStreamHandler(m_request->GetEventStreamHandler());

    auto streamPtr = m_stream;
    auto sem = m_sem;
    m_request->SetRequestSignedHandler([streamPtr, sem](const Aws::Http::HttpRequest& httpRequest) {
      streamPtr->SetSignatureSeed(Aws::Client::GetAuthorizationHeader(httpRequest));
      sem->ReleaseAll();
    });

    std::weak_ptr<RequestT> wRequest = request;
    // Setup InitialResponse handler to use the new actual request object
    if (!request->GetHeadersReceivedEventHandler()) {
      request->SetHeadersReceivedEventHandler([wRequest](const Http::HttpRequest*, Http::HttpResponse* response) {
        auto request = wRequest.lock();
        AWS_CHECK_PTR(ClientT::GetAllocationTag(), request);
        AWS_CHECK_PTR(ClientT::GetAllocationTag(), response);

        auto& initialResponseHandler = request->GetEventStreamHandler().GetInitialResponseCallbackEx();
        if (initialResponseHandler) {
          initialResponseHandler({response->GetHeaders()}, Aws::Utils::Event::InitialResponseType::ON_RESPONSE);
        }
      });
    }

    // Setup ResponseStreamFactory to provide EventStream decoder based on the new actual request object, not the original one.
    request->SetResponseStreamFactory([wRequest]() -> Aws::IOStream* {
      auto request = wRequest.lock();
      if (!request) {
        AWS_LOGSTREAM_FATAL(ClientT::GetAllocationTag(),
                            "Unexpected nullptr bi-directional streaming request on response streaming factory call!");
        assert(false);
        return nullptr;
      }
      request->GetEventStreamDecoder().Reset();
      return Aws::New<Aws::Utils::Event::EventDecoderStream>("BidirectionalEventStreamingTask", request->GetEventStreamDecoder());
    });
  }

  const std::shared_ptr<Aws::Utils::Threading::Semaphore>& GetSemaphore() const { return m_sem; }

  void operator()() {
    assert(m_authCallback);
    assert(m_endpointCallback);
    auto outcome = m_client->MakeRequestDeserialize(m_request.get(), m_request->GetServiceRequestName(),
                                                   Aws::Http::HttpMethod::HTTP_POST,
                                                   std::move(m_endpointCallback), std::move(m_authCallback));

    if (outcome.IsSuccess()) {
      m_handler(m_client, *m_request, OutcomeT(Aws::NoResult()), m_context);
    } else {
      if (m_stream) m_stream->Close();
      m_handler(m_client, *m_request, OutcomeT(outcome.GetError()), m_context);
    }
  }

 private:
  const ClientT* m_client;
  std::shared_ptr<RequestT> m_request;
  HandlerT m_handler;
  std::shared_ptr<const Aws::Client::AsyncCallerContext> m_context;
  std::shared_ptr<Aws::Utils::Event::EventEncoderStream> m_stream;
  AuthResolvedCallback m_authCallback;
  EndpointUpdateCallback m_endpointCallback;
  std::shared_ptr<Aws::Utils::Threading::Semaphore> m_sem;
};

// A helper template factory to avoid providing all typenames for BidirectionalEventStreamingTask in the generated code
// It looks like a wall of code, you can thank clang-format for this.
template <typename OutcomeT, typename ClientT, typename AWSEndpointT, typename RequestT, typename HandlerT>
static BidirectionalEventStreamingTask<OutcomeT, ClientT, AWSEndpointT, RequestT, HandlerT> CreateBidirectionalEventStreamTask(
    const ClientT* pClientThis, AWSEndpointT&& endpoint, const std::shared_ptr<RequestT>& pRequest, const HandlerT& handler,
    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& handlerContext,
    const std::shared_ptr<Aws::Utils::Event::EventEncoderStream>& stream, const Http::HttpMethod method = Aws::Http::HttpMethod::HTTP_POST,
    char const* const signerName = Aws::Auth::EVENTSTREAM_SIGV4_SIGNER) {
  return BidirectionalEventStreamingTask<OutcomeT, ClientT, AWSEndpointT, RequestT, HandlerT>(
      pClientThis, std::forward<AWSEndpointT>(endpoint), pRequest, handler, handlerContext, stream, method, signerName);
}

template <typename OutcomeT, typename ClientT, typename RequestT, typename HandlerT>
static SmithyBidirectionalStreamingTask<OutcomeT, ClientT, RequestT, HandlerT> CreateSmithyBidirectionalEventStreamTask(
    const ClientT* client, std::shared_ptr<RequestT> request, const HandlerT& handler,
    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context,
    const std::shared_ptr<Aws::Utils::Event::EventEncoderStream>& stream,
    std::function<void(Aws::Endpoint::AWSEndpoint&)>&& endpointCallback,
    std::function<void(std::shared_ptr<smithy::client::AwsSmithyClientAsyncRequestContext>)>&& authCallback) {
  return SmithyBidirectionalStreamingTask<OutcomeT, ClientT, RequestT, HandlerT>(client, request, handler, context, stream, std::move(endpointCallback), std::move(authCallback));
}
}  // namespace Client
}  // namespace Aws
