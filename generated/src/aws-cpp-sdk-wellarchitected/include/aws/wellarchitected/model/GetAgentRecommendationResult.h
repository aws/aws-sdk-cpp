/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/model/AgentRecommendationRemediation.h>
#include <aws/wellarchitected/model/CrossPillarBenefit.h>
#include <aws/wellarchitected/model/Effort.h>
#include <aws/wellarchitected/model/ImpactCategory.h>
#include <aws/wellarchitected/model/Insight.h>
#include <aws/wellarchitected/model/Pillar.h>
#include <aws/wellarchitected/model/Priority.h>
#include <aws/wellarchitected/model/RecommendationGoal.h>
#include <aws/wellarchitected/model/RecommendationSource.h>
#include <aws/wellarchitected/model/RecommendationState.h>
#include <aws/wellarchitected/model/RecommendationStatus.h>
#include <aws/wellarchitected/model/RecommendationType.h>
#include <aws/wellarchitected/model/RemediationSummary.h>
#include <aws/wellarchitected/model/Roi.h>
#include <aws/wellarchitected/model/Tag.h>
#include <aws/wellarchitected/model/TradeOff.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace WellArchitected {
namespace Model {
class GetAgentRecommendationResult {
 public:
  AWS_WELLARCHITECTED_API GetAgentRecommendationResult() = default;
  AWS_WELLARCHITECTED_API GetAgentRecommendationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_WELLARCHITECTED_API GetAgentRecommendationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the recommendation.</p>
   */
  inline const Aws::String& GetRecommendationArn() const { return m_recommendationArn; }
  template <typename RecommendationArnT = Aws::String>
  void SetRecommendationArn(RecommendationArnT&& value) {
    m_recommendationArnHasBeenSet = true;
    m_recommendationArn = std::forward<RecommendationArnT>(value);
  }
  template <typename RecommendationArnT = Aws::String>
  GetAgentRecommendationResult& WithRecommendationArn(RecommendationArnT&& value) {
    SetRecommendationArn(std::forward<RecommendationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the associated profile.</p>
   */
  inline const Aws::String& GetProfileArn() const { return m_profileArn; }
  template <typename ProfileArnT = Aws::String>
  void SetProfileArn(ProfileArnT&& value) {
    m_profileArnHasBeenSet = true;
    m_profileArn = std::forward<ProfileArnT>(value);
  }
  template <typename ProfileArnT = Aws::String>
  GetAgentRecommendationResult& WithProfileArn(ProfileArnT&& value) {
    SetProfileArn(std::forward<ProfileArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The title of the recommendation.</p>
   */
  inline const Aws::String& GetTitle() const { return m_title; }
  template <typename TitleT = Aws::String>
  void SetTitle(TitleT&& value) {
    m_titleHasBeenSet = true;
    m_title = std::forward<TitleT>(value);
  }
  template <typename TitleT = Aws::String>
  GetAgentRecommendationResult& WithTitle(TitleT&& value) {
    SetTitle(std::forward<TitleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the recommendation.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  GetAgentRecommendationResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the recommendation.</p>
   */
  inline RecommendationType GetType() const { return m_type; }
  inline void SetType(RecommendationType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline GetAgentRecommendationResult& WithType(RecommendationType value) {
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
  inline void SetPillar(Pillar value) {
    m_pillarHasBeenSet = true;
    m_pillar = value;
  }
  inline GetAgentRecommendationResult& WithPillar(Pillar value) {
    SetPillar(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The priority of the recommendation.</p>
   */
  inline Priority GetPriority() const { return m_priority; }
  inline void SetPriority(Priority value) {
    m_priorityHasBeenSet = true;
    m_priority = value;
  }
  inline GetAgentRecommendationResult& WithPriority(Priority value) {
    SetPriority(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The effort required to implement the recommendation.</p>
   */
  inline Effort GetEffort() const { return m_effort; }
  inline void SetEffort(Effort value) {
    m_effortHasBeenSet = true;
    m_effort = value;
  }
  inline GetAgentRecommendationResult& WithEffort(Effort value) {
    SetEffort(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the recommendation.</p>
   */
  inline RecommendationStatus GetStatus() const { return m_status; }
  inline void SetStatus(RecommendationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetAgentRecommendationResult& WithStatus(RecommendationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current state of the recommendation.</p>
   */
  inline RecommendationState GetState() const { return m_state; }
  inline void SetState(RecommendationState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline GetAgentRecommendationResult& WithState(RecommendationState value) {
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
  template <typename UpdateReasonT = Aws::String>
  void SetUpdateReason(UpdateReasonT&& value) {
    m_updateReasonHasBeenSet = true;
    m_updateReason = std::forward<UpdateReasonT>(value);
  }
  template <typename UpdateReasonT = Aws::String>
  GetAgentRecommendationResult& WithUpdateReason(UpdateReasonT&& value) {
    SetUpdateReason(std::forward<UpdateReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The severity of the recommendation's impact.</p>
   */
  inline ImpactCategory GetImpact() const { return m_impact; }
  inline void SetImpact(ImpactCategory value) {
    m_impactHasBeenSet = true;
    m_impact = value;
  }
  inline GetAgentRecommendationResult& WithImpact(ImpactCategory value) {
    SetImpact(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The return on investment estimate for the recommendation.</p>
   */
  inline const Roi& GetRoi() const { return m_roi; }
  template <typename RoiT = Roi>
  void SetRoi(RoiT&& value) {
    m_roiHasBeenSet = true;
    m_roi = std::forward<RoiT>(value);
  }
  template <typename RoiT = Roi>
  GetAgentRecommendationResult& WithRoi(RoiT&& value) {
    SetRoi(std::forward<RoiT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of Amazon Web Services resources this recommendation affects.</p>
   */
  inline int GetNumberOfResources() const { return m_numberOfResources; }
  inline void SetNumberOfResources(int value) {
    m_numberOfResourcesHasBeenSet = true;
    m_numberOfResources = value;
  }
  inline GetAgentRecommendationResult& WithNumberOfResources(int value) {
    SetNumberOfResources(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services services that the recommendation applies to.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAwsServices() const { return m_awsServices; }
  template <typename AwsServicesT = Aws::Vector<Aws::String>>
  void SetAwsServices(AwsServicesT&& value) {
    m_awsServicesHasBeenSet = true;
    m_awsServices = std::forward<AwsServicesT>(value);
  }
  template <typename AwsServicesT = Aws::Vector<Aws::String>>
  GetAgentRecommendationResult& WithAwsServices(AwsServicesT&& value) {
    SetAwsServices(std::forward<AwsServicesT>(value));
    return *this;
  }
  template <typename AwsServicesT = Aws::String>
  GetAgentRecommendationResult& AddAwsServices(AwsServicesT&& value) {
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
  template <typename BusinessUnitsT = Aws::Vector<Aws::String>>
  void SetBusinessUnits(BusinessUnitsT&& value) {
    m_businessUnitsHasBeenSet = true;
    m_businessUnits = std::forward<BusinessUnitsT>(value);
  }
  template <typename BusinessUnitsT = Aws::Vector<Aws::String>>
  GetAgentRecommendationResult& WithBusinessUnits(BusinessUnitsT&& value) {
    SetBusinessUnits(std::forward<BusinessUnitsT>(value));
    return *this;
  }
  template <typename BusinessUnitsT = Aws::String>
  GetAgentRecommendationResult& AddBusinessUnits(BusinessUnitsT&& value) {
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
  template <typename ApplicationsT = Aws::Vector<Aws::String>>
  void SetApplications(ApplicationsT&& value) {
    m_applicationsHasBeenSet = true;
    m_applications = std::forward<ApplicationsT>(value);
  }
  template <typename ApplicationsT = Aws::Vector<Aws::String>>
  GetAgentRecommendationResult& WithApplications(ApplicationsT&& value) {
    SetApplications(std::forward<ApplicationsT>(value));
    return *this;
  }
  template <typename ApplicationsT = Aws::String>
  GetAgentRecommendationResult& AddApplications(ApplicationsT&& value) {
    m_applicationsHasBeenSet = true;
    m_applications.emplace_back(std::forward<ApplicationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Detailed impact information for the recommendation.</p>
   */
  inline const Aws::Vector<Aws::String>& GetImpactDetails() const { return m_impactDetails; }
  template <typename ImpactDetailsT = Aws::Vector<Aws::String>>
  void SetImpactDetails(ImpactDetailsT&& value) {
    m_impactDetailsHasBeenSet = true;
    m_impactDetails = std::forward<ImpactDetailsT>(value);
  }
  template <typename ImpactDetailsT = Aws::Vector<Aws::String>>
  GetAgentRecommendationResult& WithImpactDetails(ImpactDetailsT&& value) {
    SetImpactDetails(std::forward<ImpactDetailsT>(value));
    return *this;
  }
  template <typename ImpactDetailsT = Aws::String>
  GetAgentRecommendationResult& AddImpactDetails(ImpactDetailsT&& value) {
    m_impactDetailsHasBeenSet = true;
    m_impactDetails.emplace_back(std::forward<ImpactDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of insights about the recommendation.</p>
   */
  inline const Aws::Vector<Insight>& GetInsights() const { return m_insights; }
  template <typename InsightsT = Aws::Vector<Insight>>
  void SetInsights(InsightsT&& value) {
    m_insightsHasBeenSet = true;
    m_insights = std::forward<InsightsT>(value);
  }
  template <typename InsightsT = Aws::Vector<Insight>>
  GetAgentRecommendationResult& WithInsights(InsightsT&& value) {
    SetInsights(std::forward<InsightsT>(value));
    return *this;
  }
  template <typename InsightsT = Insight>
  GetAgentRecommendationResult& AddInsights(InsightsT&& value) {
    m_insightsHasBeenSet = true;
    m_insights.emplace_back(std::forward<InsightsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Highlights describing what was detected.</p>
   */
  inline const Aws::Vector<Aws::String>& GetHighlights() const { return m_highlights; }
  template <typename HighlightsT = Aws::Vector<Aws::String>>
  void SetHighlights(HighlightsT&& value) {
    m_highlightsHasBeenSet = true;
    m_highlights = std::forward<HighlightsT>(value);
  }
  template <typename HighlightsT = Aws::Vector<Aws::String>>
  GetAgentRecommendationResult& WithHighlights(HighlightsT&& value) {
    SetHighlights(std::forward<HighlightsT>(value));
    return *this;
  }
  template <typename HighlightsT = Aws::String>
  GetAgentRecommendationResult& AddHighlights(HighlightsT&& value) {
    m_highlightsHasBeenSet = true;
    m_highlights.emplace_back(std::forward<HighlightsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A high-level summary of the recommended remediation.</p>
   */
  inline const RemediationSummary& GetRemediationSummary() const { return m_remediationSummary; }
  template <typename RemediationSummaryT = RemediationSummary>
  void SetRemediationSummary(RemediationSummaryT&& value) {
    m_remediationSummaryHasBeenSet = true;
    m_remediationSummary = std::forward<RemediationSummaryT>(value);
  }
  template <typename RemediationSummaryT = RemediationSummary>
  GetAgentRecommendationResult& WithRemediationSummary(RemediationSummaryT&& value) {
    SetRemediationSummary(std::forward<RemediationSummaryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Cross-pillar benefits of acting on the recommendation.</p>
   */
  inline const Aws::Vector<CrossPillarBenefit>& GetCrossPillarBenefits() const { return m_crossPillarBenefits; }
  template <typename CrossPillarBenefitsT = Aws::Vector<CrossPillarBenefit>>
  void SetCrossPillarBenefits(CrossPillarBenefitsT&& value) {
    m_crossPillarBenefitsHasBeenSet = true;
    m_crossPillarBenefits = std::forward<CrossPillarBenefitsT>(value);
  }
  template <typename CrossPillarBenefitsT = Aws::Vector<CrossPillarBenefit>>
  GetAgentRecommendationResult& WithCrossPillarBenefits(CrossPillarBenefitsT&& value) {
    SetCrossPillarBenefits(std::forward<CrossPillarBenefitsT>(value));
    return *this;
  }
  template <typename CrossPillarBenefitsT = CrossPillarBenefit>
  GetAgentRecommendationResult& AddCrossPillarBenefits(CrossPillarBenefitsT&& value) {
    m_crossPillarBenefitsHasBeenSet = true;
    m_crossPillarBenefits.emplace_back(std::forward<CrossPillarBenefitsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Trade-offs of acting on the recommendation.</p>
   */
  inline const Aws::Vector<TradeOff>& GetTradeOffs() const { return m_tradeOffs; }
  template <typename TradeOffsT = Aws::Vector<TradeOff>>
  void SetTradeOffs(TradeOffsT&& value) {
    m_tradeOffsHasBeenSet = true;
    m_tradeOffs = std::forward<TradeOffsT>(value);
  }
  template <typename TradeOffsT = Aws::Vector<TradeOff>>
  GetAgentRecommendationResult& WithTradeOffs(TradeOffsT&& value) {
    SetTradeOffs(std::forward<TradeOffsT>(value));
    return *this;
  }
  template <typename TradeOffsT = TradeOff>
  GetAgentRecommendationResult& AddTradeOffs(TradeOffsT&& value) {
    m_tradeOffsHasBeenSet = true;
    m_tradeOffs.emplace_back(std::forward<TradeOffsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Sources that generated this recommendation.</p>
   */
  inline const Aws::Vector<RecommendationSource>& GetSources() const { return m_sources; }
  template <typename SourcesT = Aws::Vector<RecommendationSource>>
  void SetSources(SourcesT&& value) {
    m_sourcesHasBeenSet = true;
    m_sources = std::forward<SourcesT>(value);
  }
  template <typename SourcesT = Aws::Vector<RecommendationSource>>
  GetAgentRecommendationResult& WithSources(SourcesT&& value) {
    SetSources(std::forward<SourcesT>(value));
    return *this;
  }
  inline GetAgentRecommendationResult& AddSources(RecommendationSource value) {
    m_sourcesHasBeenSet = true;
    m_sources.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Goals that this recommendation targets.</p>
   */
  inline const Aws::Vector<RecommendationGoal>& GetGoals() const { return m_goals; }
  template <typename GoalsT = Aws::Vector<RecommendationGoal>>
  void SetGoals(GoalsT&& value) {
    m_goalsHasBeenSet = true;
    m_goals = std::forward<GoalsT>(value);
  }
  template <typename GoalsT = Aws::Vector<RecommendationGoal>>
  GetAgentRecommendationResult& WithGoals(GoalsT&& value) {
    SetGoals(std::forward<GoalsT>(value));
    return *this;
  }
  template <typename GoalsT = RecommendationGoal>
  GetAgentRecommendationResult& AddGoals(GoalsT&& value) {
    m_goalsHasBeenSet = true;
    m_goals.emplace_back(std::forward<GoalsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A set of key-value pairs associated with the recommendation, used for cost
   * allocation and access control.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  GetAgentRecommendationResult& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  GetAgentRecommendationResult& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the user or system that created this recommendation.</p>
   */
  inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
  template <typename CreatedByT = Aws::String>
  void SetCreatedBy(CreatedByT&& value) {
    m_createdByHasBeenSet = true;
    m_createdBy = std::forward<CreatedByT>(value);
  }
  template <typename CreatedByT = Aws::String>
  GetAgentRecommendationResult& WithCreatedBy(CreatedByT&& value) {
    SetCreatedBy(std::forward<CreatedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the recommendation was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetAgentRecommendationResult& WithCreatedAt(CreatedAtT&& value) {
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
  template <typename LastModifiedByT = Aws::String>
  void SetLastModifiedBy(LastModifiedByT&& value) {
    m_lastModifiedByHasBeenSet = true;
    m_lastModifiedBy = std::forward<LastModifiedByT>(value);
  }
  template <typename LastModifiedByT = Aws::String>
  GetAgentRecommendationResult& WithLastModifiedBy(LastModifiedByT&& value) {
    SetLastModifiedBy(std::forward<LastModifiedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the recommendation was last modified.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModifiedAt() const { return m_lastModifiedAt; }
  template <typename LastModifiedAtT = Aws::Utils::DateTime>
  void SetLastModifiedAt(LastModifiedAtT&& value) {
    m_lastModifiedAtHasBeenSet = true;
    m_lastModifiedAt = std::forward<LastModifiedAtT>(value);
  }
  template <typename LastModifiedAtT = Aws::Utils::DateTime>
  GetAgentRecommendationResult& WithLastModifiedAt(LastModifiedAtT&& value) {
    SetLastModifiedAt(std::forward<LastModifiedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of remediations for the recommendation.</p>
   */
  inline const Aws::Vector<AgentRecommendationRemediation>& GetRemediations() const { return m_remediations; }
  template <typename RemediationsT = Aws::Vector<AgentRecommendationRemediation>>
  void SetRemediations(RemediationsT&& value) {
    m_remediationsHasBeenSet = true;
    m_remediations = std::forward<RemediationsT>(value);
  }
  template <typename RemediationsT = Aws::Vector<AgentRecommendationRemediation>>
  GetAgentRecommendationResult& WithRemediations(RemediationsT&& value) {
    SetRemediations(std::forward<RemediationsT>(value));
    return *this;
  }
  template <typename RemediationsT = AgentRecommendationRemediation>
  GetAgentRecommendationResult& AddRemediations(RemediationsT&& value) {
    m_remediationsHasBeenSet = true;
    m_remediations.emplace_back(std::forward<RemediationsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetAgentRecommendationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

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

  Aws::Vector<Aws::String> m_impactDetails;

  Aws::Vector<Insight> m_insights;

  Aws::Vector<Aws::String> m_highlights;

  RemediationSummary m_remediationSummary;

  Aws::Vector<CrossPillarBenefit> m_crossPillarBenefits;

  Aws::Vector<TradeOff> m_tradeOffs;

  Aws::Vector<RecommendationSource> m_sources;

  Aws::Vector<RecommendationGoal> m_goals;

  Aws::Vector<Tag> m_tags;

  Aws::String m_createdBy;

  Aws::Utils::DateTime m_createdAt{};

  Aws::String m_lastModifiedBy;

  Aws::Utils::DateTime m_lastModifiedAt{};

  Aws::Vector<AgentRecommendationRemediation> m_remediations;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
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
  bool m_impactDetailsHasBeenSet = false;
  bool m_insightsHasBeenSet = false;
  bool m_highlightsHasBeenSet = false;
  bool m_remediationSummaryHasBeenSet = false;
  bool m_crossPillarBenefitsHasBeenSet = false;
  bool m_tradeOffsHasBeenSet = false;
  bool m_sourcesHasBeenSet = false;
  bool m_goalsHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_createdByHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_lastModifiedByHasBeenSet = false;
  bool m_lastModifiedAtHasBeenSet = false;
  bool m_remediationsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
