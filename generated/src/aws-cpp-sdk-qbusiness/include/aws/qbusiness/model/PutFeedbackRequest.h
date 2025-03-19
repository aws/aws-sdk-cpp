/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/QBusinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/qbusiness/model/MessageUsefulnessFeedback.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace QBusiness
{
namespace Model
{

  /**
   */
  class PutFeedbackRequest : public QBusinessRequest
  {
  public:
    AWS_QBUSINESS_API PutFeedbackRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutFeedback"; }

    AWS_QBUSINESS_API Aws::String SerializePayload() const override;

    AWS_QBUSINESS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The identifier of the application associated with the feedback.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    PutFeedbackRequest& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the user giving the feedback.</p>
     */
    inline const Aws::String& GetUserId() const { return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    template<typename UserIdT = Aws::String>
    void SetUserId(UserIdT&& value) { m_userIdHasBeenSet = true; m_userId = std::forward<UserIdT>(value); }
    template<typename UserIdT = Aws::String>
    PutFeedbackRequest& WithUserId(UserIdT&& value) { SetUserId(std::forward<UserIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the conversation the feedback is attached to.</p>
     */
    inline const Aws::String& GetConversationId() const { return m_conversationId; }
    inline bool ConversationIdHasBeenSet() const { return m_conversationIdHasBeenSet; }
    template<typename ConversationIdT = Aws::String>
    void SetConversationId(ConversationIdT&& value) { m_conversationIdHasBeenSet = true; m_conversationId = std::forward<ConversationIdT>(value); }
    template<typename ConversationIdT = Aws::String>
    PutFeedbackRequest& WithConversationId(ConversationIdT&& value) { SetConversationId(std::forward<ConversationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the chat message that the feedback was given for.</p>
     */
    inline const Aws::String& GetMessageId() const { return m_messageId; }
    inline bool MessageIdHasBeenSet() const { return m_messageIdHasBeenSet; }
    template<typename MessageIdT = Aws::String>
    void SetMessageId(MessageIdT&& value) { m_messageIdHasBeenSet = true; m_messageId = std::forward<MessageIdT>(value); }
    template<typename MessageIdT = Aws::String>
    PutFeedbackRequest& WithMessageId(MessageIdT&& value) { SetMessageId(std::forward<MessageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the feedback was recorded.</p>
     */
    inline const Aws::Utils::DateTime& GetMessageCopiedAt() const { return m_messageCopiedAt; }
    inline bool MessageCopiedAtHasBeenSet() const { return m_messageCopiedAtHasBeenSet; }
    template<typename MessageCopiedAtT = Aws::Utils::DateTime>
    void SetMessageCopiedAt(MessageCopiedAtT&& value) { m_messageCopiedAtHasBeenSet = true; m_messageCopiedAt = std::forward<MessageCopiedAtT>(value); }
    template<typename MessageCopiedAtT = Aws::Utils::DateTime>
    PutFeedbackRequest& WithMessageCopiedAt(MessageCopiedAtT&& value) { SetMessageCopiedAt(std::forward<MessageCopiedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The feedback usefulness value given by the user to the chat message.</p>
     */
    inline const MessageUsefulnessFeedback& GetMessageUsefulness() const { return m_messageUsefulness; }
    inline bool MessageUsefulnessHasBeenSet() const { return m_messageUsefulnessHasBeenSet; }
    template<typename MessageUsefulnessT = MessageUsefulnessFeedback>
    void SetMessageUsefulness(MessageUsefulnessT&& value) { m_messageUsefulnessHasBeenSet = true; m_messageUsefulness = std::forward<MessageUsefulnessT>(value); }
    template<typename MessageUsefulnessT = MessageUsefulnessFeedback>
    PutFeedbackRequest& WithMessageUsefulness(MessageUsefulnessT&& value) { SetMessageUsefulness(std::forward<MessageUsefulnessT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::String m_conversationId;
    bool m_conversationIdHasBeenSet = false;

    Aws::String m_messageId;
    bool m_messageIdHasBeenSet = false;

    Aws::Utils::DateTime m_messageCopiedAt{};
    bool m_messageCopiedAtHasBeenSet = false;

    MessageUsefulnessFeedback m_messageUsefulness;
    bool m_messageUsefulnessHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
