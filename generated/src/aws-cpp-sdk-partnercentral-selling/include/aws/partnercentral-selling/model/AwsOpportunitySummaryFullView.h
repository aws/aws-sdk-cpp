/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/AwsOpportunityCustomer.h>
#include <aws/partnercentral-selling/model/AwsOpportunityInsights.h>
#include <aws/partnercentral-selling/model/AwsOpportunityLifeCycle.h>
#include <aws/partnercentral-selling/model/AwsOpportunityProject.h>
#include <aws/partnercentral-selling/model/AwsOpportunityRelatedEntities.h>
#include <aws/partnercentral-selling/model/AwsTeamMember.h>
#include <aws/partnercentral-selling/model/InvolvementTypeChangeReason.h>
#include <aws/partnercentral-selling/model/OpportunityOrigin.h>
#include <aws/partnercentral-selling/model/SalesInvolvementType.h>
#include <aws/partnercentral-selling/model/Visibility.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralSelling {
namespace Model {

/**
 * <p>Provides a comprehensive view of AwsOpportunitySummaryFullView
 * template.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/AwsOpportunitySummaryFullView">AWS
 * API Reference</a></p>
 */
class AwsOpportunitySummaryFullView {
 public:
  AWS_PARTNERCENTRALSELLING_API AwsOpportunitySummaryFullView() = default;
  AWS_PARTNERCENTRALSELLING_API AwsOpportunitySummaryFullView(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API AwsOpportunitySummaryFullView& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Identifier of the related partner opportunity.</p>
   */
  inline const Aws::String& GetRelatedOpportunityId() const { return m_relatedOpportunityId; }
  inline bool RelatedOpportunityIdHasBeenSet() const { return m_relatedOpportunityIdHasBeenSet; }
  template <typename RelatedOpportunityIdT = Aws::String>
  void SetRelatedOpportunityId(RelatedOpportunityIdT&& value) {
    m_relatedOpportunityIdHasBeenSet = true;
    m_relatedOpportunityId = std::forward<RelatedOpportunityIdT>(value);
  }
  template <typename RelatedOpportunityIdT = Aws::String>
  AwsOpportunitySummaryFullView& WithRelatedOpportunityId(RelatedOpportunityIdT&& value) {
    SetRelatedOpportunityId(std::forward<RelatedOpportunityIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Source origin of the AWS opportunity.</p>
   */
  inline OpportunityOrigin GetOrigin() const { return m_origin; }
  inline bool OriginHasBeenSet() const { return m_originHasBeenSet; }
  inline void SetOrigin(OpportunityOrigin value) {
    m_originHasBeenSet = true;
    m_origin = value;
  }
  inline AwsOpportunitySummaryFullView& WithOrigin(OpportunityOrigin value) {
    SetOrigin(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Type of AWS involvement in the opportunity.</p>
   */
  inline SalesInvolvementType GetInvolvementType() const { return m_involvementType; }
  inline bool InvolvementTypeHasBeenSet() const { return m_involvementTypeHasBeenSet; }
  inline void SetInvolvementType(SalesInvolvementType value) {
    m_involvementTypeHasBeenSet = true;
    m_involvementType = value;
  }
  inline AwsOpportunitySummaryFullView& WithInvolvementType(SalesInvolvementType value) {
    SetInvolvementType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Visibility level for the AWS opportunity.</p>
   */
  inline Visibility GetVisibility() const { return m_visibility; }
  inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }
  inline void SetVisibility(Visibility value) {
    m_visibilityHasBeenSet = true;
    m_visibility = value;
  }
  inline AwsOpportunitySummaryFullView& WithVisibility(Visibility value) {
    SetVisibility(value);
    return *this;
  }
  ///@}

  ///@{

  inline const AwsOpportunityLifeCycle& GetLifeCycle() const { return m_lifeCycle; }
  inline bool LifeCycleHasBeenSet() const { return m_lifeCycleHasBeenSet; }
  template <typename LifeCycleT = AwsOpportunityLifeCycle>
  void SetLifeCycle(LifeCycleT&& value) {
    m_lifeCycleHasBeenSet = true;
    m_lifeCycle = std::forward<LifeCycleT>(value);
  }
  template <typename LifeCycleT = AwsOpportunityLifeCycle>
  AwsOpportunitySummaryFullView& WithLifeCycle(LifeCycleT&& value) {
    SetLifeCycle(std::forward<LifeCycleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>AWS team members involved in the opportunity.</p>
   */
  inline const Aws::Vector<AwsTeamMember>& GetOpportunityTeam() const { return m_opportunityTeam; }
  inline bool OpportunityTeamHasBeenSet() const { return m_opportunityTeamHasBeenSet; }
  template <typename OpportunityTeamT = Aws::Vector<AwsTeamMember>>
  void SetOpportunityTeam(OpportunityTeamT&& value) {
    m_opportunityTeamHasBeenSet = true;
    m_opportunityTeam = std::forward<OpportunityTeamT>(value);
  }
  template <typename OpportunityTeamT = Aws::Vector<AwsTeamMember>>
  AwsOpportunitySummaryFullView& WithOpportunityTeam(OpportunityTeamT&& value) {
    SetOpportunityTeam(std::forward<OpportunityTeamT>(value));
    return *this;
  }
  template <typename OpportunityTeamT = AwsTeamMember>
  AwsOpportunitySummaryFullView& AddOpportunityTeam(OpportunityTeamT&& value) {
    m_opportunityTeamHasBeenSet = true;
    m_opportunityTeam.emplace_back(std::forward<OpportunityTeamT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const AwsOpportunityInsights& GetInsights() const { return m_insights; }
  inline bool InsightsHasBeenSet() const { return m_insightsHasBeenSet; }
  template <typename InsightsT = AwsOpportunityInsights>
  void SetInsights(InsightsT&& value) {
    m_insightsHasBeenSet = true;
    m_insights = std::forward<InsightsT>(value);
  }
  template <typename InsightsT = AwsOpportunityInsights>
  AwsOpportunitySummaryFullView& WithInsights(InsightsT&& value) {
    SetInsights(std::forward<InsightsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Reason for changes in AWS involvement type for the opportunity.</p>
   */
  inline InvolvementTypeChangeReason GetInvolvementTypeChangeReason() const { return m_involvementTypeChangeReason; }
  inline bool InvolvementTypeChangeReasonHasBeenSet() const { return m_involvementTypeChangeReasonHasBeenSet; }
  inline void SetInvolvementTypeChangeReason(InvolvementTypeChangeReason value) {
    m_involvementTypeChangeReasonHasBeenSet = true;
    m_involvementTypeChangeReason = value;
  }
  inline AwsOpportunitySummaryFullView& WithInvolvementTypeChangeReason(InvolvementTypeChangeReason value) {
    SetInvolvementTypeChangeReason(value);
    return *this;
  }
  ///@}

  ///@{

  inline const AwsOpportunityRelatedEntities& GetRelatedEntityIds() const { return m_relatedEntityIds; }
  inline bool RelatedEntityIdsHasBeenSet() const { return m_relatedEntityIdsHasBeenSet; }
  template <typename RelatedEntityIdsT = AwsOpportunityRelatedEntities>
  void SetRelatedEntityIds(RelatedEntityIdsT&& value) {
    m_relatedEntityIdsHasBeenSet = true;
    m_relatedEntityIds = std::forward<RelatedEntityIdsT>(value);
  }
  template <typename RelatedEntityIdsT = AwsOpportunityRelatedEntities>
  AwsOpportunitySummaryFullView& WithRelatedEntityIds(RelatedEntityIdsT&& value) {
    SetRelatedEntityIds(std::forward<RelatedEntityIdsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const AwsOpportunityCustomer& GetCustomer() const { return m_customer; }
  inline bool CustomerHasBeenSet() const { return m_customerHasBeenSet; }
  template <typename CustomerT = AwsOpportunityCustomer>
  void SetCustomer(CustomerT&& value) {
    m_customerHasBeenSet = true;
    m_customer = std::forward<CustomerT>(value);
  }
  template <typename CustomerT = AwsOpportunityCustomer>
  AwsOpportunitySummaryFullView& WithCustomer(CustomerT&& value) {
    SetCustomer(std::forward<CustomerT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const AwsOpportunityProject& GetProject() const { return m_project; }
  inline bool ProjectHasBeenSet() const { return m_projectHasBeenSet; }
  template <typename ProjectT = AwsOpportunityProject>
  void SetProject(ProjectT&& value) {
    m_projectHasBeenSet = true;
    m_project = std::forward<ProjectT>(value);
  }
  template <typename ProjectT = AwsOpportunityProject>
  AwsOpportunitySummaryFullView& WithProject(ProjectT&& value) {
    SetProject(std::forward<ProjectT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_relatedOpportunityId;

  OpportunityOrigin m_origin{OpportunityOrigin::NOT_SET};

  SalesInvolvementType m_involvementType{SalesInvolvementType::NOT_SET};

  Visibility m_visibility{Visibility::NOT_SET};

  AwsOpportunityLifeCycle m_lifeCycle;

  Aws::Vector<AwsTeamMember> m_opportunityTeam;

  AwsOpportunityInsights m_insights;

  InvolvementTypeChangeReason m_involvementTypeChangeReason{InvolvementTypeChangeReason::NOT_SET};

  AwsOpportunityRelatedEntities m_relatedEntityIds;

  AwsOpportunityCustomer m_customer;

  AwsOpportunityProject m_project;
  bool m_relatedOpportunityIdHasBeenSet = false;
  bool m_originHasBeenSet = false;
  bool m_involvementTypeHasBeenSet = false;
  bool m_visibilityHasBeenSet = false;
  bool m_lifeCycleHasBeenSet = false;
  bool m_opportunityTeamHasBeenSet = false;
  bool m_insightsHasBeenSet = false;
  bool m_involvementTypeChangeReasonHasBeenSet = false;
  bool m_relatedEntityIdsHasBeenSet = false;
  bool m_customerHasBeenSet = false;
  bool m_projectHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
