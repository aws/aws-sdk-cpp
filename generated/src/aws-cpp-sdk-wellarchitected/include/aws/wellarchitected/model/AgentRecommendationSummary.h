/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/model/Effort.h>
#include <aws/wellarchitected/model/ImpactCategory.h>
#include <aws/wellarchitected/model/Pillar.h>
#include <aws/wellarchitected/model/Priority.h>
#include <aws/wellarchitected/model/RecommendationState.h>
#include <aws/wellarchitected/model/RecommendationStatus.h>
#include <aws/wellarchitected/model/RecommendationType.h>
#include <aws/wellarchitected/model/Roi.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace WellArchitected {
namespace Model {

/**
 * <p>Summary of an agent optimization recommendation returned by list
 * operations.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/AgentRecommendationSummary">AWS
 * API Reference</a></p>
 */
class AgentRecommendationSummary {
 public:
  AWS_WELLARCHITECTED_API AgentRecommendationSummary() = default;
  AWS_WELLARCHITECTED_API AgentRecommendationSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_WELLARCHITECTED_API AgentRecommendationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the recommendation.</p>
   */
  inline const Aws::String& GetRecommendationArn() const { return m_recommendationArn; }
  inline bool RecommendationArnHasBeenSet() const { return m_recommendationArnHasBeenSet; }
  template <typename RecommendationArnT = Aws::String>
  void SetRecommendationArn(RecommendationArnT&& value) {
    m_recommendationArnHasBeenSet = true;
    m_recommendationArn = std::forward<RecommendationArnT>(value);
  }
  template <typename RecommendationArnT = Aws::String>
  AgentRecommendationSummary& WithRecommendationArn(RecommendationArnT&& value) {
    SetRecommendationArn(std::forward<RecommendationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the associated profile.</p>
   */
  inline const Aws::String& GetProfileArn() const { return m_profileArn; }
  inline bool ProfileArnHasBeenSet() const { return m_profileArnHasBeenSet; }
  template <typename ProfileArnT = Aws::String>
  void SetProfileArn(ProfileArnT&& value) {
    m_profileArnHasBeenSet = true;
    m_profileArn = std::forward<ProfileArnT>(value);
  }
  template <typename ProfileArnT = Aws::String>
  AgentRecommendationSummary& WithProfileArn(ProfileArnT&& value) {
    SetProfileArn(std::forward<ProfileArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The title of the recommendation.</p>
   */
  inline const Aws::String& GetTitle() const { return m_title; }
  inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
  template <typename TitleT = Aws::String>
  void SetTitle(TitleT&& value) {
    m_titleHasBeenSet = true;
    m_title = std::forward<TitleT>(value);
  }
  template <typename TitleT = Aws::String>
  AgentRecommendationSummary& WithTitle(TitleT&& value) {
    SetTitle(std::forward<TitleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the recommendation.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  AgentRecommendationSummary& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the recommendation.</p>
   */
  inline RecommendationType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(RecommendationType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline AgentRecommendationSummary& WithType(RecommendationType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Well-Architected Tool Framework pillar that the recommendation
   * addresses.</p>
   */
  inline Pillar GetPillar() const { return m_pillar; }
  inline bool PillarHasBeenSet() const { return m_pillarHasBeenSet; }
  inline void SetPillar(Pillar value) {
    m_pillarHasBeenSet = true;
    m_pillar = value;
  }
  inline AgentRecommendationSummary& WithPillar(Pillar value) {
    SetPillar(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The priority of the recommendation.</p>
   */
  inline Priority GetPriority() const { return m_priority; }
  inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
  inline void SetPriority(Priority value) {
    m_priorityHasBeenSet = true;
    m_priority = value;
  }
  inline AgentRecommendationSummary& WithPriority(Priority value) {
    SetPriority(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The effort required to implement the recommendation.</p>
   */
  inline Effort GetEffort() const { return m_effort; }
  inline bool EffortHasBeenSet() const { return m_effortHasBeenSet; }
  inline void SetEffort(Effort value) {
    m_effortHasBeenSet = true;
    m_effort = value;
  }
  inline AgentRecommendationSummary& WithEffort(Effort value) {
    SetEffort(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the recommendation.</p>
   */
  inline RecommendationStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(RecommendationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline AgentRecommendationSummary& WithStatus(RecommendationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current state of the recommendation.</p>
   */
  inline RecommendationState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(RecommendationState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline AgentRecommendationSummary& WithState(RecommendationState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The free-text reason associated with the recommendation's most recent status
   * update.</p>
   */
  inline const Aws::String& GetUpdateReason() const { return m_updateReason; }
  inline bool UpdateReasonHasBeenSet() const { return m_updateReasonHasBeenSet; }
  template <typename UpdateReasonT = Aws::String>
  void SetUpdateReason(UpdateReasonT&& value) {
    m_updateReasonHasBeenSet = true;
    m_updateReason = std::forward<UpdateReasonT>(value);
  }
  template <typename UpdateReasonT = Aws::String>
  AgentRecommendationSummary& WithUpdateReason(UpdateReasonT&& value) {
    SetUpdateReason(std::forward<UpdateReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The severity of the recommendation's impact.</p>
   */
  inline ImpactCategory GetImpact() const { return m_impact; }
  inline bool ImpactHasBeenSet() const { return m_impactHasBeenSet; }
  inline void SetImpact(ImpactCategory value) {
    m_impactHasBeenSet = true;
    m_impact = value;
  }
  inline AgentRecommendationSummary& WithImpact(ImpactCategory value) {
    SetImpact(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The return on investment estimate for the recommendation.</p>
   */
  inline const Roi& GetRoi() const { return m_roi; }
  inline bool RoiHasBeenSet() const { return m_roiHasBeenSet; }
  template <typename RoiT = Roi>
  void SetRoi(RoiT&& value) {
    m_roiHasBeenSet = true;
    m_roi = std::forward<RoiT>(value);
  }
  template <typename RoiT = Roi>
  AgentRecommendationSummary& WithRoi(RoiT&& value) {
    SetRoi(std::forward<RoiT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of Amazon Web Services resources this recommendation affects.</p>
   */
  inline int GetNumberOfResources() const { return m_numberOfResources; }
  inline bool NumberOfResourcesHasBeenSet() const { return m_numberOfResourcesHasBeenSet; }
  inline void SetNumberOfResources(int value) {
    m_numberOfResourcesHasBeenSet = true;
    m_numberOfResources = value;
  }
  inline AgentRecommendationSummary& WithNumberOfResources(int value) {
    SetNumberOfResources(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services services that the recommendation applies to.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAwsServices() const { return m_awsServices; }
  inline bool AwsServicesHasBeenSet() const { return m_awsServicesHasBeenSet; }
  template <typename AwsServicesT = Aws::Vector<Aws::String>>
  void SetAwsServices(AwsServicesT&& value) {
    m_awsServicesHasBeenSet = true;
    m_awsServices = std::forward<AwsServicesT>(value);
  }
  template <typename AwsServicesT = Aws::Vector<Aws::String>>
  AgentRecommendationSummary& WithAwsServices(AwsServicesT&& value) {
    SetAwsServices(std::forward<AwsServicesT>(value));
    return *this;
  }
  template <typename AwsServicesT = Aws::String>
  AgentRecommendationSummary& AddAwsServices(AwsServicesT&& value) {
    m_awsServicesHasBeenSet = true;
    m_awsServices.emplace_back(std::forward<AwsServicesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The business units that own the affected resources.</p>
   */
  inline const Aws::Vector<Aws::String>& GetBusinessUnits() const { return m_businessUnits; }
  inline bool BusinessUnitsHasBeenSet() const { return m_businessUnitsHasBeenSet; }
  template <typename BusinessUnitsT = Aws::Vector<Aws::String>>
  void SetBusinessUnits(BusinessUnitsT&& value) {
    m_businessUnitsHasBeenSet = true;
    m_businessUnits = std::forward<BusinessUnitsT>(value);
  }
  template <typename BusinessUnitsT = Aws::Vector<Aws::String>>
  AgentRecommendationSummary& WithBusinessUnits(BusinessUnitsT&& value) {
    SetBusinessUnits(std::forward<BusinessUnitsT>(value));
    return *this;
  }
  template <typename BusinessUnitsT = Aws::String>
  AgentRecommendationSummary& AddBusinessUnits(BusinessUnitsT&& value) {
    m_businessUnitsHasBeenSet = true;
    m_businessUnits.emplace_back(std::forward<BusinessUnitsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The applications that the recommendation targets.</p>
   */
  inline const Aws::Vector<Aws::String>& GetApplications() const { return m_applications; }
  inline bool ApplicationsHasBeenSet() const { return m_applicationsHasBeenSet; }
  template <typename ApplicationsT = Aws::Vector<Aws::String>>
  void SetApplications(ApplicationsT&& value) {
    m_applicationsHasBeenSet = true;
    m_applications = std::forward<ApplicationsT>(value);
  }
  template <typename ApplicationsT = Aws::Vector<Aws::String>>
  AgentRecommendationSummary& WithApplications(ApplicationsT&& value) {
    SetApplications(std::forward<ApplicationsT>(value));
    return *this;
  }
  template <typename ApplicationsT = Aws::String>
  AgentRecommendationSummary& AddApplications(ApplicationsT&& value) {
    m_applicationsHasBeenSet = true;
    m_applications.emplace_back(std::forward<ApplicationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the user or system that created this recommendation.</p>
   */
  inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
  inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
  template <typename CreatedByT = Aws::String>
  void SetCreatedBy(CreatedByT&& value) {
    m_createdByHasBeenSet = true;
    m_createdBy = std::forward<CreatedByT>(value);
  }
  template <typename CreatedByT = Aws::String>
  AgentRecommendationSummary& WithCreatedBy(CreatedByT&& value) {
    SetCreatedBy(std::forward<CreatedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the recommendation was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  AgentRecommendationSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the user or system that last modified this
   * recommendation.</p>
   */
  inline const Aws::String& GetLastModifiedBy() const { return m_lastModifiedBy; }
  inline bool LastModifiedByHasBeenSet() const { return m_lastModifiedByHasBeenSet; }
  template <typename LastModifiedByT = Aws::String>
  void SetLastModifiedBy(LastModifiedByT&& value) {
    m_lastModifiedByHasBeenSet = true;
    m_lastModifiedBy = std::forward<LastModifiedByT>(value);
  }
  template <typename LastModifiedByT = Aws::String>
  AgentRecommendationSummary& WithLastModifiedBy(LastModifiedByT&& value) {
    SetLastModifiedBy(std::forward<LastModifiedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the recommendation was last modified.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModifiedAt() const { return m_lastModifiedAt; }
  inline bool LastModifiedAtHasBeenSet() const { return m_lastModifiedAtHasBeenSet; }
  template <typename LastModifiedAtT = Aws::Utils::DateTime>
  void SetLastModifiedAt(LastModifiedAtT&& value) {
    m_lastModifiedAtHasBeenSet = true;
    m_lastModifiedAt = std::forward<LastModifiedAtT>(value);
  }
  template <typename LastModifiedAtT = Aws::Utils::DateTime>
  AgentRecommendationSummary& WithLastModifiedAt(LastModifiedAtT&& value) {
    SetLastModifiedAt(std::forward<LastModifiedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_recommendationArn;

  Aws::String m_profileArn;

  Aws::String m_title;

  Aws::String m_description;

  RecommendationType m_type{RecommendationType::NOT_SET};

  Pillar m_pillar{Pillar::NOT_SET};

  Priority m_priority{Priority::NOT_SET};

  Effort m_effort{Effort::NOT_SET};

  RecommendationStatus m_status{RecommendationStatus::NOT_SET};

  RecommendationState m_state{RecommendationState::NOT_SET};

  Aws::String m_updateReason;

  ImpactCategory m_impact{ImpactCategory::NOT_SET};

  Roi m_roi;

  int m_numberOfResources{0};

  Aws::Vector<Aws::String> m_awsServices;

  Aws::Vector<Aws::String> m_businessUnits;

  Aws::Vector<Aws::String> m_applications;

  Aws::String m_createdBy;

  Aws::Utils::DateTime m_createdAt{};

  Aws::String m_lastModifiedBy;

  Aws::Utils::DateTime m_lastModifiedAt{};
  bool m_recommendationArnHasBeenSet = false;
  bool m_profileArnHasBeenSet = false;
  bool m_titleHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_pillarHasBeenSet = false;
  bool m_priorityHasBeenSet = false;
  bool m_effortHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_updateReasonHasBeenSet = false;
  bool m_impactHasBeenSet = false;
  bool m_roiHasBeenSet = false;
  bool m_numberOfResourcesHasBeenSet = false;
  bool m_awsServicesHasBeenSet = false;
  bool m_businessUnitsHasBeenSet = false;
  bool m_applicationsHasBeenSet = false;
  bool m_createdByHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_lastModifiedByHasBeenSet = false;
  bool m_lastModifiedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
