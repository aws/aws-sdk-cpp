/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/AccessType.h>

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
 * <p>Metadata for an integrated Azure DevOps repository.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/AzureDevOpsRepositoryMetadata">AWS
 * API Reference</a></p>
 */
class AzureDevOpsRepositoryMetadata {
 public:
  AWS_SECURITYAGENT_API AzureDevOpsRepositoryMetadata() = default;
  AWS_SECURITYAGENT_API AzureDevOpsRepositoryMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API AzureDevOpsRepositoryMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  AzureDevOpsRepositoryMetadata& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetProviderResourceId() const { return m_providerResourceId; }
  inline bool ProviderResourceIdHasBeenSet() const { return m_providerResourceIdHasBeenSet; }
  template <typename ProviderResourceIdT = Aws::String>
  void SetProviderResourceId(ProviderResourceIdT&& value) {
    m_providerResourceIdHasBeenSet = true;
    m_providerResourceId = std::forward<ProviderResourceIdT>(value);
  }
  template <typename ProviderResourceIdT = Aws::String>
  AzureDevOpsRepositoryMetadata& WithProviderResourceId(ProviderResourceIdT&& value) {
    SetProviderResourceId(std::forward<ProviderResourceIdT>(value));
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
  AzureDevOpsRepositoryMetadata& WithOrganization(OrganizationT&& value) {
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
  AzureDevOpsRepositoryMetadata& WithProject(ProjectT&& value) {
    SetProject(std::forward<ProjectT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The GUID of the Azure DevOps project that contains the repository.</p>
   */
  inline const Aws::String& GetProjectId() const { return m_projectId; }
  inline bool ProjectIdHasBeenSet() const { return m_projectIdHasBeenSet; }
  template <typename ProjectIdT = Aws::String>
  void SetProjectId(ProjectIdT&& value) {
    m_projectIdHasBeenSet = true;
    m_projectId = std::forward<ProjectIdT>(value);
  }
  template <typename ProjectIdT = Aws::String>
  AzureDevOpsRepositoryMetadata& WithProjectId(ProjectIdT&& value) {
    SetProjectId(std::forward<ProjectIdT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline AccessType GetAccessType() const { return m_accessType; }
  inline bool AccessTypeHasBeenSet() const { return m_accessTypeHasBeenSet; }
  inline void SetAccessType(AccessType value) {
    m_accessTypeHasBeenSet = true;
    m_accessType = value;
  }
  inline AzureDevOpsRepositoryMetadata& WithAccessType(AccessType value) {
    SetAccessType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_providerResourceId;

  Aws::String m_organization;

  Aws::String m_project;

  Aws::String m_projectId;

  AccessType m_accessType{AccessType::NOT_SET};
  bool m_nameHasBeenSet = false;
  bool m_providerResourceIdHasBeenSet = false;
  bool m_organizationHasBeenSet = false;
  bool m_projectHasBeenSet = false;
  bool m_projectIdHasBeenSet = false;
  bool m_accessTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
