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
 * <p>An Azure DevOps repository integrated as a resource.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/AzureDevOpsRepositoryResource">AWS
 * API Reference</a></p>
 */
class AzureDevOpsRepositoryResource {
 public:
  AWS_SECURITYAGENT_API AzureDevOpsRepositoryResource() = default;
  AWS_SECURITYAGENT_API AzureDevOpsRepositoryResource(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API AzureDevOpsRepositoryResource& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  AzureDevOpsRepositoryResource& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the Azure DevOps organization that owns the repository.</p>
   */
  inline const Aws::String& GetOrganization() const { return m_organization; }
  inline bool OrganizationHasBeenSet() const { return m_organizationHasBeenSet; }
  template <typename OrganizationT = Aws::String>
  void SetOrganization(OrganizationT&& value) {
    m_organizationHasBeenSet = true;
    m_organization = std::forward<OrganizationT>(value);
  }
  template <typename OrganizationT = Aws::String>
  AzureDevOpsRepositoryResource& WithOrganization(OrganizationT&& value) {
    SetOrganization(std::forward<OrganizationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the Azure DevOps project that contains the repository.</p>
   */
  inline const Aws::String& GetProject() const { return m_project; }
  inline bool ProjectHasBeenSet() const { return m_projectHasBeenSet; }
  template <typename ProjectT = Aws::String>
  void SetProject(ProjectT&& value) {
    m_projectHasBeenSet = true;
    m_project = std::forward<ProjectT>(value);
  }
  template <typename ProjectT = Aws::String>
  AzureDevOpsRepositoryResource& WithProject(ProjectT&& value) {
    SetProject(std::forward<ProjectT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_organization;

  Aws::String m_project;
  bool m_nameHasBeenSet = false;
  bool m_organizationHasBeenSet = false;
  bool m_projectHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
