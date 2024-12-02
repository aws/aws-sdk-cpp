/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/QConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/ConversationContext.h>
#include <aws/qconnect/model/MessageInput.h>
#include <aws/qconnect/model/MessageType.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace QConnect
{
namespace Model
{

  /**
   */
  class SendMessageRequest : public QConnectRequest
  {
  public:
    AWS_QCONNECT_API SendMessageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendMessage"; }

    AWS_QCONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Q in Connect assistant.</p>
     */
    inline const Aws::String& GetAssistantId() const{ return m_assistantId; }
    inline bool AssistantIdHasBeenSet() const { return m_assistantIdHasBeenSet; }
    inline void SetAssistantId(const Aws::String& value) { m_assistantIdHasBeenSet = true; m_assistantId = value; }
    inline void SetAssistantId(Aws::String&& value) { m_assistantIdHasBeenSet = true; m_assistantId = std::move(value); }
    inline void SetAssistantId(const char* value) { m_assistantIdHasBeenSet = true; m_assistantId.assign(value); }
    inline SendMessageRequest& WithAssistantId(const Aws::String& value) { SetAssistantId(value); return *this;}
    inline SendMessageRequest& WithAssistantId(Aws::String&& value) { SetAssistantId(std::move(value)); return *this;}
    inline SendMessageRequest& WithAssistantId(const char* value) { SetAssistantId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the AWS SDK populates this
     * field.For more information about idempotency, see Making retries safe with
     * idempotent APIs.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline SendMessageRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline SendMessageRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline SendMessageRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The conversation context before the Amazon Q in Connect session.</p>
     */
    inline const ConversationContext& GetConversationContext() const{ return m_conversationContext; }
    inline bool ConversationContextHasBeenSet() const { return m_conversationContextHasBeenSet; }
    inline void SetConversationContext(const ConversationContext& value) { m_conversationContextHasBeenSet = true; m_conversationContext = value; }
    inline void SetConversationContext(ConversationContext&& value) { m_conversationContextHasBeenSet = true; m_conversationContext = std::move(value); }
    inline SendMessageRequest& WithConversationContext(const ConversationContext& value) { SetConversationContext(value); return *this;}
    inline SendMessageRequest& WithConversationContext(ConversationContext&& value) { SetConversationContext(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message data to submit to the Amazon Q in Connect session.</p>
     */
    inline const MessageInput& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const MessageInput& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(MessageInput&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline SendMessageRequest& WithMessage(const MessageInput& value) { SetMessage(value); return *this;}
    inline SendMessageRequest& WithMessage(MessageInput&& value) { SetMessage(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon Q in Connect session.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }
    inline SendMessageRequest& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}
    inline SendMessageRequest& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}
    inline SendMessageRequest& WithSessionId(const char* value) { SetSessionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message type.</p>
     */
    inline const MessageType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const MessageType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(MessageType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline SendMessageRequest& WithType(const MessageType& value) { SetType(value); return *this;}
    inline SendMessageRequest& WithType(MessageType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_assistantId;
    bool m_assistantIdHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    ConversationContext m_conversationContext;
    bool m_conversationContextHasBeenSet = false;

    MessageInput m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    MessageType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
