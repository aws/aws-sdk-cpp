/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>An output event for an AI-generated response in an Amazon Q Business web
   * experience.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/TextOutputEvent">AWS
   * API Reference</a></p>
   */
  class TextOutputEvent
  {
  public:
    AWS_QBUSINESS_API TextOutputEvent();
    AWS_QBUSINESS_API TextOutputEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API TextOutputEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the conversation with which the text output event is
     * associated.</p>
     */
    inline const Aws::String& GetConversationId() const{ return m_conversationId; }
    inline bool ConversationIdHasBeenSet() const { return m_conversationIdHasBeenSet; }
    inline void SetConversationId(const Aws::String& value) { m_conversationIdHasBeenSet = true; m_conversationId = value; }
    inline void SetConversationId(Aws::String&& value) { m_conversationIdHasBeenSet = true; m_conversationId = std::move(value); }
    inline void SetConversationId(const char* value) { m_conversationIdHasBeenSet = true; m_conversationId.assign(value); }
    inline TextOutputEvent& WithConversationId(const Aws::String& value) { SetConversationId(value); return *this;}
    inline TextOutputEvent& WithConversationId(Aws::String&& value) { SetConversationId(std::move(value)); return *this;}
    inline TextOutputEvent& WithConversationId(const char* value) { SetConversationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of an end user message in a <code>TextOutputEvent</code>.</p>
     */
    inline const Aws::String& GetUserMessageId() const{ return m_userMessageId; }
    inline bool UserMessageIdHasBeenSet() const { return m_userMessageIdHasBeenSet; }
    inline void SetUserMessageId(const Aws::String& value) { m_userMessageIdHasBeenSet = true; m_userMessageId = value; }
    inline void SetUserMessageId(Aws::String&& value) { m_userMessageIdHasBeenSet = true; m_userMessageId = std::move(value); }
    inline void SetUserMessageId(const char* value) { m_userMessageIdHasBeenSet = true; m_userMessageId.assign(value); }
    inline TextOutputEvent& WithUserMessageId(const Aws::String& value) { SetUserMessageId(value); return *this;}
    inline TextOutputEvent& WithUserMessageId(Aws::String&& value) { SetUserMessageId(std::move(value)); return *this;}
    inline TextOutputEvent& WithUserMessageId(const char* value) { SetUserMessageId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of an AI-generated message in a
     * <code>TextOutputEvent</code>.</p>
     */
    inline const Aws::String& GetSystemMessageId() const{ return m_systemMessageId; }
    inline bool SystemMessageIdHasBeenSet() const { return m_systemMessageIdHasBeenSet; }
    inline void SetSystemMessageId(const Aws::String& value) { m_systemMessageIdHasBeenSet = true; m_systemMessageId = value; }
    inline void SetSystemMessageId(Aws::String&& value) { m_systemMessageIdHasBeenSet = true; m_systemMessageId = std::move(value); }
    inline void SetSystemMessageId(const char* value) { m_systemMessageIdHasBeenSet = true; m_systemMessageId.assign(value); }
    inline TextOutputEvent& WithSystemMessageId(const Aws::String& value) { SetSystemMessageId(value); return *this;}
    inline TextOutputEvent& WithSystemMessageId(Aws::String&& value) { SetSystemMessageId(std::move(value)); return *this;}
    inline TextOutputEvent& WithSystemMessageId(const char* value) { SetSystemMessageId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An AI-generated message in a <code>TextOutputEvent</code>.</p>
     */
    inline const Aws::String& GetSystemMessage() const{ return m_systemMessage; }
    inline bool SystemMessageHasBeenSet() const { return m_systemMessageHasBeenSet; }
    inline void SetSystemMessage(const Aws::String& value) { m_systemMessageHasBeenSet = true; m_systemMessage = value; }
    inline void SetSystemMessage(Aws::String&& value) { m_systemMessageHasBeenSet = true; m_systemMessage = std::move(value); }
    inline void SetSystemMessage(const char* value) { m_systemMessageHasBeenSet = true; m_systemMessage.assign(value); }
    inline TextOutputEvent& WithSystemMessage(const Aws::String& value) { SetSystemMessage(value); return *this;}
    inline TextOutputEvent& WithSystemMessage(Aws::String&& value) { SetSystemMessage(std::move(value)); return *this;}
    inline TextOutputEvent& WithSystemMessage(const char* value) { SetSystemMessage(value); return *this;}
    ///@}
  private:

    Aws::String m_conversationId;
    bool m_conversationIdHasBeenSet = false;

    Aws::String m_userMessageId;
    bool m_userMessageIdHasBeenSet = false;

    Aws::String m_systemMessageId;
    bool m_systemMessageIdHasBeenSet = false;

    Aws::String m_systemMessage;
    bool m_systemMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
