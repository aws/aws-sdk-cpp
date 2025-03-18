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
    AWS_QBUSINESS_API FailedAttachmentEvent() = default;
    AWS_QBUSINESS_API FailedAttachmentEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API FailedAttachmentEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The identifier of the conversation associated with the failed file
     * upload.</p>
     */
    inline const Aws::String& GetConversationId() const { return m_conversationId; }
    inline bool ConversationIdHasBeenSet() const { return m_conversationIdHasBeenSet; }
    template<typename ConversationIdT = Aws::String>
    void SetConversationId(ConversationIdT&& value) { m_conversationIdHasBeenSet = true; m_conversationId = std::forward<ConversationIdT>(value); }
    template<typename ConversationIdT = Aws::String>
    FailedAttachmentEvent& WithConversationId(ConversationIdT&& value) { SetConversationId(std::forward<ConversationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the end user chat message associated with the file
     * upload.</p>
     */
    inline const Aws::String& GetUserMessageId() const { return m_userMessageId; }
    inline bool UserMessageIdHasBeenSet() const { return m_userMessageIdHasBeenSet; }
    template<typename UserMessageIdT = Aws::String>
    void SetUserMessageId(UserMessageIdT&& value) { m_userMessageIdHasBeenSet = true; m_userMessageId = std::forward<UserMessageIdT>(value); }
    template<typename UserMessageIdT = Aws::String>
    FailedAttachmentEvent& WithUserMessageId(UserMessageIdT&& value) { SetUserMessageId(std::forward<UserMessageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the AI-generated message associated with the file
     * upload.</p>
     */
    inline const Aws::String& GetSystemMessageId() const { return m_systemMessageId; }
    inline bool SystemMessageIdHasBeenSet() const { return m_systemMessageIdHasBeenSet; }
    template<typename SystemMessageIdT = Aws::String>
    void SetSystemMessageId(SystemMessageIdT&& value) { m_systemMessageIdHasBeenSet = true; m_systemMessageId = std::forward<SystemMessageIdT>(value); }
    template<typename SystemMessageIdT = Aws::String>
    FailedAttachmentEvent& WithSystemMessageId(SystemMessageIdT&& value) { SetSystemMessageId(std::forward<SystemMessageIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const AttachmentOutput& GetAttachment() const { return m_attachment; }
    inline bool AttachmentHasBeenSet() const { return m_attachmentHasBeenSet; }
    template<typename AttachmentT = AttachmentOutput>
    void SetAttachment(AttachmentT&& value) { m_attachmentHasBeenSet = true; m_attachment = std::forward<AttachmentT>(value); }
    template<typename AttachmentT = AttachmentOutput>
    FailedAttachmentEvent& WithAttachment(AttachmentT&& value) { SetAttachment(std::forward<AttachmentT>(value)); return *this;}
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
