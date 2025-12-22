/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wickr/Wickr_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Wickr {
namespace Model {

/**
 * <p>Represents a single network-level configuration setting with its name, value,
 * and data type. Settings control network-wide behaviors and
 * features.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wickr-2024-02-01/Setting">AWS API
 * Reference</a></p>
 */
class Setting {
 public:
  AWS_WICKR_API Setting() = default;
  AWS_WICKR_API Setting(Aws::Utils::Json::JsonView jsonValue);
  AWS_WICKR_API Setting& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WICKR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the network setting (e.g., 'enableClientMetrics',
   * 'dataRetention').</p>
   */
  inline const Aws::String& GetOptionName() const { return m_optionName; }
  inline bool OptionNameHasBeenSet() const { return m_optionNameHasBeenSet; }
  template <typename OptionNameT = Aws::String>
  void SetOptionName(OptionNameT&& value) {
    m_optionNameHasBeenSet = true;
    m_optionName = std::forward<OptionNameT>(value);
  }
  template <typename OptionNameT = Aws::String>
  Setting& WithOptionName(OptionNameT&& value) {
    SetOptionName(std::forward<OptionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current value of the setting as a string. Boolean values are represented
   * as 'true' or 'false'.</p>
   */
  inline const Aws::String& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = Aws::String>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = Aws::String>
  Setting& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The data type of the setting value (e.g., 'boolean', 'string', 'number').</p>
   */
  inline const Aws::String& GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  template <typename TypeT = Aws::String>
  void SetType(TypeT&& value) {
    m_typeHasBeenSet = true;
    m_type = std::forward<TypeT>(value);
  }
  template <typename TypeT = Aws::String>
  Setting& WithType(TypeT&& value) {
    SetType(std::forward<TypeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_optionName;

  Aws::String m_value;

  Aws::String m_type;
  bool m_optionNameHasBeenSet = false;
  bool m_valueHasBeenSet = false;
  bool m_typeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
