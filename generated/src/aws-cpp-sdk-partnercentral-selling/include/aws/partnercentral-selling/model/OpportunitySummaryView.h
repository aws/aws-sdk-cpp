/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/OpportunityType.h>
#include <aws/partnercentral-selling/model/LifeCycleForView.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-selling/model/Customer.h>
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
    AWS_PARTNERCENTRALSELLING_API OpportunitySummaryView() = default;
    AWS_PARTNERCENTRALSELLING_API OpportunitySummaryView(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API OpportunitySummaryView& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Specifies the opportunity type. </p>
     */
    inline OpportunityType GetOpportunityType() const { return m_opportunityType; }
    inline bool OpportunityTypeHasBeenSet() const { return m_opportunityTypeHasBeenSet; }
    inline void SetOpportunityType(OpportunityType value) { m_opportunityTypeHasBeenSet = true; m_opportunityType = value; }
    inline OpportunitySummaryView& WithOpportunityType(OpportunityType value) { SetOpportunityType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Contains information about the opportunity's lifecycle, including its
     * current stage, status, and important dates such as creation and last
     * modification times. </p>
     */
    inline const LifeCycleForView& GetLifecycle() const { return m_lifecycle; }
    inline bool LifecycleHasBeenSet() const { return m_lifecycleHasBeenSet; }
    template<typename LifecycleT = LifeCycleForView>
    void SetLifecycle(LifecycleT&& value) { m_lifecycleHasBeenSet = true; m_lifecycle = std::forward<LifecycleT>(value); }
    template<typename LifecycleT = LifeCycleForView>
    OpportunitySummaryView& WithLifecycle(LifecycleT&& value) { SetLifecycle(std::forward<LifecycleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Represents the internal team handling the opportunity. Specify the members
     * involved in collaborating on an opportunity within the partner's organization.
     * </p>
     */
    inline const Aws::Vector<Contact>& GetOpportunityTeam() const { return m_opportunityTeam; }
    inline bool OpportunityTeamHasBeenSet() const { return m_opportunityTeamHasBeenSet; }
    template<typename OpportunityTeamT = Aws::Vector<Contact>>
    void SetOpportunityTeam(OpportunityTeamT&& value) { m_opportunityTeamHasBeenSet = true; m_opportunityTeam = std::forward<OpportunityTeamT>(value); }
    template<typename OpportunityTeamT = Aws::Vector<Contact>>
    OpportunitySummaryView& WithOpportunityTeam(OpportunityTeamT&& value) { SetOpportunityTeam(std::forward<OpportunityTeamT>(value)); return *this;}
    template<typename OpportunityTeamT = Contact>
    OpportunitySummaryView& AddOpportunityTeam(OpportunityTeamT&& value) { m_opportunityTeamHasBeenSet = true; m_opportunityTeam.emplace_back(std::forward<OpportunityTeamT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Identifies the type of support the partner needs from AWS. </p>
     */
    inline const Aws::Vector<PrimaryNeedFromAws>& GetPrimaryNeedsFromAws() const { return m_primaryNeedsFromAws; }
    inline bool PrimaryNeedsFromAwsHasBeenSet() const { return m_primaryNeedsFromAwsHasBeenSet; }
    template<typename PrimaryNeedsFromAwsT = Aws::Vector<PrimaryNeedFromAws>>
    void SetPrimaryNeedsFromAws(PrimaryNeedsFromAwsT&& value) { m_primaryNeedsFromAwsHasBeenSet = true; m_primaryNeedsFromAws = std::forward<PrimaryNeedsFromAwsT>(value); }
    template<typename PrimaryNeedsFromAwsT = Aws::Vector<PrimaryNeedFromAws>>
    OpportunitySummaryView& WithPrimaryNeedsFromAws(PrimaryNeedsFromAwsT&& value) { SetPrimaryNeedsFromAws(std::forward<PrimaryNeedsFromAwsT>(value)); return *this;}
    inline OpportunitySummaryView& AddPrimaryNeedsFromAws(PrimaryNeedFromAws value) { m_primaryNeedsFromAwsHasBeenSet = true; m_primaryNeedsFromAws.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Customer& GetCustomer() const { return m_customer; }
    inline bool CustomerHasBeenSet() const { return m_customerHasBeenSet; }
    template<typename CustomerT = Customer>
    void SetCustomer(CustomerT&& value) { m_customerHasBeenSet = true; m_customer = std::forward<CustomerT>(value); }
    template<typename CustomerT = Customer>
    OpportunitySummaryView& WithCustomer(CustomerT&& value) { SetCustomer(std::forward<CustomerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Contains summary information about the project associated with the
     * opportunity, including project name, description, timeline, and other relevant
     * details. </p>
     */
    inline const ProjectView& GetProject() const { return m_project; }
    inline bool ProjectHasBeenSet() const { return m_projectHasBeenSet; }
    template<typename ProjectT = ProjectView>
    void SetProject(ProjectT&& value) { m_projectHasBeenSet = true; m_project = std::forward<ProjectT>(value); }
    template<typename ProjectT = ProjectView>
    OpportunitySummaryView& WithProject(ProjectT&& value) { SetProject(std::forward<ProjectT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const RelatedEntityIdentifiers& GetRelatedEntityIdentifiers() const { return m_relatedEntityIdentifiers; }
    inline bool RelatedEntityIdentifiersHasBeenSet() const { return m_relatedEntityIdentifiersHasBeenSet; }
    template<typename RelatedEntityIdentifiersT = RelatedEntityIdentifiers>
    void SetRelatedEntityIdentifiers(RelatedEntityIdentifiersT&& value) { m_relatedEntityIdentifiersHasBeenSet = true; m_relatedEntityIdentifiers = std::forward<RelatedEntityIdentifiersT>(value); }
    template<typename RelatedEntityIdentifiersT = RelatedEntityIdentifiers>
    OpportunitySummaryView& WithRelatedEntityIdentifiers(RelatedEntityIdentifiersT&& value) { SetRelatedEntityIdentifiers(std::forward<RelatedEntityIdentifiersT>(value)); return *this;}
    ///@}
  private:

    OpportunityType m_opportunityType{OpportunityType::NOT_SET};
    bool m_opportunityTypeHasBeenSet = false;

    LifeCycleForView m_lifecycle;
    bool m_lifecycleHasBeenSet = false;

    Aws::Vector<Contact> m_opportunityTeam;
    bool m_opportunityTeamHasBeenSet = false;

    Aws::Vector<PrimaryNeedFromAws> m_primaryNeedsFromAws;
    bool m_primaryNeedsFromAwsHasBeenSet = false;

    Customer m_customer;
    bool m_customerHasBeenSet = false;

    ProjectView m_project;
    bool m_projectHasBeenSet = false;

    RelatedEntityIdentifiers m_relatedEntityIdentifiers;
    bool m_relatedEntityIdentifiersHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
