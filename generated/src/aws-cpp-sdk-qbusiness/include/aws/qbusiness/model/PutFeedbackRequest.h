﻿/**
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
    AWS_QBUSINESS_API PutFeedbackRequest();

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
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }
    inline PutFeedbackRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline PutFeedbackRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline PutFeedbackRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the user giving the feedback.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }
    inline PutFeedbackRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}
    inline PutFeedbackRequest& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}
    inline PutFeedbackRequest& WithUserId(const char* value) { SetUserId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the conversation the feedback is attached to.</p>
     */
    inline const Aws::String& GetConversationId() const{ return m_conversationId; }
    inline bool ConversationIdHasBeenSet() const { return m_conversationIdHasBeenSet; }
    inline void SetConversationId(const Aws::String& value) { m_conversationIdHasBeenSet = true; m_conversationId = value; }
    inline void SetConversationId(Aws::String&& value) { m_conversationIdHasBeenSet = true; m_conversationId = std::move(value); }
    inline void SetConversationId(const char* value) { m_conversationIdHasBeenSet = true; m_conversationId.assign(value); }
    inline PutFeedbackRequest& WithConversationId(const Aws::String& value) { SetConversationId(value); return *this;}
    inline PutFeedbackRequest& WithConversationId(Aws::String&& value) { SetConversationId(std::move(value)); return *this;}
    inline PutFeedbackRequest& WithConversationId(const char* value) { SetConversationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the chat message that the feedback was given for.</p>
     */
    inline const Aws::String& GetMessageId() const{ return m_messageId; }
    inline bool MessageIdHasBeenSet() const { return m_messageIdHasBeenSet; }
    inline void SetMessageId(const Aws::String& value) { m_messageIdHasBeenSet = true; m_messageId = value; }
    inline void SetMessageId(Aws::String&& value) { m_messageIdHasBeenSet = true; m_messageId = std::move(value); }
    inline void SetMessageId(const char* value) { m_messageIdHasBeenSet = true; m_messageId.assign(value); }
    inline PutFeedbackRequest& WithMessageId(const Aws::String& value) { SetMessageId(value); return *this;}
    inline PutFeedbackRequest& WithMessageId(Aws::String&& value) { SetMessageId(std::move(value)); return *this;}
    inline PutFeedbackRequest& WithMessageId(const char* value) { SetMessageId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the feedback was recorded.</p>
     */
    inline const Aws::Utils::DateTime& GetMessageCopiedAt() const{ return m_messageCopiedAt; }
    inline bool MessageCopiedAtHasBeenSet() const { return m_messageCopiedAtHasBeenSet; }
    inline void SetMessageCopiedAt(const Aws::Utils::DateTime& value) { m_messageCopiedAtHasBeenSet = true; m_messageCopiedAt = value; }
    inline void SetMessageCopiedAt(Aws::Utils::DateTime&& value) { m_messageCopiedAtHasBeenSet = true; m_messageCopiedAt = std::move(value); }
    inline PutFeedbackRequest& WithMessageCopiedAt(const Aws::Utils::DateTime& value) { SetMessageCopiedAt(value); return *this;}
    inline PutFeedbackRequest& WithMessageCopiedAt(Aws::Utils::DateTime&& value) { SetMessageCopiedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The feedback usefulness value given by the user to the chat message.</p>
     */
    inline const MessageUsefulnessFeedback& GetMessageUsefulness() const{ return m_messageUsefulness; }
    inline bool MessageUsefulnessHasBeenSet() const { return m_messageUsefulnessHasBeenSet; }
    inline void SetMessageUsefulness(const MessageUsefulnessFeedback& value) { m_messageUsefulnessHasBeenSet = true; m_messageUsefulness = value; }
    inline void SetMessageUsefulness(MessageUsefulnessFeedback&& value) { m_messageUsefulnessHasBeenSet = true; m_messageUsefulness = std::move(value); }
    inline PutFeedbackRequest& WithMessageUsefulness(const MessageUsefulnessFeedback& value) { SetMessageUsefulness(value); return *this;}
    inline PutFeedbackRequest& WithMessageUsefulness(MessageUsefulnessFeedback&& value) { SetMessageUsefulness(std::move(value)); return *this;}
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

    Aws::Utils::DateTime m_messageCopiedAt;
    bool m_messageCopiedAtHasBeenSet = false;

    MessageUsefulnessFeedback m_messageUsefulness;
    bool m_messageUsefulnessHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
