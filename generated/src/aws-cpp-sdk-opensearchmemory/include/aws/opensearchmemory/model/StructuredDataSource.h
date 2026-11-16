/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Document.h>
#include <aws/opensearchmemory/OpenSearchMemory_EXPORTS.h>

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
 * <p>The source of structured content. Set exactly one member. Currently, the only
 * member is <code>json</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchmemory-2026-08-24/StructuredDataSource">AWS
 * API Reference</a></p>
 */
class StructuredDataSource {
 public:
  AWS_OPENSEARCHMEMORY_API StructuredDataSource() = default;
  AWS_OPENSEARCHMEMORY_API StructuredDataSource(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHMEMORY_API StructuredDataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHMEMORY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The structured content, as a JSON object of at most 1 MiB when serialized as
   * UTF-8, nested at most 10 levels deep.</p>
   */
  inline Aws::Utils::DocumentView GetJson() const { return m_json; }
  inline bool JsonHasBeenSet() const { return m_jsonHasBeenSet; }
  template <typename JsonT = Aws::Utils::Document>
  void SetJson(JsonT&& value) {
    m_jsonHasBeenSet = true;
    m_json = std::forward<JsonT>(value);
  }
  template <typename JsonT = Aws::Utils::Document>
  StructuredDataSource& WithJson(JsonT&& value) {
    SetJson(std::forward<JsonT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::Document m_json;
  bool m_jsonHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
