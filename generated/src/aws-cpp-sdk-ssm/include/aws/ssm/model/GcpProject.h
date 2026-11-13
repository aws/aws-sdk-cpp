/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/SSM_EXPORTS.h>

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
 * <p>Information about a GCP project targeted by the cloud
 * connector.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GcpProject">AWS API
 * Reference</a></p>
 */
class GcpProject {
 public:
  AWS_SSM_API GcpProject() = default;
  AWS_SSM_API GcpProject(Aws::Utils::Json::JsonView jsonValue);
  AWS_SSM_API GcpProject& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the GCP project.</p>
   */
  inline const Aws::String& GetProjectId() const { return m_projectId; }
  inline bool ProjectIdHasBeenSet() const { return m_projectIdHasBeenSet; }
  template <typename ProjectIdT = Aws::String>
  void SetProjectId(ProjectIdT&& value) {
    m_projectIdHasBeenSet = true;
    m_projectId = std::forward<ProjectIdT>(value);
  }
  template <typename ProjectIdT = Aws::String>
  GcpProject& WithProjectId(ProjectIdT&& value) {
    SetProjectId(std::forward<ProjectIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display name of the GCP project.</p>
   */
  inline const Aws::String& GetProjectDisplayName() const { return m_projectDisplayName; }
  inline bool ProjectDisplayNameHasBeenSet() const { return m_projectDisplayNameHasBeenSet; }
  template <typename ProjectDisplayNameT = Aws::String>
  void SetProjectDisplayName(ProjectDisplayNameT&& value) {
    m_projectDisplayNameHasBeenSet = true;
    m_projectDisplayName = std::forward<ProjectDisplayNameT>(value);
  }
  template <typename ProjectDisplayNameT = Aws::String>
  GcpProject& WithProjectDisplayName(ProjectDisplayNameT&& value) {
    SetProjectDisplayName(std::forward<ProjectDisplayNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_projectId;

  Aws::String m_projectDisplayName;
  bool m_projectIdHasBeenSet = false;
  bool m_projectDisplayNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace SSM
}  // namespace Aws
