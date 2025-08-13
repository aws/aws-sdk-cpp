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
   * <p>An object that contains a <code>LifeCycle</code> object's subset of
   * fields.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/LifeCycleSummary">AWS
   * API Reference</a></p>
   */
  class LifeCycleSummary
  {
  public:
    AWS_PARTNERCENTRALSELLING_API LifeCycleSummary() = default;
    AWS_PARTNERCENTRALSELLING_API LifeCycleSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API LifeCycleSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
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
     * and understand requirements. The customer agreed that the opportunity is real,
     * of interest, and may solve business/technical needs.</p> </li> <li> <p>Technical
     * Validation: All parties understand the implementation plan.</p> </li> <li>
     * <p>Business Validation: Pricing was proposed, and all parties agree to the steps
     * to close.</p> </li> <li> <p>Committed: The customer signed the contract, but
     * Amazon Web Services hasn't started billing.</p> </li> <li> <p>Launched: The
     * workload is complete, and Amazon Web Services has started billing.</p> </li>
     * <li> <p>Closed Lost: The opportunity is lost, and there are no steps to move
     * forward.</p> </li> </ul>
     */
    inline Stage GetStage() const { return m_stage; }
    inline bool StageHasBeenSet() const { return m_stageHasBeenSet; }
    inline void SetStage(Stage value) { m_stageHasBeenSet = true; m_stage = value; }
    inline LifeCycleSummary& WithStage(Stage value) { SetStage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the reason code when an opportunity is marked as <i>Closed
     * Lost</i>. When you select an appropriate reason code, you communicate the
     * context for closing the <code>Opportunity</code>, and aid in accurate reports
     * and analysis of opportunity outcomes.</p>
     */
    inline ClosedLostReason GetClosedLostReason() const { return m_closedLostReason; }
    inline bool ClosedLostReasonHasBeenSet() const { return m_closedLostReasonHasBeenSet; }
    inline void SetClosedLostReason(ClosedLostReason value) { m_closedLostReasonHasBeenSet = true; m_closedLostReason = value; }
    inline LifeCycleSummary& WithClosedLostReason(ClosedLostReason value) { SetClosedLostReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the upcoming actions or tasks for the <code>Opportunity</code>.
     * This field is utilized to communicate to Amazon Web Services the next actions
     * required for the <code>Opportunity</code>.</p>
     */
    inline const Aws::String& GetNextSteps() const { return m_nextSteps; }
    inline bool NextStepsHasBeenSet() const { return m_nextStepsHasBeenSet; }
    template<typename NextStepsT = Aws::String>
    void SetNextSteps(NextStepsT&& value) { m_nextStepsHasBeenSet = true; m_nextSteps = std::forward<NextStepsT>(value); }
    template<typename NextStepsT = Aws::String>
    LifeCycleSummary& WithNextSteps(NextStepsT&& value) { SetNextSteps(std::forward<NextStepsT>(value)); return *this;}
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
    LifeCycleSummary& WithTargetCloseDate(TargetCloseDateT&& value) { SetTargetCloseDate(std::forward<TargetCloseDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the review status of a partner referred opportunity. This field is
     * read-only and only applicable for partner referrals. Valid values:</p> <ul> <li>
     * <p>Pending Submission: Not submitted for validation (editable).</p> </li> <li>
     * <p>Submitted: Submitted for validation and not yet Amazon Web Services reviewed
     * (read-only).</p> </li> <li> <p>In Review: Undergoing Amazon Web Services
     * validation (read-only).</p> </li> <li> <p>Action Required: Address any issues
     * Amazon Web Services highlights. Use the <code>UpdateOpportunity</code> API
     * action to update the opportunity, and ensure you make all required changes. Only
     * these fields are editable when the <code>Lifecycle.ReviewStatus</code> is
     * <code>Action Required</code>:</p> <ul> <li> <p>Customer.Account.Address.City</p>
     * </li> <li> <p>Customer.Account.Address.CountryCode</p> </li> <li>
     * <p>Customer.Account.Address.PostalCode</p> </li> <li>
     * <p>Customer.Account.Address.StateOrRegion</p> </li> <li>
     * <p>Customer.Account.Address.StreetAddress</p> </li> <li>
     * <p>Customer.Account.WebsiteUrl</p> </li> <li> <p>LifeCycle.TargetCloseDate</p>
     * </li> <li> <p>Project.ExpectedCustomerSpend.Amount</p> </li> <li>
     * <p>Project.ExpectedCustomerSpend.CurrencyCode</p> </li> <li>
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
    inline LifeCycleSummary& WithReviewStatus(ReviewStatus value) { SetReviewStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates why an opportunity was sent back for further details. Partners must
     * take corrective action based on the <code>ReviewComments</code>.</p>
     */
    inline const Aws::String& GetReviewComments() const { return m_reviewComments; }
    inline bool ReviewCommentsHasBeenSet() const { return m_reviewCommentsHasBeenSet; }
    template<typename ReviewCommentsT = Aws::String>
    void SetReviewComments(ReviewCommentsT&& value) { m_reviewCommentsHasBeenSet = true; m_reviewComments = std::forward<ReviewCommentsT>(value); }
    template<typename ReviewCommentsT = Aws::String>
    LifeCycleSummary& WithReviewComments(ReviewCommentsT&& value) { SetReviewComments(std::forward<ReviewCommentsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the reason a specific decision was taken during the opportunity
     * review process. This field combines the reasons for both disqualified and action
     * required statuses, and provides clarity for why an opportunity was disqualified
     * or required further action.</p>
     */
    inline const Aws::String& GetReviewStatusReason() const { return m_reviewStatusReason; }
    inline bool ReviewStatusReasonHasBeenSet() const { return m_reviewStatusReasonHasBeenSet; }
    template<typename ReviewStatusReasonT = Aws::String>
    void SetReviewStatusReason(ReviewStatusReasonT&& value) { m_reviewStatusReasonHasBeenSet = true; m_reviewStatusReason = std::forward<ReviewStatusReasonT>(value); }
    template<typename ReviewStatusReasonT = Aws::String>
    LifeCycleSummary& WithReviewStatusReason(ReviewStatusReasonT&& value) { SetReviewStatusReason(std::forward<ReviewStatusReasonT>(value)); return *this;}
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
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
