/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pcs/PCS_EXPORTS.h>
#include <aws/pcs/model/ExecutionPolicy.h>
#include <aws/pcs/model/OnError.h>
#include <aws/pcs/model/ScriptSource.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PCS {
namespace Model {

/**
 * <p>A script to run during a compute node lifecycle stage.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/pcs-2023-02-10/NodeLifecycleScript">AWS
 * API Reference</a></p>
 */
class NodeLifecycleScript {
 public:
  AWS_PCS_API NodeLifecycleScript() = default;
  AWS_PCS_API NodeLifecycleScript(Aws::Utils::Json::JsonView jsonValue);
  AWS_PCS_API NodeLifecycleScript& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PCS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A unique name for the script. The name can be up to 64 characters long. Valid
   * characters are letters, numbers, spaces, underscores (<code>_</code>), and
   * hyphens (<code>-</code>). The first character must be a letter or a number.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  NodeLifecycleScript& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source location and integrity information for the script.</p>
   */
  inline const ScriptSource& GetScriptSource() const { return m_scriptSource; }
  inline bool ScriptSourceHasBeenSet() const { return m_scriptSourceHasBeenSet; }
  template <typename ScriptSourceT = ScriptSource>
  void SetScriptSource(ScriptSourceT&& value) {
    m_scriptSourceHasBeenSet = true;
    m_scriptSource = std::forward<ScriptSourceT>(value);
  }
  template <typename ScriptSourceT = ScriptSource>
  NodeLifecycleScript& WithScriptSource(ScriptSourceT&& value) {
    SetScriptSource(std::forward<ScriptSourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The command-line arguments to pass to the script. You can specify up to 20
   * arguments, and each argument can be up to 256 characters long.</p>
   */
  inline const Aws::Vector<Aws::String>& GetArguments() const { return m_arguments; }
  inline bool ArgumentsHasBeenSet() const { return m_argumentsHasBeenSet; }
  template <typename ArgumentsT = Aws::Vector<Aws::String>>
  void SetArguments(ArgumentsT&& value) {
    m_argumentsHasBeenSet = true;
    m_arguments = std::forward<ArgumentsT>(value);
  }
  template <typename ArgumentsT = Aws::Vector<Aws::String>>
  NodeLifecycleScript& WithArguments(ArgumentsT&& value) {
    SetArguments(std::forward<ArgumentsT>(value));
    return *this;
  }
  template <typename ArgumentsT = Aws::String>
  NodeLifecycleScript& AddArguments(ArgumentsT&& value) {
    m_argumentsHasBeenSet = true;
    m_arguments.emplace_back(std::forward<ArgumentsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The behavior when the script fails. The default value is
   * <code>TERMINATE</code>. Valid values:</p> <ul> <li> <p> <code>TERMINATE</code> –
   * Terminates the compute node.</p> </li> <li> <p> <code>STOP_SEQUENCE</code> –
   * Stops running subsequent scripts in the sequence but doesn't terminate the
   * compute node.</p> </li> <li> <p> <code>CONTINUE</code> – Ignores the error and
   * continues running the next script.</p> </li> </ul>
   */
  inline OnError GetOnError() const { return m_onError; }
  inline bool OnErrorHasBeenSet() const { return m_onErrorHasBeenSet; }
  inline void SetOnError(OnError value) {
    m_onErrorHasBeenSet = true;
    m_onError = value;
  }
  inline NodeLifecycleScript& WithOnError(OnError value) {
    SetOnError(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The policy that determines when the script runs. The default value is
   * <code>FIRST_BOOT_ONLY</code>. Valid values:</p> <ul> <li> <p>
   * <code>FIRST_BOOT_ONLY</code> – Runs the script only the first time the compute
   * node boots.</p> </li> <li> <p> <code>EVERY_BOOT</code> – Runs the script every
   * time the compute node boots, including reboots.</p> </li> </ul>
   */
  inline ExecutionPolicy GetExecutionPolicy() const { return m_executionPolicy; }
  inline bool ExecutionPolicyHasBeenSet() const { return m_executionPolicyHasBeenSet; }
  inline void SetExecutionPolicy(ExecutionPolicy value) {
    m_executionPolicyHasBeenSet = true;
    m_executionPolicy = value;
  }
  inline NodeLifecycleScript& WithExecutionPolicy(ExecutionPolicy value) {
    SetExecutionPolicy(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  ScriptSource m_scriptSource;

  Aws::Vector<Aws::String> m_arguments;

  OnError m_onError{OnError::NOT_SET};

  ExecutionPolicy m_executionPolicy{ExecutionPolicy::NOT_SET};
  bool m_nameHasBeenSet = false;
  bool m_scriptSourceHasBeenSet = false;
  bool m_argumentsHasBeenSet = false;
  bool m_onErrorHasBeenSet = false;
  bool m_executionPolicyHasBeenSet = false;
};

}  // namespace Model
}  // namespace PCS
}  // namespace Aws
