/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/model/OpportunityOrigin.h>
#include <aws/partnercentral-selling/model/SalesInvolvementType.h>
#include <aws/partnercentral-selling/model/Visibility.h>
#include <aws/partnercentral-selling/model/AwsOpportunityLifeCycle.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-selling/model/AwsOpportunityInsights.h>
#include <aws/partnercentral-selling/model/InvolvementTypeChangeReason.h>
#include <aws/partnercentral-selling/model/AwsOpportunityRelatedEntities.h>
#include <aws/partnercentral-selling/model/AwsOpportunityCustomer.h>
#include <aws/partnercentral-selling/model/AwsOpportunityProject.h>
#include <aws/partnercentral-selling/model/AwsTeamMember.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace PartnerCentralSelling
{
namespace Model
{
  class GetAwsOpportunitySummaryResult
  {
  public:
    AWS_PARTNERCENTRALSELLING_API GetAwsOpportunitySummaryResult() = default;
    AWS_PARTNERCENTRALSELLING_API GetAwsOpportunitySummaryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PARTNERCENTRALSELLING_API GetAwsOpportunitySummaryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Specifies the catalog in which the AWS Opportunity exists. This is the
     * environment (e.g., <code>AWS</code> or <code>Sandbox</code>) where the
     * opportunity is being managed.</p>
     */
    inline const Aws::String& GetCatalog() const { return m_catalog; }
    template<typename CatalogT = Aws::String>
    void SetCatalog(CatalogT&& value) { m_catalogHasBeenSet = true; m_catalog = std::forward<CatalogT>(value); }
    template<typename CatalogT = Aws::String>
    GetAwsOpportunitySummaryResult& WithCatalog(CatalogT&& value) { SetCatalog(std::forward<CatalogT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the unique identifier of the related partner opportunity, allowing
     * partners to link the AWS Opportunity to their corresponding opportunity in their
     * CRM system.</p>
     */
    inline const Aws::String& GetRelatedOpportunityId() const { return m_relatedOpportunityId; }
    template<typename RelatedOpportunityIdT = Aws::String>
    void SetRelatedOpportunityId(RelatedOpportunityIdT&& value) { m_relatedOpportunityIdHasBeenSet = true; m_relatedOpportunityId = std::forward<RelatedOpportunityIdT>(value); }
    template<typename RelatedOpportunityIdT = Aws::String>
    GetAwsOpportunitySummaryResult& WithRelatedOpportunityId(RelatedOpportunityIdT&& value) { SetRelatedOpportunityId(std::forward<RelatedOpportunityIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the AWS Opportunity originated from AWS or the partner.
     * This helps distinguish between opportunities that were sourced by AWS and those
     * referred by the partner.</p>
     */
    inline OpportunityOrigin GetOrigin() const { return m_origin; }
    inline void SetOrigin(OpportunityOrigin value) { m_originHasBeenSet = true; m_origin = value; }
    inline GetAwsOpportunitySummaryResult& WithOrigin(OpportunityOrigin value) { SetOrigin(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the type of involvement AWS has in the opportunity, such as direct
     * cosell or advisory support. This field helps partners understand the role AWS
     * plays in advancing the opportunity.</p>
     */
    inline SalesInvolvementType GetInvolvementType() const { return m_involvementType; }
    inline void SetInvolvementType(SalesInvolvementType value) { m_involvementTypeHasBeenSet = true; m_involvementType = value; }
    inline GetAwsOpportunitySummaryResult& WithInvolvementType(SalesInvolvementType value) { SetInvolvementType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the visibility level for the AWS Opportunity. Use <code>Full</code>
     * visibility for most cases, while <code>Limited</code> visibility is reserved for
     * special programs or sensitive opportunities.</p>
     */
    inline Visibility GetVisibility() const { return m_visibility; }
    inline void SetVisibility(Visibility value) { m_visibilityHasBeenSet = true; m_visibility = value; }
    inline GetAwsOpportunitySummaryResult& WithVisibility(Visibility value) { SetVisibility(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains lifecycle information for the AWS Opportunity, including review
     * status, stage, and target close date. This field is crucial for partners to
     * monitor the progression of the opportunity.</p>
     */
    inline const AwsOpportunityLifeCycle& GetLifeCycle() const { return m_lifeCycle; }
    template<typename LifeCycleT = AwsOpportunityLifeCycle>
    void SetLifeCycle(LifeCycleT&& value) { m_lifeCycleHasBeenSet = true; m_lifeCycle = std::forward<LifeCycleT>(value); }
    template<typename LifeCycleT = AwsOpportunityLifeCycle>
    GetAwsOpportunitySummaryResult& WithLifeCycle(LifeCycleT&& value) { SetLifeCycle(std::forward<LifeCycleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details the AWS opportunity team, including members involved. This
     * information helps partners know who from AWS is engaged and what their role
     * is.</p>
     */
    inline const Aws::Vector<AwsTeamMember>& GetOpportunityTeam() const { return m_opportunityTeam; }
    template<typename OpportunityTeamT = Aws::Vector<AwsTeamMember>>
    void SetOpportunityTeam(OpportunityTeamT&& value) { m_opportunityTeamHasBeenSet = true; m_opportunityTeam = std::forward<OpportunityTeamT>(value); }
    template<typename OpportunityTeamT = Aws::Vector<AwsTeamMember>>
    GetAwsOpportunitySummaryResult& WithOpportunityTeam(OpportunityTeamT&& value) { SetOpportunityTeam(std::forward<OpportunityTeamT>(value)); return *this;}
    template<typename OpportunityTeamT = AwsTeamMember>
    GetAwsOpportunitySummaryResult& AddOpportunityTeam(OpportunityTeamT&& value) { m_opportunityTeamHasBeenSet = true; m_opportunityTeam.emplace_back(std::forward<OpportunityTeamT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Provides insights into the AWS Opportunity, including engagement score and
     * recommended actions that AWS suggests for the partner.</p>
     */
    inline const AwsOpportunityInsights& GetInsights() const { return m_insights; }
    template<typename InsightsT = AwsOpportunityInsights>
    void SetInsights(InsightsT&& value) { m_insightsHasBeenSet = true; m_insights = std::forward<InsightsT>(value); }
    template<typename InsightsT = AwsOpportunityInsights>
    GetAwsOpportunitySummaryResult& WithInsights(InsightsT&& value) { SetInsights(std::forward<InsightsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides a reason for any changes in the involvement type of AWS in the
     * opportunity. This field is used to track why the level of AWS engagement has
     * changed from <code>For Visibility Only</code> to <code>Co-sell</code> offering
     * transparency into the partnership dynamics.</p>
     */
    inline InvolvementTypeChangeReason GetInvolvementTypeChangeReason() const { return m_involvementTypeChangeReason; }
    inline void SetInvolvementTypeChangeReason(InvolvementTypeChangeReason value) { m_involvementTypeChangeReasonHasBeenSet = true; m_involvementTypeChangeReason = value; }
    inline GetAwsOpportunitySummaryResult& WithInvolvementTypeChangeReason(InvolvementTypeChangeReason value) { SetInvolvementTypeChangeReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lists related entity identifiers, such as AWS products or partner solutions,
     * associated with the AWS Opportunity. These identifiers provide additional
     * context and help partners understand which AWS services are involved.</p>
     */
    inline const AwsOpportunityRelatedEntities& GetRelatedEntityIds() const { return m_relatedEntityIds; }
    template<typename RelatedEntityIdsT = AwsOpportunityRelatedEntities>
    void SetRelatedEntityIds(RelatedEntityIdsT&& value) { m_relatedEntityIdsHasBeenSet = true; m_relatedEntityIds = std::forward<RelatedEntityIdsT>(value); }
    template<typename RelatedEntityIdsT = AwsOpportunityRelatedEntities>
    GetAwsOpportunitySummaryResult& WithRelatedEntityIds(RelatedEntityIdsT&& value) { SetRelatedEntityIds(std::forward<RelatedEntityIdsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides details about the customer associated with the AWS Opportunity,
     * including account information, industry, and other customer data. These details
     * help partners understand the business context of the opportunity.</p>
     */
    inline const AwsOpportunityCustomer& GetCustomer() const { return m_customer; }
    template<typename CustomerT = AwsOpportunityCustomer>
    void SetCustomer(CustomerT&& value) { m_customerHasBeenSet = true; m_customer = std::forward<CustomerT>(value); }
    template<typename CustomerT = AwsOpportunityCustomer>
    GetAwsOpportunitySummaryResult& WithCustomer(CustomerT&& value) { SetCustomer(std::forward<CustomerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides details about the project associated with the AWS Opportunity,
     * including the customer’s business problem, expected outcomes, and project scope.
     * This information is crucial for understanding the broader context of the
     * opportunity.</p>
     */
    inline const AwsOpportunityProject& GetProject() const { return m_project; }
    template<typename ProjectT = AwsOpportunityProject>
    void SetProject(ProjectT&& value) { m_projectHasBeenSet = true; m_project = std::forward<ProjectT>(value); }
    template<typename ProjectT = AwsOpportunityProject>
    GetAwsOpportunitySummaryResult& WithProject(ProjectT&& value) { SetProject(std::forward<ProjectT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAwsOpportunitySummaryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_catalog;
    bool m_catalogHasBeenSet = false;

    Aws::String m_relatedOpportunityId;
    bool m_relatedOpportunityIdHasBeenSet = false;

    OpportunityOrigin m_origin{OpportunityOrigin::NOT_SET};
    bool m_originHasBeenSet = false;

    SalesInvolvementType m_involvementType{SalesInvolvementType::NOT_SET};
    bool m_involvementTypeHasBeenSet = false;

    Visibility m_visibility{Visibility::NOT_SET};
    bool m_visibilityHasBeenSet = false;

    AwsOpportunityLifeCycle m_lifeCycle;
    bool m_lifeCycleHasBeenSet = false;

    Aws::Vector<AwsTeamMember> m_opportunityTeam;
    bool m_opportunityTeamHasBeenSet = false;

    AwsOpportunityInsights m_insights;
    bool m_insightsHasBeenSet = false;

    InvolvementTypeChangeReason m_involvementTypeChangeReason{InvolvementTypeChangeReason::NOT_SET};
    bool m_involvementTypeChangeReasonHasBeenSet = false;

    AwsOpportunityRelatedEntities m_relatedEntityIds;
    bool m_relatedEntityIdsHasBeenSet = false;

    AwsOpportunityCustomer m_customer;
    bool m_customerHasBeenSet = false;

    AwsOpportunityProject m_project;
    bool m_projectHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
