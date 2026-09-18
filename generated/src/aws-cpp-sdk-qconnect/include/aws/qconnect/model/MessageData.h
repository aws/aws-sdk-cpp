/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Document.h>
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/TextMessage.h>
#include <aws/qconnect/model/ToolUseResultData.h>

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
 * <p>The message data.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/MessageData">AWS
 * API Reference</a></p>
 */
class MessageData {
 public:
  AWS_QCONNECT_API MessageData() = default;
  AWS_QCONNECT_API MessageData(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API MessageData& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The message data in text type.</p>
   */
  inline const TextMessage& GetText() const { return m_text; }
  inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
  template <typename TextT = TextMessage>
  void SetText(TextT&& value) {
    m_textHasBeenSet = true;
    m_text = std::forward<TextT>(value);
  }
  template <typename TextT = TextMessage>
  MessageData& WithText(TextT&& value) {
    SetText(std::forward<TextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The result of tool usage in the message.</p>
   */
  inline const ToolUseResultData& GetToolUseResult() const { return m_toolUseResult; }
  inline bool ToolUseResultHasBeenSet() const { return m_toolUseResultHasBeenSet; }
  template <typename ToolUseResultT = ToolUseResultData>
  void SetToolUseResult(ToolUseResultT&& value) {
    m_toolUseResultHasBeenSet = true;
    m_toolUseResult = std::forward<ToolUseResultT>(value);
  }
  template <typename ToolUseResultT = ToolUseResultData>
  MessageData& WithToolUseResult(ToolUseResultT&& value) {
    SetToolUseResult(std::forward<ToolUseResultT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The message data as a structured JSON document. This is the payload for a
   * message of type <code>DATA</code>, and must be a JSON object at the root
   * level.</p>
   */
  inline Aws::Utils::DocumentView GetData() const { return m_data; }
  inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }
  template <typename DataT = Aws::Utils::Document>
  void SetData(DataT&& value) {
    m_dataHasBeenSet = true;
    m_data = std::forward<DataT>(value);
  }
  template <typename DataT = Aws::Utils::Document>
  MessageData& WithData(DataT&& value) {
    SetData(std::forward<DataT>(value));
    return *this;
  }
  ///@}
 private:
  TextMessage m_text;

  ToolUseResultData m_toolUseResult;

  Aws::Utils::Document m_data;
  bool m_textHasBeenSet = false;
  bool m_toolUseResultHasBeenSet = false;
  bool m_dataHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
