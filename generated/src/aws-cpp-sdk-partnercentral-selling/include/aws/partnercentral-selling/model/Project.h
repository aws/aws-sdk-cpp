/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/model/CompetitorName.h>
#include <aws/partnercentral-selling/model/DeliveryModel.h>
#include <aws/partnercentral-selling/model/ExpectedCustomerSpend.h>
#include <aws/partnercentral-selling/model/SalesActivity.h>
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
   * <p>An object that contains the <code>Opportunity</code>'s project
   * details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/Project">AWS
   * API Reference</a></p>
   */
  class Project
  {
  public:
    AWS_PARTNERCENTRALSELLING_API Project() = default;
    AWS_PARTNERCENTRALSELLING_API Project(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Project& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the deployment or consumption model for your solution or service in
     * the <code>Opportunity</code>'s context. You can select multiple options.</p>
     * <p>Options' descriptions from the <code>Delivery Model</code> field are:</p>
     * <ul> <li> <p>SaaS or PaaS: Your Amazon Web Services based solution deployed as
     * SaaS or PaaS in your Amazon Web Services environment.</p> </li> <li> <p>BYOL or
     * AMI: Your Amazon Web Services based solution deployed as BYOL or AMI in the end
     * customer's Amazon Web Services environment.</p> </li> <li> <p>Managed Services:
     * The end customer's Amazon Web Services business management (For example:
     * Consulting, design, implementation, billing support, cost optimization,
     * technical support).</p> </li> <li> <p>Professional Services: Offerings to help
     * enterprise end customers achieve specific business outcomes for enterprise cloud
     * adoption (For example: Advisory or transformation planning).</p> </li> <li>
     * <p>Resell: Amazon Web Services accounts and billing management for your
     * customers.</p> </li> <li> <p>Other: Delivery model not described above.</p>
     * </li> </ul>
     */
    inline const Aws::Vector<DeliveryModel>& GetDeliveryModels() const { return m_deliveryModels; }
    inline bool DeliveryModelsHasBeenSet() const { return m_deliveryModelsHasBeenSet; }
    template<typename DeliveryModelsT = Aws::Vector<DeliveryModel>>
    void SetDeliveryModels(DeliveryModelsT&& value) { m_deliveryModelsHasBeenSet = true; m_deliveryModels = std::forward<DeliveryModelsT>(value); }
    template<typename DeliveryModelsT = Aws::Vector<DeliveryModel>>
    Project& WithDeliveryModels(DeliveryModelsT&& value) { SetDeliveryModels(std::forward<DeliveryModelsT>(value)); return *this;}
    inline Project& AddDeliveryModels(DeliveryModel value) { m_deliveryModelsHasBeenSet = true; m_deliveryModels.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Represents the estimated amount that the customer is expected to spend on AWS
     * services related to the opportunity. This helps in evaluating the potential
     * financial value of the opportunity for AWS.</p>
     */
    inline const Aws::Vector<ExpectedCustomerSpend>& GetExpectedCustomerSpend() const { return m_expectedCustomerSpend; }
    inline bool ExpectedCustomerSpendHasBeenSet() const { return m_expectedCustomerSpendHasBeenSet; }
    template<typename ExpectedCustomerSpendT = Aws::Vector<ExpectedCustomerSpend>>
    void SetExpectedCustomerSpend(ExpectedCustomerSpendT&& value) { m_expectedCustomerSpendHasBeenSet = true; m_expectedCustomerSpend = std::forward<ExpectedCustomerSpendT>(value); }
    template<typename ExpectedCustomerSpendT = Aws::Vector<ExpectedCustomerSpend>>
    Project& WithExpectedCustomerSpend(ExpectedCustomerSpendT&& value) { SetExpectedCustomerSpend(std::forward<ExpectedCustomerSpendT>(value)); return *this;}
    template<typename ExpectedCustomerSpendT = ExpectedCustomerSpend>
    Project& AddExpectedCustomerSpend(ExpectedCustomerSpendT&& value) { m_expectedCustomerSpendHasBeenSet = true; m_expectedCustomerSpend.emplace_back(std::forward<ExpectedCustomerSpendT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the <code>Opportunity</code>'s title or name.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    Project& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the Amazon Partner Network (APN) program that influenced the
     * <code>Opportunity</code>. APN programs refer to specific partner programs or
     * initiatives that can impact the <code>Opportunity</code>.</p> <p>Valid values:
     * <code>APN Immersion Days | APN Solution Space | ATO (Authority to Operate) | AWS
     * Marketplace Campaign | IS Immersion Day SFID Program | ISV Workload Migration |
     * Migration Acceleration Program | P3 | Partner Launch Initiative | Partner
     * Opportunity Acceleration Funded | The Next Smart | VMware Cloud on AWS |
     * Well-Architected | Windows | Workspaces/AppStream Accelerator Program | WWPS
     * NDPP</code> </p>
     */
    inline const Aws::Vector<Aws::String>& GetApnPrograms() const { return m_apnPrograms; }
    inline bool ApnProgramsHasBeenSet() const { return m_apnProgramsHasBeenSet; }
    template<typename ApnProgramsT = Aws::Vector<Aws::String>>
    void SetApnPrograms(ApnProgramsT&& value) { m_apnProgramsHasBeenSet = true; m_apnPrograms = std::forward<ApnProgramsT>(value); }
    template<typename ApnProgramsT = Aws::Vector<Aws::String>>
    Project& WithApnPrograms(ApnProgramsT&& value) { SetApnPrograms(std::forward<ApnProgramsT>(value)); return *this;}
    template<typename ApnProgramsT = Aws::String>
    Project& AddApnPrograms(ApnProgramsT&& value) { m_apnProgramsHasBeenSet = true; m_apnPrograms.emplace_back(std::forward<ApnProgramsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Describes the problem the end customer has, and how the partner is helping.
     * Utilize this field to provide a concise narrative that outlines the customer's
     * business challenge or issue. Elaborate on how the partner's solution or
     * offerings align to resolve the customer's business problem. Include relevant
     * information about the partner's value proposition, unique selling points, and
     * expertise to tackle the issue. Offer insights on how the proposed solution meets
     * the customer's needs and provides value. Use concise language and precise
     * descriptions to convey the context and significance of the
     * <code>Opportunity</code>. The content in this field helps Amazon Web Services
     * understand the nature of the <code>Opportunity</code> and the strategic fit of
     * the partner's solution.</p>
     */
    inline const Aws::String& GetCustomerBusinessProblem() const { return m_customerBusinessProblem; }
    inline bool CustomerBusinessProblemHasBeenSet() const { return m_customerBusinessProblemHasBeenSet; }
    template<typename CustomerBusinessProblemT = Aws::String>
    void SetCustomerBusinessProblem(CustomerBusinessProblemT&& value) { m_customerBusinessProblemHasBeenSet = true; m_customerBusinessProblem = std::forward<CustomerBusinessProblemT>(value); }
    template<typename CustomerBusinessProblemT = Aws::String>
    Project& WithCustomerBusinessProblem(CustomerBusinessProblemT&& value) { SetCustomerBusinessProblem(std::forward<CustomerBusinessProblemT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the proposed solution focus or type of workload for the
     * Opportunity. This field captures the primary use case or objective of the
     * proposed solution, and provides context and clarity to the addressed
     * workload.</p> <p>Valid values: <code>AI Machine Learning and Analytics |
     * Archiving | Big Data: Data Warehouse/Data Integration/ETL/Data Lake/BI |
     * Blockchain | Business Applications: Mainframe Modernization | Business
     * Applications &amp; Contact Center | Business Applications &amp; SAP Production |
     * Centralized Operations Management | Cloud Management Tools | Cloud Management
     * Tools &amp; DevOps with Continuous Integration &amp; Continuous Delivery (CICD)
     * | Configuration, Compliance &amp; Auditing | Connected Services | Containers
     * &amp; Serverless | Content Delivery &amp; Edge Services | Database | Edge
     * Computing/End User Computing | Energy | Enterprise Governance &amp; Controls |
     * Enterprise Resource Planning | Financial Services | Healthcare and Life Sciences
     * | High Performance Computing | Hybrid Application Platform | Industrial Software
     * | IOT | Manufacturing, Supply Chain and Operations | Media &amp; High
     * performance computing (HPC) | Migration/Database Migration | Monitoring, logging
     * and performance | Monitoring &amp; Observability | Networking | Outpost | SAP |
     * Security &amp; Compliance | Storage &amp; Backup | Training | VMC | VMWare | Web
     * development &amp; DevOps</code> </p>
     */
    inline const Aws::String& GetCustomerUseCase() const { return m_customerUseCase; }
    inline bool CustomerUseCaseHasBeenSet() const { return m_customerUseCaseHasBeenSet; }
    template<typename CustomerUseCaseT = Aws::String>
    void SetCustomerUseCase(CustomerUseCaseT&& value) { m_customerUseCaseHasBeenSet = true; m_customerUseCase = std::forward<CustomerUseCaseT>(value); }
    template<typename CustomerUseCaseT = Aws::String>
    Project& WithCustomerUseCase(CustomerUseCaseT&& value) { SetCustomerUseCase(std::forward<CustomerUseCaseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the current opportunity's parent opportunity identifier.</p>
     */
    inline const Aws::String& GetRelatedOpportunityIdentifier() const { return m_relatedOpportunityIdentifier; }
    inline bool RelatedOpportunityIdentifierHasBeenSet() const { return m_relatedOpportunityIdentifierHasBeenSet; }
    template<typename RelatedOpportunityIdentifierT = Aws::String>
    void SetRelatedOpportunityIdentifier(RelatedOpportunityIdentifierT&& value) { m_relatedOpportunityIdentifierHasBeenSet = true; m_relatedOpportunityIdentifier = std::forward<RelatedOpportunityIdentifierT>(value); }
    template<typename RelatedOpportunityIdentifierT = Aws::String>
    Project& WithRelatedOpportunityIdentifier(RelatedOpportunityIdentifierT&& value) { SetRelatedOpportunityIdentifier(std::forward<RelatedOpportunityIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the <code>Opportunity</code>'s sales activities conducted with the
     * end customer. These activities help drive Amazon Web Services assignment
     * priority.</p> <p>Valid values:</p> <ul> <li> <p>Initialized discussions with
     * customer: Initial conversations with the customer to understand their needs and
     * introduce your solution.</p> </li> <li> <p>Customer has shown interest in
     * solution: After initial discussions, the customer is interested in your
     * solution.</p> </li> <li> <p>Conducted POC/demo: You conducted a proof of concept
     * (POC) or demonstration of the solution for the customer.</p> </li> <li> <p>In
     * evaluation/planning stage: The customer is evaluating the solution and planning
     * potential implementation.</p> </li> <li> <p>Agreed on solution to Business
     * Problem: Both parties agree on how the solution addresses the customer's
     * business problem.</p> </li> <li> <p>Completed Action Plan: A detailed action
     * plan is complete and outlines the steps for implementation.</p> </li> <li>
     * <p>Finalized Deployment Need: Both parties agree with and finalized the
     * deployment needs.</p> </li> <li> <p>SOW Signed: Both parties signed a statement
     * of work (SOW), and formalize the agreement and detail the project scope and
     * deliverables.</p> </li> </ul>
     */
    inline const Aws::Vector<SalesActivity>& GetSalesActivities() const { return m_salesActivities; }
    inline bool SalesActivitiesHasBeenSet() const { return m_salesActivitiesHasBeenSet; }
    template<typename SalesActivitiesT = Aws::Vector<SalesActivity>>
    void SetSalesActivities(SalesActivitiesT&& value) { m_salesActivitiesHasBeenSet = true; m_salesActivities = std::forward<SalesActivitiesT>(value); }
    template<typename SalesActivitiesT = Aws::Vector<SalesActivity>>
    Project& WithSalesActivities(SalesActivitiesT&& value) { SetSalesActivities(std::forward<SalesActivitiesT>(value)); return *this;}
    inline Project& AddSalesActivities(SalesActivity value) { m_salesActivitiesHasBeenSet = true; m_salesActivities.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Name of the <code>Opportunity</code>'s competitor (if any). Use
     * <code>Other</code> to submit a value not in the picklist.</p>
     */
    inline CompetitorName GetCompetitorName() const { return m_competitorName; }
    inline bool CompetitorNameHasBeenSet() const { return m_competitorNameHasBeenSet; }
    inline void SetCompetitorName(CompetitorName value) { m_competitorNameHasBeenSet = true; m_competitorName = value; }
    inline Project& WithCompetitorName(CompetitorName value) { SetCompetitorName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Only allowed when <code>CompetitorNames</code> has <code>Other</code>
     * selected.</p>
     */
    inline const Aws::String& GetOtherCompetitorNames() const { return m_otherCompetitorNames; }
    inline bool OtherCompetitorNamesHasBeenSet() const { return m_otherCompetitorNamesHasBeenSet; }
    template<typename OtherCompetitorNamesT = Aws::String>
    void SetOtherCompetitorNames(OtherCompetitorNamesT&& value) { m_otherCompetitorNamesHasBeenSet = true; m_otherCompetitorNames = std::forward<OtherCompetitorNamesT>(value); }
    template<typename OtherCompetitorNamesT = Aws::String>
    Project& WithOtherCompetitorNames(OtherCompetitorNamesT&& value) { SetOtherCompetitorNames(std::forward<OtherCompetitorNamesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the offered solution for the customer's business problem when the
     * <code> RelatedEntityIdentifiers.Solutions</code> field value is
     * <code>Other</code>.</p>
     */
    inline const Aws::String& GetOtherSolutionDescription() const { return m_otherSolutionDescription; }
    inline bool OtherSolutionDescriptionHasBeenSet() const { return m_otherSolutionDescriptionHasBeenSet; }
    template<typename OtherSolutionDescriptionT = Aws::String>
    void SetOtherSolutionDescription(OtherSolutionDescriptionT&& value) { m_otherSolutionDescriptionHasBeenSet = true; m_otherSolutionDescription = std::forward<OtherSolutionDescriptionT>(value); }
    template<typename OtherSolutionDescriptionT = Aws::String>
    Project& WithOtherSolutionDescription(OtherSolutionDescriptionT&& value) { SetOtherSolutionDescription(std::forward<OtherSolutionDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Captures additional comments or information for the <code>Opportunity</code>
     * that weren't captured in other fields.</p>
     */
    inline const Aws::String& GetAdditionalComments() const { return m_additionalComments; }
    inline bool AdditionalCommentsHasBeenSet() const { return m_additionalCommentsHasBeenSet; }
    template<typename AdditionalCommentsT = Aws::String>
    void SetAdditionalComments(AdditionalCommentsT&& value) { m_additionalCommentsHasBeenSet = true; m_additionalComments = std::forward<AdditionalCommentsT>(value); }
    template<typename AdditionalCommentsT = Aws::String>
    Project& WithAdditionalComments(AdditionalCommentsT&& value) { SetAdditionalComments(std::forward<AdditionalCommentsT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DeliveryModel> m_deliveryModels;
    bool m_deliveryModelsHasBeenSet = false;

    Aws::Vector<ExpectedCustomerSpend> m_expectedCustomerSpend;
    bool m_expectedCustomerSpendHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::Vector<Aws::String> m_apnPrograms;
    bool m_apnProgramsHasBeenSet = false;

    Aws::String m_customerBusinessProblem;
    bool m_customerBusinessProblemHasBeenSet = false;

    Aws::String m_customerUseCase;
    bool m_customerUseCaseHasBeenSet = false;

    Aws::String m_relatedOpportunityIdentifier;
    bool m_relatedOpportunityIdentifierHasBeenSet = false;

    Aws::Vector<SalesActivity> m_salesActivities;
    bool m_salesActivitiesHasBeenSet = false;

    CompetitorName m_competitorName{CompetitorName::NOT_SET};
    bool m_competitorNameHasBeenSet = false;

    Aws::String m_otherCompetitorNames;
    bool m_otherCompetitorNamesHasBeenSet = false;

    Aws::String m_otherSolutionDescription;
    bool m_otherSolutionDescriptionHasBeenSet = false;

    Aws::String m_additionalComments;
    bool m_additionalCommentsHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
