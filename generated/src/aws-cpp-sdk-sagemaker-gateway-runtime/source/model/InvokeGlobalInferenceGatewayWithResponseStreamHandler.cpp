/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/CoreErrors.h>
#include <aws/core/utils/event/EventStreamErrors.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/sagemaker-gateway-runtime/SageMakerGatewayRuntimeErrorMarshaller.h>
#include <aws/sagemaker-gateway-runtime/model/InvokeGlobalInferenceGatewayWithResponseStreamHandler.h>

using namespace Aws::SageMakerGatewayRuntime::Model;
using namespace Aws::Utils::Event;
using namespace Aws::Utils::Json;

AWS_CORE_API extern const char MESSAGE_LOWER_CASE[];
AWS_CORE_API extern const char MESSAGE_CAMEL_CASE[];

namespace Aws {
namespace SageMakerGatewayRuntime {
namespace Model {
using namespace Aws::Client;

static const char INVOKEGLOBALINFERENCEGATEWAYWITHRESPONSESTREAM_HANDLER_CLASS_TAG[] =
    "InvokeGlobalInferenceGatewayWithResponseStreamHandler";

InvokeGlobalInferenceGatewayWithResponseStreamHandler::InvokeGlobalInferenceGatewayWithResponseStreamHandler() : EventStreamHandler() {
  m_onInitialResponse = [&](const InvokeGlobalInferenceGatewayWithResponseStreamInitialResponse&,
                            const Utils::Event::InitialResponseType eventType) {
    AWS_LOGSTREAM_TRACE(INVOKEGLOBALINFERENCEGATEWAYWITHRESPONSESTREAM_HANDLER_CLASS_TAG,
                        "InvokeGlobalInferenceGatewayWithResponseStream initial response received from "
                            << (eventType == Utils::Event::InitialResponseType::ON_EVENT ? "event" : "http headers"));
  };

  m_onPayloadPart = [&](const PayloadPart&) {
    AWS_LOGSTREAM_TRACE(INVOKEGLOBALINFERENCEGATEWAYWITHRESPONSESTREAM_HANDLER_CLASS_TAG, "PayloadPart received.");
  };

  m_onError = [&](const AWSError<SageMakerGatewayRuntimeErrors>& error) {
    AWS_LOGSTREAM_TRACE(INVOKEGLOBALINFERENCEGATEWAYWITHRESPONSESTREAM_HANDLER_CLASS_TAG,
                        "SageMakerGatewayRuntime Errors received, " << error);
  };
}

void InvokeGlobalInferenceGatewayWithResponseStreamHandler::OnEvent() {
  // Handler internal error during event stream decoding.
  if (!*this) {
    AWSError<CoreErrors> error = EventStreamErrorsMapper::GetAwsErrorForEventStreamError(GetInternalError());
    error.SetMessage(GetEventPayloadAsString());
    m_onError(AWSError<SageMakerGatewayRuntimeErrors>(error));
    return;
  }

  const auto& headers = GetEventHeaders();
  auto messageTypeHeaderIter = headers.find(MESSAGE_TYPE_HEADER);
  if (messageTypeHeaderIter == headers.end()) {
    AWS_LOGSTREAM_WARN(INVOKEGLOBALINFERENCEGATEWAYWITHRESPONSESTREAM_HANDLER_CLASS_TAG,
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
      AWS_LOGSTREAM_WARN(INVOKEGLOBALINFERENCEGATEWAYWITHRESPONSESTREAM_HANDLER_CLASS_TAG,
                         "Unexpected message type: " << messageTypeHeaderIter->second.GetEventHeaderValueAsString());
      break;
  }
}

void InvokeGlobalInferenceGatewayWithResponseStreamHandler::HandleEventInMessage() {
  const auto& headers = GetEventHeaders();
  auto eventTypeHeaderIter = headers.find(EVENT_TYPE_HEADER);
  if (eventTypeHeaderIter == headers.end()) {
    AWS_LOGSTREAM_WARN(INVOKEGLOBALINFERENCEGATEWAYWITHRESPONSESTREAM_HANDLER_CLASS_TAG,
                       "Header: " << EVENT_TYPE_HEADER << " not found in the message.");
    return;
  }
  switch (InvokeGlobalInferenceGatewayWithResponseStreamEventMapper::GetInvokeGlobalInferenceGatewayWithResponseStreamEventTypeForName(
      eventTypeHeaderIter->second.GetEventHeaderValueAsString())) {
    case InvokeGlobalInferenceGatewayWithResponseStreamEventType::INITIAL_RESPONSE: {
      InvokeGlobalInferenceGatewayWithResponseStreamInitialResponse event(GetEventHeadersAsHttpHeaders());
      m_onInitialResponse(event, Utils::Event::InitialResponseType::ON_EVENT);
      break;
    }

    case InvokeGlobalInferenceGatewayWithResponseStreamEventType::PAYLOADPART: {
      PayloadPart event(GetEventPayloadWithOwnership());
      m_onPayloadPart(event);
      break;
    }
    default:
      AWS_LOGSTREAM_WARN(INVOKEGLOBALINFERENCEGATEWAYWITHRESPONSESTREAM_HANDLER_CLASS_TAG,
                         "Unexpected event type: " << eventTypeHeaderIter->second.GetEventHeaderValueAsString());
      break;
  }
}

void InvokeGlobalInferenceGatewayWithResponseStreamHandler::HandleErrorInMessage() {
  const auto& headers = GetEventHeaders();
  Aws::String errorCode;
  Aws::String errorMessage;
  auto errorHeaderIter = headers.find(ERROR_CODE_HEADER);
  if (errorHeaderIter == headers.end()) {
    errorHeaderIter = headers.find(EXCEPTION_TYPE_HEADER);
    if (errorHeaderIter == headers.end()) {
      AWS_LOGSTREAM_WARN(INVOKEGLOBALINFERENCEGATEWAYWITHRESPONSESTREAM_HANDLER_CLASS_TAG,
                         "Error type was not found in the event message.");
      return;
    }
  }

  errorCode = errorHeaderIter->second.GetEventHeaderValueAsString();
  errorHeaderIter = headers.find(ERROR_MESSAGE_HEADER);
  if (errorHeaderIter == headers.end()) {
    errorHeaderIter = headers.find(EXCEPTION_TYPE_HEADER);
    if (errorHeaderIter == headers.end()) {
      AWS_LOGSTREAM_ERROR(INVOKEGLOBALINFERENCEGATEWAYWITHRESPONSESTREAM_HANDLER_CLASS_TAG,
                          "Error description was not found in the event message.");
      return;
    }

    JsonValue exceptionPayload(GetEventPayloadAsString());
    if (!exceptionPayload.WasParseSuccessful()) {
      AWS_LOGSTREAM_ERROR(INVOKEGLOBALINFERENCEGATEWAYWITHRESPONSESTREAM_HANDLER_CLASS_TAG,
                          "Unable to generate a proper InternalStreamFailure object from the response in JSON format.");
      auto contentTypeIter = headers.find(Aws::Utils::Event::CONTENT_TYPE_HEADER);
      if (contentTypeIter != headers.end()) {
        AWS_LOGSTREAM_DEBUG(INVOKEGLOBALINFERENCEGATEWAYWITHRESPONSESTREAM_HANDLER_CLASS_TAG,
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

void InvokeGlobalInferenceGatewayWithResponseStreamHandler::MarshallError(const Aws::String& errorCode, const Aws::String& errorMessage) {
  SageMakerGatewayRuntimeErrorMarshaller errorMarshaller;
  AWSError<CoreErrors> error;

  if (errorCode.empty()) {
    error = AWSError<CoreErrors>(CoreErrors::UNKNOWN, "", errorMessage, false);
  } else {
    error = errorMarshaller.FindErrorByName(errorCode.c_str());
    if (error.GetErrorType() != CoreErrors::UNKNOWN) {
      AWS_LOGSTREAM_WARN(INVOKEGLOBALINFERENCEGATEWAYWITHRESPONSESTREAM_HANDLER_CLASS_TAG,
                         "Encountered AWSError '" << errorCode.c_str() << "': " << errorMessage.c_str());
      error.SetExceptionName(errorCode);
      error.SetMessage(errorMessage);
    } else {
      AWS_LOGSTREAM_WARN(INVOKEGLOBALINFERENCEGATEWAYWITHRESPONSESTREAM_HANDLER_CLASS_TAG,
                         "Encountered Unknown AWSError '" << errorCode.c_str() << "': " << errorMessage.c_str());
      error = AWSError<CoreErrors>(CoreErrors::UNKNOWN, errorCode,
                                   "Unable to parse ExceptionName: " + errorCode + " Message: " + errorMessage, false);
    }
  }

  m_onError(AWSError<SageMakerGatewayRuntimeErrors>(error));
}

namespace InvokeGlobalInferenceGatewayWithResponseStreamEventMapper {
static const int INITIAL_RESPONSE_HASH = Aws::Utils::HashingUtils::HashString("initial-response");
static const int PAYLOADPART_HASH = Aws::Utils::HashingUtils::HashString("PayloadPart");

InvokeGlobalInferenceGatewayWithResponseStreamEventType GetInvokeGlobalInferenceGatewayWithResponseStreamEventTypeForName(
    const Aws::String& name) {
  int hashCode = Aws::Utils::HashingUtils::HashString(name.c_str());

  if (hashCode == INITIAL_RESPONSE_HASH) {
    return InvokeGlobalInferenceGatewayWithResponseStreamEventType::INITIAL_RESPONSE;
  } else if (hashCode == PAYLOADPART_HASH) {
    return InvokeGlobalInferenceGatewayWithResponseStreamEventType::PAYLOADPART;
  }
  return InvokeGlobalInferenceGatewayWithResponseStreamEventType::UNKNOWN;
}

Aws::String GetNameForInvokeGlobalInferenceGatewayWithResponseStreamEventType(
    InvokeGlobalInferenceGatewayWithResponseStreamEventType value) {
  switch (value) {
    case InvokeGlobalInferenceGatewayWithResponseStreamEventType::INITIAL_RESPONSE:
      return "initial-response";
    case InvokeGlobalInferenceGatewayWithResponseStreamEventType::PAYLOADPART:
      return "PayloadPart";
    default:
      return "Unknown";
  }
}
}  // namespace InvokeGlobalInferenceGatewayWithResponseStreamEventMapper
}  // namespace Model
}  // namespace SageMakerGatewayRuntime
}  // namespace Aws
