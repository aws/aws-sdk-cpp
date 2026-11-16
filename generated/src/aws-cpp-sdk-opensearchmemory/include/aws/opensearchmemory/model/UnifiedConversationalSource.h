/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchmemory/OpenSearchMemory_EXPORTS.h>
#include <aws/opensearchmemory/model/UnifiedConversationalObject.h>

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
 * <p>The source of a conversation. Set exactly one member. Currently, the only
 * member is <code>object</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchmemory-2026-08-24/UnifiedConversationalSource">AWS
 * API Reference</a></p>
 */
class UnifiedConversationalSource {
 public:
  AWS_OPENSEARCHMEMORY_API UnifiedConversationalSource() = default;
  AWS_OPENSEARCHMEMORY_API UnifiedConversationalSource(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHMEMORY_API UnifiedConversationalSource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHMEMORY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The conversation turns.</p>
   */
  inline const UnifiedConversationalObject& GetObject() const { return m_object; }
  inline bool ObjectHasBeenSet() const { return m_objectHasBeenSet; }
  template <typename ObjectT = UnifiedConversationalObject>
  void SetObject(ObjectT&& value) {
    m_objectHasBeenSet = true;
    m_object = std::forward<ObjectT>(value);
  }
  template <typename ObjectT = UnifiedConversationalObject>
  UnifiedConversationalSource& WithObject(ObjectT&& value) {
    SetObject(std::forward<ObjectT>(value));
    return *this;
  }
  ///@}
 private:
  UnifiedConversationalObject m_object;
  bool m_objectHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
