/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_PARTNERCENTRALSELLING_API Project();
    AWS_PARTNERCENTRALSELLING_API Project(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Project& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Captures additional comments or information for the <code>Opportunity</code>
     * that weren't captured in other fields.</p>
     */
    inline const Aws::String& GetAdditionalComments() const{ return m_additionalComments; }
    inline bool AdditionalCommentsHasBeenSet() const { return m_additionalCommentsHasBeenSet; }
    inline void SetAdditionalComments(const Aws::String& value) { m_additionalCommentsHasBeenSet = true; m_additionalComments = value; }
    inline void SetAdditionalComments(Aws::String&& value) { m_additionalCommentsHasBeenSet = true; m_additionalComments = std::move(value); }
    inline void SetAdditionalComments(const char* value) { m_additionalCommentsHasBeenSet = true; m_additionalComments.assign(value); }
    inline Project& WithAdditionalComments(const Aws::String& value) { SetAdditionalComments(value); return *this;}
    inline Project& WithAdditionalComments(Aws::String&& value) { SetAdditionalComments(std::move(value)); return *this;}
    inline Project& WithAdditionalComments(const char* value) { SetAdditionalComments(value); return *this;}
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
    inline const Aws::Vector<Aws::String>& GetApnPrograms() const{ return m_apnPrograms; }
    inline bool ApnProgramsHasBeenSet() const { return m_apnProgramsHasBeenSet; }
    inline void SetApnPrograms(const Aws::Vector<Aws::String>& value) { m_apnProgramsHasBeenSet = true; m_apnPrograms = value; }
    inline void SetApnPrograms(Aws::Vector<Aws::String>&& value) { m_apnProgramsHasBeenSet = true; m_apnPrograms = std::move(value); }
    inline Project& WithApnPrograms(const Aws::Vector<Aws::String>& value) { SetApnPrograms(value); return *this;}
    inline Project& WithApnPrograms(Aws::Vector<Aws::String>&& value) { SetApnPrograms(std::move(value)); return *this;}
    inline Project& AddApnPrograms(const Aws::String& value) { m_apnProgramsHasBeenSet = true; m_apnPrograms.push_back(value); return *this; }
    inline Project& AddApnPrograms(Aws::String&& value) { m_apnProgramsHasBeenSet = true; m_apnPrograms.push_back(std::move(value)); return *this; }
    inline Project& AddApnPrograms(const char* value) { m_apnProgramsHasBeenSet = true; m_apnPrograms.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Name of the <code>Opportunity</code>'s competitor (if any). Use
     * <code>Other</code> to submit a value not in the picklist.</p>
     */
    inline const CompetitorName& GetCompetitorName() const{ return m_competitorName; }
    inline bool CompetitorNameHasBeenSet() const { return m_competitorNameHasBeenSet; }
    inline void SetCompetitorName(const CompetitorName& value) { m_competitorNameHasBeenSet = true; m_competitorName = value; }
    inline void SetCompetitorName(CompetitorName&& value) { m_competitorNameHasBeenSet = true; m_competitorName = std::move(value); }
    inline Project& WithCompetitorName(const CompetitorName& value) { SetCompetitorName(value); return *this;}
    inline Project& WithCompetitorName(CompetitorName&& value) { SetCompetitorName(std::move(value)); return *this;}
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
    inline const Aws::String& GetCustomerBusinessProblem() const{ return m_customerBusinessProblem; }
    inline bool CustomerBusinessProblemHasBeenSet() const { return m_customerBusinessProblemHasBeenSet; }
    inline void SetCustomerBusinessProblem(const Aws::String& value) { m_customerBusinessProblemHasBeenSet = true; m_customerBusinessProblem = value; }
    inline void SetCustomerBusinessProblem(Aws::String&& value) { m_customerBusinessProblemHasBeenSet = true; m_customerBusinessProblem = std::move(value); }
    inline void SetCustomerBusinessProblem(const char* value) { m_customerBusinessProblemHasBeenSet = true; m_customerBusinessProblem.assign(value); }
    inline Project& WithCustomerBusinessProblem(const Aws::String& value) { SetCustomerBusinessProblem(value); return *this;}
    inline Project& WithCustomerBusinessProblem(Aws::String&& value) { SetCustomerBusinessProblem(std::move(value)); return *this;}
    inline Project& WithCustomerBusinessProblem(const char* value) { SetCustomerBusinessProblem(value); return *this;}
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
    inline const Aws::String& GetCustomerUseCase() const{ return m_customerUseCase; }
    inline bool CustomerUseCaseHasBeenSet() const { return m_customerUseCaseHasBeenSet; }
    inline void SetCustomerUseCase(const Aws::String& value) { m_customerUseCaseHasBeenSet = true; m_customerUseCase = value; }
    inline void SetCustomerUseCase(Aws::String&& value) { m_customerUseCaseHasBeenSet = true; m_customerUseCase = std::move(value); }
    inline void SetCustomerUseCase(const char* value) { m_customerUseCaseHasBeenSet = true; m_customerUseCase.assign(value); }
    inline Project& WithCustomerUseCase(const Aws::String& value) { SetCustomerUseCase(value); return *this;}
    inline Project& WithCustomerUseCase(Aws::String&& value) { SetCustomerUseCase(std::move(value)); return *this;}
    inline Project& WithCustomerUseCase(const char* value) { SetCustomerUseCase(value); return *this;}
    ///@}

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
    inline const Aws::Vector<DeliveryModel>& GetDeliveryModels() const{ return m_deliveryModels; }
    inline bool DeliveryModelsHasBeenSet() const { return m_deliveryModelsHasBeenSet; }
    inline void SetDeliveryModels(const Aws::Vector<DeliveryModel>& value) { m_deliveryModelsHasBeenSet = true; m_deliveryModels = value; }
    inline void SetDeliveryModels(Aws::Vector<DeliveryModel>&& value) { m_deliveryModelsHasBeenSet = true; m_deliveryModels = std::move(value); }
    inline Project& WithDeliveryModels(const Aws::Vector<DeliveryModel>& value) { SetDeliveryModels(value); return *this;}
    inline Project& WithDeliveryModels(Aws::Vector<DeliveryModel>&& value) { SetDeliveryModels(std::move(value)); return *this;}
    inline Project& AddDeliveryModels(const DeliveryModel& value) { m_deliveryModelsHasBeenSet = true; m_deliveryModels.push_back(value); return *this; }
    inline Project& AddDeliveryModels(DeliveryModel&& value) { m_deliveryModelsHasBeenSet = true; m_deliveryModels.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Represents the estimated amount that the customer is expected to spend on AWS
     * services related to the opportunity. This helps in evaluating the potential
     * financial value of the opportunity for AWS.</p>
     */
    inline const Aws::Vector<ExpectedCustomerSpend>& GetExpectedCustomerSpend() const{ return m_expectedCustomerSpend; }
    inline bool ExpectedCustomerSpendHasBeenSet() const { return m_expectedCustomerSpendHasBeenSet; }
    inline void SetExpectedCustomerSpend(const Aws::Vector<ExpectedCustomerSpend>& value) { m_expectedCustomerSpendHasBeenSet = true; m_expectedCustomerSpend = value; }
    inline void SetExpectedCustomerSpend(Aws::Vector<ExpectedCustomerSpend>&& value) { m_expectedCustomerSpendHasBeenSet = true; m_expectedCustomerSpend = std::move(value); }
    inline Project& WithExpectedCustomerSpend(const Aws::Vector<ExpectedCustomerSpend>& value) { SetExpectedCustomerSpend(value); return *this;}
    inline Project& WithExpectedCustomerSpend(Aws::Vector<ExpectedCustomerSpend>&& value) { SetExpectedCustomerSpend(std::move(value)); return *this;}
    inline Project& AddExpectedCustomerSpend(const ExpectedCustomerSpend& value) { m_expectedCustomerSpendHasBeenSet = true; m_expectedCustomerSpend.push_back(value); return *this; }
    inline Project& AddExpectedCustomerSpend(ExpectedCustomerSpend&& value) { m_expectedCustomerSpendHasBeenSet = true; m_expectedCustomerSpend.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Only allowed when <code>CompetitorNames</code> has <code>Other</code>
     * selected.</p>
     */
    inline const Aws::String& GetOtherCompetitorNames() const{ return m_otherCompetitorNames; }
    inline bool OtherCompetitorNamesHasBeenSet() const { return m_otherCompetitorNamesHasBeenSet; }
    inline void SetOtherCompetitorNames(const Aws::String& value) { m_otherCompetitorNamesHasBeenSet = true; m_otherCompetitorNames = value; }
    inline void SetOtherCompetitorNames(Aws::String&& value) { m_otherCompetitorNamesHasBeenSet = true; m_otherCompetitorNames = std::move(value); }
    inline void SetOtherCompetitorNames(const char* value) { m_otherCompetitorNamesHasBeenSet = true; m_otherCompetitorNames.assign(value); }
    inline Project& WithOtherCompetitorNames(const Aws::String& value) { SetOtherCompetitorNames(value); return *this;}
    inline Project& WithOtherCompetitorNames(Aws::String&& value) { SetOtherCompetitorNames(std::move(value)); return *this;}
    inline Project& WithOtherCompetitorNames(const char* value) { SetOtherCompetitorNames(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the offered solution for the customer's business problem when the
     * <code> RelatedEntityIdentifiers.Solutions</code> field value is
     * <code>Other</code>.</p>
     */
    inline const Aws::String& GetOtherSolutionDescription() const{ return m_otherSolutionDescription; }
    inline bool OtherSolutionDescriptionHasBeenSet() const { return m_otherSolutionDescriptionHasBeenSet; }
    inline void SetOtherSolutionDescription(const Aws::String& value) { m_otherSolutionDescriptionHasBeenSet = true; m_otherSolutionDescription = value; }
    inline void SetOtherSolutionDescription(Aws::String&& value) { m_otherSolutionDescriptionHasBeenSet = true; m_otherSolutionDescription = std::move(value); }
    inline void SetOtherSolutionDescription(const char* value) { m_otherSolutionDescriptionHasBeenSet = true; m_otherSolutionDescription.assign(value); }
    inline Project& WithOtherSolutionDescription(const Aws::String& value) { SetOtherSolutionDescription(value); return *this;}
    inline Project& WithOtherSolutionDescription(Aws::String&& value) { SetOtherSolutionDescription(std::move(value)); return *this;}
    inline Project& WithOtherSolutionDescription(const char* value) { SetOtherSolutionDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the current opportunity's parent opportunity identifier.</p>
     */
    inline const Aws::String& GetRelatedOpportunityIdentifier() const{ return m_relatedOpportunityIdentifier; }
    inline bool RelatedOpportunityIdentifierHasBeenSet() const { return m_relatedOpportunityIdentifierHasBeenSet; }
    inline void SetRelatedOpportunityIdentifier(const Aws::String& value) { m_relatedOpportunityIdentifierHasBeenSet = true; m_relatedOpportunityIdentifier = value; }
    inline void SetRelatedOpportunityIdentifier(Aws::String&& value) { m_relatedOpportunityIdentifierHasBeenSet = true; m_relatedOpportunityIdentifier = std::move(value); }
    inline void SetRelatedOpportunityIdentifier(const char* value) { m_relatedOpportunityIdentifierHasBeenSet = true; m_relatedOpportunityIdentifier.assign(value); }
    inline Project& WithRelatedOpportunityIdentifier(const Aws::String& value) { SetRelatedOpportunityIdentifier(value); return *this;}
    inline Project& WithRelatedOpportunityIdentifier(Aws::String&& value) { SetRelatedOpportunityIdentifier(std::move(value)); return *this;}
    inline Project& WithRelatedOpportunityIdentifier(const char* value) { SetRelatedOpportunityIdentifier(value); return *this;}
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
    inline const Aws::Vector<SalesActivity>& GetSalesActivities() const{ return m_salesActivities; }
    inline bool SalesActivitiesHasBeenSet() const { return m_salesActivitiesHasBeenSet; }
    inline void SetSalesActivities(const Aws::Vector<SalesActivity>& value) { m_salesActivitiesHasBeenSet = true; m_salesActivities = value; }
    inline void SetSalesActivities(Aws::Vector<SalesActivity>&& value) { m_salesActivitiesHasBeenSet = true; m_salesActivities = std::move(value); }
    inline Project& WithSalesActivities(const Aws::Vector<SalesActivity>& value) { SetSalesActivities(value); return *this;}
    inline Project& WithSalesActivities(Aws::Vector<SalesActivity>&& value) { SetSalesActivities(std::move(value)); return *this;}
    inline Project& AddSalesActivities(const SalesActivity& value) { m_salesActivitiesHasBeenSet = true; m_salesActivities.push_back(value); return *this; }
    inline Project& AddSalesActivities(SalesActivity&& value) { m_salesActivitiesHasBeenSet = true; m_salesActivities.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the <code>Opportunity</code>'s title or name.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }
    inline Project& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline Project& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline Project& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}
  private:

    Aws::String m_additionalComments;
    bool m_additionalCommentsHasBeenSet = false;

    Aws::Vector<Aws::String> m_apnPrograms;
    bool m_apnProgramsHasBeenSet = false;

    CompetitorName m_competitorName;
    bool m_competitorNameHasBeenSet = false;

    Aws::String m_customerBusinessProblem;
    bool m_customerBusinessProblemHasBeenSet = false;

    Aws::String m_customerUseCase;
    bool m_customerUseCaseHasBeenSet = false;

    Aws::Vector<DeliveryModel> m_deliveryModels;
    bool m_deliveryModelsHasBeenSet = false;

    Aws::Vector<ExpectedCustomerSpend> m_expectedCustomerSpend;
    bool m_expectedCustomerSpendHasBeenSet = false;

    Aws::String m_otherCompetitorNames;
    bool m_otherCompetitorNamesHasBeenSet = false;

    Aws::String m_otherSolutionDescription;
    bool m_otherSolutionDescriptionHasBeenSet = false;

    Aws::String m_relatedOpportunityIdentifier;
    bool m_relatedOpportunityIdentifierHasBeenSet = false;

    Aws::Vector<SalesActivity> m_salesActivities;
    bool m_salesActivitiesHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
