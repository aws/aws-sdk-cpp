/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/ChatHandler.h>
#include <aws/qbusiness/QBusinessErrorMarshaller.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/utils/event/EventStreamErrors.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/json/JsonSerializer.h>

using namespace Aws::QBusiness::Model;
using namespace Aws::Utils::Event;
using namespace Aws::Utils::Json;

AWS_CORE_API extern const char MESSAGE_LOWER_CASE[];
AWS_CORE_API extern const char MESSAGE_CAMEL_CASE[];

namespace Aws
{
namespace QBusiness
{
namespace Model
{
    using namespace Aws::Client;

    static const char CHAT_HANDLER_CLASS_TAG[] = "ChatHandler";

    ChatHandler::ChatHandler() : EventStreamHandler()
    {
        m_onInitialResponse = [&](const ChatInitialResponse&)
        {
            AWS_LOGSTREAM_TRACE(CHAT_HANDLER_CLASS_TAG,
                "Chat initial response received.");
        };

        m_onTextOutputEvent = [&](const TextOutputEvent&)
        {
            AWS_LOGSTREAM_TRACE(CHAT_HANDLER_CLASS_TAG, "TextOutputEvent received.");
        };

        m_onMetadataEvent = [&](const MetadataEvent&)
        {
            AWS_LOGSTREAM_TRACE(CHAT_HANDLER_CLASS_TAG, "MetadataEvent received.");
        };

        m_onActionReviewEvent = [&](const ActionReviewEvent&)
        {
            AWS_LOGSTREAM_TRACE(CHAT_HANDLER_CLASS_TAG, "ActionReviewEvent received.");
        };

        m_onFailedAttachmentEvent = [&](const FailedAttachmentEvent&)
        {
            AWS_LOGSTREAM_TRACE(CHAT_HANDLER_CLASS_TAG, "FailedAttachmentEvent received.");
        };

        m_onAuthChallengeRequestEvent = [&](const AuthChallengeRequestEvent&)
        {
            AWS_LOGSTREAM_TRACE(CHAT_HANDLER_CLASS_TAG, "AuthChallengeRequestEvent received.");
        };

        m_onError = [&](const AWSError<QBusinessErrors>& error)
        {
            AWS_LOGSTREAM_TRACE(CHAT_HANDLER_CLASS_TAG, "QBusiness Errors received, " << error);
        };
    }

    void ChatHandler::OnEvent()
    {
        // Handler internal error during event stream decoding.
        if (!*this)
        {
            AWSError<CoreErrors> error = EventStreamErrorsMapper::GetAwsErrorForEventStreamError(GetInternalError());
            error.SetMessage(GetEventPayloadAsString());
            m_onError(AWSError<QBusinessErrors>(error));
            return;
        }

        const auto& headers = GetEventHeaders();
        auto messageTypeHeaderIter = headers.find(MESSAGE_TYPE_HEADER);
        if (messageTypeHeaderIter == headers.end())
        {
            AWS_LOGSTREAM_WARN(CHAT_HANDLER_CLASS_TAG, "Header: " << MESSAGE_TYPE_HEADER << " not found in the message.");
            return;
        }

        switch (Aws::Utils::Event::Message::GetMessageTypeForName(messageTypeHeaderIter->second.GetEventHeaderValueAsString()))
        {
        case Aws::Utils::Event::Message::MessageType::EVENT:
            HandleEventInMessage();
            break;
        case Aws::Utils::Event::Message::MessageType::REQUEST_LEVEL_ERROR:
        case Aws::Utils::Event::Message::MessageType::REQUEST_LEVEL_EXCEPTION:
        {
            HandleErrorInMessage();
            break;
        }
        default:
            AWS_LOGSTREAM_WARN(CHAT_HANDLER_CLASS_TAG,
                "Unexpected message type: " << messageTypeHeaderIter->second.GetEventHeaderValueAsString());
            break;
        }
    }

