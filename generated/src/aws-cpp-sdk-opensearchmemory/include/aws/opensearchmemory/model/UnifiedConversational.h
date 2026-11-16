/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchmemory/OpenSearchMemory_EXPORTS.h>
#include <aws/opensearchmemory/model/UnifiedConversationalSource.h>

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
 * <p>Conversation turns in the service's own format.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchmemory-2026-08-24/UnifiedConversational">AWS
 * API Reference</a></p>
 */
class UnifiedConversational {
 public:
  AWS_OPENSEARCHMEMORY_API UnifiedConversational() = default;
  AWS_OPENSEARCHMEMORY_API UnifiedConversational(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHMEMORY_API UnifiedConversational& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHMEMORY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The conversation.</p>
   */
  inline const UnifiedConversationalSource& GetSource() const { return m_source; }
  inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
  template <typename SourceT = UnifiedConversationalSource>
  void SetSource(SourceT&& value) {
    m_sourceHasBeenSet = true;
    m_source = std::forward<SourceT>(value);
  }
  template <typename SourceT = UnifiedConversationalSource>
  UnifiedConversational& WithSource(SourceT&& value) {
    SetSource(std::forward<SourceT>(value));
    return *this;
  }
  ///@}
 private:
  UnifiedConversationalSource m_source;
  bool m_sourceHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
