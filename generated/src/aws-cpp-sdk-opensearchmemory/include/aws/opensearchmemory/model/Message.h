/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchmemory/OpenSearchMemory_EXPORTS.h>
#include <aws/opensearchmemory/model/MessageContent.h>
#include <aws/opensearchmemory/model/MessageRole.h>

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
 * <p>A conversation turn.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchmemory-2026-08-24/Message">AWS
 * API Reference</a></p>
 */
class Message {
 public:
  AWS_OPENSEARCHMEMORY_API Message() = default;
  AWS_OPENSEARCHMEMORY_API Message(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHMEMORY_API Message& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHMEMORY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The author of the turn.</p>
   */
  inline MessageRole GetRole() const { return m_role; }
  inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
  inline void SetRole(MessageRole value) {
    m_roleHasBeenSet = true;
    m_role = value;
  }
  inline Message& WithRole(MessageRole value) {
    SetRole(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The content of the turn.</p>
   */
  inline const MessageContent& GetContent() const { return m_content; }
  inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
  template <typename ContentT = MessageContent>
  void SetContent(ContentT&& value) {
    m_contentHasBeenSet = true;
    m_content = std::forward<ContentT>(value);
  }
  template <typename ContentT = MessageContent>
  Message& WithContent(ContentT&& value) {
    SetContent(std::forward<ContentT>(value));
    return *this;
  }
  ///@}
 private:
  MessageRole m_role{MessageRole::NOT_SET};

  MessageContent m_content;
  bool m_roleHasBeenSet = false;
  bool m_contentHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