    void ChatHandler::HandleEventInMessage()
    {
        const auto& headers = GetEventHeaders();
        auto eventTypeHeaderIter = headers.find(EVENT_TYPE_HEADER);
        if (eventTypeHeaderIter == headers.end())
        {
            AWS_LOGSTREAM_WARN(CHAT_HANDLER_CLASS_TAG, "Header: " << EVENT_TYPE_HEADER << " not found in the message.");
            return;
        }
        switch (ChatEventMapper::GetChatEventTypeForName(eventTypeHeaderIter->second.GetEventHeaderValueAsString()))
        {
        
        case ChatEventType::INITIAL_RESPONSE: 
        {
            JsonValue json(GetEventPayloadAsString());
            if (!json.WasParseSuccessful())
            {
                AWS_LOGSTREAM_WARN(CHAT_HANDLER_CLASS_TAG, "Unable to generate a proper ChatInitialResponse object from the response in JSON format.");
                break;
            }

            ChatInitialResponse event(json.View());
            m_onInitialResponse(event);
            break;
        }   

        case ChatEventType::TEXTEVENT:
        {
            JsonValue json(GetEventPayloadAsString());
            if (!json.WasParseSuccessful())
            {
                AWS_LOGSTREAM_WARN(CHAT_HANDLER_CLASS_TAG, "Unable to generate a proper TextOutputEvent object from the response in JSON format.");
                break;
            }

            m_onTextOutputEvent(TextOutputEvent{json.View()});
            break;
        }
        case ChatEventType::METADATAEVENT:
        {
            JsonValue json(GetEventPayloadAsString());
            if (!json.WasParseSuccessful())
            {
                AWS_LOGSTREAM_WARN(CHAT_HANDLER_CLASS_TAG, "Unable to generate a proper MetadataEvent object from the response in JSON format.");
                break;
            }

            m_onMetadataEvent(MetadataEvent{json.View()});
            break;
        }
        case ChatEventType::ACTIONREVIEWEVENT:
        {
            JsonValue json(GetEventPayloadAsString());
            if (!json.WasParseSuccessful())
            {
                AWS_LOGSTREAM_WARN(CHAT_HANDLER_CLASS_TAG, "Unable to generate a proper ActionReviewEvent object from the response in JSON format.");
                break;
            }

            m_onActionReviewEvent(ActionReviewEvent{json.View()});
            break;
        }
        case ChatEventType::FAILEDATTACHMENTEVENT:
        {
            JsonValue json(GetEventPayloadAsString());
            if (!json.WasParseSuccessful())
            {
                AWS_LOGSTREAM_WARN(CHAT_HANDLER_CLASS_TAG, "Unable to generate a proper FailedAttachmentEvent object from the response in JSON format.");
                break;
            }

            m_onFailedAttachmentEvent(FailedAttachmentEvent{json.View()});
            break;
        }
        case ChatEventType::AUTHCHALLENGEREQUESTEVENT:
        {
            JsonValue json(GetEventPayloadAsString());
            if (!json.WasParseSuccessful())
            {
                AWS_LOGSTREAM_WARN(CHAT_HANDLER_CLASS_TAG, "Unable to generate a proper AuthChallengeRequestEvent object from the response in JSON format.");
                break;
            }

            m_onAuthChallengeRequestEvent(AuthChallengeRequestEvent{json.View()});
            break;
        }
        default:
            AWS_LOGSTREAM_WARN(CHAT_HANDLER_CLASS_TAG,
                "Unexpected event type: " << eventTypeHeaderIter->second.GetEventHeaderValueAsString());
            break;
        }
    }

    void ChatHandler::HandleErrorInMessage()
    {
        const auto& headers = GetEventHeaders();
        Aws::String errorCode;
        Aws::String errorMessage;
        auto errorHeaderIter = headers.find(ERROR_CODE_HEADER);
        if (errorHeaderIter == headers.end())
        {
            errorHeaderIter = headers.find(EXCEPTION_TYPE_HEADER);
            if (errorHeaderIter == headers.end())
            {
                AWS_LOGSTREAM_WARN(CHAT_HANDLER_CLASS_TAG,
                        "Error type was not found in the event message.");
                return;
            }
        }

        errorCode = errorHeaderIter->second.GetEventHeaderValueAsString();
        errorHeaderIter = headers.find(ERROR_MESSAGE_HEADER);
        if (errorHeaderIter == headers.end())
        {
            errorHeaderIter = headers.find(EXCEPTION_TYPE_HEADER);
            if (errorHeaderIter == headers.end())
            {
                AWS_LOGSTREAM_ERROR(CHAT_HANDLER_CLASS_TAG,
                        "Error description was not found in the event message.");
                return;
            }

            JsonValue exceptionPayload(GetEventPayloadAsString());
            if (!exceptionPayload.WasParseSuccessful())
            {
                AWS_LOGSTREAM_ERROR(CHAT_HANDLER_CLASS_TAG, "Unable to generate a proper AuthChallengeRequestEvent object from the response in JSON format.");
                auto contentTypeIter = headers.find(Aws::Utils::Event::CONTENT_TYPE_HEADER);
                if (contentTypeIter != headers.end())
                {
                    AWS_LOGSTREAM_DEBUG(CHAT_HANDLER_CLASS_TAG, "Error content-type: " << contentTypeIter->second.GetEventHeaderValueAsString());
                }
                return;
            }

            JsonView payloadView(exceptionPayload);
            errorMessage = payloadView.ValueExists(MESSAGE_CAMEL_CASE) ?
                           payloadView.GetString(MESSAGE_CAMEL_CASE) :
                           payloadView.ValueExists(MESSAGE_LOWER_CASE) ?
                           payloadView.GetString(MESSAGE_LOWER_CASE) : "";

        }
        else
        {
            errorMessage = errorHeaderIter->second.GetEventHeaderValueAsString();
        }
        MarshallError(errorCode, errorMessage);
    }

