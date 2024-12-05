/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/model/AwsOpportunityCustomer.h>
#include <aws/partnercentral-selling/model/AwsOpportunityInsights.h>
#include <aws/partnercentral-selling/model/SalesInvolvementType.h>
#include <aws/partnercentral-selling/model/InvolvementTypeChangeReason.h>
#include <aws/partnercentral-selling/model/AwsOpportunityLifeCycle.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-selling/model/OpportunityOrigin.h>
#include <aws/partnercentral-selling/model/AwsOpportunityProject.h>
#include <aws/partnercentral-selling/model/AwsOpportunityRelatedEntities.h>
#include <aws/partnercentral-selling/model/Visibility.h>
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
    AWS_PARTNERCENTRALSELLING_API GetAwsOpportunitySummaryResult();
    AWS_PARTNERCENTRALSELLING_API GetAwsOpportunitySummaryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PARTNERCENTRALSELLING_API GetAwsOpportunitySummaryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Specifies the catalog in which the AWS Opportunity exists. This is the
     * environment (e.g., <code>AWS</code> or <code>Sandbox</code>) where the
     * opportunity is being managed.</p>
     */
    inline const Aws::String& GetCatalog() const{ return m_catalog; }
    inline void SetCatalog(const Aws::String& value) { m_catalog = value; }
    inline void SetCatalog(Aws::String&& value) { m_catalog = std::move(value); }
    inline void SetCatalog(const char* value) { m_catalog.assign(value); }
    inline GetAwsOpportunitySummaryResult& WithCatalog(const Aws::String& value) { SetCatalog(value); return *this;}
    inline GetAwsOpportunitySummaryResult& WithCatalog(Aws::String&& value) { SetCatalog(std::move(value)); return *this;}
    inline GetAwsOpportunitySummaryResult& WithCatalog(const char* value) { SetCatalog(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides details about the customer associated with the AWS Opportunity,
     * including account information, industry, and other customer data. These details
     * help partners understand the business context of the opportunity.</p>
     */
    inline const AwsOpportunityCustomer& GetCustomer() const{ return m_customer; }
    inline void SetCustomer(const AwsOpportunityCustomer& value) { m_customer = value; }
    inline void SetCustomer(AwsOpportunityCustomer&& value) { m_customer = std::move(value); }
    inline GetAwsOpportunitySummaryResult& WithCustomer(const AwsOpportunityCustomer& value) { SetCustomer(value); return *this;}
    inline GetAwsOpportunitySummaryResult& WithCustomer(AwsOpportunityCustomer&& value) { SetCustomer(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides insights into the AWS Opportunity, including engagement score and
     * recommended actions that AWS suggests for the partner.</p>
     */
    inline const AwsOpportunityInsights& GetInsights() const{ return m_insights; }
    inline void SetInsights(const AwsOpportunityInsights& value) { m_insights = value; }
    inline void SetInsights(AwsOpportunityInsights&& value) { m_insights = std::move(value); }
    inline GetAwsOpportunitySummaryResult& WithInsights(const AwsOpportunityInsights& value) { SetInsights(value); return *this;}
    inline GetAwsOpportunitySummaryResult& WithInsights(AwsOpportunityInsights&& value) { SetInsights(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the type of involvement AWS has in the opportunity, such as direct
     * cosell or advisory support. This field helps partners understand the role AWS
     * plays in advancing the opportunity.</p>
     */
    inline const SalesInvolvementType& GetInvolvementType() const{ return m_involvementType; }
    inline void SetInvolvementType(const SalesInvolvementType& value) { m_involvementType = value; }
    inline void SetInvolvementType(SalesInvolvementType&& value) { m_involvementType = std::move(value); }
    inline GetAwsOpportunitySummaryResult& WithInvolvementType(const SalesInvolvementType& value) { SetInvolvementType(value); return *this;}
    inline GetAwsOpportunitySummaryResult& WithInvolvementType(SalesInvolvementType&& value) { SetInvolvementType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides a reason for any changes in the involvement type of AWS in the
     * opportunity. This field is used to track why the level of AWS engagement has
     * changed from <code>For Visibility Only</code> to <code>Co-sell</code> offering
     * transparency into the partnership dynamics.</p>
     */
    inline const InvolvementTypeChangeReason& GetInvolvementTypeChangeReason() const{ return m_involvementTypeChangeReason; }
    inline void SetInvolvementTypeChangeReason(const InvolvementTypeChangeReason& value) { m_involvementTypeChangeReason = value; }
    inline void SetInvolvementTypeChangeReason(InvolvementTypeChangeReason&& value) { m_involvementTypeChangeReason = std::move(value); }
    inline GetAwsOpportunitySummaryResult& WithInvolvementTypeChangeReason(const InvolvementTypeChangeReason& value) { SetInvolvementTypeChangeReason(value); return *this;}
    inline GetAwsOpportunitySummaryResult& WithInvolvementTypeChangeReason(InvolvementTypeChangeReason&& value) { SetInvolvementTypeChangeReason(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains lifecycle information for the AWS Opportunity, including review
     * status, stage, and target close date. This field is crucial for partners to
     * monitor the progression of the opportunity.</p>
     */
    inline const AwsOpportunityLifeCycle& GetLifeCycle() const{ return m_lifeCycle; }
    inline void SetLifeCycle(const AwsOpportunityLifeCycle& value) { m_lifeCycle = value; }
    inline void SetLifeCycle(AwsOpportunityLifeCycle&& value) { m_lifeCycle = std::move(value); }
    inline GetAwsOpportunitySummaryResult& WithLifeCycle(const AwsOpportunityLifeCycle& value) { SetLifeCycle(value); return *this;}
    inline GetAwsOpportunitySummaryResult& WithLifeCycle(AwsOpportunityLifeCycle&& value) { SetLifeCycle(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details the AWS opportunity team, including members involved. This
     * information helps partners know who from AWS is engaged and what their role
     * is.</p>
     */
    inline const Aws::Vector<AwsTeamMember>& GetOpportunityTeam() const{ return m_opportunityTeam; }
    inline void SetOpportunityTeam(const Aws::Vector<AwsTeamMember>& value) { m_opportunityTeam = value; }
    inline void SetOpportunityTeam(Aws::Vector<AwsTeamMember>&& value) { m_opportunityTeam = std::move(value); }
    inline GetAwsOpportunitySummaryResult& WithOpportunityTeam(const Aws::Vector<AwsTeamMember>& value) { SetOpportunityTeam(value); return *this;}
    inline GetAwsOpportunitySummaryResult& WithOpportunityTeam(Aws::Vector<AwsTeamMember>&& value) { SetOpportunityTeam(std::move(value)); return *this;}
    inline GetAwsOpportunitySummaryResult& AddOpportunityTeam(const AwsTeamMember& value) { m_opportunityTeam.push_back(value); return *this; }
    inline GetAwsOpportunitySummaryResult& AddOpportunityTeam(AwsTeamMember&& value) { m_opportunityTeam.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether the AWS Opportunity originated from AWS or the partner.
     * This helps distinguish between opportunities that were sourced by AWS and those
     * referred by the partner.</p>
     */
    inline const OpportunityOrigin& GetOrigin() const{ return m_origin; }
    inline void SetOrigin(const OpportunityOrigin& value) { m_origin = value; }
    inline void SetOrigin(OpportunityOrigin&& value) { m_origin = std::move(value); }
    inline GetAwsOpportunitySummaryResult& WithOrigin(const OpportunityOrigin& value) { SetOrigin(value); return *this;}
    inline GetAwsOpportunitySummaryResult& WithOrigin(OpportunityOrigin&& value) { SetOrigin(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides details about the project associated with the AWS Opportunity,
     * including the customer’s business problem, expected outcomes, and project scope.
     * This information is crucial for understanding the broader context of the
     * opportunity.</p>
     */
    inline const AwsOpportunityProject& GetProject() const{ return m_project; }
    inline void SetProject(const AwsOpportunityProject& value) { m_project = value; }
    inline void SetProject(AwsOpportunityProject&& value) { m_project = std::move(value); }
    inline GetAwsOpportunitySummaryResult& WithProject(const AwsOpportunityProject& value) { SetProject(value); return *this;}
    inline GetAwsOpportunitySummaryResult& WithProject(AwsOpportunityProject&& value) { SetProject(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lists related entity identifiers, such as AWS products or partner solutions,
     * associated with the AWS Opportunity. These identifiers provide additional
     * context and help partners understand which AWS services are involved.</p>
     */
    inline const AwsOpportunityRelatedEntities& GetRelatedEntityIds() const{ return m_relatedEntityIds; }
    inline void SetRelatedEntityIds(const AwsOpportunityRelatedEntities& value) { m_relatedEntityIds = value; }
    inline void SetRelatedEntityIds(AwsOpportunityRelatedEntities&& value) { m_relatedEntityIds = std::move(value); }
    inline GetAwsOpportunitySummaryResult& WithRelatedEntityIds(const AwsOpportunityRelatedEntities& value) { SetRelatedEntityIds(value); return *this;}
    inline GetAwsOpportunitySummaryResult& WithRelatedEntityIds(AwsOpportunityRelatedEntities&& value) { SetRelatedEntityIds(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the unique identifier of the related partner opportunity, allowing
     * partners to link the AWS Opportunity to their corresponding opportunity in their
     * CRM system.</p>
     */
    inline const Aws::String& GetRelatedOpportunityId() const{ return m_relatedOpportunityId; }
    inline void SetRelatedOpportunityId(const Aws::String& value) { m_relatedOpportunityId = value; }
    inline void SetRelatedOpportunityId(Aws::String&& value) { m_relatedOpportunityId = std::move(value); }
    inline void SetRelatedOpportunityId(const char* value) { m_relatedOpportunityId.assign(value); }
    inline GetAwsOpportunitySummaryResult& WithRelatedOpportunityId(const Aws::String& value) { SetRelatedOpportunityId(value); return *this;}
    inline GetAwsOpportunitySummaryResult& WithRelatedOpportunityId(Aws::String&& value) { SetRelatedOpportunityId(std::move(value)); return *this;}
    inline GetAwsOpportunitySummaryResult& WithRelatedOpportunityId(const char* value) { SetRelatedOpportunityId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the visibility level for the AWS Opportunity. Use <code>Full</code>
     * visibility for most cases, while <code>Limited</code> visibility is reserved for
     * special programs or sensitive opportunities.</p>
     */
    inline const Visibility& GetVisibility() const{ return m_visibility; }
    inline void SetVisibility(const Visibility& value) { m_visibility = value; }
    inline void SetVisibility(Visibility&& value) { m_visibility = std::move(value); }
    inline GetAwsOpportunitySummaryResult& WithVisibility(const Visibility& value) { SetVisibility(value); return *this;}
    inline GetAwsOpportunitySummaryResult& WithVisibility(Visibility&& value) { SetVisibility(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetAwsOpportunitySummaryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetAwsOpportunitySummaryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetAwsOpportunitySummaryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_catalog;

    AwsOpportunityCustomer m_customer;

    AwsOpportunityInsights m_insights;

    SalesInvolvementType m_involvementType;

    InvolvementTypeChangeReason m_involvementTypeChangeReason;

    AwsOpportunityLifeCycle m_lifeCycle;

    Aws::Vector<AwsTeamMember> m_opportunityTeam;

    OpportunityOrigin m_origin;

    AwsOpportunityProject m_project;

    AwsOpportunityRelatedEntities m_relatedEntityIds;

    Aws::String m_relatedOpportunityId;

    Visibility m_visibility;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
