/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/CoreErrors.h>
#include <aws/core/utils/event/EventStreamErrors.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/sagemaker-runtime-http2/SageMakerRuntimeHTTP2ErrorMarshaller.h>
#include <aws/sagemaker-runtime-http2/model/InvokeEndpointWithBidirectionalStreamHandler.h>

using namespace Aws::SageMakerRuntimeHTTP2::Model;
using namespace Aws::Utils::Event;
using namespace Aws::Utils::Json;

AWS_CORE_API extern const char MESSAGE_LOWER_CASE[];
AWS_CORE_API extern const char MESSAGE_CAMEL_CASE[];

namespace Aws {
namespace SageMakerRuntimeHTTP2 {
namespace Model {
using namespace Aws::Client;

static const char INVOKEENDPOINTWITHBIDIRECTIONALSTREAM_HANDLER_CLASS_TAG[] = "InvokeEndpointWithBidirectionalStreamHandler";

InvokeEndpointWithBidirectionalStreamHandler::InvokeEndpointWithBidirectionalStreamHandler() : EventStreamHandler() {
  m_onInitialResponse = [&](const InvokeEndpointWithBidirectionalStreamInitialResponse&,
                            const Utils::Event::InitialResponseType eventType) {
    AWS_LOGSTREAM_TRACE(INVOKEENDPOINTWITHBIDIRECTIONALSTREAM_HANDLER_CLASS_TAG,
                        "InvokeEndpointWithBidirectionalStream initial response received from "
                            << (eventType == Utils::Event::InitialResponseType::ON_EVENT ? "event" : "http headers"));
  };

  m_onResponsePayloadPart = [&](const ResponsePayloadPart&) {
    AWS_LOGSTREAM_TRACE(INVOKEENDPOINTWITHBIDIRECTIONALSTREAM_HANDLER_CLASS_TAG, "ResponsePayloadPart received.");
  };

  m_onError = [&](const AWSError<SageMakerRuntimeHTTP2Errors>& error) {
    AWS_LOGSTREAM_TRACE(INVOKEENDPOINTWITHBIDIRECTIONALSTREAM_HANDLER_CLASS_TAG, "SageMakerRuntimeHTTP2 Errors received, " << error);
  };
}

void InvokeEndpointWithBidirectionalStreamHandler::OnEvent() {
  // Handler internal error during event stream decoding.
  if (!*this) {
    AWSError<CoreErrors> error = EventStreamErrorsMapper::GetAwsErrorForEventStreamError(GetInternalError());
    error.SetMessage(GetEventPayloadAsString());
    m_onError(AWSError<SageMakerRuntimeHTTP2Errors>(error));
    return;
  }

  const auto& headers = GetEventHeaders();
  auto messageTypeHeaderIter = headers.find(MESSAGE_TYPE_HEADER);
  if (messageTypeHeaderIter == headers.end()) {
    AWS_LOGSTREAM_WARN(INVOKEENDPOINTWITHBIDIRECTIONALSTREAM_HANDLER_CLASS_TAG,
                       "Header: " << MESSAGE_TYPE_HEADER << " not found in the message.");
    return;
  }

  switch (Aws::Utils::Event::Message::GetMessageTypeForName(messageTypeHeaderIter->second.GetEventHeaderValueAsString())) {
    case Aws::Utils::Event::Message::MessageType::EVENT:
      HandleEventInMessage();
      break;
    case Aws::Utils::Event::Message::MessageType::REQUEST_LEVEL_ERROR:
    case Aws::Utils::Event::Message::MessageType::REQUEST_LEVEL_EXCEPTION: {
      HandleErrorInMessage();
      break;
    }
    default:
      AWS_LOGSTREAM_WARN(INVOKEENDPOINTWITHBIDIRECTIONALSTREAM_HANDLER_CLASS_TAG,
                         "Unexpected message type: " << messageTypeHeaderIter->second.GetEventHeaderValueAsString());
      break;
  }
}

void InvokeEndpointWithBidirectionalStreamHandler::HandleEventInMessage() {
  const auto& headers = GetEventHeaders();
  auto eventTypeHeaderIter = headers.find(EVENT_TYPE_HEADER);
  if (eventTypeHeaderIter == headers.end()) {
    AWS_LOGSTREAM_WARN(INVOKEENDPOINTWITHBIDIRECTIONALSTREAM_HANDLER_CLASS_TAG,
                       "Header: " << EVENT_TYPE_HEADER << " not found in the message.");
    return;
  }
  switch (InvokeEndpointWithBidirectionalStreamEventMapper::GetInvokeEndpointWithBidirectionalStreamEventTypeForName(
      eventTypeHeaderIter->second.GetEventHeaderValueAsString())) {
    case InvokeEndpointWithBidirectionalStreamEventType::INITIAL_RESPONSE: {
      InvokeEndpointWithBidirectionalStreamInitialResponse event(GetEventHeadersAsHttpHeaders());
      m_onInitialResponse(event, Utils::Event::InitialResponseType::ON_EVENT);
      break;
    }

    case InvokeEndpointWithBidirectionalStreamEventType::PAYLOADPART: {
      ResponsePayloadPart event(GetEventPayloadWithOwnership());
      const auto stringHeader = headers.find("P");
      if (stringHeader != headers.end()) {
        event.SetString(stringHeader->second.GetEventHeaderValueAsString());
      }
      const auto responsePayloadPartDataTypeStringHeader = headers.find("DataType");
      if (responsePayloadPartDataTypeStringHeader != headers.end()) {
        event.SetResponsePayloadPartDataTypeString(responsePayloadPartDataTypeStringHeader->second.GetEventHeaderValueAsString());
      }
      const auto responsePayloadPartCompletionStateStringHeader = headers.find("CompletionState");
      if (responsePayloadPartCompletionStateStringHeader != headers.end()) {
        event.SetResponsePayloadPartCompletionStateString(
            responsePayloadPartCompletionStateStringHeader->second.GetEventHeaderValueAsString());
      }
      m_onResponsePayloadPart(event);
      break;
    }
    default:
      AWS_LOGSTREAM_WARN(INVOKEENDPOINTWITHBIDIRECTIONALSTREAM_HANDLER_CLASS_TAG,
                         "Unexpected event type: " << eventTypeHeaderIter->second.GetEventHeaderValueAsString());
      break;
  }
}

void InvokeEndpointWithBidirectionalStreamHandler::HandleErrorInMessage() {
  const auto& headers = GetEventHeaders();
  Aws::String errorCode;
  Aws::String errorMessage;
  auto errorHeaderIter = headers.find(ERROR_CODE_HEADER);
  if (errorHeaderIter == headers.end()) {
    errorHeaderIter = headers.find(EXCEPTION_TYPE_HEADER);
    if (errorHeaderIter == headers.end()) {
      AWS_LOGSTREAM_WARN(INVOKEENDPOINTWITHBIDIRECTIONALSTREAM_HANDLER_CLASS_TAG, "Error type was not found in the event message.");
      return;
    }
  }

  errorCode = errorHeaderIter->second.GetEventHeaderValueAsString();
  errorHeaderIter = headers.find(ERROR_MESSAGE_HEADER);
  if (errorHeaderIter == headers.end()) {
    errorHeaderIter = headers.find(EXCEPTION_TYPE_HEADER);
    if (errorHeaderIter == headers.end()) {
      AWS_LOGSTREAM_ERROR(INVOKEENDPOINTWITHBIDIRECTIONALSTREAM_HANDLER_CLASS_TAG, "Error description was not found in the event message.");
      return;
    }

    JsonValue exceptionPayload(GetEventPayloadAsString());
    if (!exceptionPayload.WasParseSuccessful()) {
      AWS_LOGSTREAM_ERROR(INVOKEENDPOINTWITHBIDIRECTIONALSTREAM_HANDLER_CLASS_TAG,
                          "Unable to generate a proper InternalStreamFailure object from the response in JSON format.");
      auto contentTypeIter = headers.find(Aws::Utils::Event::CONTENT_TYPE_HEADER);
      if (contentTypeIter != headers.end()) {
        AWS_LOGSTREAM_DEBUG(INVOKEENDPOINTWITHBIDIRECTIONALSTREAM_HANDLER_CLASS_TAG,
                            "Error content-type: " << contentTypeIter->second.GetEventHeaderValueAsString());
      }
      return;
    }

    JsonView payloadView(exceptionPayload);
    errorMessage = payloadView.ValueExists(MESSAGE_CAMEL_CASE)   ? payloadView.GetString(MESSAGE_CAMEL_CASE)
                   : payloadView.ValueExists(MESSAGE_LOWER_CASE) ? payloadView.GetString(MESSAGE_LOWER_CASE)
                                                                 : "";

  } else {
    errorMessage = errorHeaderIter->second.GetEventHeaderValueAsString();
  }
  MarshallError(errorCode, errorMessage);
}

void InvokeEndpointWithBidirectionalStreamHandler::MarshallError(const Aws::String& errorCode, const Aws::String& errorMessage) {
  SageMakerRuntimeHTTP2ErrorMarshaller errorMarshaller;
  AWSError<CoreErrors> error;

  if (errorCode.empty()) {
    error = AWSError<CoreErrors>(CoreErrors::UNKNOWN, "", errorMessage, false);
  } else {
    error = errorMarshaller.FindErrorByName(errorCode.c_str());
    if (error.GetErrorType() != CoreErrors::UNKNOWN) {
      AWS_LOGSTREAM_WARN(INVOKEENDPOINTWITHBIDIRECTIONALSTREAM_HANDLER_CLASS_TAG,
                         "Encountered AWSError '" << errorCode.c_str() << "': " << errorMessage.c_str());
      error.SetExceptionName(errorCode);
      error.SetMessage(errorMessage);
    } else {
      AWS_LOGSTREAM_WARN(INVOKEENDPOINTWITHBIDIRECTIONALSTREAM_HANDLER_CLASS_TAG,
                         "Encountered Unknown AWSError '" << errorCode.c_str() << "': " << errorMessage.c_str());
      error = AWSError<CoreErrors>(CoreErrors::UNKNOWN, errorCode,
                                   "Unable to parse ExceptionName: " + errorCode + " Message: " + errorMessage, false);
    }
  }

  m_onError(AWSError<SageMakerRuntimeHTTP2Errors>(error));
}

namespace InvokeEndpointWithBidirectionalStreamEventMapper {
static const int INITIAL_RESPONSE_HASH = Aws::Utils::HashingUtils::HashString("initial-response");
static const int PAYLOADPART_HASH = Aws::Utils::HashingUtils::HashString("PayloadPart");

InvokeEndpointWithBidirectionalStreamEventType GetInvokeEndpointWithBidirectionalStreamEventTypeForName(const Aws::String& name) {
  int hashCode = Aws::Utils::HashingUtils::HashString(name.c_str());

  if (hashCode == INITIAL_RESPONSE_HASH) {
    return InvokeEndpointWithBidirectionalStreamEventType::INITIAL_RESPONSE;
  } else if (hashCode == PAYLOADPART_HASH) {
    return InvokeEndpointWithBidirectionalStreamEventType::PAYLOADPART;
  }
  return InvokeEndpointWithBidirectionalStreamEventType::UNKNOWN;
}

Aws::String GetNameForInvokeEndpointWithBidirectionalStreamEventType(InvokeEndpointWithBidirectionalStreamEventType value) {
  switch (value) {
    case InvokeEndpointWithBidirectionalStreamEventType::INITIAL_RESPONSE:
      return "initial-response";
    case InvokeEndpointWithBidirectionalStreamEventType::PAYLOADPART:
      return "PayloadPart";
    default:
      return "Unknown";
  }
}
}  // namespace InvokeEndpointWithBidirectionalStreamEventMapper
}  // namespace Model
}  // namespace SageMakerRuntimeHTTP2
}  // namespace Aws
