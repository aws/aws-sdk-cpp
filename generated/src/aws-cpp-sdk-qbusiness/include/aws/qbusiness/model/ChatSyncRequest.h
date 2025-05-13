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
    AWS_QBUSINESS_API ChatSyncRequest() = default;

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
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    ChatSyncRequest& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the user attached to the chat input.</p>
     */
    inline const Aws::String& GetUserId() const { return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    template<typename UserIdT = Aws::String>
    void SetUserId(UserIdT&& value) { m_userIdHasBeenSet = true; m_userId = std::forward<UserIdT>(value); }
    template<typename UserIdT = Aws::String>
    ChatSyncRequest& WithUserId(UserIdT&& value) { SetUserId(std::forward<UserIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The group names that a user associated with the chat input belongs to.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserGroups() const { return m_userGroups; }
    inline bool UserGroupsHasBeenSet() const { return m_userGroupsHasBeenSet; }
    template<typename UserGroupsT = Aws::Vector<Aws::String>>
    void SetUserGroups(UserGroupsT&& value) { m_userGroupsHasBeenSet = true; m_userGroups = std::forward<UserGroupsT>(value); }
    template<typename UserGroupsT = Aws::Vector<Aws::String>>
    ChatSyncRequest& WithUserGroups(UserGroupsT&& value) { SetUserGroups(std::forward<UserGroupsT>(value)); return *this;}
    template<typename UserGroupsT = Aws::String>
    ChatSyncRequest& AddUserGroups(UserGroupsT&& value) { m_userGroupsHasBeenSet = true; m_userGroups.emplace_back(std::forward<UserGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A end user message in a conversation.</p>
     */
    inline const Aws::String& GetUserMessage() const { return m_userMessage; }
    inline bool UserMessageHasBeenSet() const { return m_userMessageHasBeenSet; }
    template<typename UserMessageT = Aws::String>
    void SetUserMessage(UserMessageT&& value) { m_userMessageHasBeenSet = true; m_userMessage = std::forward<UserMessageT>(value); }
    template<typename UserMessageT = Aws::String>
    ChatSyncRequest& WithUserMessage(UserMessageT&& value) { SetUserMessage(std::forward<UserMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of files uploaded directly during chat. You can upload a maximum of 5
     * files of upto 10 MB each.</p>
     */
    inline const Aws::Vector<AttachmentInput>& GetAttachments() const { return m_attachments; }
    inline bool AttachmentsHasBeenSet() const { return m_attachmentsHasBeenSet; }
    template<typename AttachmentsT = Aws::Vector<AttachmentInput>>
    void SetAttachments(AttachmentsT&& value) { m_attachmentsHasBeenSet = true; m_attachments = std::forward<AttachmentsT>(value); }
    template<typename AttachmentsT = Aws::Vector<AttachmentInput>>
    ChatSyncRequest& WithAttachments(AttachmentsT&& value) { SetAttachments(std::forward<AttachmentsT>(value)); return *this;}
    template<typename AttachmentsT = AttachmentInput>
    ChatSyncRequest& AddAttachments(AttachmentsT&& value) { m_attachmentsHasBeenSet = true; m_attachments.emplace_back(std::forward<AttachmentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A request from an end user to perform an Amazon Q Business plugin action.</p>
     */
    inline const ActionExecution& GetActionExecution() const { return m_actionExecution; }
    inline bool ActionExecutionHasBeenSet() const { return m_actionExecutionHasBeenSet; }
    template<typename ActionExecutionT = ActionExecution>
    void SetActionExecution(ActionExecutionT&& value) { m_actionExecutionHasBeenSet = true; m_actionExecution = std::forward<ActionExecutionT>(value); }
    template<typename ActionExecutionT = ActionExecution>
    ChatSyncRequest& WithActionExecution(ActionExecutionT&& value) { SetActionExecution(std::forward<ActionExecutionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An authentication verification event response by a third party authentication
     * server to Amazon Q Business.</p>
     */
    inline const AuthChallengeResponse& GetAuthChallengeResponse() const { return m_authChallengeResponse; }
    inline bool AuthChallengeResponseHasBeenSet() const { return m_authChallengeResponseHasBeenSet; }
    template<typename AuthChallengeResponseT = AuthChallengeResponse>
    void SetAuthChallengeResponse(AuthChallengeResponseT&& value) { m_authChallengeResponseHasBeenSet = true; m_authChallengeResponse = std::forward<AuthChallengeResponseT>(value); }
    template<typename AuthChallengeResponseT = AuthChallengeResponse>
    ChatSyncRequest& WithAuthChallengeResponse(AuthChallengeResponseT&& value) { SetAuthChallengeResponse(std::forward<AuthChallengeResponseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon Q Business conversation.</p>
     */
    inline const Aws::String& GetConversationId() const { return m_conversationId; }
    inline bool ConversationIdHasBeenSet() const { return m_conversationIdHasBeenSet; }
    template<typename ConversationIdT = Aws::String>
    void SetConversationId(ConversationIdT&& value) { m_conversationIdHasBeenSet = true; m_conversationId = std::forward<ConversationIdT>(value); }
    template<typename ConversationIdT = Aws::String>
    ChatSyncRequest& WithConversationId(ConversationIdT&& value) { SetConversationId(std::forward<ConversationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the previous system message in a conversation.</p>
     */
    inline const Aws::String& GetParentMessageId() const { return m_parentMessageId; }
    inline bool ParentMessageIdHasBeenSet() const { return m_parentMessageIdHasBeenSet; }
    template<typename ParentMessageIdT = Aws::String>
    void SetParentMessageId(ParentMessageIdT&& value) { m_parentMessageIdHasBeenSet = true; m_parentMessageId = std::forward<ParentMessageIdT>(value); }
    template<typename ParentMessageIdT = Aws::String>
    ChatSyncRequest& WithParentMessageId(ParentMessageIdT&& value) { SetParentMessageId(std::forward<ParentMessageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables filtering of Amazon Q Business web experience responses based on
     * document attributes or metadata fields.</p>
     */
    inline const AttributeFilter& GetAttributeFilter() const { return m_attributeFilter; }
    inline bool AttributeFilterHasBeenSet() const { return m_attributeFilterHasBeenSet; }
    template<typename AttributeFilterT = AttributeFilter>
    void SetAttributeFilter(AttributeFilterT&& value) { m_attributeFilterHasBeenSet = true; m_attributeFilter = std::forward<AttributeFilterT>(value); }
    template<typename AttributeFilterT = AttributeFilter>
    ChatSyncRequest& WithAttributeFilter(AttributeFilterT&& value) { SetAttributeFilter(std::forward<AttributeFilterT>(value)); return *this;}
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
    inline ChatMode GetChatMode() const { return m_chatMode; }
    inline bool ChatModeHasBeenSet() const { return m_chatModeHasBeenSet; }
    inline void SetChatMode(ChatMode value) { m_chatModeHasBeenSet = true; m_chatMode = value; }
    inline ChatSyncRequest& WithChatMode(ChatMode value) { SetChatMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The chat mode configuration for an Amazon Q Business application.</p>
     */
    inline const ChatModeConfiguration& GetChatModeConfiguration() const { return m_chatModeConfiguration; }
    inline bool ChatModeConfigurationHasBeenSet() const { return m_chatModeConfigurationHasBeenSet; }
    template<typename ChatModeConfigurationT = ChatModeConfiguration>
    void SetChatModeConfiguration(ChatModeConfigurationT&& value) { m_chatModeConfigurationHasBeenSet = true; m_chatModeConfiguration = std::forward<ChatModeConfigurationT>(value); }
    template<typename ChatModeConfigurationT = ChatModeConfiguration>
    ChatSyncRequest& WithChatModeConfiguration(ChatModeConfigurationT&& value) { SetChatModeConfiguration(std::forward<ChatModeConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token that you provide to identify a chat request.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    ChatSyncRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
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

    ChatMode m_chatMode{ChatMode::NOT_SET};
    bool m_chatModeHasBeenSet = false;

    ChatModeConfiguration m_chatModeConfiguration;
    bool m_chatModeConfigurationHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
