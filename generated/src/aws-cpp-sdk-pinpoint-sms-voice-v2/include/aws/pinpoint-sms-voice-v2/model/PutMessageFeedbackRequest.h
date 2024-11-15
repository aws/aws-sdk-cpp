/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/model/MessageFeedbackStatus.h>
#include <utility>

namespace Aws
{
namespace PinpointSMSVoiceV2
{
namespace Model
{

  /**
   */
  class PutMessageFeedbackRequest : public PinpointSMSVoiceV2Request
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API PutMessageFeedbackRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutMessageFeedback"; }

    AWS_PINPOINTSMSVOICEV2_API Aws::String SerializePayload() const override;

    AWS_PINPOINTSMSVOICEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique identifier for the message.</p>
     */
    inline const Aws::String& GetMessageId() const{ return m_messageId; }
    inline bool MessageIdHasBeenSet() const { return m_messageIdHasBeenSet; }
    inline void SetMessageId(const Aws::String& value) { m_messageIdHasBeenSet = true; m_messageId = value; }
    inline void SetMessageId(Aws::String&& value) { m_messageIdHasBeenSet = true; m_messageId = std::move(value); }
    inline void SetMessageId(const char* value) { m_messageIdHasBeenSet = true; m_messageId.assign(value); }
    inline PutMessageFeedbackRequest& WithMessageId(const Aws::String& value) { SetMessageId(value); return *this;}
    inline PutMessageFeedbackRequest& WithMessageId(Aws::String&& value) { SetMessageId(std::move(value)); return *this;}
    inline PutMessageFeedbackRequest& WithMessageId(const char* value) { SetMessageId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set the message feedback to be either <code>RECEIVED</code> or
     * <code>FAILED</code>.</p>
     */
    inline const MessageFeedbackStatus& GetMessageFeedbackStatus() const{ return m_messageFeedbackStatus; }
    inline bool MessageFeedbackStatusHasBeenSet() const { return m_messageFeedbackStatusHasBeenSet; }
    inline void SetMessageFeedbackStatus(const MessageFeedbackStatus& value) { m_messageFeedbackStatusHasBeenSet = true; m_messageFeedbackStatus = value; }
    inline void SetMessageFeedbackStatus(MessageFeedbackStatus&& value) { m_messageFeedbackStatusHasBeenSet = true; m_messageFeedbackStatus = std::move(value); }
    inline PutMessageFeedbackRequest& WithMessageFeedbackStatus(const MessageFeedbackStatus& value) { SetMessageFeedbackStatus(value); return *this;}
    inline PutMessageFeedbackRequest& WithMessageFeedbackStatus(MessageFeedbackStatus&& value) { SetMessageFeedbackStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_messageId;
    bool m_messageIdHasBeenSet = false;

    MessageFeedbackStatus m_messageFeedbackStatus;
    bool m_messageFeedbackStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
