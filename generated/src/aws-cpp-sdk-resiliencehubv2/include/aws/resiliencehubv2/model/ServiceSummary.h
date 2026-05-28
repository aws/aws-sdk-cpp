/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/Achievability.h>
#include <aws/resiliencehubv2/model/AssessmentStatus.h>
#include <aws/resiliencehubv2/model/AssociatedSystem.h>
#include <aws/resiliencehubv2/model/DependencyDiscoveryConfig.h>

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
 * <p>Contains summary information about a service.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/ServiceSummary">AWS
 * API Reference</a></p>
 */
class ServiceSummary {
 public:
  AWS_RESILIENCEHUBV2_API ServiceSummary() = default;
  AWS_RESILIENCEHUBV2_API ServiceSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API ServiceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  ServiceSummary& WithServiceArn(ServiceArnT&& value) {
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
  ServiceSummary& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
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
  ServiceSummary& WithAssociatedSystems(AssociatedSystemsT&& value) {
    SetAssociatedSystems(std::forward<AssociatedSystemsT>(value));
    return *this;
  }
  template <typename AssociatedSystemsT = AssociatedSystem>
  ServiceSummary& AddAssociatedSystems(AssociatedSystemsT&& value) {
    m_associatedSystemsHasBeenSet = true;
    m_associatedSystems.emplace_back(std::forward<AssociatedSystemsT>(value));
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
  ServiceSummary& WithRegions(RegionsT&& value) {
    SetRegions(std::forward<RegionsT>(value));
    return *this;
  }
  template <typename RegionsT = Aws::String>
  ServiceSummary& AddRegions(RegionsT&& value) {
    m_regionsHasBeenSet = true;
    m_regions.emplace_back(std::forward<RegionsT>(value));
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
  ServiceSummary& WithPolicyArn(PolicyArnT&& value) {
    SetPolicyArn(std::forward<PolicyArnT>(value));
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
  inline ServiceSummary& WithAssessmentStatus(AssessmentStatus value) {
    SetAssessmentStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of open findings.</p>
   */
  inline int GetOpenFindingsCount() const { return m_openFindingsCount; }
  inline bool OpenFindingsCountHasBeenSet() const { return m_openFindingsCountHasBeenSet; }
  inline void SetOpenFindingsCount(int value) {
    m_openFindingsCountHasBeenSet = true;
    m_openFindingsCount = value;
  }
  inline ServiceSummary& WithOpenFindingsCount(int value) {
    SetOpenFindingsCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of resolved findings.</p>
   */
  inline int GetResolvedFindingsCount() const { return m_resolvedFindingsCount; }
  inline bool ResolvedFindingsCountHasBeenSet() const { return m_resolvedFindingsCountHasBeenSet; }
  inline void SetResolvedFindingsCount(int value) {
    m_resolvedFindingsCountHasBeenSet = true;
    m_resolvedFindingsCount = value;
  }
  inline ServiceSummary& WithResolvedFindingsCount(int value) {
    SetResolvedFindingsCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The dependency discovery configuration.</p>
   */
  inline const DependencyDiscoveryConfig& GetDependencyDiscovery() const { return m_dependencyDiscovery; }
  inline bool DependencyDiscoveryHasBeenSet() const { return m_dependencyDiscoveryHasBeenSet; }
  template <typename DependencyDiscoveryT = DependencyDiscoveryConfig>
  void SetDependencyDiscovery(DependencyDiscoveryT&& value) {
    m_dependencyDiscoveryHasBeenSet = true;
    m_dependencyDiscovery = std::forward<DependencyDiscoveryT>(value);
  }
  template <typename DependencyDiscoveryT = DependencyDiscoveryConfig>
  ServiceSummary& WithDependencyDiscovery(DependencyDiscoveryT&& value) {
    SetDependencyDiscovery(std::forward<DependencyDiscoveryT>(value));
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
  ServiceSummary& WithAchievability(AchievabilityT&& value) {
    SetAchievability(std::forward<AchievabilityT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Displayed only if caller has access.</p>
   */
  inline const Aws::String& GetOrganizationId() const { return m_organizationId; }
  inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }
  template <typename OrganizationIdT = Aws::String>
  void SetOrganizationId(OrganizationIdT&& value) {
    m_organizationIdHasBeenSet = true;
    m_organizationId = std::forward<OrganizationIdT>(value);
  }
  template <typename OrganizationIdT = Aws::String>
  ServiceSummary& WithOrganizationId(OrganizationIdT&& value) {
    SetOrganizationId(std::forward<OrganizationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Displayed only if caller has access.</p>
   */
  inline const Aws::String& GetOuId() const { return m_ouId; }
  inline bool OuIdHasBeenSet() const { return m_ouIdHasBeenSet; }
  template <typename OuIdT = Aws::String>
  void SetOuId(OuIdT&& value) {
    m_ouIdHasBeenSet = true;
    m_ouId = std::forward<OuIdT>(value);
  }
  template <typename OuIdT = Aws::String>
  ServiceSummary& WithOuId(OuIdT&& value) {
    SetOuId(std::forward<OuIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Displayed only if caller has access.</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  ServiceSummary& WithAccountId(AccountIdT&& value) {
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
  ServiceSummary& WithCreatedAt(CreatedAtT&& value) {
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
  ServiceSummary& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_serviceArn;

  Aws::String m_name;

  Aws::Vector<AssociatedSystem> m_associatedSystems;

  Aws::Vector<Aws::String> m_regions;

  Aws::String m_policyArn;

  AssessmentStatus m_assessmentStatus{AssessmentStatus::NOT_SET};

  int m_openFindingsCount{0};

  int m_resolvedFindingsCount{0};

  DependencyDiscoveryConfig m_dependencyDiscovery;

  Achievability m_achievability;

  Aws::String m_organizationId;

  Aws::String m_ouId;

  Aws::String m_accountId;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_serviceArnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_associatedSystemsHasBeenSet = false;
  bool m_regionsHasBeenSet = false;
  bool m_policyArnHasBeenSet = false;
  bool m_assessmentStatusHasBeenSet = false;
  bool m_openFindingsCountHasBeenSet = false;
  bool m_resolvedFindingsCountHasBeenSet = false;
  bool m_dependencyDiscoveryHasBeenSet = false;
  bool m_achievabilityHasBeenSet = false;
  bool m_organizationIdHasBeenSet = false;
  bool m_ouIdHasBeenSet = false;
  bool m_accountIdHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
