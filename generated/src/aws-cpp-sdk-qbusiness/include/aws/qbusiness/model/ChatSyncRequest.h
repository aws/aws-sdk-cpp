/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/QBusinessRequest.h>
#include <aws/qbusiness/model/ActionExecution.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qbusiness/model/AttributeFilter.h>
#include <aws/qbusiness/model/AttachmentInput.h>
#include <utility>
#include <aws/core/utils/UUID.h>

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
  class ChatSyncRequest : public QBusinessRequest
  {
  public:
    AWS_QBUSINESS_API ChatSyncRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ChatSync"; }

    AWS_QBUSINESS_API Aws::String SerializePayload() const override;

    AWS_QBUSINESS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>A request from an end user to perform an Amazon Q plugin action.</p>
     */
    inline const ActionExecution& GetActionExecution() const{ return m_actionExecution; }

    /**
     * <p>A request from an end user to perform an Amazon Q plugin action.</p>
     */
    inline bool ActionExecutionHasBeenSet() const { return m_actionExecutionHasBeenSet; }

    /**
     * <p>A request from an end user to perform an Amazon Q plugin action.</p>
     */
    inline void SetActionExecution(const ActionExecution& value) { m_actionExecutionHasBeenSet = true; m_actionExecution = value; }

    /**
     * <p>A request from an end user to perform an Amazon Q plugin action.</p>
     */
    inline void SetActionExecution(ActionExecution&& value) { m_actionExecutionHasBeenSet = true; m_actionExecution = std::move(value); }

    /**
     * <p>A request from an end user to perform an Amazon Q plugin action.</p>
     */
    inline ChatSyncRequest& WithActionExecution(const ActionExecution& value) { SetActionExecution(value); return *this;}

    /**
     * <p>A request from an end user to perform an Amazon Q plugin action.</p>
     */
    inline ChatSyncRequest& WithActionExecution(ActionExecution&& value) { SetActionExecution(std::move(value)); return *this;}


    /**
     * <p>The identifier of the Amazon Q application linked to the Amazon Q
     * conversation.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The identifier of the Amazon Q application linked to the Amazon Q
     * conversation.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Q application linked to the Amazon Q
     * conversation.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The identifier of the Amazon Q application linked to the Amazon Q
     * conversation.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Q application linked to the Amazon Q
     * conversation.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The identifier of the Amazon Q application linked to the Amazon Q
     * conversation.</p>
     */
    inline ChatSyncRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Q application linked to the Amazon Q
     * conversation.</p>
     */
    inline ChatSyncRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Q application linked to the Amazon Q
     * conversation.</p>
     */
    inline ChatSyncRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>A list of files uploaded directly during chat. You can upload a maximum of 5
     * files of upto 10 MB each.</p>
     */
    inline const Aws::Vector<AttachmentInput>& GetAttachments() const{ return m_attachments; }

    /**
     * <p>A list of files uploaded directly during chat. You can upload a maximum of 5
     * files of upto 10 MB each.</p>
     */
    inline bool AttachmentsHasBeenSet() const { return m_attachmentsHasBeenSet; }

    /**
     * <p>A list of files uploaded directly during chat. You can upload a maximum of 5
     * files of upto 10 MB each.</p>
     */
    inline void SetAttachments(const Aws::Vector<AttachmentInput>& value) { m_attachmentsHasBeenSet = true; m_attachments = value; }

    /**
     * <p>A list of files uploaded directly during chat. You can upload a maximum of 5
     * files of upto 10 MB each.</p>
     */
    inline void SetAttachments(Aws::Vector<AttachmentInput>&& value) { m_attachmentsHasBeenSet = true; m_attachments = std::move(value); }

    /**
     * <p>A list of files uploaded directly during chat. You can upload a maximum of 5
     * files of upto 10 MB each.</p>
     */
    inline ChatSyncRequest& WithAttachments(const Aws::Vector<AttachmentInput>& value) { SetAttachments(value); return *this;}

    /**
     * <p>A list of files uploaded directly during chat. You can upload a maximum of 5
     * files of upto 10 MB each.</p>
     */
    inline ChatSyncRequest& WithAttachments(Aws::Vector<AttachmentInput>&& value) { SetAttachments(std::move(value)); return *this;}

    /**
     * <p>A list of files uploaded directly during chat. You can upload a maximum of 5
     * files of upto 10 MB each.</p>
     */
    inline ChatSyncRequest& AddAttachments(const AttachmentInput& value) { m_attachmentsHasBeenSet = true; m_attachments.push_back(value); return *this; }

    /**
     * <p>A list of files uploaded directly during chat. You can upload a maximum of 5
     * files of upto 10 MB each.</p>
     */
    inline ChatSyncRequest& AddAttachments(AttachmentInput&& value) { m_attachmentsHasBeenSet = true; m_attachments.push_back(std::move(value)); return *this; }


    /**
     * <p>Enables filtering of Amazon Q web experience responses based on document
     * attributes or metadata fields.</p>
     */
    inline const AttributeFilter& GetAttributeFilter() const{ return m_attributeFilter; }

    /**
     * <p>Enables filtering of Amazon Q web experience responses based on document
     * attributes or metadata fields.</p>
     */
    inline bool AttributeFilterHasBeenSet() const { return m_attributeFilterHasBeenSet; }

    /**
     * <p>Enables filtering of Amazon Q web experience responses based on document
     * attributes or metadata fields.</p>
     */
    inline void SetAttributeFilter(const AttributeFilter& value) { m_attributeFilterHasBeenSet = true; m_attributeFilter = value; }

    /**
     * <p>Enables filtering of Amazon Q web experience responses based on document
     * attributes or metadata fields.</p>
     */
    inline void SetAttributeFilter(AttributeFilter&& value) { m_attributeFilterHasBeenSet = true; m_attributeFilter = std::move(value); }

    /**
     * <p>Enables filtering of Amazon Q web experience responses based on document
     * attributes or metadata fields.</p>
     */
    inline ChatSyncRequest& WithAttributeFilter(const AttributeFilter& value) { SetAttributeFilter(value); return *this;}

    /**
     * <p>Enables filtering of Amazon Q web experience responses based on document
     * attributes or metadata fields.</p>
     */
    inline ChatSyncRequest& WithAttributeFilter(AttributeFilter&& value) { SetAttributeFilter(std::move(value)); return *this;}


    /**
     * <p>A token that you provide to identify a chat request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A token that you provide to identify a chat request.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A token that you provide to identify a chat request.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A token that you provide to identify a chat request.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A token that you provide to identify a chat request.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A token that you provide to identify a chat request.</p>
     */
    inline ChatSyncRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A token that you provide to identify a chat request.</p>
     */
    inline ChatSyncRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A token that you provide to identify a chat request.</p>
     */
    inline ChatSyncRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The identifier of the Amazon Q conversation.</p>
     */
    inline const Aws::String& GetConversationId() const{ return m_conversationId; }

    /**
     * <p>The identifier of the Amazon Q conversation.</p>
     */
    inline bool ConversationIdHasBeenSet() const { return m_conversationIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Q conversation.</p>
     */
    inline void SetConversationId(const Aws::String& value) { m_conversationIdHasBeenSet = true; m_conversationId = value; }

    /**
     * <p>The identifier of the Amazon Q conversation.</p>
     */
    inline void SetConversationId(Aws::String&& value) { m_conversationIdHasBeenSet = true; m_conversationId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Q conversation.</p>
     */
    inline void SetConversationId(const char* value) { m_conversationIdHasBeenSet = true; m_conversationId.assign(value); }

    /**
     * <p>The identifier of the Amazon Q conversation.</p>
     */
    inline ChatSyncRequest& WithConversationId(const Aws::String& value) { SetConversationId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Q conversation.</p>
     */
    inline ChatSyncRequest& WithConversationId(Aws::String&& value) { SetConversationId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Q conversation.</p>
     */
    inline ChatSyncRequest& WithConversationId(const char* value) { SetConversationId(value); return *this;}


    /**
     * <p>The identifier of the previous end user text input message in a
     * conversation.</p>
     */
    inline const Aws::String& GetParentMessageId() const{ return m_parentMessageId; }

    /**
     * <p>The identifier of the previous end user text input message in a
     * conversation.</p>
     */
    inline bool ParentMessageIdHasBeenSet() const { return m_parentMessageIdHasBeenSet; }

    /**
     * <p>The identifier of the previous end user text input message in a
     * conversation.</p>
     */
    inline void SetParentMessageId(const Aws::String& value) { m_parentMessageIdHasBeenSet = true; m_parentMessageId = value; }

    /**
     * <p>The identifier of the previous end user text input message in a
     * conversation.</p>
     */
    inline void SetParentMessageId(Aws::String&& value) { m_parentMessageIdHasBeenSet = true; m_parentMessageId = std::move(value); }

    /**
     * <p>The identifier of the previous end user text input message in a
     * conversation.</p>
     */
    inline void SetParentMessageId(const char* value) { m_parentMessageIdHasBeenSet = true; m_parentMessageId.assign(value); }

    /**
     * <p>The identifier of the previous end user text input message in a
     * conversation.</p>
     */
    inline ChatSyncRequest& WithParentMessageId(const Aws::String& value) { SetParentMessageId(value); return *this;}

    /**
     * <p>The identifier of the previous end user text input message in a
     * conversation.</p>
     */
    inline ChatSyncRequest& WithParentMessageId(Aws::String&& value) { SetParentMessageId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the previous end user text input message in a
     * conversation.</p>
     */
    inline ChatSyncRequest& WithParentMessageId(const char* value) { SetParentMessageId(value); return *this;}


    /**
     * <p>The groups that a user associated with the chat input belongs to.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserGroups() const{ return m_userGroups; }

    /**
     * <p>The groups that a user associated with the chat input belongs to.</p>
     */
    inline bool UserGroupsHasBeenSet() const { return m_userGroupsHasBeenSet; }

    /**
     * <p>The groups that a user associated with the chat input belongs to.</p>
     */
    inline void SetUserGroups(const Aws::Vector<Aws::String>& value) { m_userGroupsHasBeenSet = true; m_userGroups = value; }

    /**
     * <p>The groups that a user associated with the chat input belongs to.</p>
     */
    inline void SetUserGroups(Aws::Vector<Aws::String>&& value) { m_userGroupsHasBeenSet = true; m_userGroups = std::move(value); }

    /**
     * <p>The groups that a user associated with the chat input belongs to.</p>
     */
    inline ChatSyncRequest& WithUserGroups(const Aws::Vector<Aws::String>& value) { SetUserGroups(value); return *this;}

    /**
     * <p>The groups that a user associated with the chat input belongs to.</p>
     */
    inline ChatSyncRequest& WithUserGroups(Aws::Vector<Aws::String>&& value) { SetUserGroups(std::move(value)); return *this;}

    /**
     * <p>The groups that a user associated with the chat input belongs to.</p>
     */
    inline ChatSyncRequest& AddUserGroups(const Aws::String& value) { m_userGroupsHasBeenSet = true; m_userGroups.push_back(value); return *this; }

    /**
     * <p>The groups that a user associated with the chat input belongs to.</p>
     */
    inline ChatSyncRequest& AddUserGroups(Aws::String&& value) { m_userGroupsHasBeenSet = true; m_userGroups.push_back(std::move(value)); return *this; }

    /**
     * <p>The groups that a user associated with the chat input belongs to.</p>
     */
    inline ChatSyncRequest& AddUserGroups(const char* value) { m_userGroupsHasBeenSet = true; m_userGroups.push_back(value); return *this; }


    /**
     * <p>The identifier of the user attached to the chat input.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>The identifier of the user attached to the chat input.</p>
     */
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }

    /**
     * <p>The identifier of the user attached to the chat input.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>The identifier of the user attached to the chat input.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p>The identifier of the user attached to the chat input.</p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>The identifier of the user attached to the chat input.</p>
     */
    inline ChatSyncRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The identifier of the user attached to the chat input.</p>
     */
    inline ChatSyncRequest& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the user attached to the chat input.</p>
     */
    inline ChatSyncRequest& WithUserId(const char* value) { SetUserId(value); return *this;}


    /**
     * <p>A end user message in a conversation.</p>
     */
    inline const Aws::String& GetUserMessage() const{ return m_userMessage; }

    /**
     * <p>A end user message in a conversation.</p>
     */
    inline bool UserMessageHasBeenSet() const { return m_userMessageHasBeenSet; }

    /**
     * <p>A end user message in a conversation.</p>
     */
    inline void SetUserMessage(const Aws::String& value) { m_userMessageHasBeenSet = true; m_userMessage = value; }

    /**
     * <p>A end user message in a conversation.</p>
     */
    inline void SetUserMessage(Aws::String&& value) { m_userMessageHasBeenSet = true; m_userMessage = std::move(value); }

    /**
     * <p>A end user message in a conversation.</p>
     */
    inline void SetUserMessage(const char* value) { m_userMessageHasBeenSet = true; m_userMessage.assign(value); }

    /**
     * <p>A end user message in a conversation.</p>
     */
    inline ChatSyncRequest& WithUserMessage(const Aws::String& value) { SetUserMessage(value); return *this;}

    /**
     * <p>A end user message in a conversation.</p>
     */
    inline ChatSyncRequest& WithUserMessage(Aws::String&& value) { SetUserMessage(std::move(value)); return *this;}

    /**
     * <p>A end user message in a conversation.</p>
     */
    inline ChatSyncRequest& WithUserMessage(const char* value) { SetUserMessage(value); return *this;}

  private:

    ActionExecution m_actionExecution;
    bool m_actionExecutionHasBeenSet = false;

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::Vector<AttachmentInput> m_attachments;
    bool m_attachmentsHasBeenSet = false;

    AttributeFilter m_attributeFilter;
    bool m_attributeFilterHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_conversationId;
    bool m_conversationIdHasBeenSet = false;

    Aws::String m_parentMessageId;
    bool m_parentMessageIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_userGroups;
    bool m_userGroupsHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::String m_userMessage;
    bool m_userMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