    void ChatHandler::MarshallError(const Aws::String& errorCode, const Aws::String& errorMessage)
    {
        QBusinessErrorMarshaller errorMarshaller;
        AWSError<CoreErrors> error;

        if (errorCode.empty())
        {
            error = AWSError<CoreErrors>(CoreErrors::UNKNOWN, "", errorMessage, false);
        }
        else
        {
            error = errorMarshaller.FindErrorByName(errorCode.c_str());
            if (error.GetErrorType() != CoreErrors::UNKNOWN)
            {
                AWS_LOGSTREAM_WARN(CHAT_HANDLER_CLASS_TAG, "Encountered AWSError '" << errorCode.c_str() << "': " << errorMessage.c_str());
                error.SetExceptionName(errorCode);
                error.SetMessage(errorMessage);
            }
            else
            {
                AWS_LOGSTREAM_WARN(CHAT_HANDLER_CLASS_TAG, "Encountered Unknown AWSError '" << errorCode.c_str() << "': " << errorMessage.c_str());
                error = AWSError<CoreErrors>(CoreErrors::UNKNOWN, errorCode, "Unable to parse ExceptionName: " + errorCode + " Message: " + errorMessage, false);
            }
        }

        m_onError(AWSError<QBusinessErrors>(error));
    }

namespace ChatEventMapper
{
    static const int INITIAL_RESPONSE_HASH = Aws::Utils::HashingUtils::HashString("initial-response");
    static const int TEXTEVENT_HASH = Aws::Utils::HashingUtils::HashString("textEvent");
    static const int METADATAEVENT_HASH = Aws::Utils::HashingUtils::HashString("metadataEvent");
    static const int ACTIONREVIEWEVENT_HASH = Aws::Utils::HashingUtils::HashString("actionReviewEvent");
    static const int FAILEDATTACHMENTEVENT_HASH = Aws::Utils::HashingUtils::HashString("failedAttachmentEvent");
    static const int AUTHCHALLENGEREQUESTEVENT_HASH = Aws::Utils::HashingUtils::HashString("authChallengeRequestEvent");

    ChatEventType GetChatEventTypeForName(const Aws::String& name)
    {
        int hashCode = Aws::Utils::HashingUtils::HashString(name.c_str());

        if (hashCode == INITIAL_RESPONSE_HASH) 
        {
            return ChatEventType::INITIAL_RESPONSE;
        }
        else if (hashCode == TEXTEVENT_HASH)
        {
            return ChatEventType::TEXTEVENT;
        }
        else if (hashCode == METADATAEVENT_HASH)
        {
            return ChatEventType::METADATAEVENT;
        }
        else if (hashCode == ACTIONREVIEWEVENT_HASH)
        {
            return ChatEventType::ACTIONREVIEWEVENT;
        }
        else if (hashCode == FAILEDATTACHMENTEVENT_HASH)
        {
            return ChatEventType::FAILEDATTACHMENTEVENT;
        }
        else if (hashCode == AUTHCHALLENGEREQUESTEVENT_HASH)
        {
            return ChatEventType::AUTHCHALLENGEREQUESTEVENT;
        }
        return ChatEventType::UNKNOWN;
    }

    Aws::String GetNameForChatEventType(ChatEventType value)
    {
        switch (value)
        {
        case ChatEventType::INITIAL_RESPONSE:
            return "initial-response";
        case ChatEventType::TEXTEVENT:
            return "textEvent";
        case ChatEventType::METADATAEVENT:
            return "metadataEvent";
        case ChatEventType::ACTIONREVIEWEVENT:
            return "actionReviewEvent";
        case ChatEventType::FAILEDATTACHMENTEVENT:
            return "failedAttachmentEvent";
        case ChatEventType::AUTHCHALLENGEREQUESTEVENT:
            return "authChallengeRequestEvent";
        default:
            return "Unknown";
        }
    }
} // namespace ChatEventMapper
} // namespace Model
} // namespace QBusiness
} // namespace Aws
