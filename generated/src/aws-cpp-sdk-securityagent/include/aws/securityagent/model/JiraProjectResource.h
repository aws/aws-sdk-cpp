/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>

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
 * <p>Represents a Jira project resource used in an integration.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/JiraProjectResource">AWS
 * API Reference</a></p>
 */
class JiraProjectResource {
 public:
  AWS_SECURITYAGENT_API JiraProjectResource() = default;
  AWS_SECURITYAGENT_API JiraProjectResource(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API JiraProjectResource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  JiraProjectResource& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Jira project key, for example PROJ.</p>
   */
  inline const Aws::String& GetProjectKey() const { return m_projectKey; }
  inline bool ProjectKeyHasBeenSet() const { return m_projectKeyHasBeenSet; }
  template <typename ProjectKeyT = Aws::String>
  void SetProjectKey(ProjectKeyT&& value) {
    m_projectKeyHasBeenSet = true;
    m_projectKey = std::forward<ProjectKeyT>(value);
  }
  template <typename ProjectKeyT = Aws::String>
  JiraProjectResource& WithProjectKey(ProjectKeyT&& value) {
    SetProjectKey(std::forward<ProjectKeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Jira project identifier.</p>
   */
  inline const Aws::String& GetProjectId() const { return m_projectId; }
  inline bool ProjectIdHasBeenSet() const { return m_projectIdHasBeenSet; }
  template <typename ProjectIdT = Aws::String>
  void SetProjectId(ProjectIdT&& value) {
    m_projectIdHasBeenSet = true;
    m_projectId = std::forward<ProjectIdT>(value);
  }
  template <typename ProjectIdT = Aws::String>
  JiraProjectResource& WithProjectId(ProjectIdT&& value) {
    SetProjectId(std::forward<ProjectIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display name of the Jira project.</p>
   */
  inline const Aws::String& GetProjectName() const { return m_projectName; }
  inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }
  template <typename ProjectNameT = Aws::String>
  void SetProjectName(ProjectNameT&& value) {
    m_projectNameHasBeenSet = true;
    m_projectName = std::forward<ProjectNameT>(value);
  }
  template <typename ProjectNameT = Aws::String>
  JiraProjectResource& WithProjectName(ProjectNameT&& value) {
    SetProjectName(std::forward<ProjectNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_projectKey;

  Aws::String m_projectId;

  Aws::String m_projectName;
  bool m_nameHasBeenSet = false;
  bool m_projectKeyHasBeenSet = false;
  bool m_projectIdHasBeenSet = false;
  bool m_projectNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
