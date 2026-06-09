/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehubv2/Resiliencehubv2Request.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/AssociatedSystem.h>
#include <aws/resiliencehubv2/model/DependencyDiscoveryInput.h>
#include <aws/resiliencehubv2/model/PermissionModel.h>
#include <aws/resiliencehubv2/model/ServiceReportConfiguration.h>

#include <utility>

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

/**
 */
class CreateServiceRequest : public Resiliencehubv2Request {
 public:
  AWS_RESILIENCEHUBV2_API CreateServiceRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateService"; }

  AWS_RESILIENCEHUBV2_API Aws::String SerializePayload() const override;

  ///@{

  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateServiceRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateServiceRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The systems to associate with the service.</p>
   */
  inline const Aws::Vector<AssociatedSystem>& GetAssociatedSystems() const { return m_associatedSystems; }
  inline bool AssociatedSystemsHasBeenSet() const { return m_associatedSystemsHasBeenSet; }
  template <typename AssociatedSystemsT = Aws::Vector<AssociatedSystem>>
  void SetAssociatedSystems(AssociatedSystemsT&& value) {
    m_associatedSystemsHasBeenSet = true;
    m_associatedSystems = std::forward<AssociatedSystemsT>(value);
  }
  template <typename AssociatedSystemsT = Aws::Vector<AssociatedSystem>>
  CreateServiceRequest& WithAssociatedSystems(AssociatedSystemsT&& value) {
    SetAssociatedSystems(std::forward<AssociatedSystemsT>(value));
    return *this;
  }
  template <typename AssociatedSystemsT = AssociatedSystem>
  CreateServiceRequest& AddAssociatedSystems(AssociatedSystemsT&& value) {
    m_associatedSystemsHasBeenSet = true;
    m_associatedSystems.emplace_back(std::forward<AssociatedSystemsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetPolicyArn() const { return m_policyArn; }
  inline bool PolicyArnHasBeenSet() const { return m_policyArnHasBeenSet; }
  template <typename PolicyArnT = Aws::String>
  void SetPolicyArn(PolicyArnT&& value) {
    m_policyArnHasBeenSet = true;
    m_policyArn = std::forward<PolicyArnT>(value);
  }
  template <typename PolicyArnT = Aws::String>
  CreateServiceRequest& WithPolicyArn(PolicyArnT&& value) {
    SetPolicyArn(std::forward<PolicyArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS Regions where the service operates.</p>
   */
  inline const Aws::Vector<Aws::String>& GetRegions() const { return m_regions; }
  inline bool RegionsHasBeenSet() const { return m_regionsHasBeenSet; }
  template <typename RegionsT = Aws::Vector<Aws::String>>
  void SetRegions(RegionsT&& value) {
    m_regionsHasBeenSet = true;
    m_regions = std::forward<RegionsT>(value);
  }
  template <typename RegionsT = Aws::Vector<Aws::String>>
  CreateServiceRequest& WithRegions(RegionsT&& value) {
    SetRegions(std::forward<RegionsT>(value));
    return *this;
  }
  template <typename RegionsT = Aws::String>
  CreateServiceRequest& AddRegions(RegionsT&& value) {
    m_regionsHasBeenSet = true;
    m_regions.emplace_back(std::forward<RegionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The permission model for the service.</p>
   */
  inline const PermissionModel& GetPermissionModel() const { return m_permissionModel; }
  inline bool PermissionModelHasBeenSet() const { return m_permissionModelHasBeenSet; }
  template <typename PermissionModelT = PermissionModel>
  void SetPermissionModel(PermissionModelT&& value) {
    m_permissionModelHasBeenSet = true;
    m_permissionModel = std::forward<PermissionModelT>(value);
  }
  template <typename PermissionModelT = PermissionModel>
  CreateServiceRequest& WithPermissionModel(PermissionModelT&& value) {
    SetPermissionModel(std::forward<PermissionModelT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline DependencyDiscoveryInput GetDependencyDiscovery() const { return m_dependencyDiscovery; }
  inline bool DependencyDiscoveryHasBeenSet() const { return m_dependencyDiscoveryHasBeenSet; }
  inline void SetDependencyDiscovery(DependencyDiscoveryInput value) {
    m_dependencyDiscoveryHasBeenSet = true;
    m_dependencyDiscovery = value;
  }
  inline CreateServiceRequest& WithDependencyDiscovery(DependencyDiscoveryInput value) {
    SetDependencyDiscovery(value);
    return *this;
  }
  ///@}

  ///@{

  inline const ServiceReportConfiguration& GetReportConfiguration() const { return m_reportConfiguration; }
  inline bool ReportConfigurationHasBeenSet() const { return m_reportConfigurationHasBeenSet; }
  template <typename ReportConfigurationT = ServiceReportConfiguration>
  void SetReportConfiguration(ReportConfigurationT&& value) {
    m_reportConfigurationHasBeenSet = true;
    m_reportConfiguration = std::forward<ReportConfigurationT>(value);
  }
  template <typename ReportConfigurationT = ServiceReportConfiguration>
  CreateServiceRequest& WithReportConfiguration(ReportConfigurationT&& value) {
    SetReportConfiguration(std::forward<ReportConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
  inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
  template <typename KmsKeyIdT = Aws::String>
  void SetKmsKeyId(KmsKeyIdT&& value) {
    m_kmsKeyIdHasBeenSet = true;
    m_kmsKeyId = std::forward<KmsKeyIdT>(value);
  }
  template <typename KmsKeyIdT = Aws::String>
  CreateServiceRequest& WithKmsKeyId(KmsKeyIdT&& value) {
    SetKmsKeyId(std::forward<KmsKeyIdT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateServiceRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateServiceRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateServiceRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_description;

  Aws::Vector<AssociatedSystem> m_associatedSystems;

  Aws::String m_policyArn;

  Aws::Vector<Aws::String> m_regions;

  PermissionModel m_permissionModel;

  DependencyDiscoveryInput m_dependencyDiscovery{DependencyDiscoveryInput::NOT_SET};

  ServiceReportConfiguration m_reportConfiguration;

  Aws::String m_kmsKeyId;

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_associatedSystemsHasBeenSet = false;
  bool m_policyArnHasBeenSet = false;
  bool m_regionsHasBeenSet = false;
  bool m_permissionModelHasBeenSet = false;
  bool m_dependencyDiscoveryHasBeenSet = false;
  bool m_reportConfigurationHasBeenSet = false;
  bool m_kmsKeyIdHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
