/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/VerificationScriptEnvVar.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecurityAgent {
namespace Model {

/**
 * <p>Contains metadata for a verification script that can be used to reproduce a
 * security finding.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/VerificationScript">AWS
 * API Reference</a></p>
 */
class VerificationScript {
 public:
  AWS_SECURITYAGENT_API VerificationScript() = default;
  AWS_SECURITYAGENT_API VerificationScript(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API VerificationScript& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of script. Valid values are python and bash.</p>
   */
  inline const Aws::String& GetScriptType() const { return m_scriptType; }
  inline bool ScriptTypeHasBeenSet() const { return m_scriptTypeHasBeenSet; }
  template <typename ScriptTypeT = Aws::String>
  void SetScriptType(ScriptTypeT&& value) {
    m_scriptTypeHasBeenSet = true;
    m_scriptType = std::forward<ScriptTypeT>(value);
  }
  template <typename ScriptTypeT = Aws::String>
  VerificationScript& WithScriptType(ScriptTypeT&& value) {
    SetScriptType(std::forward<ScriptTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>URL to download the verification script.</p>
   */
  inline const Aws::String& GetScriptUrl() const { return m_scriptUrl; }
  inline bool ScriptUrlHasBeenSet() const { return m_scriptUrlHasBeenSet; }
  template <typename ScriptUrlT = Aws::String>
  void SetScriptUrl(ScriptUrlT&& value) {
    m_scriptUrlHasBeenSet = true;
    m_scriptUrl = std::forward<ScriptUrlT>(value);
  }
  template <typename ScriptUrlT = Aws::String>
  VerificationScript& WithScriptUrl(ScriptUrlT&& value) {
    SetScriptUrl(std::forward<ScriptUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Instructions for running the verification script, including prerequisites and
   * how to interpret results.</p>
   */
  inline const Aws::String& GetInstructions() const { return m_instructions; }
  inline bool InstructionsHasBeenSet() const { return m_instructionsHasBeenSet; }
  template <typename InstructionsT = Aws::String>
  void SetInstructions(InstructionsT&& value) {
    m_instructionsHasBeenSet = true;
    m_instructions = std::forward<InstructionsT>(value);
  }
  template <typename InstructionsT = Aws::String>
  VerificationScript& WithInstructions(InstructionsT&& value) {
    SetInstructions(std::forward<InstructionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of environment variables required to run the verification
   * script.</p>
   */
  inline const Aws::Vector<VerificationScriptEnvVar>& GetEnvVars() const { return m_envVars; }
  inline bool EnvVarsHasBeenSet() const { return m_envVarsHasBeenSet; }
  template <typename EnvVarsT = Aws::Vector<VerificationScriptEnvVar>>
  void SetEnvVars(EnvVarsT&& value) {
    m_envVarsHasBeenSet = true;
    m_envVars = std::forward<EnvVarsT>(value);
  }
  template <typename EnvVarsT = Aws::Vector<VerificationScriptEnvVar>>
  VerificationScript& WithEnvVars(EnvVarsT&& value) {
    SetEnvVars(std::forward<EnvVarsT>(value));
    return *this;
  }
  template <typename EnvVarsT = VerificationScriptEnvVar>
  VerificationScript& AddEnvVars(EnvVarsT&& value) {
    m_envVarsHasBeenSet = true;
    m_envVars.emplace_back(std::forward<EnvVarsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_scriptType;

  Aws::String m_scriptUrl;

  Aws::String m_instructions;

  Aws::Vector<VerificationScriptEnvVar> m_envVars;
  bool m_scriptTypeHasBeenSet = false;
  bool m_scriptUrlHasBeenSet = false;
  bool m_instructionsHasBeenSet = false;
  bool m_envVarsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
