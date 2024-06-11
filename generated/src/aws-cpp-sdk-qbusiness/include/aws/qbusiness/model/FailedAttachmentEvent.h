/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/AttachmentOutput.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace QBusiness
{
namespace Model
{

  /**
   * <p>A failed file upload during web experience chat.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/FailedAttachmentEvent">AWS
   * API Reference</a></p>
   */
  class FailedAttachmentEvent
  {
  public:
    AWS_QBUSINESS_API FailedAttachmentEvent();
    AWS_QBUSINESS_API FailedAttachmentEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API FailedAttachmentEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The identifier of the conversation associated with the failed file
     * upload.</p>
     */
    inline const Aws::String& GetConversationId() const{ return m_conversationId; }
    inline bool ConversationIdHasBeenSet() const { return m_conversationIdHasBeenSet; }
    inline void SetConversationId(const Aws::String& value) { m_conversationIdHasBeenSet = true; m_conversationId = value; }
    inline void SetConversationId(Aws::String&& value) { m_conversationIdHasBeenSet = true; m_conversationId = std::move(value); }
    inline void SetConversationId(const char* value) { m_conversationIdHasBeenSet = true; m_conversationId.assign(value); }
    inline FailedAttachmentEvent& WithConversationId(const Aws::String& value) { SetConversationId(value); return *this;}
    inline FailedAttachmentEvent& WithConversationId(Aws::String&& value) { SetConversationId(std::move(value)); return *this;}
    inline FailedAttachmentEvent& WithConversationId(const char* value) { SetConversationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the end user chat message associated with the file
     * upload.</p>
     */
    inline const Aws::String& GetUserMessageId() const{ return m_userMessageId; }
    inline bool UserMessageIdHasBeenSet() const { return m_userMessageIdHasBeenSet; }
    inline void SetUserMessageId(const Aws::String& value) { m_userMessageIdHasBeenSet = true; m_userMessageId = value; }
    inline void SetUserMessageId(Aws::String&& value) { m_userMessageIdHasBeenSet = true; m_userMessageId = std::move(value); }
    inline void SetUserMessageId(const char* value) { m_userMessageIdHasBeenSet = true; m_userMessageId.assign(value); }
    inline FailedAttachmentEvent& WithUserMessageId(const Aws::String& value) { SetUserMessageId(value); return *this;}
    inline FailedAttachmentEvent& WithUserMessageId(Aws::String&& value) { SetUserMessageId(std::move(value)); return *this;}
    inline FailedAttachmentEvent& WithUserMessageId(const char* value) { SetUserMessageId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the AI-generated message associated with the file
     * upload.</p>
     */
    inline const Aws::String& GetSystemMessageId() const{ return m_systemMessageId; }
    inline bool SystemMessageIdHasBeenSet() const { return m_systemMessageIdHasBeenSet; }
    inline void SetSystemMessageId(const Aws::String& value) { m_systemMessageIdHasBeenSet = true; m_systemMessageId = value; }
    inline void SetSystemMessageId(Aws::String&& value) { m_systemMessageIdHasBeenSet = true; m_systemMessageId = std::move(value); }
    inline void SetSystemMessageId(const char* value) { m_systemMessageIdHasBeenSet = true; m_systemMessageId.assign(value); }
    inline FailedAttachmentEvent& WithSystemMessageId(const Aws::String& value) { SetSystemMessageId(value); return *this;}
    inline FailedAttachmentEvent& WithSystemMessageId(Aws::String&& value) { SetSystemMessageId(std::move(value)); return *this;}
    inline FailedAttachmentEvent& WithSystemMessageId(const char* value) { SetSystemMessageId(value); return *this;}
    ///@}

    ///@{
    
    inline const AttachmentOutput& GetAttachment() const{ return m_attachment; }
    inline bool AttachmentHasBeenSet() const { return m_attachmentHasBeenSet; }
    inline void SetAttachment(const AttachmentOutput& value) { m_attachmentHasBeenSet = true; m_attachment = value; }
    inline void SetAttachment(AttachmentOutput&& value) { m_attachmentHasBeenSet = true; m_attachment = std::move(value); }
    inline FailedAttachmentEvent& WithAttachment(const AttachmentOutput& value) { SetAttachment(value); return *this;}
    inline FailedAttachmentEvent& WithAttachment(AttachmentOutput&& value) { SetAttachment(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_conversationId;
    bool m_conversationIdHasBeenSet = false;

    Aws::String m_userMessageId;
    bool m_userMessageIdHasBeenSet = false;

    Aws::String m_systemMessageId;
    bool m_systemMessageIdHasBeenSet = false;

    AttachmentOutput m_attachment;
    bool m_attachmentHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
