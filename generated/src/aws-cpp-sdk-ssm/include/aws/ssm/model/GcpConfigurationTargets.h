/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/GcpProject.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SSM {
namespace Model {

/**
 * <p>The target resources in the GCP environment.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GcpConfigurationTargets">AWS
 * API Reference</a></p>
 */
class GcpConfigurationTargets {
 public:
  AWS_SSM_API GcpConfigurationTargets() = default;
  AWS_SSM_API GcpConfigurationTargets(Aws::Utils::Json::JsonView jsonValue);
  AWS_SSM_API GcpConfigurationTargets& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of GCP projects to target.</p>
   */
  inline const Aws::Vector<GcpProject>& GetProjects() const { return m_projects; }
  inline bool ProjectsHasBeenSet() const { return m_projectsHasBeenSet; }
  template <typename ProjectsT = Aws::Vector<GcpProject>>
  void SetProjects(ProjectsT&& value) {
    m_projectsHasBeenSet = true;
    m_projects = std::forward<ProjectsT>(value);
  }
  template <typename ProjectsT = Aws::Vector<GcpProject>>
  GcpConfigurationTargets& WithProjects(ProjectsT&& value) {
    SetProjects(std::forward<ProjectsT>(value));
    return *this;
  }
  template <typename ProjectsT = GcpProject>
  GcpConfigurationTargets& AddProjects(ProjectsT&& value) {
    m_projectsHasBeenSet = true;
    m_projects.emplace_back(std::forward<ProjectsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<GcpProject> m_projects;
  bool m_projectsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SSM
}  // namespace Aws
