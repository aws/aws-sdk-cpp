/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchmemory/OpenSearchMemory_EXPORTS.h>
#include <aws/opensearchmemory/model/UnifiedConversational.h>

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
 * <p>Conversational content. Exactly one member is set.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchmemory-2026-08-24/ConversationalPayload">AWS
 * API Reference</a></p>
 */
class ConversationalPayload {
 public:
  AWS_OPENSEARCHMEMORY_API ConversationalPayload() = default;
  AWS_OPENSEARCHMEMORY_API ConversationalPayload(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHMEMORY_API ConversationalPayload& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHMEMORY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Conversation turns in the service's own format.</p>
   */
  inline const UnifiedConversational& GetUnified() const { return m_unified; }
  inline bool UnifiedHasBeenSet() const { return m_unifiedHasBeenSet; }
  template <typename UnifiedT = UnifiedConversational>
  void SetUnified(UnifiedT&& value) {
    m_unifiedHasBeenSet = true;
    m_unified = std::forward<UnifiedT>(value);
  }
  template <typename UnifiedT = UnifiedConversational>
  ConversationalPayload& WithUnified(UnifiedT&& value) {
    SetUnified(std::forward<UnifiedT>(value));
    return *this;
  }
  ///@}
 private:
  UnifiedConversational m_unified;
  bool m_unifiedHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
