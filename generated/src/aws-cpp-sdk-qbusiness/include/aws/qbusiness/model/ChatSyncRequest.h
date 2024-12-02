/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/QBusinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qbusiness/model/ActionExecution.h>
#include <aws/qbusiness/model/AuthChallengeResponse.h>
#include <aws/qbusiness/model/AttributeFilter.h>
#include <aws/qbusiness/model/ChatMode.h>
#include <aws/qbusiness/model/ChatModeConfiguration.h>
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


    ///@{
    /**
     * <p>The identifier of the Amazon Q Business application linked to the Amazon Q
     * Business conversation.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }
    inline ChatSyncRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline ChatSyncRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline ChatSyncRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the user attached to the chat input.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }
    inline ChatSyncRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}
    inline ChatSyncRequest& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}
    inline ChatSyncRequest& WithUserId(const char* value) { SetUserId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The group names that a user associated with the chat input belongs to.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserGroups() const{ return m_userGroups; }
    inline bool UserGroupsHasBeenSet() const { return m_userGroupsHasBeenSet; }
    inline void SetUserGroups(const Aws::Vector<Aws::String>& value) { m_userGroupsHasBeenSet = true; m_userGroups = value; }
    inline void SetUserGroups(Aws::Vector<Aws::String>&& value) { m_userGroupsHasBeenSet = true; m_userGroups = std::move(value); }
    inline ChatSyncRequest& WithUserGroups(const Aws::Vector<Aws::String>& value) { SetUserGroups(value); return *this;}
    inline ChatSyncRequest& WithUserGroups(Aws::Vector<Aws::String>&& value) { SetUserGroups(std::move(value)); return *this;}
    inline ChatSyncRequest& AddUserGroups(const Aws::String& value) { m_userGroupsHasBeenSet = true; m_userGroups.push_back(value); return *this; }
    inline ChatSyncRequest& AddUserGroups(Aws::String&& value) { m_userGroupsHasBeenSet = true; m_userGroups.push_back(std::move(value)); return *this; }
    inline ChatSyncRequest& AddUserGroups(const char* value) { m_userGroupsHasBeenSet = true; m_userGroups.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A end user message in a conversation.</p>
     */
    inline const Aws::String& GetUserMessage() const{ return m_userMessage; }
    inline bool UserMessageHasBeenSet() const { return m_userMessageHasBeenSet; }
    inline void SetUserMessage(const Aws::String& value) { m_userMessageHasBeenSet = true; m_userMessage = value; }
    inline void SetUserMessage(Aws::String&& value) { m_userMessageHasBeenSet = true; m_userMessage = std::move(value); }
    inline void SetUserMessage(const char* value) { m_userMessageHasBeenSet = true; m_userMessage.assign(value); }
    inline ChatSyncRequest& WithUserMessage(const Aws::String& value) { SetUserMessage(value); return *this;}
    inline ChatSyncRequest& WithUserMessage(Aws::String&& value) { SetUserMessage(std::move(value)); return *this;}
    inline ChatSyncRequest& WithUserMessage(const char* value) { SetUserMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of files uploaded directly during chat. You can upload a maximum of 5
     * files of upto 10 MB each.</p>
     */
    inline const Aws::Vector<AttachmentInput>& GetAttachments() const{ return m_attachments; }
    inline bool AttachmentsHasBeenSet() const { return m_attachmentsHasBeenSet; }
    inline void SetAttachments(const Aws::Vector<AttachmentInput>& value) { m_attachmentsHasBeenSet = true; m_attachments = value; }
    inline void SetAttachments(Aws::Vector<AttachmentInput>&& value) { m_attachmentsHasBeenSet = true; m_attachments = std::move(value); }
    inline ChatSyncRequest& WithAttachments(const Aws::Vector<AttachmentInput>& value) { SetAttachments(value); return *this;}
    inline ChatSyncRequest& WithAttachments(Aws::Vector<AttachmentInput>&& value) { SetAttachments(std::move(value)); return *this;}
    inline ChatSyncRequest& AddAttachments(const AttachmentInput& value) { m_attachmentsHasBeenSet = true; m_attachments.push_back(value); return *this; }
    inline ChatSyncRequest& AddAttachments(AttachmentInput&& value) { m_attachmentsHasBeenSet = true; m_attachments.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A request from an end user to perform an Amazon Q Business plugin action.</p>
     */
    inline const ActionExecution& GetActionExecution() const{ return m_actionExecution; }
    inline bool ActionExecutionHasBeenSet() const { return m_actionExecutionHasBeenSet; }
    inline void SetActionExecution(const ActionExecution& value) { m_actionExecutionHasBeenSet = true; m_actionExecution = value; }
    inline void SetActionExecution(ActionExecution&& value) { m_actionExecutionHasBeenSet = true; m_actionExecution = std::move(value); }
    inline ChatSyncRequest& WithActionExecution(const ActionExecution& value) { SetActionExecution(value); return *this;}
    inline ChatSyncRequest& WithActionExecution(ActionExecution&& value) { SetActionExecution(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An authentication verification event response by a third party authentication
     * server to Amazon Q Business.</p>
     */
    inline const AuthChallengeResponse& GetAuthChallengeResponse() const{ return m_authChallengeResponse; }
    inline bool AuthChallengeResponseHasBeenSet() const { return m_authChallengeResponseHasBeenSet; }
    inline void SetAuthChallengeResponse(const AuthChallengeResponse& value) { m_authChallengeResponseHasBeenSet = true; m_authChallengeResponse = value; }
    inline void SetAuthChallengeResponse(AuthChallengeResponse&& value) { m_authChallengeResponseHasBeenSet = true; m_authChallengeResponse = std::move(value); }
    inline ChatSyncRequest& WithAuthChallengeResponse(const AuthChallengeResponse& value) { SetAuthChallengeResponse(value); return *this;}
    inline ChatSyncRequest& WithAuthChallengeResponse(AuthChallengeResponse&& value) { SetAuthChallengeResponse(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon Q Business conversation.</p>
     */
    inline const Aws::String& GetConversationId() const{ return m_conversationId; }
    inline bool ConversationIdHasBeenSet() const { return m_conversationIdHasBeenSet; }
    inline void SetConversationId(const Aws::String& value) { m_conversationIdHasBeenSet = true; m_conversationId = value; }
    inline void SetConversationId(Aws::String&& value) { m_conversationIdHasBeenSet = true; m_conversationId = std::move(value); }
    inline void SetConversationId(const char* value) { m_conversationIdHasBeenSet = true; m_conversationId.assign(value); }
    inline ChatSyncRequest& WithConversationId(const Aws::String& value) { SetConversationId(value); return *this;}
    inline ChatSyncRequest& WithConversationId(Aws::String&& value) { SetConversationId(std::move(value)); return *this;}
    inline ChatSyncRequest& WithConversationId(const char* value) { SetConversationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the previous system message in a conversation.</p>
     */
    inline const Aws::String& GetParentMessageId() const{ return m_parentMessageId; }
    inline bool ParentMessageIdHasBeenSet() const { return m_parentMessageIdHasBeenSet; }
    inline void SetParentMessageId(const Aws::String& value) { m_parentMessageIdHasBeenSet = true; m_parentMessageId = value; }
    inline void SetParentMessageId(Aws::String&& value) { m_parentMessageIdHasBeenSet = true; m_parentMessageId = std::move(value); }
    inline void SetParentMessageId(const char* value) { m_parentMessageIdHasBeenSet = true; m_parentMessageId.assign(value); }
    inline ChatSyncRequest& WithParentMessageId(const Aws::String& value) { SetParentMessageId(value); return *this;}
    inline ChatSyncRequest& WithParentMessageId(Aws::String&& value) { SetParentMessageId(std::move(value)); return *this;}
    inline ChatSyncRequest& WithParentMessageId(const char* value) { SetParentMessageId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables filtering of Amazon Q Business web experience responses based on
     * document attributes or metadata fields.</p>
     */
    inline const AttributeFilter& GetAttributeFilter() const{ return m_attributeFilter; }
    inline bool AttributeFilterHasBeenSet() const { return m_attributeFilterHasBeenSet; }
    inline void SetAttributeFilter(const AttributeFilter& value) { m_attributeFilterHasBeenSet = true; m_attributeFilter = value; }
    inline void SetAttributeFilter(AttributeFilter&& value) { m_attributeFilterHasBeenSet = true; m_attributeFilter = std::move(value); }
    inline ChatSyncRequest& WithAttributeFilter(const AttributeFilter& value) { SetAttributeFilter(value); return *this;}
    inline ChatSyncRequest& WithAttributeFilter(AttributeFilter&& value) { SetAttributeFilter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>chatMode</code> parameter determines the chat modes available to
     * Amazon Q Business users:</p> <ul> <li> <p> <code>RETRIEVAL_MODE</code> - If you
     * choose this mode, Amazon Q generates responses solely from the data sources
     * connected and indexed by the application. If an answer is not found in the data
     * sources or there are no data sources available, Amazon Q will respond with a
     * "<i>No Answer Found</i>" message, unless LLM knowledge has been enabled. In that
     * case, Amazon Q will generate a response from the LLM knowledge</p> </li> <li>
     * <p> <code>CREATOR_MODE</code> - By selecting this mode, you can choose to
     * generate responses only from the LLM knowledge. You can also attach files and
     * have Amazon Q generate a response based on the data in those files. If the
     * attached files do not contain an answer for the query, Amazon Q will
     * automatically fall back to generating a response from the LLM knowledge.</p>
     * </li> <li> <p> <code>PLUGIN_MODE</code> - By selecting this mode, users can
     * choose to use plugins in chat to get their responses.</p> </li> </ul> 
     * <p>If none of the modes are selected, Amazon Q will only respond using the
     * information from the attached files.</p>  <p>For more information, see <a
     * href="https://docs.aws.amazon.com/amazonq/latest/qbusiness-ug/guardrails.html">Admin
     * controls and guardrails</a>, <a
     * href="https://docs.aws.amazon.com/amazonq/latest/qbusiness-ug/plugins.html">Plugins</a>,
     * and <a
     * href="https://docs.aws.amazon.com/amazonq/latest/business-use-dg/using-web-experience.html#chat-source-scope">Response
     * sources</a>.</p>
     */
    inline const ChatMode& GetChatMode() const{ return m_chatMode; }
    inline bool ChatModeHasBeenSet() const { return m_chatModeHasBeenSet; }
    inline void SetChatMode(const ChatMode& value) { m_chatModeHasBeenSet = true; m_chatMode = value; }
    inline void SetChatMode(ChatMode&& value) { m_chatModeHasBeenSet = true; m_chatMode = std::move(value); }
    inline ChatSyncRequest& WithChatMode(const ChatMode& value) { SetChatMode(value); return *this;}
    inline ChatSyncRequest& WithChatMode(ChatMode&& value) { SetChatMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The chat mode configuration for an Amazon Q Business application.</p>
     */
    inline const ChatModeConfiguration& GetChatModeConfiguration() const{ return m_chatModeConfiguration; }
    inline bool ChatModeConfigurationHasBeenSet() const { return m_chatModeConfigurationHasBeenSet; }
    inline void SetChatModeConfiguration(const ChatModeConfiguration& value) { m_chatModeConfigurationHasBeenSet = true; m_chatModeConfiguration = value; }
    inline void SetChatModeConfiguration(ChatModeConfiguration&& value) { m_chatModeConfigurationHasBeenSet = true; m_chatModeConfiguration = std::move(value); }
    inline ChatSyncRequest& WithChatModeConfiguration(const ChatModeConfiguration& value) { SetChatModeConfiguration(value); return *this;}
    inline ChatSyncRequest& WithChatModeConfiguration(ChatModeConfiguration&& value) { SetChatModeConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token that you provide to identify a chat request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline ChatSyncRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline ChatSyncRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline ChatSyncRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_userGroups;
    bool m_userGroupsHasBeenSet = false;

    Aws::String m_userMessage;
    bool m_userMessageHasBeenSet = false;

    Aws::Vector<AttachmentInput> m_attachments;
    bool m_attachmentsHasBeenSet = false;

    ActionExecution m_actionExecution;
    bool m_actionExecutionHasBeenSet = false;

    AuthChallengeResponse m_authChallengeResponse;
    bool m_authChallengeResponseHasBeenSet = false;

    Aws::String m_conversationId;
    bool m_conversationIdHasBeenSet = false;

    Aws::String m_parentMessageId;
    bool m_parentMessageIdHasBeenSet = false;

    AttributeFilter m_attributeFilter;
    bool m_attributeFilterHasBeenSet = false;

    ChatMode m_chatMode;
    bool m_chatModeHasBeenSet = false;

    ChatModeConfiguration m_chatModeConfiguration;
    bool m_chatModeConfigurationHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
