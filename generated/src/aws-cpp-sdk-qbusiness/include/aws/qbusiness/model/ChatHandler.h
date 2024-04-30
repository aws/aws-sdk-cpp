/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/event/EventStreamHandler.h>
#include <aws/core/client/AWSError.h>
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/QBusinessErrors.h>

#include <aws/qbusiness/model/ChatInitialResponse.h>
#include <aws/qbusiness/model/TextOutputEvent.h>
#include <aws/qbusiness/model/MetadataEvent.h>
#include <aws/qbusiness/model/ActionReviewEvent.h>
#include <aws/qbusiness/model/FailedAttachmentEvent.h>
#include <aws/qbusiness/model/AuthChallengeRequestEvent.h>

namespace Aws
{
namespace QBusiness
{
namespace Model
{
    enum class ChatEventType
    {
        INITIAL_RESPONSE,
        TEXTEVENT,
        METADATAEVENT,
        ACTIONREVIEWEVENT,
        FAILEDATTACHMENTEVENT,
        AUTHCHALLENGEREQUESTEVENT,
        UNKNOWN
    };

    class ChatHandler : public Aws::Utils::Event::EventStreamHandler
    {
        typedef std::function<void(const ChatInitialResponse&)> ChatInitialResponseCallback;
        typedef std::function<void(const TextOutputEvent&)> TextOutputEventCallback;
        typedef std::function<void(const MetadataEvent&)> MetadataEventCallback;
        typedef std::function<void(const ActionReviewEvent&)> ActionReviewEventCallback;
        typedef std::function<void(const FailedAttachmentEvent&)> FailedAttachmentEventCallback;
        typedef std::function<void(const AuthChallengeRequestEvent&)> AuthChallengeRequestEventCallback;
        typedef std::function<void(const Aws::Client::AWSError<QBusinessErrors>& error)> ErrorCallback;

    public:
        AWS_QBUSINESS_API ChatHandler();
        AWS_QBUSINESS_API ChatHandler& operator=(const ChatHandler&) = default;

        AWS_QBUSINESS_API virtual void OnEvent() override;

        inline void SetInitialResponseCallback(const ChatInitialResponseCallback& callback) { m_onInitialResponse = callback; }
        inline void SetTextOutputEventCallback(const TextOutputEventCallback& callback) { m_onTextOutputEvent = callback; }
        inline void SetMetadataEventCallback(const MetadataEventCallback& callback) { m_onMetadataEvent = callback; }
        inline void SetActionReviewEventCallback(const ActionReviewEventCallback& callback) { m_onActionReviewEvent = callback; }
        inline void SetFailedAttachmentEventCallback(const FailedAttachmentEventCallback& callback) { m_onFailedAttachmentEvent = callback; }
        inline void SetAuthChallengeRequestEventCallback(const AuthChallengeRequestEventCallback& callback) { m_onAuthChallengeRequestEvent = callback; }
        inline void SetOnErrorCallback(const ErrorCallback& callback) { m_onError = callback; }

    private:
        AWS_QBUSINESS_API void HandleEventInMessage();
        AWS_QBUSINESS_API void HandleErrorInMessage();
        AWS_QBUSINESS_API void MarshallError(const Aws::String& errorCode, const Aws::String& errorMessage);

        ChatInitialResponseCallback m_onInitialResponse;
        TextOutputEventCallback m_onTextOutputEvent;
        MetadataEventCallback m_onMetadataEvent;
        ActionReviewEventCallback m_onActionReviewEvent;
        FailedAttachmentEventCallback m_onFailedAttachmentEvent;
        AuthChallengeRequestEventCallback m_onAuthChallengeRequestEvent;
        ErrorCallback m_onError;
    };

namespace ChatEventMapper
{
    AWS_QBUSINESS_API ChatEventType GetChatEventTypeForName(const Aws::String& name);

    AWS_QBUSINESS_API Aws::String GetNameForChatEventType(ChatEventType value);
} // namespace ChatEventMapper
} // namespace Model
} // namespace QBusiness
} // namespace Aws
