/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearchmemory/OpenSearchMemory_EXPORTS.h>
#include <aws/opensearchmemory/model/Message.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace OpenSearchMemory {
namespace Model {

/**
 * <p>Conversation turns.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchmemory-2026-08-24/UnifiedConversationalObject">AWS
 * API Reference</a></p>
 */
class UnifiedConversationalObject {
 public:
  AWS_OPENSEARCHMEMORY_API UnifiedConversationalObject() = default;
  AWS_OPENSEARCHMEMORY_API UnifiedConversationalObject(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHMEMORY_API UnifiedConversationalObject& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHMEMORY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The conversation turns, in order. The order matters for extraction.</p>
   */
  inline const Aws::Vector<Message>& GetMessages() const { return m_messages; }
  inline bool MessagesHasBeenSet() const { return m_messagesHasBeenSet; }
  template <typename MessagesT = Aws::Vector<Message>>
  void SetMessages(MessagesT&& value) {
    m_messagesHasBeenSet = true;
    m_messages = std::forward<MessagesT>(value);
  }
  template <typename MessagesT = Aws::Vector<Message>>
  UnifiedConversationalObject& WithMessages(MessagesT&& value) {
    SetMessages(std::forward<MessagesT>(value));
    return *this;
  }
  template <typename MessagesT = Message>
  UnifiedConversationalObject& AddMessages(MessagesT&& value) {
    m_messagesHasBeenSet = true;
    m_messages.emplace_back(std::forward<MessagesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Message> m_messages;
  bool m_messagesHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
