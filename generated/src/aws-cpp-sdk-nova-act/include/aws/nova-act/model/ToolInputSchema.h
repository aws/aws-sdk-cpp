/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Document.h>
#include <aws/nova-act/NovaAct_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace NovaAct {
namespace Model {

/**
 * <p>The schema definition for tool input parameters.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/nova-act-2025-08-22/ToolInputSchema">AWS
 * API Reference</a></p>
 */
class ToolInputSchema {
 public:
  AWS_NOVAACT_API ToolInputSchema() = default;
  AWS_NOVAACT_API ToolInputSchema(Aws::Utils::Json::JsonView jsonValue);
  AWS_NOVAACT_API ToolInputSchema& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NOVAACT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The JSON schema that defines the expected input format for the tool.</p>
   */
  inline Aws::Utils::DocumentView GetJson() const { return m_json; }
  inline bool JsonHasBeenSet() const { return m_jsonHasBeenSet; }
  template <typename JsonT = Aws::Utils::Document>
  void SetJson(JsonT&& value) {
    m_jsonHasBeenSet = true;
    m_json = std::forward<JsonT>(value);
  }
  template <typename JsonT = Aws::Utils::Document>
  ToolInputSchema& WithJson(JsonT&& value) {
    SetJson(std::forward<JsonT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::Document m_json;
  bool m_jsonHasBeenSet = false;
};

}  // namespace Model
}  // namespace NovaAct
}  // namespace Aws
