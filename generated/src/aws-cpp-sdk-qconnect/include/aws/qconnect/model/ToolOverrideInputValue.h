/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/ToolOverrideInputValueConfiguration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QConnect {
namespace Model {

/**
 * <p>An input value override for tools.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/ToolOverrideInputValue">AWS
 * API Reference</a></p>
 */
class ToolOverrideInputValue {
 public:
  AWS_QCONNECT_API ToolOverrideInputValue() = default;
  AWS_QCONNECT_API ToolOverrideInputValue(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API ToolOverrideInputValue& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The JSON path for the input value override.</p>
   */
  inline const Aws::String& GetJsonPath() const { return m_jsonPath; }
  inline bool JsonPathHasBeenSet() const { return m_jsonPathHasBeenSet; }
  template <typename JsonPathT = Aws::String>
  void SetJsonPath(JsonPathT&& value) {
    m_jsonPathHasBeenSet = true;
    m_jsonPath = std::forward<JsonPathT>(value);
  }
  template <typename JsonPathT = Aws::String>
  ToolOverrideInputValue& WithJsonPath(JsonPathT&& value) {
    SetJsonPath(std::forward<JsonPathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The override input value.</p>
   */
  inline const ToolOverrideInputValueConfiguration& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = ToolOverrideInputValueConfiguration>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = ToolOverrideInputValueConfiguration>
  ToolOverrideInputValue& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_jsonPath;

  ToolOverrideInputValueConfiguration m_value;
  bool m_jsonPathHasBeenSet = false;
  bool m_valueHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
