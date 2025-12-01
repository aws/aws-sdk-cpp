/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/ToolOverrideConstantInputValue.h>

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
 * <p>Configuration for overriding tool input values.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/ToolOverrideInputValueConfiguration">AWS
 * API Reference</a></p>
 */
class ToolOverrideInputValueConfiguration {
 public:
  AWS_QCONNECT_API ToolOverrideInputValueConfiguration() = default;
  AWS_QCONNECT_API ToolOverrideInputValueConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API ToolOverrideInputValueConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Constant input value configuration for tool override.</p>
   */
  inline const ToolOverrideConstantInputValue& GetConstant() const { return m_constant; }
  inline bool ConstantHasBeenSet() const { return m_constantHasBeenSet; }
  template <typename ConstantT = ToolOverrideConstantInputValue>
  void SetConstant(ConstantT&& value) {
    m_constantHasBeenSet = true;
    m_constant = std::forward<ConstantT>(value);
  }
  template <typename ConstantT = ToolOverrideConstantInputValue>
  ToolOverrideInputValueConfiguration& WithConstant(ConstantT&& value) {
    SetConstant(std::forward<ConstantT>(value));
    return *this;
  }
  ///@}
 private:
  ToolOverrideConstantInputValue m_constant;
  bool m_constantHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
