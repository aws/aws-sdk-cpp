/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSAllocator.h>
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/SpanTextValue.h>
#include <aws/qconnect/model/SpanToolUseValue.h>

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
class SpanToolResultValue;

/**
 * <p>Message content value - can be text, tool invocation, or tool
 * result</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/SpanMessageValue">AWS
 * API Reference</a></p>
 */
class SpanMessageValue {
 public:
  AWS_QCONNECT_API SpanMessageValue() = default;
  AWS_QCONNECT_API SpanMessageValue(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API SpanMessageValue& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Text message content</p>
   */
  inline const SpanTextValue& GetText() const { return m_text; }
  inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
  template <typename TextT = SpanTextValue>
  void SetText(TextT&& value) {
    m_textHasBeenSet = true;
    m_text = std::forward<TextT>(value);
  }
  template <typename TextT = SpanTextValue>
  SpanMessageValue& WithText(TextT&& value) {
    SetText(std::forward<TextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Tool invocation message content</p>
   */
  inline const SpanToolUseValue& GetToolUse() const { return m_toolUse; }
  inline bool ToolUseHasBeenSet() const { return m_toolUseHasBeenSet; }
  template <typename ToolUseT = SpanToolUseValue>
  void SetToolUse(ToolUseT&& value) {
    m_toolUseHasBeenSet = true;
    m_toolUse = std::forward<ToolUseT>(value);
  }
  template <typename ToolUseT = SpanToolUseValue>
  SpanMessageValue& WithToolUse(ToolUseT&& value) {
    SetToolUse(std::forward<ToolUseT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Tool result message content</p>
   */
  inline const SpanToolResultValue& GetToolResult() const { return *m_toolResult; }
  inline bool ToolResultHasBeenSet() const { return m_toolResultHasBeenSet; }
  template <typename ToolResultT = SpanToolResultValue>
  void SetToolResult(ToolResultT&& value) {
    m_toolResultHasBeenSet = true;
    m_toolResult = Aws::MakeShared<SpanToolResultValue>("SpanMessageValue", std::forward<ToolResultT>(value));
  }
  template <typename ToolResultT = SpanToolResultValue>
  SpanMessageValue& WithToolResult(ToolResultT&& value) {
    SetToolResult(std::forward<ToolResultT>(value));
    return *this;
  }
  ///@}
 private:
  SpanTextValue m_text;
  bool m_textHasBeenSet = false;

  SpanToolUseValue m_toolUse;
  bool m_toolUseHasBeenSet = false;

  std::shared_ptr<SpanToolResultValue> m_toolResult;
  bool m_toolResultHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
