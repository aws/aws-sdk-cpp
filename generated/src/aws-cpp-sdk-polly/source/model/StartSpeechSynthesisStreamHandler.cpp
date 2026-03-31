/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/CoreErrors.h>
#include <aws/core/utils/event/EventStreamErrors.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/polly/PollyErrorMarshaller.h>
#include <aws/polly/model/StartSpeechSynthesisStreamHandler.h>

using namespace Aws::Polly::Model;
using namespace Aws::Utils::Event;
using namespace Aws::Utils::Json;

AWS_CORE_API extern const char MESSAGE_LOWER_CASE[];
AWS_CORE_API extern const char MESSAGE_CAMEL_CASE[];

namespace Aws {
namespace Polly {
namespace Model {
using namespace Aws::Client;

static const char STARTSPEECHSYNTHESISSTREAM_HANDLER_CLASS_TAG[] = "StartSpeechSynthesisStreamHandler";

StartSpeechSynthesisStreamHandler::StartSpeechSynthesisStreamHandler() : EventStreamHandler() {
  m_onInitialResponse = [&](const StartSpeechSynthesisStreamInitialResponse&, const Utils::Event::InitialResponseType eventType) {
    AWS_LOGSTREAM_TRACE(STARTSPEECHSYNTHESISSTREAM_HANDLER_CLASS_TAG,
                        "StartSpeechSynthesisStream initial response received from "
                            << (eventType == Utils::Event::InitialResponseType::ON_EVENT ? "event" : "http headers"));
  };

  m_onAudioEvent = [&](const AudioEvent&) { AWS_LOGSTREAM_TRACE(STARTSPEECHSYNTHESISSTREAM_HANDLER_CLASS_TAG, "AudioEvent received."); };

  m_onStreamClosedEvent = [&](const StreamClosedEvent&) {
    AWS_LOGSTREAM_TRACE(STARTSPEECHSYNTHESISSTREAM_HANDLER_CLASS_TAG, "StreamClosedEvent received.");
  };

  m_onError = [&](const AWSError<PollyErrors>& error) {
    AWS_LOGSTREAM_TRACE(STARTSPEECHSYNTHESISSTREAM_HANDLER_CLASS_TAG, "Polly Errors received, " << error);
  };
}

void StartSpeechSynthesisStreamHandler::OnEvent() {
  // Handler internal error during event stream decoding.
  if (!*this) {
    AWSError<CoreErrors> error = EventStreamErrorsMapper::GetAwsErrorForEventStreamError(GetInternalError());
    error.SetMessage(GetEventPayloadAsString());
    m_onError(AWSError<PollyErrors>(error));
    return;
  }

  const auto& headers = GetEventHeaders();
  auto messageTypeHeaderIter = headers.find(MESSAGE_TYPE_HEADER);
  if (messageTypeHeaderIter == headers.end()) {
    AWS_LOGSTREAM_WARN(STARTSPEECHSYNTHESISSTREAM_HANDLER_CLASS_TAG, "Header: " << MESSAGE_TYPE_HEADER << " not found in the message.");
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
      AWS_LOGSTREAM_WARN(STARTSPEECHSYNTHESISSTREAM_HANDLER_CLASS_TAG,
                         "Unexpected message type: " << messageTypeHeaderIter->second.GetEventHeaderValueAsString());
      break;
  }
}

void StartSpeechSynthesisStreamHandler::HandleEventInMessage() {
  const auto& headers = GetEventHeaders();
  auto eventTypeHeaderIter = headers.find(EVENT_TYPE_HEADER);
  if (eventTypeHeaderIter == headers.end()) {
    AWS_LOGSTREAM_WARN(STARTSPEECHSYNTHESISSTREAM_HANDLER_CLASS_TAG, "Header: " << EVENT_TYPE_HEADER << " not found in the message.");
    return;
  }
  switch (StartSpeechSynthesisStreamEventMapper::GetStartSpeechSynthesisStreamEventTypeForName(
      eventTypeHeaderIter->second.GetEventHeaderValueAsString())) {
    case StartSpeechSynthesisStreamEventType::INITIAL_RESPONSE: {
      StartSpeechSynthesisStreamInitialResponse event(GetEventHeadersAsHttpHeaders());
      m_onInitialResponse(event, Utils::Event::InitialResponseType::ON_EVENT);
      break;
    }

    case StartSpeechSynthesisStreamEventType::AUDIOEVENT: {
      AudioEvent event(GetEventPayloadWithOwnership());
      m_onAudioEvent(event);
      break;
    }
    case StartSpeechSynthesisStreamEventType::STREAMCLOSEDEVENT: {
      JsonValue json(GetEventPayloadAsString());
      if (!json.WasParseSuccessful()) {
        AWS_LOGSTREAM_WARN(STARTSPEECHSYNTHESISSTREAM_HANDLER_CLASS_TAG,
                           "Unable to generate a proper StreamClosedEvent object from the response in JSON format.");
        break;
      }

      m_onStreamClosedEvent(StreamClosedEvent{json.View()});
      break;
    }
    default:
      AWS_LOGSTREAM_WARN(STARTSPEECHSYNTHESISSTREAM_HANDLER_CLASS_TAG,
                         "Unexpected event type: " << eventTypeHeaderIter->second.GetEventHeaderValueAsString());
      break;
  }
}

void StartSpeechSynthesisStreamHandler::HandleErrorInMessage() {
  const auto& headers = GetEventHeaders();
  Aws::String errorCode;
  Aws::String errorMessage;
  auto errorHeaderIter = headers.find(ERROR_CODE_HEADER);
  if (errorHeaderIter == headers.end()) {
    errorHeaderIter = headers.find(EXCEPTION_TYPE_HEADER);
    if (errorHeaderIter == headers.end()) {
      AWS_LOGSTREAM_WARN(STARTSPEECHSYNTHESISSTREAM_HANDLER_CLASS_TAG, "Error type was not found in the event message.");
      return;
    }
  }

  errorCode = errorHeaderIter->second.GetEventHeaderValueAsString();
  errorHeaderIter = headers.find(ERROR_MESSAGE_HEADER);
  if (errorHeaderIter == headers.end()) {
    errorHeaderIter = headers.find(EXCEPTION_TYPE_HEADER);
    if (errorHeaderIter == headers.end()) {
      AWS_LOGSTREAM_ERROR(STARTSPEECHSYNTHESISSTREAM_HANDLER_CLASS_TAG, "Error description was not found in the event message.");
      return;
    }

    JsonValue exceptionPayload(GetEventPayloadAsString());
    if (!exceptionPayload.WasParseSuccessful()) {
      AWS_LOGSTREAM_ERROR(STARTSPEECHSYNTHESISSTREAM_HANDLER_CLASS_TAG,
                          "Unable to generate a proper ThrottlingException object from the response in JSON format.");
      auto contentTypeIter = headers.find(Aws::Utils::Event::CONTENT_TYPE_HEADER);
      if (contentTypeIter != headers.end()) {
        AWS_LOGSTREAM_DEBUG(STARTSPEECHSYNTHESISSTREAM_HANDLER_CLASS_TAG,
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

void StartSpeechSynthesisStreamHandler::MarshallError(const Aws::String& errorCode, const Aws::String& errorMessage) {
  PollyErrorMarshaller errorMarshaller;
  AWSError<CoreErrors> error;

  if (errorCode.empty()) {
    error = AWSError<CoreErrors>(CoreErrors::UNKNOWN, "", errorMessage, false);
  } else {
    error = errorMarshaller.FindErrorByName(errorCode.c_str());
    if (error.GetErrorType() != CoreErrors::UNKNOWN) {
      AWS_LOGSTREAM_WARN(STARTSPEECHSYNTHESISSTREAM_HANDLER_CLASS_TAG,
                         "Encountered AWSError '" << errorCode.c_str() << "': " << errorMessage.c_str());
      error.SetExceptionName(errorCode);
      error.SetMessage(errorMessage);
    } else {
      AWS_LOGSTREAM_WARN(STARTSPEECHSYNTHESISSTREAM_HANDLER_CLASS_TAG,
                         "Encountered Unknown AWSError '" << errorCode.c_str() << "': " << errorMessage.c_str());
      error = AWSError<CoreErrors>(CoreErrors::UNKNOWN, errorCode,
                                   "Unable to parse ExceptionName: " + errorCode + " Message: " + errorMessage, false);
    }
  }

  m_onError(AWSError<PollyErrors>(error));
}

namespace StartSpeechSynthesisStreamEventMapper {
static const int INITIAL_RESPONSE_HASH = Aws::Utils::HashingUtils::HashString("initial-response");
static const int AUDIOEVENT_HASH = Aws::Utils::HashingUtils::HashString("AudioEvent");
static const int STREAMCLOSEDEVENT_HASH = Aws::Utils::HashingUtils::HashString("StreamClosedEvent");

StartSpeechSynthesisStreamEventType GetStartSpeechSynthesisStreamEventTypeForName(const Aws::String& name) {
  int hashCode = Aws::Utils::HashingUtils::HashString(name.c_str());

  if (hashCode == INITIAL_RESPONSE_HASH) {
    return StartSpeechSynthesisStreamEventType::INITIAL_RESPONSE;
  } else if (hashCode == AUDIOEVENT_HASH) {
    return StartSpeechSynthesisStreamEventType::AUDIOEVENT;
  } else if (hashCode == STREAMCLOSEDEVENT_HASH) {
    return StartSpeechSynthesisStreamEventType::STREAMCLOSEDEVENT;
  }
  return StartSpeechSynthesisStreamEventType::UNKNOWN;
}

Aws::String GetNameForStartSpeechSynthesisStreamEventType(StartSpeechSynthesisStreamEventType value) {
  switch (value) {
    case StartSpeechSynthesisStreamEventType::INITIAL_RESPONSE:
      return "initial-response";
    case StartSpeechSynthesisStreamEventType::AUDIOEVENT:
      return "AudioEvent";
    case StartSpeechSynthesisStreamEventType::STREAMCLOSEDEVENT:
      return "StreamClosedEvent";
    default:
      return "Unknown";
  }
}
}  // namespace StartSpeechSynthesisStreamEventMapper
}  // namespace Model
}  // namespace Polly
}  // namespace Aws
