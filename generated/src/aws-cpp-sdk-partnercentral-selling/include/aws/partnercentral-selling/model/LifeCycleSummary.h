/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/ClosedLostReason.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/model/ReviewStatus.h>
#include <aws/partnercentral-selling/model/Stage.h>
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
    AWS_PARTNERCENTRALSELLING_API LifeCycleSummary();
    AWS_PARTNERCENTRALSELLING_API LifeCycleSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API LifeCycleSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the reason code when an opportunity is marked as <i>Closed
     * Lost</i>. When you select an appropriate reason code, you communicate the
     * context for closing the <code>Opportunity</code>, and aid in accurate reports
     * and analysis of opportunity outcomes.</p>
     */
    inline const ClosedLostReason& GetClosedLostReason() const{ return m_closedLostReason; }
    inline bool ClosedLostReasonHasBeenSet() const { return m_closedLostReasonHasBeenSet; }
    inline void SetClosedLostReason(const ClosedLostReason& value) { m_closedLostReasonHasBeenSet = true; m_closedLostReason = value; }
    inline void SetClosedLostReason(ClosedLostReason&& value) { m_closedLostReasonHasBeenSet = true; m_closedLostReason = std::move(value); }
    inline LifeCycleSummary& WithClosedLostReason(const ClosedLostReason& value) { SetClosedLostReason(value); return *this;}
    inline LifeCycleSummary& WithClosedLostReason(ClosedLostReason&& value) { SetClosedLostReason(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the upcoming actions or tasks for the <code>Opportunity</code>.
     * This field is utilized to communicate to Amazon Web Services the next actions
     * required for the <code>Opportunity</code>.</p>
     */
    inline const Aws::String& GetNextSteps() const{ return m_nextSteps; }
    inline bool NextStepsHasBeenSet() const { return m_nextStepsHasBeenSet; }
    inline void SetNextSteps(const Aws::String& value) { m_nextStepsHasBeenSet = true; m_nextSteps = value; }
    inline void SetNextSteps(Aws::String&& value) { m_nextStepsHasBeenSet = true; m_nextSteps = std::move(value); }
    inline void SetNextSteps(const char* value) { m_nextStepsHasBeenSet = true; m_nextSteps.assign(value); }
    inline LifeCycleSummary& WithNextSteps(const Aws::String& value) { SetNextSteps(value); return *this;}
    inline LifeCycleSummary& WithNextSteps(Aws::String&& value) { SetNextSteps(std::move(value)); return *this;}
    inline LifeCycleSummary& WithNextSteps(const char* value) { SetNextSteps(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates why an opportunity was sent back for further details. Partners must
     * take corrective action based on the <code>ReviewComments</code>.</p>
     */
    inline const Aws::String& GetReviewComments() const{ return m_reviewComments; }
    inline bool ReviewCommentsHasBeenSet() const { return m_reviewCommentsHasBeenSet; }
    inline void SetReviewComments(const Aws::String& value) { m_reviewCommentsHasBeenSet = true; m_reviewComments = value; }
    inline void SetReviewComments(Aws::String&& value) { m_reviewCommentsHasBeenSet = true; m_reviewComments = std::move(value); }
    inline void SetReviewComments(const char* value) { m_reviewCommentsHasBeenSet = true; m_reviewComments.assign(value); }
    inline LifeCycleSummary& WithReviewComments(const Aws::String& value) { SetReviewComments(value); return *this;}
    inline LifeCycleSummary& WithReviewComments(Aws::String&& value) { SetReviewComments(std::move(value)); return *this;}
    inline LifeCycleSummary& WithReviewComments(const char* value) { SetReviewComments(value); return *this;}
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
    inline const ReviewStatus& GetReviewStatus() const{ return m_reviewStatus; }
    inline bool ReviewStatusHasBeenSet() const { return m_reviewStatusHasBeenSet; }
    inline void SetReviewStatus(const ReviewStatus& value) { m_reviewStatusHasBeenSet = true; m_reviewStatus = value; }
    inline void SetReviewStatus(ReviewStatus&& value) { m_reviewStatusHasBeenSet = true; m_reviewStatus = std::move(value); }
    inline LifeCycleSummary& WithReviewStatus(const ReviewStatus& value) { SetReviewStatus(value); return *this;}
    inline LifeCycleSummary& WithReviewStatus(ReviewStatus&& value) { SetReviewStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the reason a specific decision was taken during the opportunity
     * review process. This field combines the reasons for both disqualified and action
     * required statuses, and provides clarity for why an opportunity was disqualified
     * or required further action.</p>
     */
    inline const Aws::String& GetReviewStatusReason() const{ return m_reviewStatusReason; }
    inline bool ReviewStatusReasonHasBeenSet() const { return m_reviewStatusReasonHasBeenSet; }
    inline void SetReviewStatusReason(const Aws::String& value) { m_reviewStatusReasonHasBeenSet = true; m_reviewStatusReason = value; }
    inline void SetReviewStatusReason(Aws::String&& value) { m_reviewStatusReasonHasBeenSet = true; m_reviewStatusReason = std::move(value); }
    inline void SetReviewStatusReason(const char* value) { m_reviewStatusReasonHasBeenSet = true; m_reviewStatusReason.assign(value); }
    inline LifeCycleSummary& WithReviewStatusReason(const Aws::String& value) { SetReviewStatusReason(value); return *this;}
    inline LifeCycleSummary& WithReviewStatusReason(Aws::String&& value) { SetReviewStatusReason(std::move(value)); return *this;}
    inline LifeCycleSummary& WithReviewStatusReason(const char* value) { SetReviewStatusReason(value); return *this;}
    ///@}

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
    inline const Stage& GetStage() const{ return m_stage; }
    inline bool StageHasBeenSet() const { return m_stageHasBeenSet; }
    inline void SetStage(const Stage& value) { m_stageHasBeenSet = true; m_stage = value; }
    inline void SetStage(Stage&& value) { m_stageHasBeenSet = true; m_stage = std::move(value); }
    inline LifeCycleSummary& WithStage(const Stage& value) { SetStage(value); return *this;}
    inline LifeCycleSummary& WithStage(Stage&& value) { SetStage(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the date when Amazon Web Services expects to start significant
     * billing, when the project finishes, and when it moves into production. This
     * field informs the Amazon Web Services seller about when the opportunity launches
     * and starts to incur Amazon Web Services usage.</p> <p>Ensure the <code>Target
     * Close Date</code> isn't in the past.</p>
     */
    inline const Aws::String& GetTargetCloseDate() const{ return m_targetCloseDate; }
    inline bool TargetCloseDateHasBeenSet() const { return m_targetCloseDateHasBeenSet; }
    inline void SetTargetCloseDate(const Aws::String& value) { m_targetCloseDateHasBeenSet = true; m_targetCloseDate = value; }
    inline void SetTargetCloseDate(Aws::String&& value) { m_targetCloseDateHasBeenSet = true; m_targetCloseDate = std::move(value); }
    inline void SetTargetCloseDate(const char* value) { m_targetCloseDateHasBeenSet = true; m_targetCloseDate.assign(value); }
    inline LifeCycleSummary& WithTargetCloseDate(const Aws::String& value) { SetTargetCloseDate(value); return *this;}
    inline LifeCycleSummary& WithTargetCloseDate(Aws::String&& value) { SetTargetCloseDate(std::move(value)); return *this;}
    inline LifeCycleSummary& WithTargetCloseDate(const char* value) { SetTargetCloseDate(value); return *this;}
    ///@}
  private:

    ClosedLostReason m_closedLostReason;
    bool m_closedLostReasonHasBeenSet = false;

    Aws::String m_nextSteps;
    bool m_nextStepsHasBeenSet = false;

    Aws::String m_reviewComments;
    bool m_reviewCommentsHasBeenSet = false;

    ReviewStatus m_reviewStatus;
    bool m_reviewStatusHasBeenSet = false;

    Aws::String m_reviewStatusReason;
    bool m_reviewStatusReasonHasBeenSet = false;

    Stage m_stage;
    bool m_stageHasBeenSet = false;

    Aws::String m_targetCloseDate;
    bool m_targetCloseDateHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
