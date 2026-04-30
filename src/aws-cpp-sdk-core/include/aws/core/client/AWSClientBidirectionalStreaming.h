/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <aws/core/Core_EXPORTS.h>
#include <aws/core/NoResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/RAIICounter.h>
#include <aws/core/utils/event/EventDecoderStream.h>
#include <aws/core/utils/event/EventEncoderStream.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/stream/HttpWriteDataStreamBuf.h>
#include <aws/core/utils/threading/Executor.h>

namespace Aws {
namespace Client {

/**
 * Initializes an HTTP/2 connection and submits an executor task that waits for
 * bidirectional stream completion using the push-based WriteData API.
 *
 * The caller is responsible for:
 *   - Validating request parameters and resolving the endpoint
 *   - Creating the encoder stream (with HttpWriteDataStreamBuf) and setting it on the request
 *   - Building and signing the HTTP request
 *   - Seeding event signing on the encoder stream
 *
 * This function handles:
 *   - Wiring the initial response handler and response stream factory
 *   - Initializing the HTTP/2 connection via HttpWriteDataStreamBuf
 *   - Submitting the executor task with shutdown safety (m_isInitialized, RAIICounter)
 *   - Calling streamReadyHandler once the connection is live
 */
template <
    typename ClientT,
    typename OutcomeT,
    typename RequestT,
    typename EncoderStreamT,
    typename HandlerT,
    typename StreamReadyHandlerT>
void SubmitBidirectionalStreamingRequest(
    const ClientT* client,
    RequestT& request,
    std::shared_ptr<RequestT> requestCopy,
    std::shared_ptr<EncoderStreamT> eventEncoderStream,
    std::shared_ptr<Aws::Utils::Stream::HttpWriteDataStreamBuf> writeDataStreamBuf,
    const std::shared_ptr<Aws::Http::HttpRequest>& httpRequest,
    Aws::Utils::Threading::Executor* executor,
    const StreamReadyHandlerT& streamReadyHandler,
    const HandlerT& handler,
    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& handlerContext)
{
  const char* allocationTag = ClientT::GetAllocationTag();

  // Validate host name
  if (!Aws::Utils::IsValidHost(httpRequest->GetUri().GetHost())) {
    handler(client, *requestCopy,
            OutcomeT(Aws::Client::AWSError<Aws::Client::CoreErrors>(Aws::Client::CoreErrors::VALIDATION, "",
                                                                    "Invalid DNS Label found in URI host", false)),
            handlerContext);
    return;
  }

  // Fix decoder pointer after copy construction
  std::weak_ptr<RequestT> wReq = requestCopy;
  requestCopy->SetEventStreamHandler(requestCopy->GetEventStreamHandler());

  // Wire initial response handler on httpRequest (CRT reads it from there)
  httpRequest->SetHeadersReceivedEventHandler(
      [wReq](const Aws::Http::HttpRequest*, Aws::Http::HttpResponse* response) {
        auto req = wReq.lock();
        if (!req || !response) return;
        auto& cb = req->GetEventStreamHandler().GetInitialResponseCallbackEx();
        if (cb) {
          cb({response->GetHeaders()}, Aws::Utils::Event::InitialResponseType::ON_RESPONSE);
        }
      });

  // Wire response stream factory (weak_ptr breaks reference cycle)
  auto responseStreamFactory = [wReq, allocationTag]() -> Aws::IOStream* {
    auto req = wReq.lock();
    if (!req) return nullptr;
    req->GetEventStreamDecoder().Reset();
    return Aws::New<Aws::Utils::Event::EventDecoderStream>(allocationTag, req->GetEventStreamDecoder());
  };
  requestCopy->SetResponseStreamFactory(responseStreamFactory);
  httpRequest->SetResponseStreamFactory(responseStreamFactory);

  // Initialize the HTTP/2 connection
  auto initError = writeDataStreamBuf->Initialize(httpRequest);
  if (initError.has_value()) {
    handler(client, request, OutcomeT(initError.value()), handlerContext);
    return;
  }

  // Submit executor task — waits for stream completion, then invokes handler
  executor->Submit(
      [client, requestCopy, eventEncoderStream, handler, handlerContext, writeDataStreamBuf, allocationTag]() {
        if (!client->m_isInitialized) {
          AWS_LOGSTREAM_ERROR(allocationTag, "Client is not initialized or already terminated");
          handler(client, *requestCopy,
              OutcomeT(Aws::Client::AWSError<CoreErrors>(
                  CoreErrors::NOT_INITIALIZED, "NOT_INITIALIZED",
                  "Client is not initialized or already terminated", false)),
              handlerContext);
          return;
        }
        Aws::Utils::RAIICounter raiiGuard(client->m_operationsProcessed, &client->m_shutdownSignal);

        writeDataStreamBuf->WaitForStreamComplete();
        auto response = writeDataStreamBuf->GetResponse();

        // Flush any remaining buffered response data through the EventDecoderStream
        if (response) {
          response->GetResponseBody().flush();
        }

        if (response && response->HasClientError()) {
          eventEncoderStream->Close();
          handler(client, *requestCopy,
              OutcomeT(Aws::Client::AWSError<CoreErrors>(
                  response->GetClientErrorType(), "", response->GetClientErrorMessage(), false)),
              handlerContext);
        } else {
          handler(client, *requestCopy, OutcomeT(Aws::NoResult()), handlerContext);
        }
      });

  streamReadyHandler(*eventEncoderStream);
}

}  // namespace Client
}  // namespace Aws
