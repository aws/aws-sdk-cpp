/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/Customer.h>
#include <aws/partnercentral-selling/model/LifeCycleForView.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-selling/model/OpportunityType.h>
#include <aws/partnercentral-selling/model/ProjectView.h>
#include <aws/partnercentral-selling/model/RelatedEntityIdentifiers.h>
#include <aws/partnercentral-selling/model/Contact.h>
#include <aws/partnercentral-selling/model/PrimaryNeedFromAws.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace PartnerCentralSelling
{
namespace Model
{

  /**
   * <p> Provides a comprehensive view of an opportunity summary, including lifecycle
   * information, team details, opportunity type, primary needs from AWS, and
   * associated project information. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/OpportunitySummaryView">AWS
   * API Reference</a></p>
   */
  class OpportunitySummaryView
  {
  public:
    AWS_PARTNERCENTRALSELLING_API OpportunitySummaryView();
    AWS_PARTNERCENTRALSELLING_API OpportunitySummaryView(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API OpportunitySummaryView& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Customer& GetCustomer() const{ return m_customer; }
    inline bool CustomerHasBeenSet() const { return m_customerHasBeenSet; }
    inline void SetCustomer(const Customer& value) { m_customerHasBeenSet = true; m_customer = value; }
    inline void SetCustomer(Customer&& value) { m_customerHasBeenSet = true; m_customer = std::move(value); }
    inline OpportunitySummaryView& WithCustomer(const Customer& value) { SetCustomer(value); return *this;}
    inline OpportunitySummaryView& WithCustomer(Customer&& value) { SetCustomer(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Contains information about the opportunity's lifecycle, including its
     * current stage, status, and important dates such as creation and last
     * modification times. </p>
     */
    inline const LifeCycleForView& GetLifecycle() const{ return m_lifecycle; }
    inline bool LifecycleHasBeenSet() const { return m_lifecycleHasBeenSet; }
    inline void SetLifecycle(const LifeCycleForView& value) { m_lifecycleHasBeenSet = true; m_lifecycle = value; }
    inline void SetLifecycle(LifeCycleForView&& value) { m_lifecycleHasBeenSet = true; m_lifecycle = std::move(value); }
    inline OpportunitySummaryView& WithLifecycle(const LifeCycleForView& value) { SetLifecycle(value); return *this;}
    inline OpportunitySummaryView& WithLifecycle(LifeCycleForView&& value) { SetLifecycle(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Represents the internal team handling the opportunity. Specify the members
     * involved in collaborating on an opportunity within the partner's organization.
     * </p>
     */
    inline const Aws::Vector<Contact>& GetOpportunityTeam() const{ return m_opportunityTeam; }
    inline bool OpportunityTeamHasBeenSet() const { return m_opportunityTeamHasBeenSet; }
    inline void SetOpportunityTeam(const Aws::Vector<Contact>& value) { m_opportunityTeamHasBeenSet = true; m_opportunityTeam = value; }
    inline void SetOpportunityTeam(Aws::Vector<Contact>&& value) { m_opportunityTeamHasBeenSet = true; m_opportunityTeam = std::move(value); }
    inline OpportunitySummaryView& WithOpportunityTeam(const Aws::Vector<Contact>& value) { SetOpportunityTeam(value); return *this;}
    inline OpportunitySummaryView& WithOpportunityTeam(Aws::Vector<Contact>&& value) { SetOpportunityTeam(std::move(value)); return *this;}
    inline OpportunitySummaryView& AddOpportunityTeam(const Contact& value) { m_opportunityTeamHasBeenSet = true; m_opportunityTeam.push_back(value); return *this; }
    inline OpportunitySummaryView& AddOpportunityTeam(Contact&& value) { m_opportunityTeamHasBeenSet = true; m_opportunityTeam.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Specifies the opportunity type. </p>
     */
    inline const OpportunityType& GetOpportunityType() const{ return m_opportunityType; }
    inline bool OpportunityTypeHasBeenSet() const { return m_opportunityTypeHasBeenSet; }
    inline void SetOpportunityType(const OpportunityType& value) { m_opportunityTypeHasBeenSet = true; m_opportunityType = value; }
    inline void SetOpportunityType(OpportunityType&& value) { m_opportunityTypeHasBeenSet = true; m_opportunityType = std::move(value); }
    inline OpportunitySummaryView& WithOpportunityType(const OpportunityType& value) { SetOpportunityType(value); return *this;}
    inline OpportunitySummaryView& WithOpportunityType(OpportunityType&& value) { SetOpportunityType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Identifies the type of support the partner needs from AWS. </p>
     */
    inline const Aws::Vector<PrimaryNeedFromAws>& GetPrimaryNeedsFromAws() const{ return m_primaryNeedsFromAws; }
    inline bool PrimaryNeedsFromAwsHasBeenSet() const { return m_primaryNeedsFromAwsHasBeenSet; }
    inline void SetPrimaryNeedsFromAws(const Aws::Vector<PrimaryNeedFromAws>& value) { m_primaryNeedsFromAwsHasBeenSet = true; m_primaryNeedsFromAws = value; }
    inline void SetPrimaryNeedsFromAws(Aws::Vector<PrimaryNeedFromAws>&& value) { m_primaryNeedsFromAwsHasBeenSet = true; m_primaryNeedsFromAws = std::move(value); }
    inline OpportunitySummaryView& WithPrimaryNeedsFromAws(const Aws::Vector<PrimaryNeedFromAws>& value) { SetPrimaryNeedsFromAws(value); return *this;}
    inline OpportunitySummaryView& WithPrimaryNeedsFromAws(Aws::Vector<PrimaryNeedFromAws>&& value) { SetPrimaryNeedsFromAws(std::move(value)); return *this;}
    inline OpportunitySummaryView& AddPrimaryNeedsFromAws(const PrimaryNeedFromAws& value) { m_primaryNeedsFromAwsHasBeenSet = true; m_primaryNeedsFromAws.push_back(value); return *this; }
    inline OpportunitySummaryView& AddPrimaryNeedsFromAws(PrimaryNeedFromAws&& value) { m_primaryNeedsFromAwsHasBeenSet = true; m_primaryNeedsFromAws.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Contains summary information about the project associated with the
     * opportunity, including project name, description, timeline, and other relevant
     * details. </p>
     */
    inline const ProjectView& GetProject() const{ return m_project; }
    inline bool ProjectHasBeenSet() const { return m_projectHasBeenSet; }
    inline void SetProject(const ProjectView& value) { m_projectHasBeenSet = true; m_project = value; }
    inline void SetProject(ProjectView&& value) { m_projectHasBeenSet = true; m_project = std::move(value); }
    inline OpportunitySummaryView& WithProject(const ProjectView& value) { SetProject(value); return *this;}
    inline OpportunitySummaryView& WithProject(ProjectView&& value) { SetProject(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const RelatedEntityIdentifiers& GetRelatedEntityIdentifiers() const{ return m_relatedEntityIdentifiers; }
    inline bool RelatedEntityIdentifiersHasBeenSet() const { return m_relatedEntityIdentifiersHasBeenSet; }
    inline void SetRelatedEntityIdentifiers(const RelatedEntityIdentifiers& value) { m_relatedEntityIdentifiersHasBeenSet = true; m_relatedEntityIdentifiers = value; }
    inline void SetRelatedEntityIdentifiers(RelatedEntityIdentifiers&& value) { m_relatedEntityIdentifiersHasBeenSet = true; m_relatedEntityIdentifiers = std::move(value); }
    inline OpportunitySummaryView& WithRelatedEntityIdentifiers(const RelatedEntityIdentifiers& value) { SetRelatedEntityIdentifiers(value); return *this;}
    inline OpportunitySummaryView& WithRelatedEntityIdentifiers(RelatedEntityIdentifiers&& value) { SetRelatedEntityIdentifiers(std::move(value)); return *this;}
    ///@}
  private:

    Customer m_customer;
    bool m_customerHasBeenSet = false;

    LifeCycleForView m_lifecycle;
    bool m_lifecycleHasBeenSet = false;

    Aws::Vector<Contact> m_opportunityTeam;
    bool m_opportunityTeamHasBeenSet = false;

    OpportunityType m_opportunityType;
    bool m_opportunityTypeHasBeenSet = false;

    Aws::Vector<PrimaryNeedFromAws> m_primaryNeedsFromAws;
    bool m_primaryNeedsFromAwsHasBeenSet = false;

    ProjectView m_project;
    bool m_projectHasBeenSet = false;

    RelatedEntityIdentifiers m_relatedEntityIdentifiers;
    bool m_relatedEntityIdentifiersHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
