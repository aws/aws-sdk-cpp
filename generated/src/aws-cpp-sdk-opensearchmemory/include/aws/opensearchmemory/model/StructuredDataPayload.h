/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchmemory/OpenSearchMemory_EXPORTS.h>
#include <aws/opensearchmemory/model/StructuredDataSource.h>

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
 * <p>Structured content, as a JSON object.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchmemory-2026-08-24/StructuredDataPayload">AWS
 * API Reference</a></p>
 */
class StructuredDataPayload {
 public:
  AWS_OPENSEARCHMEMORY_API StructuredDataPayload() = default;
  AWS_OPENSEARCHMEMORY_API StructuredDataPayload(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHMEMORY_API StructuredDataPayload& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHMEMORY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The structured content.</p>
   */
  inline const StructuredDataSource& GetSource() const { return m_source; }
  inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
  template <typename SourceT = StructuredDataSource>
  void SetSource(SourceT&& value) {
    m_sourceHasBeenSet = true;
    m_source = std::forward<SourceT>(value);
  }
  template <typename SourceT = StructuredDataSource>
  StructuredDataPayload& WithSource(SourceT&& value) {
    SetSource(std::forward<SourceT>(value));
    return *this;
  }
  ///@}
 private:
  StructuredDataSource m_source;
  bool m_sourceHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
