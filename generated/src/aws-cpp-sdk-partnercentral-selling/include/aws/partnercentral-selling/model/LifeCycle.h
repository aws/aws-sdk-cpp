/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/Stage.h>
#include <aws/partnercentral-selling/model/ClosedLostReason.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/model/ReviewStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-selling/model/NextStepsHistory.h>
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
   * <p>An object that contains the <code>Opportunity</code> lifecycle's
   * details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/LifeCycle">AWS
   * API Reference</a></p>
   */
  class LifeCycle
  {
  public:
    AWS_PARTNERCENTRALSELLING_API LifeCycle() = default;
    AWS_PARTNERCENTRALSELLING_API LifeCycle(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API LifeCycle& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the current stage of the <code>Opportunity</code>'s lifecycle as it
     * maps to Amazon Web Services stages from the current stage in the partner CRM.
     * This field provides a translated value of the stage, and offers insight into the
     * <code>Opportunity</code>'s progression in the sales cycle, according to Amazon
     * Web Services definitions.</p>  <p>A lead and a prospect must be further
     * matured to a <code>Qualified</code> opportunity before submission. Opportunities
     * that were closed/lost before submission aren't suitable for submission.</p>
     *  <p>The descriptions of each sales stage are:</p> <ul> <li> <p>Prospect:
     * Amazon Web Services identifies the opportunity. It can be active (Comes directly
     * from the end customer through a lead) or latent (Your account team believes it
     * exists based on research, account plans, sales plays).</p> </li> <li>
     * <p>Qualified: Your account team engaged with the customer to discuss viability
     * and requirements. The customer agreed that the opportunity is real, of interest,
     * and may solve business/technical needs.</p> </li> <li> <p>Technical Validation:
     * All parties understand the implementation plan.</p> </li> <li> <p>Business
     * Validation: Pricing was proposed, and all parties agree to the steps to
     * close.</p> </li> <li> <p>Committed: The customer signed the contract, but Amazon
     * Web Services hasn't started billing.</p> </li> <li> <p>Launched: The workload is
     * complete, and Amazon Web Services has started billing.</p> </li> <li> <p>Closed
     * Lost: The opportunity is lost, and there are no steps to move forward.</p> </li>
     * </ul>
     */
    inline Stage GetStage() const { return m_stage; }
    inline bool StageHasBeenSet() const { return m_stageHasBeenSet; }
    inline void SetStage(Stage value) { m_stageHasBeenSet = true; m_stage = value; }
    inline LifeCycle& WithStage(Stage value) { SetStage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the reason code when an opportunity is marked as <i>Closed
     * Lost</i>. When you select an appropriate reason code, you communicate the
     * context for closing the <code>Opportunity</code>, and aid in accurate reports
     * and analysis of opportunity outcomes. The possible values are:</p> <ul> <li>
     * <p>Customer Deficiency: The customer lacked necessary resources or
     * capabilities.</p> </li> <li> <p>Delay/Cancellation of Project: The project was
     * delayed or canceled.</p> </li> <li> <p>Legal/Tax/Regulatory: Legal, tax, or
     * regulatory issues prevented progress.</p> </li> <li> <p>Lost to
     * Competitor—Google: The opportunity was lost to Google.</p> </li> <li> <p>Lost to
     * Competitor—Microsoft: The opportunity was lost to Microsoft.</p> </li> <li>
     * <p>Lost to Competitor—SoftLayer: The opportunity was lost to SoftLayer.</p>
     * </li> <li> <p>Lost to Competitor—VMWare: The opportunity was lost to VMWare.</p>
     * </li> <li> <p>Lost to Competitor—Other: The opportunity was lost to a competitor
     * not listed above.</p> </li> <li> <p>No Opportunity: There was no opportunity to
     * pursue.</p> </li> <li> <p>On Premises Deployment: The customer chose an
     * on-premises solution.</p> </li> <li> <p>Partner Gap: The partner lacked
     * necessary resources or capabilities.</p> </li> <li> <p>Price: The price was not
     * competitive or acceptable to the customer.</p> </li> <li>
     * <p>Security/Compliance: Security or compliance issues prevented progress.</p>
     * </li> <li> <p>Technical Limitations: Technical limitations prevented
     * progress.</p> </li> <li> <p>Customer Experience: Issues related to the
     * customer's experience impacted the decision.</p> </li> <li> <p>Other: Any reason
     * not covered by the other values.</p> </li> <li>
     * <p>People/Relationship/Governance: Issues related to people, relationships, or
     * governance.</p> </li> <li> <p>Product/Technology: Issues related to the product
     * or technology.</p> </li> <li> <p>Financial/Commercial: Financial or commercial
     * issues impacted the decision.</p> </li> </ul>
     */
    inline ClosedLostReason GetClosedLostReason() const { return m_closedLostReason; }
    inline bool ClosedLostReasonHasBeenSet() const { return m_closedLostReasonHasBeenSet; }
    inline void SetClosedLostReason(ClosedLostReason value) { m_closedLostReasonHasBeenSet = true; m_closedLostReason = value; }
    inline LifeCycle& WithClosedLostReason(ClosedLostReason value) { SetClosedLostReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the upcoming actions or tasks for the <code>Opportunity</code>. Use
     * this field to communicate with Amazon Web Services about the next actions
     * required for the <code>Opportunity</code>.</p>
     */
    inline const Aws::String& GetNextSteps() const { return m_nextSteps; }
    inline bool NextStepsHasBeenSet() const { return m_nextStepsHasBeenSet; }
    template<typename NextStepsT = Aws::String>
    void SetNextSteps(NextStepsT&& value) { m_nextStepsHasBeenSet = true; m_nextSteps = std::forward<NextStepsT>(value); }
    template<typename NextStepsT = Aws::String>
    LifeCycle& WithNextSteps(NextStepsT&& value) { SetNextSteps(std::forward<NextStepsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the date when Amazon Web Services expects to start significant
     * billing, when the project finishes, and when it moves into production. This
     * field informs the Amazon Web Services seller about when the opportunity launches
     * and starts to incur Amazon Web Services usage.</p> <p>Ensure the <code>Target
     * Close Date</code> isn't in the past.</p>
     */
    inline const Aws::String& GetTargetCloseDate() const { return m_targetCloseDate; }
    inline bool TargetCloseDateHasBeenSet() const { return m_targetCloseDateHasBeenSet; }
    template<typename TargetCloseDateT = Aws::String>
    void SetTargetCloseDate(TargetCloseDateT&& value) { m_targetCloseDateHasBeenSet = true; m_targetCloseDate = std::forward<TargetCloseDateT>(value); }
    template<typename TargetCloseDateT = Aws::String>
    LifeCycle& WithTargetCloseDate(TargetCloseDateT&& value) { SetTargetCloseDate(std::forward<TargetCloseDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the review status of an opportunity referred by a partner. This
     * field is read-only and only applicable for partner referrals. The possible
     * values are:</p> <ul> <li> <p>Pending Submission: Not submitted for validation
     * (editable).</p> </li> <li> <p>Submitted: Submitted for validation, and Amazon
     * Web Services hasn't reviewed it (read-only).</p> </li> <li> <p>In Review: Amazon
     * Web Services is validating (read-only).</p> </li> <li> <p>Action Required:
     * Issues that Amazon Web Services highlights need to be addressed. Partners should
     * use the <code>UpdateOpportunity</code> API action to update the opportunity and
     * helps to ensure that all required changes are made. Only the following fields
     * are editable when the <code>Lifecycle.ReviewStatus</code> is <code>Action
     * Required</code>:</p> <ul> <li> <p>Customer.Account.Address.City</p> </li> <li>
     * <p>Customer.Account.Address.CountryCode</p> </li> <li>
     * <p>Customer.Account.Address.PostalCode</p> </li> <li>
     * <p>Customer.Account.Address.StateOrRegion</p> </li> <li>
     * <p>Customer.Account.Address.StreetAddress</p> </li> <li>
     * <p>Customer.Account.WebsiteUrl</p> </li> <li> <p>LifeCycle.TargetCloseDate</p>
     * </li> <li> <p>Project.ExpectedMonthlyAWSRevenue.Amount</p> </li> <li>
     * <p>Project.ExpectedMonthlyAWSRevenue.CurrencyCode</p> </li> <li>
     * <p>Project.CustomerBusinessProblem</p> </li> <li>
     * <p>PartnerOpportunityIdentifier</p> </li> </ul> <p>After updates, the
     * opportunity re-enters the validation phase. This process repeats until all
     * issues are resolved, and the opportunity's <code>Lifecycle.ReviewStatus</code>
     * is set to <code>Approved</code> or <code>Rejected</code>.</p> </li> <li>
     * <p>Approved: Validated and converted into the Amazon Web Services seller's
     * pipeline (editable).</p> </li> <li> <p>Rejected: Disqualified (read-only).</p>
     * </li> </ul>
     */
    inline ReviewStatus GetReviewStatus() const { return m_reviewStatus; }
    inline bool ReviewStatusHasBeenSet() const { return m_reviewStatusHasBeenSet; }
    inline void SetReviewStatus(ReviewStatus value) { m_reviewStatusHasBeenSet = true; m_reviewStatus = value; }
    inline LifeCycle& WithReviewStatus(ReviewStatus value) { SetReviewStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains detailed feedback from Amazon Web Services when requesting
     * additional information from partners. Provides specific guidance on what
     * partners need to provide or clarify for opportunity validation, complementing
     * the <code>ReviewStatusReason</code> field.</p>
     */
    inline const Aws::String& GetReviewComments() const { return m_reviewComments; }
    inline bool ReviewCommentsHasBeenSet() const { return m_reviewCommentsHasBeenSet; }
    template<typename ReviewCommentsT = Aws::String>
    void SetReviewComments(ReviewCommentsT&& value) { m_reviewCommentsHasBeenSet = true; m_reviewComments = std::forward<ReviewCommentsT>(value); }
    template<typename ReviewCommentsT = Aws::String>
    LifeCycle& WithReviewComments(ReviewCommentsT&& value) { SetReviewComments(std::forward<ReviewCommentsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Code indicating the validation decision during the Amazon Web Services
     * opportunity review. Applies when status is <code>Rejected</code> or <code>Action
     * Required</code>. Used to document validation results for AWS Partner Referrals
     * and indicate when additional information is needed from partners as part of the
     * APN Customer Engagement (ACE) program.</p>
     */
    inline const Aws::String& GetReviewStatusReason() const { return m_reviewStatusReason; }
    inline bool ReviewStatusReasonHasBeenSet() const { return m_reviewStatusReasonHasBeenSet; }
    template<typename ReviewStatusReasonT = Aws::String>
    void SetReviewStatusReason(ReviewStatusReasonT&& value) { m_reviewStatusReasonHasBeenSet = true; m_reviewStatusReason = std::forward<ReviewStatusReasonT>(value); }
    template<typename ReviewStatusReasonT = Aws::String>
    LifeCycle& WithReviewStatusReason(ReviewStatusReasonT&& value) { SetReviewStatusReason(std::forward<ReviewStatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Captures a chronological record of the next steps or actions planned or taken
     * for the current opportunity, along with the timestamp.</p>
     */
    inline const Aws::Vector<NextStepsHistory>& GetNextStepsHistory() const { return m_nextStepsHistory; }
    inline bool NextStepsHistoryHasBeenSet() const { return m_nextStepsHistoryHasBeenSet; }
    template<typename NextStepsHistoryT = Aws::Vector<NextStepsHistory>>
    void SetNextStepsHistory(NextStepsHistoryT&& value) { m_nextStepsHistoryHasBeenSet = true; m_nextStepsHistory = std::forward<NextStepsHistoryT>(value); }
    template<typename NextStepsHistoryT = Aws::Vector<NextStepsHistory>>
    LifeCycle& WithNextStepsHistory(NextStepsHistoryT&& value) { SetNextStepsHistory(std::forward<NextStepsHistoryT>(value)); return *this;}
    template<typename NextStepsHistoryT = NextStepsHistory>
    LifeCycle& AddNextStepsHistory(NextStepsHistoryT&& value) { m_nextStepsHistoryHasBeenSet = true; m_nextStepsHistory.emplace_back(std::forward<NextStepsHistoryT>(value)); return *this; }
    ///@}
  private:

    Stage m_stage{Stage::NOT_SET};
    bool m_stageHasBeenSet = false;

    ClosedLostReason m_closedLostReason{ClosedLostReason::NOT_SET};
    bool m_closedLostReasonHasBeenSet = false;

    Aws::String m_nextSteps;
    bool m_nextStepsHasBeenSet = false;

    Aws::String m_targetCloseDate;
    bool m_targetCloseDateHasBeenSet = false;

    ReviewStatus m_reviewStatus{ReviewStatus::NOT_SET};
    bool m_reviewStatusHasBeenSet = false;

    Aws::String m_reviewComments;
    bool m_reviewCommentsHasBeenSet = false;

    Aws::String m_reviewStatusReason;
    bool m_reviewStatusReasonHasBeenSet = false;

    Aws::Vector<NextStepsHistory> m_nextStepsHistory;
    bool m_nextStepsHistoryHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
