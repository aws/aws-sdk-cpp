/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pcs/PCS_EXPORTS.h>
#include <aws/pcs/model/JobSubmitPluginType.h>
#include <aws/pcs/model/JobSubmitScriptSource.h>

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
 * <p>A job submit plugin configuration, including its name, runtime language, and
 * script source.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/pcs-2023-02-10/JobSubmitPlugin">AWS
 * API Reference</a></p>
 */
class JobSubmitPlugin {
 public:
  AWS_PCS_API JobSubmitPlugin() = default;
  AWS_PCS_API JobSubmitPlugin(Aws::Utils::Json::JsonView jsonValue);
  AWS_PCS_API JobSubmitPlugin& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PCS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A unique name for the plugin. The name can be up to 64 characters long. Valid
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
  JobSubmitPlugin& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The runtime language used to execute the custom script. Valid values:</p>
   * <ul> <li> <p> <code>STARLARK</code> – The script uses Starlark syntax.</p> </li>
   * </ul>
   */
  inline JobSubmitPluginType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(JobSubmitPluginType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline JobSubmitPlugin& WithType(JobSubmitPluginType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source location and integrity information for the script.</p>
   */
  inline const JobSubmitScriptSource& GetScriptSource() const { return m_scriptSource; }
  inline bool ScriptSourceHasBeenSet() const { return m_scriptSourceHasBeenSet; }
  template <typename ScriptSourceT = JobSubmitScriptSource>
  void SetScriptSource(ScriptSourceT&& value) {
    m_scriptSourceHasBeenSet = true;
    m_scriptSource = std::forward<ScriptSourceT>(value);
  }
  template <typename ScriptSourceT = JobSubmitScriptSource>
  JobSubmitPlugin& WithScriptSource(ScriptSourceT&& value) {
    SetScriptSource(std::forward<ScriptSourceT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  JobSubmitPluginType m_type{JobSubmitPluginType::NOT_SET};

  JobSubmitScriptSource m_scriptSource;
  bool m_nameHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_scriptSourceHasBeenSet = false;
};

}  // namespace Model
}  // namespace PCS
}  // namespace Aws
