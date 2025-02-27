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

/**
 * A template class to create bi-directional eventstreaming async task.
 * This is essentially a C++14 capture-by-move lambda
 */
template <typename OutcomeT, typename ClientT, typename AWSEndpointT, typename RequestT, typename HandlerT>
class AWS_CORE_LOCAL BidirectionalEventStreamingTask final {
 public:
  BidirectionalEventStreamingTask(const ClientT* pClientThis, AWSEndpointT&& endpoint, const std::shared_ptr<RequestT>& pRequest,
                                  const HandlerT& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& handlerContext,
                                  const std::shared_ptr<Utils::Event::EventEncoderStream>& stream, const Http::HttpMethod method,
                                  char const* const signerName)
      : m_clientThis(pClientThis),
        m_endpoint(std::move(endpoint)),
        m_pRequest(pRequest),
        m_handler(handler),
        m_handlerContext(handlerContext),
        m_stream(stream),
        m_method(method),
        m_signerName(signerName),
        m_sem(Aws::MakeShared<Aws::Utils::Threading::Semaphore>("BidirectionalEventStreamingTask", 0, 1)) {
    assert(m_clientThis);
    assert(m_pRequest);
    assert(m_signerName);

    // Reset EventStream handler as it still has a raw dangling pointer of the original user request
    m_pRequest->SetEventStreamHandler(m_pRequest->GetEventStreamHandler());

    // Perform synchronization logic extracted from generated code
    // Setup a signal to notify the submitter thread that the task has actually started
    std::shared_ptr<Aws::Utils::Threading::Semaphore> sem = m_sem;
    m_pRequest->SetRequestSignedHandler([stream, sem](const Aws::Http::HttpRequest& httpRequest) {
      stream->SetSignatureSeed(Aws::Client::GetAuthorizationHeader(httpRequest));
      sem->ReleaseAll();
    });

    std::weak_ptr<RequestT> wRequest = m_pRequest;
    // Setup InitialResponse handler to use the new actual request object
    if (!m_pRequest->GetHeadersReceivedEventHandler()) {
      m_pRequest->SetHeadersReceivedEventHandler([wRequest](const Http::HttpRequest*, Http::HttpResponse* response) {
        auto request = wRequest.lock();
        AWS_CHECK_PTR(ClientT::GetAllocationTag(), request);
        AWS_CHECK_PTR(ClientT::GetAllocationTag(), response);

        auto& initialResponseHandler = request->GetEventStreamHandler().GetInitialResponseCallbackEx();
        if (initialResponseHandler) {
          initialResponseHandler({response->GetHeaders()}, Utils::Event::InitialResponseType::ON_RESPONSE);
        }
      });
    }

    // Setup ResponseStreamFactory to provide EventStream decoder based on the new actual request object, not the original one.
    m_pRequest->SetResponseStreamFactory([wRequest]() -> Aws::IOStream* {
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

  ~BidirectionalEventStreamingTask() = default;

  /**
   * Execute EventStreaming task.
   * @return OutcomeT, operation response, NoResult on success. (Check InitialResponse for the actual service reply).
   */
  OutcomeT operator()() {
    if(!m_clientThis->m_isInitialized)
    {
      AWS_LOGSTREAM_ERROR("BidirectionalEventStreamingTask", "Unable to call " <<
        m_pRequest->GetServiceRequestName() << ": client is not initialized (or already terminated)");
      m_handler(m_clientThis, *m_pRequest, Aws::Client::AWSError<CoreErrors>(CoreErrors::NOT_INITIALIZED,
        "NOT_INITIALIZED", "Client is not initialized or already terminated", false), m_handlerContext);
      return OutcomeT(NoResult());
    }
    Aws::Utils::RAIICounter raiiGuard(m_clientThis->m_operationsProcessed, &m_clientThis->m_shutdownSignal);

    const auto outcome = m_clientThis->MakeRequest(*m_pRequest, m_endpoint, m_method, m_signerName);
    if (outcome.IsSuccess()) {
      m_handler(m_clientThis, *m_pRequest, OutcomeT(NoResult()), m_handlerContext);
    } else {
      if (m_stream) {
        m_stream->Close();
      }
      m_handler(m_clientThis, *m_pRequest, OutcomeT(outcome.GetError()), m_handlerContext);
    }
    return OutcomeT(NoResult());
  }

 private:
  const ClientT* m_clientThis;
  const AWSEndpointT m_endpoint;
  std::shared_ptr<RequestT> m_pRequest;
  HandlerT m_handler;
  std::shared_ptr<const Aws::Client::AsyncCallerContext> m_handlerContext;
  std::shared_ptr<Utils::Event::EventEncoderStream> m_stream;
  const Http::HttpMethod m_method;
  char const* const m_signerName;
  std::shared_ptr<Aws::Utils::Threading::Semaphore> m_sem;
};

// A helper template factory to avoid providing all typenames for BidirectionalEventStreamingTask in the generated code
// It looks like a wall of code, you can thank clang-format for this.
template <typename OutcomeT, typename ClientT, typename AWSEndpointT, typename RequestT, typename HandlerT>
static BidirectionalEventStreamingTask<OutcomeT, ClientT, AWSEndpointT, RequestT, HandlerT> CreateBidirectionalEventStreamTask(
    const ClientT* pClientThis, AWSEndpointT&& endpoint, const std::shared_ptr<RequestT>& pRequest, const HandlerT& handler,
    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& handlerContext,
    const std::shared_ptr<Utils::Event::EventEncoderStream>& stream, const Http::HttpMethod method = Aws::Http::HttpMethod::HTTP_POST,
    char const* const signerName = Aws::Auth::EVENTSTREAM_SIGV4_SIGNER) {
  return BidirectionalEventStreamingTask<OutcomeT, ClientT, AWSEndpointT, RequestT, HandlerT>(
      pClientThis, std::forward<AWSEndpointT>(endpoint), pRequest, handler, handlerContext, stream, method, signerName);
}
}  // namespace Client
}  // namespace Aws
