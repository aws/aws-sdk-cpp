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


    /**
     * <p>The identifier of the Amazon Q Business application linked to the Amazon Q
     * Business conversation.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The identifier of the Amazon Q Business application linked to the Amazon Q
     * Business conversation.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Q Business application linked to the Amazon Q
     * Business conversation.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The identifier of the Amazon Q Business application linked to the Amazon Q
     * Business conversation.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Q Business application linked to the Amazon Q
     * Business conversation.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The identifier of the Amazon Q Business application linked to the Amazon Q
     * Business conversation.</p>
     */
    inline ChatSyncRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Q Business application linked to the Amazon Q
     * Business conversation.</p>
     */
    inline ChatSyncRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Q Business application linked to the Amazon Q
     * Business conversation.</p>
     */
    inline ChatSyncRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


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
     * <p>A request from an end user to perform an Amazon Q Business plugin action.</p>
     */
    inline const ActionExecution& GetActionExecution() const{ return m_actionExecution; }

    /**
     * <p>A request from an end user to perform an Amazon Q Business plugin action.</p>
     */
    inline bool ActionExecutionHasBeenSet() const { return m_actionExecutionHasBeenSet; }

    /**
     * <p>A request from an end user to perform an Amazon Q Business plugin action.</p>
     */
    inline void SetActionExecution(const ActionExecution& value) { m_actionExecutionHasBeenSet = true; m_actionExecution = value; }

    /**
     * <p>A request from an end user to perform an Amazon Q Business plugin action.</p>
     */
    inline void SetActionExecution(ActionExecution&& value) { m_actionExecutionHasBeenSet = true; m_actionExecution = std::move(value); }

    /**
     * <p>A request from an end user to perform an Amazon Q Business plugin action.</p>
     */
    inline ChatSyncRequest& WithActionExecution(const ActionExecution& value) { SetActionExecution(value); return *this;}

    /**
     * <p>A request from an end user to perform an Amazon Q Business plugin action.</p>
     */
    inline ChatSyncRequest& WithActionExecution(ActionExecution&& value) { SetActionExecution(std::move(value)); return *this;}


    /**
     * <p>An authentication verification event response by a third party authentication
     * server to Amazon Q Business.</p>
     */
    inline const AuthChallengeResponse& GetAuthChallengeResponse() const{ return m_authChallengeResponse; }

    /**
     * <p>An authentication verification event response by a third party authentication
     * server to Amazon Q Business.</p>
     */
    inline bool AuthChallengeResponseHasBeenSet() const { return m_authChallengeResponseHasBeenSet; }

    /**
     * <p>An authentication verification event response by a third party authentication
     * server to Amazon Q Business.</p>
     */
    inline void SetAuthChallengeResponse(const AuthChallengeResponse& value) { m_authChallengeResponseHasBeenSet = true; m_authChallengeResponse = value; }

    /**
     * <p>An authentication verification event response by a third party authentication
     * server to Amazon Q Business.</p>
     */
    inline void SetAuthChallengeResponse(AuthChallengeResponse&& value) { m_authChallengeResponseHasBeenSet = true; m_authChallengeResponse = std::move(value); }

    /**
     * <p>An authentication verification event response by a third party authentication
     * server to Amazon Q Business.</p>
     */
    inline ChatSyncRequest& WithAuthChallengeResponse(const AuthChallengeResponse& value) { SetAuthChallengeResponse(value); return *this;}

    /**
     * <p>An authentication verification event response by a third party authentication
     * server to Amazon Q Business.</p>
     */
    inline ChatSyncRequest& WithAuthChallengeResponse(AuthChallengeResponse&& value) { SetAuthChallengeResponse(std::move(value)); return *this;}


    /**
     * <p>The identifier of the Amazon Q Business conversation.</p>
     */
    inline const Aws::String& GetConversationId() const{ return m_conversationId; }

    /**
     * <p>The identifier of the Amazon Q Business conversation.</p>
     */
    inline bool ConversationIdHasBeenSet() const { return m_conversationIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Q Business conversation.</p>
     */
    inline void SetConversationId(const Aws::String& value) { m_conversationIdHasBeenSet = true; m_conversationId = value; }

    /**
     * <p>The identifier of the Amazon Q Business conversation.</p>
     */
    inline void SetConversationId(Aws::String&& value) { m_conversationIdHasBeenSet = true; m_conversationId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Q Business conversation.</p>
     */
    inline void SetConversationId(const char* value) { m_conversationIdHasBeenSet = true; m_conversationId.assign(value); }

    /**
     * <p>The identifier of the Amazon Q Business conversation.</p>
     */
    inline ChatSyncRequest& WithConversationId(const Aws::String& value) { SetConversationId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Q Business conversation.</p>
     */
    inline ChatSyncRequest& WithConversationId(Aws::String&& value) { SetConversationId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Q Business conversation.</p>
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
     * <p>Enables filtering of Amazon Q Business web experience responses based on
     * document attributes or metadata fields.</p>
     */
    inline const AttributeFilter& GetAttributeFilter() const{ return m_attributeFilter; }

    /**
     * <p>Enables filtering of Amazon Q Business web experience responses based on
     * document attributes or metadata fields.</p>
     */
    inline bool AttributeFilterHasBeenSet() const { return m_attributeFilterHasBeenSet; }

    /**
     * <p>Enables filtering of Amazon Q Business web experience responses based on
     * document attributes or metadata fields.</p>
     */
    inline void SetAttributeFilter(const AttributeFilter& value) { m_attributeFilterHasBeenSet = true; m_attributeFilter = value; }

    /**
     * <p>Enables filtering of Amazon Q Business web experience responses based on
     * document attributes or metadata fields.</p>
     */
    inline void SetAttributeFilter(AttributeFilter&& value) { m_attributeFilterHasBeenSet = true; m_attributeFilter = std::move(value); }

    /**
     * <p>Enables filtering of Amazon Q Business web experience responses based on
     * document attributes or metadata fields.</p>
     */
    inline ChatSyncRequest& WithAttributeFilter(const AttributeFilter& value) { SetAttributeFilter(value); return *this;}

    /**
     * <p>Enables filtering of Amazon Q Business web experience responses based on
     * document attributes or metadata fields.</p>
     */
    inline ChatSyncRequest& WithAttributeFilter(AttributeFilter&& value) { SetAttributeFilter(std::move(value)); return *this;}


    /**
     * <p>The chat modes available to an Amazon Q Business end user.</p> <ul> <li> <p>
     * <code>RETRIEVAL_MODE</code> - The default chat mode for an Amazon Q Business
     * application. When this mode is enabled, Amazon Q Business generates responses
     * only from data sources connected to an Amazon Q Business application.</p> </li>
     * <li> <p> <code>CREATOR_MODE</code> - By selecting this mode, users can choose to
     * generate responses only from the LLM knowledge, without consulting connected
     * data sources, for a chat request.</p> </li> <li> <p> <code>PLUGIN_MODE</code> -
     * By selecting this mode, users can choose to use plugins in chat.</p> </li> </ul>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/amazonq/latest/qbusiness-ug/guardrails.html">Admin
     * controls and guardrails</a>, <a
     * href="https://docs.aws.amazon.com/amazonq/latest/qbusiness-ug/plugins.html">Plugins</a>,
     * and <a
     * href="https://docs.aws.amazon.com/amazonq/latest/business-use-dg/using-web-experience.html#chat-source-scope">Conversation
     * settings</a>.</p>
     */
    inline const ChatMode& GetChatMode() const{ return m_chatMode; }

    /**
     * <p>The chat modes available to an Amazon Q Business end user.</p> <ul> <li> <p>
     * <code>RETRIEVAL_MODE</code> - The default chat mode for an Amazon Q Business
     * application. When this mode is enabled, Amazon Q Business generates responses
     * only from data sources connected to an Amazon Q Business application.</p> </li>
     * <li> <p> <code>CREATOR_MODE</code> - By selecting this mode, users can choose to
     * generate responses only from the LLM knowledge, without consulting connected
     * data sources, for a chat request.</p> </li> <li> <p> <code>PLUGIN_MODE</code> -
     * By selecting this mode, users can choose to use plugins in chat.</p> </li> </ul>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/amazonq/latest/qbusiness-ug/guardrails.html">Admin
     * controls and guardrails</a>, <a
     * href="https://docs.aws.amazon.com/amazonq/latest/qbusiness-ug/plugins.html">Plugins</a>,
     * and <a
     * href="https://docs.aws.amazon.com/amazonq/latest/business-use-dg/using-web-experience.html#chat-source-scope">Conversation
     * settings</a>.</p>
     */
    inline bool ChatModeHasBeenSet() const { return m_chatModeHasBeenSet; }

    /**
     * <p>The chat modes available to an Amazon Q Business end user.</p> <ul> <li> <p>
     * <code>RETRIEVAL_MODE</code> - The default chat mode for an Amazon Q Business
     * application. When this mode is enabled, Amazon Q Business generates responses
     * only from data sources connected to an Amazon Q Business application.</p> </li>
     * <li> <p> <code>CREATOR_MODE</code> - By selecting this mode, users can choose to
     * generate responses only from the LLM knowledge, without consulting connected
     * data sources, for a chat request.</p> </li> <li> <p> <code>PLUGIN_MODE</code> -
     * By selecting this mode, users can choose to use plugins in chat.</p> </li> </ul>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/amazonq/latest/qbusiness-ug/guardrails.html">Admin
     * controls and guardrails</a>, <a
     * href="https://docs.aws.amazon.com/amazonq/latest/qbusiness-ug/plugins.html">Plugins</a>,
     * and <a
     * href="https://docs.aws.amazon.com/amazonq/latest/business-use-dg/using-web-experience.html#chat-source-scope">Conversation
     * settings</a>.</p>
     */
    inline void SetChatMode(const ChatMode& value) { m_chatModeHasBeenSet = true; m_chatMode = value; }

    /**
     * <p>The chat modes available to an Amazon Q Business end user.</p> <ul> <li> <p>
     * <code>RETRIEVAL_MODE</code> - The default chat mode for an Amazon Q Business
     * application. When this mode is enabled, Amazon Q Business generates responses
     * only from data sources connected to an Amazon Q Business application.</p> </li>
     * <li> <p> <code>CREATOR_MODE</code> - By selecting this mode, users can choose to
     * generate responses only from the LLM knowledge, without consulting connected
     * data sources, for a chat request.</p> </li> <li> <p> <code>PLUGIN_MODE</code> -
     * By selecting this mode, users can choose to use plugins in chat.</p> </li> </ul>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/amazonq/latest/qbusiness-ug/guardrails.html">Admin
     * controls and guardrails</a>, <a
     * href="https://docs.aws.amazon.com/amazonq/latest/qbusiness-ug/plugins.html">Plugins</a>,
     * and <a
     * href="https://docs.aws.amazon.com/amazonq/latest/business-use-dg/using-web-experience.html#chat-source-scope">Conversation
     * settings</a>.</p>
     */
    inline void SetChatMode(ChatMode&& value) { m_chatModeHasBeenSet = true; m_chatMode = std::move(value); }

    /**
     * <p>The chat modes available to an Amazon Q Business end user.</p> <ul> <li> <p>
     * <code>RETRIEVAL_MODE</code> - The default chat mode for an Amazon Q Business
     * application. When this mode is enabled, Amazon Q Business generates responses
     * only from data sources connected to an Amazon Q Business application.</p> </li>
     * <li> <p> <code>CREATOR_MODE</code> - By selecting this mode, users can choose to
     * generate responses only from the LLM knowledge, without consulting connected
     * data sources, for a chat request.</p> </li> <li> <p> <code>PLUGIN_MODE</code> -
     * By selecting this mode, users can choose to use plugins in chat.</p> </li> </ul>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/amazonq/latest/qbusiness-ug/guardrails.html">Admin
     * controls and guardrails</a>, <a
     * href="https://docs.aws.amazon.com/amazonq/latest/qbusiness-ug/plugins.html">Plugins</a>,
     * and <a
     * href="https://docs.aws.amazon.com/amazonq/latest/business-use-dg/using-web-experience.html#chat-source-scope">Conversation
     * settings</a>.</p>
     */
    inline ChatSyncRequest& WithChatMode(const ChatMode& value) { SetChatMode(value); return *this;}

    /**
     * <p>The chat modes available to an Amazon Q Business end user.</p> <ul> <li> <p>
     * <code>RETRIEVAL_MODE</code> - The default chat mode for an Amazon Q Business
     * application. When this mode is enabled, Amazon Q Business generates responses
     * only from data sources connected to an Amazon Q Business application.</p> </li>
     * <li> <p> <code>CREATOR_MODE</code> - By selecting this mode, users can choose to
     * generate responses only from the LLM knowledge, without consulting connected
     * data sources, for a chat request.</p> </li> <li> <p> <code>PLUGIN_MODE</code> -
     * By selecting this mode, users can choose to use plugins in chat.</p> </li> </ul>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/amazonq/latest/qbusiness-ug/guardrails.html">Admin
     * controls and guardrails</a>, <a
     * href="https://docs.aws.amazon.com/amazonq/latest/qbusiness-ug/plugins.html">Plugins</a>,
     * and <a
     * href="https://docs.aws.amazon.com/amazonq/latest/business-use-dg/using-web-experience.html#chat-source-scope">Conversation
     * settings</a>.</p>
     */
    inline ChatSyncRequest& WithChatMode(ChatMode&& value) { SetChatMode(std::move(value)); return *this;}


    /**
     * <p>The chat mode configuration for an Amazon Q Business application.</p>
     */
    inline const ChatModeConfiguration& GetChatModeConfiguration() const{ return m_chatModeConfiguration; }

    /**
     * <p>The chat mode configuration for an Amazon Q Business application.</p>
     */
    inline bool ChatModeConfigurationHasBeenSet() const { return m_chatModeConfigurationHasBeenSet; }

    /**
     * <p>The chat mode configuration for an Amazon Q Business application.</p>
     */
    inline void SetChatModeConfiguration(const ChatModeConfiguration& value) { m_chatModeConfigurationHasBeenSet = true; m_chatModeConfiguration = value; }

    /**
     * <p>The chat mode configuration for an Amazon Q Business application.</p>
     */
    inline void SetChatModeConfiguration(ChatModeConfiguration&& value) { m_chatModeConfigurationHasBeenSet = true; m_chatModeConfiguration = std::move(value); }

    /**
     * <p>The chat mode configuration for an Amazon Q Business application.</p>
     */
    inline ChatSyncRequest& WithChatModeConfiguration(const ChatModeConfiguration& value) { SetChatModeConfiguration(value); return *this;}

    /**
     * <p>The chat mode configuration for an Amazon Q Business application.</p>
     */
    inline ChatSyncRequest& WithChatModeConfiguration(ChatModeConfiguration&& value) { SetChatModeConfiguration(std::move(value)); return *this;}


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
