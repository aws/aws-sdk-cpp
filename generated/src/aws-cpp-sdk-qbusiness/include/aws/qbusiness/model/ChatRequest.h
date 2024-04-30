/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/QBusinessRequest.h>
#include <aws/qbusiness/model/ChatHandler.h>
#include <aws/core/utils/event/EventStreamDecoder.h>
#include <memory>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qbusiness/model/ChatInputStream.h>
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
  class ChatRequest : public QBusinessRequest
  {
  public:
    AWS_QBUSINESS_API ChatRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "Chat"; }

    inline virtual bool IsEventStreamRequest() const override { return true; }
    // SerializePayload will not be invoked.
    // This request is sent by encoding its data in event-streams which is sent as IOStream via GetBody()
    AWS_QBUSINESS_API Aws::String SerializePayload() const override { return {}; }
    AWS_QBUSINESS_API std::shared_ptr<Aws::IOStream> GetBody() const override;
    AWS_QBUSINESS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    /**
     * Underlying Event Stream Decoder.
     */
    inline Aws::Utils::Event::EventStreamDecoder& GetEventStreamDecoder() { return m_decoder; }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline const ChatHandler& GetEventStreamHandler() const { return m_handler; }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline void SetEventStreamHandler(const ChatHandler& value) { m_handler = value; m_decoder.ResetEventStreamHandler(&m_handler); }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline ChatRequest& WithEventStreamHandler(const ChatHandler& value) { SetEventStreamHandler(value); return *this; }


    /**
     * <p>The identifier of the Amazon Q Business application linked to a streaming
     * Amazon Q Business conversation.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The identifier of the Amazon Q Business application linked to a streaming
     * Amazon Q Business conversation.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Q Business application linked to a streaming
     * Amazon Q Business conversation.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The identifier of the Amazon Q Business application linked to a streaming
     * Amazon Q Business conversation.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Q Business application linked to a streaming
     * Amazon Q Business conversation.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The identifier of the Amazon Q Business application linked to a streaming
     * Amazon Q Business conversation.</p>
     */
    inline ChatRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Q Business application linked to a streaming
     * Amazon Q Business conversation.</p>
     */
    inline ChatRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Q Business application linked to a streaming
     * Amazon Q Business conversation.</p>
     */
    inline ChatRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The identifier of the user attached to the chat input. </p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>The identifier of the user attached to the chat input. </p>
     */
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }

    /**
     * <p>The identifier of the user attached to the chat input. </p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>The identifier of the user attached to the chat input. </p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p>The identifier of the user attached to the chat input. </p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>The identifier of the user attached to the chat input. </p>
     */
    inline ChatRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The identifier of the user attached to the chat input. </p>
     */
    inline ChatRequest& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the user attached to the chat input. </p>
     */
    inline ChatRequest& WithUserId(const char* value) { SetUserId(value); return *this;}


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
    inline ChatRequest& WithUserGroups(const Aws::Vector<Aws::String>& value) { SetUserGroups(value); return *this;}

    /**
     * <p>The groups that a user associated with the chat input belongs to.</p>
     */
    inline ChatRequest& WithUserGroups(Aws::Vector<Aws::String>&& value) { SetUserGroups(std::move(value)); return *this;}

    /**
     * <p>The groups that a user associated with the chat input belongs to.</p>
     */
    inline ChatRequest& AddUserGroups(const Aws::String& value) { m_userGroupsHasBeenSet = true; m_userGroups.push_back(value); return *this; }

    /**
     * <p>The groups that a user associated with the chat input belongs to.</p>
     */
    inline ChatRequest& AddUserGroups(Aws::String&& value) { m_userGroupsHasBeenSet = true; m_userGroups.push_back(std::move(value)); return *this; }

    /**
     * <p>The groups that a user associated with the chat input belongs to.</p>
     */
    inline ChatRequest& AddUserGroups(const char* value) { m_userGroupsHasBeenSet = true; m_userGroups.push_back(value); return *this; }


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
    inline ChatRequest& WithConversationId(const Aws::String& value) { SetConversationId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Q Business conversation.</p>
     */
    inline ChatRequest& WithConversationId(Aws::String&& value) { SetConversationId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Q Business conversation.</p>
     */
    inline ChatRequest& WithConversationId(const char* value) { SetConversationId(value); return *this;}


    /**
     * <p>The identifier used to associate a user message with a AI generated
     * response.</p>
     */
    inline const Aws::String& GetParentMessageId() const{ return m_parentMessageId; }

    /**
     * <p>The identifier used to associate a user message with a AI generated
     * response.</p>
     */
    inline bool ParentMessageIdHasBeenSet() const { return m_parentMessageIdHasBeenSet; }

    /**
     * <p>The identifier used to associate a user message with a AI generated
     * response.</p>
     */
    inline void SetParentMessageId(const Aws::String& value) { m_parentMessageIdHasBeenSet = true; m_parentMessageId = value; }

    /**
     * <p>The identifier used to associate a user message with a AI generated
     * response.</p>
     */
    inline void SetParentMessageId(Aws::String&& value) { m_parentMessageIdHasBeenSet = true; m_parentMessageId = std::move(value); }

    /**
     * <p>The identifier used to associate a user message with a AI generated
     * response.</p>
     */
    inline void SetParentMessageId(const char* value) { m_parentMessageIdHasBeenSet = true; m_parentMessageId.assign(value); }

    /**
     * <p>The identifier used to associate a user message with a AI generated
     * response.</p>
     */
    inline ChatRequest& WithParentMessageId(const Aws::String& value) { SetParentMessageId(value); return *this;}

    /**
     * <p>The identifier used to associate a user message with a AI generated
     * response.</p>
     */
    inline ChatRequest& WithParentMessageId(Aws::String&& value) { SetParentMessageId(std::move(value)); return *this;}

    /**
     * <p>The identifier used to associate a user message with a AI generated
     * response.</p>
     */
    inline ChatRequest& WithParentMessageId(const char* value) { SetParentMessageId(value); return *this;}


    /**
     * <p>A token that you provide to identify the chat input.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A token that you provide to identify the chat input.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A token that you provide to identify the chat input.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A token that you provide to identify the chat input.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A token that you provide to identify the chat input.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A token that you provide to identify the chat input.</p>
     */
    inline ChatRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A token that you provide to identify the chat input.</p>
     */
    inline ChatRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A token that you provide to identify the chat input.</p>
     */
    inline ChatRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The streaming input for the <code>Chat</code> API.</p>
     */
    AWS_QBUSINESS_API std::shared_ptr<ChatInputStream> GetInputStream() const { return m_inputStream; }

    /**
     * <p>The streaming input for the <code>Chat</code> API.</p>
     */
    AWS_QBUSINESS_API void SetInputStream(const std::shared_ptr<ChatInputStream>& value) { m_inputStream = value; }

    /**
     * <p>The streaming input for the <code>Chat</code> API.</p>
     */
    AWS_QBUSINESS_API ChatRequest& WithInputStream(const std::shared_ptr<ChatInputStream>& value) { SetInputStream(value); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_userGroups;
    bool m_userGroupsHasBeenSet = false;

    Aws::String m_conversationId;
    bool m_conversationIdHasBeenSet = false;

    Aws::String m_parentMessageId;
    bool m_parentMessageIdHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    std::shared_ptr<ChatInputStream> m_inputStream;
    ChatHandler m_handler;
    Aws::Utils::Event::EventStreamDecoder m_decoder;

  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
