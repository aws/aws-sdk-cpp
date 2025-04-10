/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/model/SystemMessageType.h>
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
    AWS_QBUSINESS_API TextOutputEvent() = default;
    AWS_QBUSINESS_API TextOutputEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API TextOutputEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of AI-generated message in a <code>TextOutputEvent</code>. Amazon Q
     * Business currently supports two types of messages:</p> <ul> <li> <p>
     * <code>RESPONSE</code> - The Amazon Q Business system response.</p> </li> <li>
     * <p> <code>GROUNDED_RESPONSE</code> - The corrected, hallucination-reduced,
     * response returned by Amazon Q Business. Available only if hallucination
     * reduction is supported and configured for the application and detected in the
     * end user chat query by Amazon Q Business.</p> </li> </ul>
     */
    inline SystemMessageType GetSystemMessageType() const { return m_systemMessageType; }
    inline bool SystemMessageTypeHasBeenSet() const { return m_systemMessageTypeHasBeenSet; }
    inline void SetSystemMessageType(SystemMessageType value) { m_systemMessageTypeHasBeenSet = true; m_systemMessageType = value; }
    inline TextOutputEvent& WithSystemMessageType(SystemMessageType value) { SetSystemMessageType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the conversation with which the text output event is
     * associated.</p>
     */
    inline const Aws::String& GetConversationId() const { return m_conversationId; }
    inline bool ConversationIdHasBeenSet() const { return m_conversationIdHasBeenSet; }
    template<typename ConversationIdT = Aws::String>
    void SetConversationId(ConversationIdT&& value) { m_conversationIdHasBeenSet = true; m_conversationId = std::forward<ConversationIdT>(value); }
    template<typename ConversationIdT = Aws::String>
    TextOutputEvent& WithConversationId(ConversationIdT&& value) { SetConversationId(std::forward<ConversationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of an end user message in a <code>TextOutputEvent</code>.</p>
     */
    inline const Aws::String& GetUserMessageId() const { return m_userMessageId; }
    inline bool UserMessageIdHasBeenSet() const { return m_userMessageIdHasBeenSet; }
    template<typename UserMessageIdT = Aws::String>
    void SetUserMessageId(UserMessageIdT&& value) { m_userMessageIdHasBeenSet = true; m_userMessageId = std::forward<UserMessageIdT>(value); }
    template<typename UserMessageIdT = Aws::String>
    TextOutputEvent& WithUserMessageId(UserMessageIdT&& value) { SetUserMessageId(std::forward<UserMessageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of an AI-generated message in a
     * <code>TextOutputEvent</code>.</p>
     */
    inline const Aws::String& GetSystemMessageId() const { return m_systemMessageId; }
    inline bool SystemMessageIdHasBeenSet() const { return m_systemMessageIdHasBeenSet; }
    template<typename SystemMessageIdT = Aws::String>
    void SetSystemMessageId(SystemMessageIdT&& value) { m_systemMessageIdHasBeenSet = true; m_systemMessageId = std::forward<SystemMessageIdT>(value); }
    template<typename SystemMessageIdT = Aws::String>
    TextOutputEvent& WithSystemMessageId(SystemMessageIdT&& value) { SetSystemMessageId(std::forward<SystemMessageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An AI-generated message in a <code>TextOutputEvent</code>.</p>
     */
    inline const Aws::String& GetSystemMessage() const { return m_systemMessage; }
    inline bool SystemMessageHasBeenSet() const { return m_systemMessageHasBeenSet; }
    template<typename SystemMessageT = Aws::String>
    void SetSystemMessage(SystemMessageT&& value) { m_systemMessageHasBeenSet = true; m_systemMessage = std::forward<SystemMessageT>(value); }
    template<typename SystemMessageT = Aws::String>
    TextOutputEvent& WithSystemMessage(SystemMessageT&& value) { SetSystemMessage(std::forward<SystemMessageT>(value)); return *this;}
    ///@}
  private:

    SystemMessageType m_systemMessageType{SystemMessageType::NOT_SET};
    bool m_systemMessageTypeHasBeenSet = false;

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
