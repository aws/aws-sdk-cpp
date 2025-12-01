/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
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
 * <p>Configuration for tool output handling.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/ToolOutputConfiguration">AWS
 * API Reference</a></p>
 */
class ToolOutputConfiguration {
 public:
  AWS_QCONNECT_API ToolOutputConfiguration() = default;
  AWS_QCONNECT_API ToolOutputConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API ToolOutputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Override the tool output results to different variable name.</p>
   */
  inline const Aws::String& GetOutputVariableNameOverride() const { return m_outputVariableNameOverride; }
  inline bool OutputVariableNameOverrideHasBeenSet() const { return m_outputVariableNameOverrideHasBeenSet; }
  template <typename OutputVariableNameOverrideT = Aws::String>
  void SetOutputVariableNameOverride(OutputVariableNameOverrideT&& value) {
    m_outputVariableNameOverrideHasBeenSet = true;
    m_outputVariableNameOverride = std::forward<OutputVariableNameOverrideT>(value);
  }
  template <typename OutputVariableNameOverrideT = Aws::String>
  ToolOutputConfiguration& WithOutputVariableNameOverride(OutputVariableNameOverrideT&& value) {
    SetOutputVariableNameOverride(std::forward<OutputVariableNameOverrideT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The session data namespace for tool output.</p>
   */
  inline const Aws::String& GetSessionDataNamespace() const { return m_sessionDataNamespace; }
  inline bool SessionDataNamespaceHasBeenSet() const { return m_sessionDataNamespaceHasBeenSet; }
  template <typename SessionDataNamespaceT = Aws::String>
  void SetSessionDataNamespace(SessionDataNamespaceT&& value) {
    m_sessionDataNamespaceHasBeenSet = true;
    m_sessionDataNamespace = std::forward<SessionDataNamespaceT>(value);
  }
  template <typename SessionDataNamespaceT = Aws::String>
  ToolOutputConfiguration& WithSessionDataNamespace(SessionDataNamespaceT&& value) {
    SetSessionDataNamespace(std::forward<SessionDataNamespaceT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_outputVariableNameOverride;
  bool m_outputVariableNameOverrideHasBeenSet = false;

  Aws::String m_sessionDataNamespace;
  bool m_sessionDataNamespaceHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
