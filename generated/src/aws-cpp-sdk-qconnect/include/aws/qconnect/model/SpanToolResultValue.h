/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/SpanMessageValue.h>

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
class SpanMessageValue;

/**
 * <p>Tool result message content</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/SpanToolResultValue">AWS
 * API Reference</a></p>
 */
class SpanToolResultValue {
 public:
  AWS_QCONNECT_API SpanToolResultValue() = default;
  AWS_QCONNECT_API SpanToolResultValue(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API SpanToolResultValue& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Relates this result back to the tool invocation</p>
   */
  inline const Aws::String& GetToolUseId() const { return m_toolUseId; }
  inline bool ToolUseIdHasBeenSet() const { return m_toolUseIdHasBeenSet; }
  template <typename ToolUseIdT = Aws::String>
  void SetToolUseId(ToolUseIdT&& value) {
    m_toolUseIdHasBeenSet = true;
    m_toolUseId = std::forward<ToolUseIdT>(value);
  }
  template <typename ToolUseIdT = Aws::String>
  SpanToolResultValue& WithToolUseId(ToolUseIdT&& value) {
    SetToolUseId(std::forward<ToolUseIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tool results</p>
   */
  inline const Aws::Vector<SpanMessageValue>& GetValues() const { return m_values; }
  inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
  template <typename ValuesT = Aws::Vector<SpanMessageValue>>
  void SetValues(ValuesT&& value) {
    m_valuesHasBeenSet = true;
    m_values = std::forward<ValuesT>(value);
  }
  template <typename ValuesT = Aws::Vector<SpanMessageValue>>
  SpanToolResultValue& WithValues(ValuesT&& value) {
    SetValues(std::forward<ValuesT>(value));
    return *this;
  }
  template <typename ValuesT = SpanMessageValue>
  SpanToolResultValue& AddValues(ValuesT&& value) {
    m_valuesHasBeenSet = true;
    m_values.emplace_back(std::forward<ValuesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tool invocation error if failed</p>
   */
  inline const Aws::String& GetError() const { return m_error; }
  inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
  template <typename ErrorT = Aws::String>
  void SetError(ErrorT&& value) {
    m_errorHasBeenSet = true;
    m_error = std::forward<ErrorT>(value);
  }
  template <typename ErrorT = Aws::String>
  SpanToolResultValue& WithError(ErrorT&& value) {
    SetError(std::forward<ErrorT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_toolUseId;
  bool m_toolUseIdHasBeenSet = false;

  Aws::Vector<SpanMessageValue> m_values;
  bool m_valuesHasBeenSet = false;

  Aws::String m_error;
  bool m_errorHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
