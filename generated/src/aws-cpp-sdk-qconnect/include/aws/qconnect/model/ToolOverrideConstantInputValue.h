/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/ToolOverrideInputValueType.h>

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
 * <p>A constant input value for tool override.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/ToolOverrideConstantInputValue">AWS
 * API Reference</a></p>
 */
class ToolOverrideConstantInputValue {
 public:
  AWS_QCONNECT_API ToolOverrideConstantInputValue() = default;
  AWS_QCONNECT_API ToolOverrideConstantInputValue(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API ToolOverrideConstantInputValue& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Override tool input value with constant values</p>
   */
  inline ToolOverrideInputValueType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(ToolOverrideInputValueType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline ToolOverrideConstantInputValue& WithType(ToolOverrideInputValueType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The constant input override value.</p>
   */
  inline const Aws::String& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = Aws::String>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = Aws::String>
  ToolOverrideConstantInputValue& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}
 private:
  ToolOverrideInputValueType m_type{ToolOverrideInputValueType::NOT_SET};
  bool m_typeHasBeenSet = false;

  Aws::String m_value;
  bool m_valueHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
