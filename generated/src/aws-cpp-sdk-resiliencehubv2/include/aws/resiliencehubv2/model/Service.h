/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/Achievability.h>
#include <aws/resiliencehubv2/model/AssessmentCost.h>
#include <aws/resiliencehubv2/model/AssessmentStatus.h>
#include <aws/resiliencehubv2/model/AssociatedSystem.h>
#include <aws/resiliencehubv2/model/DependencyDiscoveryConfig.h>
#include <aws/resiliencehubv2/model/EffectivePolicyValues.h>
#include <aws/resiliencehubv2/model/PermissionModel.h>
#include <aws/resiliencehubv2/model/ResourceDiscoveryStatus.h>
#include <aws/resiliencehubv2/model/ServiceReportConfiguration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace resiliencehubv2 {
namespace Model {

/**
 * <p>Represents a service in Resilience Hub. A service is the primary unit of
 * resilience assessment.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/Service">AWS
 * API Reference</a></p>
 */
class Service {
 public:
  AWS_RESILIENCEHUBV2_API Service() = default;
  AWS_RESILIENCEHUBV2_API Service(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Service& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::String& GetServiceArn() const { return m_serviceArn; }
  inline bool ServiceArnHasBeenSet() const { return m_serviceArnHasBeenSet; }
  template <typename ServiceArnT = Aws::String>
  void SetServiceArn(ServiceArnT&& value) {
    m_serviceArnHasBeenSet = true;
    m_serviceArn = std::forward<ServiceArnT>(value);
  }
  template <typename ServiceArnT = Aws::String>
  Service& WithServiceArn(ServiceArnT&& value) {
    SetServiceArn(std::forward<ServiceArnT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  Service& WithName(NameT&& value) {
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
  Service& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The systems associated with the service.</p>
   */
  inline const Aws::Vector<AssociatedSystem>& GetAssociatedSystems() const { return m_associatedSystems; }
  inline bool AssociatedSystemsHasBeenSet() const { return m_associatedSystemsHasBeenSet; }
  template <typename AssociatedSystemsT = Aws::Vector<AssociatedSystem>>
  void SetAssociatedSystems(AssociatedSystemsT&& value) {
    m_associatedSystemsHasBeenSet = true;
    m_associatedSystems = std::forward<AssociatedSystemsT>(value);
  }
  template <typename AssociatedSystemsT = Aws::Vector<AssociatedSystem>>
  Service& WithAssociatedSystems(AssociatedSystemsT&& value) {
    SetAssociatedSystems(std::forward<AssociatedSystemsT>(value));
    return *this;
  }
  template <typename AssociatedSystemsT = AssociatedSystem>
  Service& AddAssociatedSystems(AssociatedSystemsT&& value) {
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
  Service& WithPolicyArn(PolicyArnT&& value) {
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
  Service& WithRegions(RegionsT&& value) {
    SetRegions(std::forward<RegionsT>(value));
    return *this;
  }
  template <typename RegionsT = Aws::String>
  Service& AddRegions(RegionsT&& value) {
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
  Service& WithPermissionModel(PermissionModelT&& value) {
    SetPermissionModel(std::forward<PermissionModelT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The dependency discovery configuration for the service.</p>
   */
  inline const DependencyDiscoveryConfig& GetDependencyDiscovery() const { return m_dependencyDiscovery; }
  inline bool DependencyDiscoveryHasBeenSet() const { return m_dependencyDiscoveryHasBeenSet; }
  template <typename DependencyDiscoveryT = DependencyDiscoveryConfig>
  void SetDependencyDiscovery(DependencyDiscoveryT&& value) {
    m_dependencyDiscoveryHasBeenSet = true;
    m_dependencyDiscovery = std::forward<DependencyDiscoveryT>(value);
  }
  template <typename DependencyDiscoveryT = DependencyDiscoveryConfig>
  Service& WithDependencyDiscovery(DependencyDiscoveryT&& value) {
    SetDependencyDiscovery(std::forward<DependencyDiscoveryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The effective policy values for the service.</p>
   */
  inline const EffectivePolicyValues& GetEffectivePolicyValues() const { return m_effectivePolicyValues; }
  inline bool EffectivePolicyValuesHasBeenSet() const { return m_effectivePolicyValuesHasBeenSet; }
  template <typename EffectivePolicyValuesT = EffectivePolicyValues>
  void SetEffectivePolicyValues(EffectivePolicyValuesT&& value) {
    m_effectivePolicyValuesHasBeenSet = true;
    m_effectivePolicyValues = std::forward<EffectivePolicyValuesT>(value);
  }
  template <typename EffectivePolicyValuesT = EffectivePolicyValues>
  Service& WithEffectivePolicyValues(EffectivePolicyValuesT&& value) {
    SetEffectivePolicyValues(std::forward<EffectivePolicyValuesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The achievability status of the service's resilience targets.</p>
   */
  inline const Achievability& GetAchievability() const { return m_achievability; }
  inline bool AchievabilityHasBeenSet() const { return m_achievabilityHasBeenSet; }
  template <typename AchievabilityT = Achievability>
  void SetAchievability(AchievabilityT&& value) {
    m_achievabilityHasBeenSet = true;
    m_achievability = std::forward<AchievabilityT>(value);
  }
  template <typename AchievabilityT = Achievability>
  Service& WithAchievability(AchievabilityT&& value) {
    SetAchievability(std::forward<AchievabilityT>(value));
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
  Service& WithReportConfiguration(ReportConfigurationT&& value) {
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
  Service& WithKmsKeyId(KmsKeyIdT&& value) {
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
  Service& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  Service& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The estimated cost of running an assessment on the service.</p>
   */
  inline const AssessmentCost& GetEstimatedAssessmentCost() const { return m_estimatedAssessmentCost; }
  inline bool EstimatedAssessmentCostHasBeenSet() const { return m_estimatedAssessmentCostHasBeenSet; }
  template <typename EstimatedAssessmentCostT = AssessmentCost>
  void SetEstimatedAssessmentCost(EstimatedAssessmentCostT&& value) {
    m_estimatedAssessmentCostHasBeenSet = true;
    m_estimatedAssessmentCost = std::forward<EstimatedAssessmentCostT>(value);
  }
  template <typename EstimatedAssessmentCostT = AssessmentCost>
  Service& WithEstimatedAssessmentCost(EstimatedAssessmentCostT&& value) {
    SetEstimatedAssessmentCost(std::forward<EstimatedAssessmentCostT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The resource discovery status for the service.</p>
   */
  inline const ResourceDiscoveryStatus& GetResourceDiscovery() const { return m_resourceDiscovery; }
  inline bool ResourceDiscoveryHasBeenSet() const { return m_resourceDiscoveryHasBeenSet; }
  template <typename ResourceDiscoveryT = ResourceDiscoveryStatus>
  void SetResourceDiscovery(ResourceDiscoveryT&& value) {
    m_resourceDiscoveryHasBeenSet = true;
    m_resourceDiscovery = std::forward<ResourceDiscoveryT>(value);
  }
  template <typename ResourceDiscoveryT = ResourceDiscoveryStatus>
  Service& WithResourceDiscovery(ResourceDiscoveryT&& value) {
    SetResourceDiscovery(std::forward<ResourceDiscoveryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current assessment status of the service.</p>
   */
  inline AssessmentStatus GetAssessmentStatus() const { return m_assessmentStatus; }
  inline bool AssessmentStatusHasBeenSet() const { return m_assessmentStatusHasBeenSet; }
  inline void SetAssessmentStatus(AssessmentStatus value) {
    m_assessmentStatusHasBeenSet = true;
    m_assessmentStatus = value;
  }
  inline Service& WithAssessmentStatus(AssessmentStatus value) {
    SetAssessmentStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the assessment should be rerun.</p>
   */
  inline bool GetRerunAssessment() const { return m_rerunAssessment; }
  inline bool RerunAssessmentHasBeenSet() const { return m_rerunAssessmentHasBeenSet; }
  inline void SetRerunAssessment(bool value) {
    m_rerunAssessmentHasBeenSet = true;
    m_rerunAssessment = value;
  }
  inline Service& WithRerunAssessment(bool value) {
    SetRerunAssessment(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of open findings for the service.</p>
   */
  inline int GetOpenFindingsCount() const { return m_openFindingsCount; }
  inline bool OpenFindingsCountHasBeenSet() const { return m_openFindingsCountHasBeenSet; }
  inline void SetOpenFindingsCount(int value) {
    m_openFindingsCountHasBeenSet = true;
    m_openFindingsCount = value;
  }
  inline Service& WithOpenFindingsCount(int value) {
    SetOpenFindingsCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of resolved findings for the service.</p>
   */
  inline int GetResolvedFindingsCount() const { return m_resolvedFindingsCount; }
  inline bool ResolvedFindingsCountHasBeenSet() const { return m_resolvedFindingsCountHasBeenSet; }
  inline void SetResolvedFindingsCount(int value) {
    m_resolvedFindingsCountHasBeenSet = true;
    m_resolvedFindingsCount = value;
  }
  inline Service& WithResolvedFindingsCount(int value) {
    SetResolvedFindingsCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS Organizations identifier for the service.</p>
   */
  inline const Aws::String& GetOrganizationId() const { return m_organizationId; }
  inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }
  template <typename OrganizationIdT = Aws::String>
  void SetOrganizationId(OrganizationIdT&& value) {
    m_organizationIdHasBeenSet = true;
    m_organizationId = std::forward<OrganizationIdT>(value);
  }
  template <typename OrganizationIdT = Aws::String>
  Service& WithOrganizationId(OrganizationIdT&& value) {
    SetOrganizationId(std::forward<OrganizationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The organizational unit (OU) identifier for the service.</p>
   */
  inline const Aws::String& GetOuId() const { return m_ouId; }
  inline bool OuIdHasBeenSet() const { return m_ouIdHasBeenSet; }
  template <typename OuIdT = Aws::String>
  void SetOuId(OuIdT&& value) {
    m_ouIdHasBeenSet = true;
    m_ouId = std::forward<OuIdT>(value);
  }
  template <typename OuIdT = Aws::String>
  Service& WithOuId(OuIdT&& value) {
    SetOuId(std::forward<OuIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS account ID that owns the service.</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  Service& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the service was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  Service& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the service was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  Service& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_serviceArn;

  Aws::String m_name;

  Aws::String m_description;

  Aws::Vector<AssociatedSystem> m_associatedSystems;

  Aws::String m_policyArn;

  Aws::Vector<Aws::String> m_regions;

  PermissionModel m_permissionModel;

  DependencyDiscoveryConfig m_dependencyDiscovery;

  EffectivePolicyValues m_effectivePolicyValues;

  Achievability m_achievability;

  ServiceReportConfiguration m_reportConfiguration;

  Aws::String m_kmsKeyId;

  Aws::Map<Aws::String, Aws::String> m_tags;

  AssessmentCost m_estimatedAssessmentCost;

  ResourceDiscoveryStatus m_resourceDiscovery;

  AssessmentStatus m_assessmentStatus{AssessmentStatus::NOT_SET};

  bool m_rerunAssessment{false};

  int m_openFindingsCount{0};

  int m_resolvedFindingsCount{0};

  Aws::String m_organizationId;

  Aws::String m_ouId;

  Aws::String m_accountId;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_serviceArnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_associatedSystemsHasBeenSet = false;
  bool m_policyArnHasBeenSet = false;
  bool m_regionsHasBeenSet = false;
  bool m_permissionModelHasBeenSet = false;
  bool m_dependencyDiscoveryHasBeenSet = false;
  bool m_effectivePolicyValuesHasBeenSet = false;
  bool m_achievabilityHasBeenSet = false;
  bool m_reportConfigurationHasBeenSet = false;
  bool m_kmsKeyIdHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_estimatedAssessmentCostHasBeenSet = false;
  bool m_resourceDiscoveryHasBeenSet = false;
  bool m_assessmentStatusHasBeenSet = false;
  bool m_rerunAssessmentHasBeenSet = false;
  bool m_openFindingsCountHasBeenSet = false;
  bool m_resolvedFindingsCountHasBeenSet = false;
  bool m_organizationIdHasBeenSet = false;
  bool m_ouIdHasBeenSet = false;
  bool m_accountIdHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
