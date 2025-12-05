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
 * <p>Tool invocation message content</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/SpanToolUseValue">AWS
 * API Reference</a></p>
 */
class SpanToolUseValue {
 public:
  AWS_QCONNECT_API SpanToolUseValue() = default;
  AWS_QCONNECT_API SpanToolUseValue(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API SpanToolUseValue& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Unique ID for this tool invocation</p>
   */
  inline const Aws::String& GetToolUseId() const { return m_toolUseId; }
  inline bool ToolUseIdHasBeenSet() const { return m_toolUseIdHasBeenSet; }
  template <typename ToolUseIdT = Aws::String>
  void SetToolUseId(ToolUseIdT&& value) {
    m_toolUseIdHasBeenSet = true;
    m_toolUseId = std::forward<ToolUseIdT>(value);
  }
  template <typename ToolUseIdT = Aws::String>
  SpanToolUseValue& WithToolUseId(ToolUseIdT&& value) {
    SetToolUseId(std::forward<ToolUseIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tool name</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  SpanToolUseValue& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tool input arguments</p>
   */
  inline Aws::Utils::DocumentView GetArguments() const { return m_arguments; }
  inline bool ArgumentsHasBeenSet() const { return m_argumentsHasBeenSet; }
  template <typename ArgumentsT = Aws::Utils::Document>
  void SetArguments(ArgumentsT&& value) {
    m_argumentsHasBeenSet = true;
    m_arguments = std::forward<ArgumentsT>(value);
  }
  template <typename ArgumentsT = Aws::Utils::Document>
  SpanToolUseValue& WithArguments(ArgumentsT&& value) {
    SetArguments(std::forward<ArgumentsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_toolUseId;

  Aws::String m_name;

  Aws::Utils::Document m_arguments;
  bool m_toolUseIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_argumentsHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
