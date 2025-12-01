/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Document.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/QConnect_EXPORTS.h>

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
 * <p>Data about the result of tool usage.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/ToolUseResultData">AWS
 * API Reference</a></p>
 */
class ToolUseResultData {
 public:
  AWS_QCONNECT_API ToolUseResultData() = default;
  AWS_QCONNECT_API ToolUseResultData(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API ToolUseResultData& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the tool use instance.</p>
   */
  inline const Aws::String& GetToolUseId() const { return m_toolUseId; }
  inline bool ToolUseIdHasBeenSet() const { return m_toolUseIdHasBeenSet; }
  template <typename ToolUseIdT = Aws::String>
  void SetToolUseId(ToolUseIdT&& value) {
    m_toolUseIdHasBeenSet = true;
    m_toolUseId = std::forward<ToolUseIdT>(value);
  }
  template <typename ToolUseIdT = Aws::String>
  ToolUseResultData& WithToolUseId(ToolUseIdT&& value) {
    SetToolUseId(std::forward<ToolUseIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the tool that was used.</p>
   */
  inline const Aws::String& GetToolName() const { return m_toolName; }
  inline bool ToolNameHasBeenSet() const { return m_toolNameHasBeenSet; }
  template <typename ToolNameT = Aws::String>
  void SetToolName(ToolNameT&& value) {
    m_toolNameHasBeenSet = true;
    m_toolName = std::forward<ToolNameT>(value);
  }
  template <typename ToolNameT = Aws::String>
  ToolUseResultData& WithToolName(ToolNameT&& value) {
    SetToolName(std::forward<ToolNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The result of the tool usage.</p>
   */
  inline Aws::Utils::DocumentView GetToolResult() const { return m_toolResult; }
  inline bool ToolResultHasBeenSet() const { return m_toolResultHasBeenSet; }
  template <typename ToolResultT = Aws::Utils::Document>
  void SetToolResult(ToolResultT&& value) {
    m_toolResultHasBeenSet = true;
    m_toolResult = std::forward<ToolResultT>(value);
  }
  template <typename ToolResultT = Aws::Utils::Document>
  ToolUseResultData& WithToolResult(ToolResultT&& value) {
    SetToolResult(std::forward<ToolResultT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The input schema for the tool use result.</p>
   */
  inline Aws::Utils::DocumentView GetInputSchema() const { return m_inputSchema; }
  inline bool InputSchemaHasBeenSet() const { return m_inputSchemaHasBeenSet; }
  template <typename InputSchemaT = Aws::Utils::Document>
  void SetInputSchema(InputSchemaT&& value) {
    m_inputSchemaHasBeenSet = true;
    m_inputSchema = std::forward<InputSchemaT>(value);
  }
  template <typename InputSchemaT = Aws::Utils::Document>
  ToolUseResultData& WithInputSchema(InputSchemaT&& value) {
    SetInputSchema(std::forward<InputSchemaT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_toolUseId;
  bool m_toolUseIdHasBeenSet = false;

  Aws::String m_toolName;
  bool m_toolNameHasBeenSet = false;

  Aws::Utils::Document m_toolResult;
  bool m_toolResultHasBeenSet = false;

  Aws::Utils::Document m_inputSchema;
  bool m_inputSchemaHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
