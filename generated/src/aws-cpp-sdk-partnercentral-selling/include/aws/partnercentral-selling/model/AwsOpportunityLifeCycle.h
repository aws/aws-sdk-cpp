/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/AwsClosedLostReason.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-selling/model/AwsOpportunityStage.h>
#include <aws/partnercentral-selling/model/ProfileNextStepsHistory.h>
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
   * <p>Tracks the lifecycle of the AWS opportunity, including stages such as
   * qualification, validation, and closure. This field helps partners understand the
   * current status and progression of the opportunity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/AwsOpportunityLifeCycle">AWS
   * API Reference</a></p>
   */
  class AwsOpportunityLifeCycle
  {
  public:
    AWS_PARTNERCENTRALSELLING_API AwsOpportunityLifeCycle();
    AWS_PARTNERCENTRALSELLING_API AwsOpportunityLifeCycle(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API AwsOpportunityLifeCycle& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates the reason why an opportunity was marked as <code>Closed
     * Lost</code>. This helps in understanding the context behind the lost opportunity
     * and aids in refining future strategies.</p>
     */
    inline const AwsClosedLostReason& GetClosedLostReason() const{ return m_closedLostReason; }
    inline bool ClosedLostReasonHasBeenSet() const { return m_closedLostReasonHasBeenSet; }
    inline void SetClosedLostReason(const AwsClosedLostReason& value) { m_closedLostReasonHasBeenSet = true; m_closedLostReason = value; }
    inline void SetClosedLostReason(AwsClosedLostReason&& value) { m_closedLostReasonHasBeenSet = true; m_closedLostReason = std::move(value); }
    inline AwsOpportunityLifeCycle& WithClosedLostReason(const AwsClosedLostReason& value) { SetClosedLostReason(value); return *this;}
    inline AwsOpportunityLifeCycle& WithClosedLostReason(AwsClosedLostReason&& value) { SetClosedLostReason(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the immediate next steps required to progress the opportunity.
     * These steps are based on AWS guidance and the current stage of the
     * opportunity.</p>
     */
    inline const Aws::String& GetNextSteps() const{ return m_nextSteps; }
    inline bool NextStepsHasBeenSet() const { return m_nextStepsHasBeenSet; }
    inline void SetNextSteps(const Aws::String& value) { m_nextStepsHasBeenSet = true; m_nextSteps = value; }
    inline void SetNextSteps(Aws::String&& value) { m_nextStepsHasBeenSet = true; m_nextSteps = std::move(value); }
    inline void SetNextSteps(const char* value) { m_nextStepsHasBeenSet = true; m_nextSteps.assign(value); }
    inline AwsOpportunityLifeCycle& WithNextSteps(const Aws::String& value) { SetNextSteps(value); return *this;}
    inline AwsOpportunityLifeCycle& WithNextSteps(Aws::String&& value) { SetNextSteps(std::move(value)); return *this;}
    inline AwsOpportunityLifeCycle& WithNextSteps(const char* value) { SetNextSteps(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides a historical log of previous next steps that were taken to move the
     * opportunity forward. This helps in tracking the decision-making process and
     * identifying any delays or obstacles encountered.</p>
     */
    inline const Aws::Vector<ProfileNextStepsHistory>& GetNextStepsHistory() const{ return m_nextStepsHistory; }
    inline bool NextStepsHistoryHasBeenSet() const { return m_nextStepsHistoryHasBeenSet; }
    inline void SetNextStepsHistory(const Aws::Vector<ProfileNextStepsHistory>& value) { m_nextStepsHistoryHasBeenSet = true; m_nextStepsHistory = value; }
    inline void SetNextStepsHistory(Aws::Vector<ProfileNextStepsHistory>&& value) { m_nextStepsHistoryHasBeenSet = true; m_nextStepsHistory = std::move(value); }
    inline AwsOpportunityLifeCycle& WithNextStepsHistory(const Aws::Vector<ProfileNextStepsHistory>& value) { SetNextStepsHistory(value); return *this;}
    inline AwsOpportunityLifeCycle& WithNextStepsHistory(Aws::Vector<ProfileNextStepsHistory>&& value) { SetNextStepsHistory(std::move(value)); return *this;}
    inline AwsOpportunityLifeCycle& AddNextStepsHistory(const ProfileNextStepsHistory& value) { m_nextStepsHistoryHasBeenSet = true; m_nextStepsHistory.push_back(value); return *this; }
    inline AwsOpportunityLifeCycle& AddNextStepsHistory(ProfileNextStepsHistory&& value) { m_nextStepsHistoryHasBeenSet = true; m_nextStepsHistory.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Represents the current stage of the opportunity in its lifecycle, such as
     * <code>Qualification</code>, <code>Validation</code>, or <code>Closed Won</code>.
     * This helps in understanding the opportunity's progress.</p>
     */
    inline const AwsOpportunityStage& GetStage() const{ return m_stage; }
    inline bool StageHasBeenSet() const { return m_stageHasBeenSet; }
    inline void SetStage(const AwsOpportunityStage& value) { m_stageHasBeenSet = true; m_stage = value; }
    inline void SetStage(AwsOpportunityStage&& value) { m_stageHasBeenSet = true; m_stage = std::move(value); }
    inline AwsOpportunityLifeCycle& WithStage(const AwsOpportunityStage& value) { SetStage(value); return *this;}
    inline AwsOpportunityLifeCycle& WithStage(AwsOpportunityStage&& value) { SetStage(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the expected date by which the opportunity is projected to close.
     * This field helps in planning resources and timelines for both the partner and
     * AWS.</p>
     */
    inline const Aws::String& GetTargetCloseDate() const{ return m_targetCloseDate; }
    inline bool TargetCloseDateHasBeenSet() const { return m_targetCloseDateHasBeenSet; }
    inline void SetTargetCloseDate(const Aws::String& value) { m_targetCloseDateHasBeenSet = true; m_targetCloseDate = value; }
    inline void SetTargetCloseDate(Aws::String&& value) { m_targetCloseDateHasBeenSet = true; m_targetCloseDate = std::move(value); }
    inline void SetTargetCloseDate(const char* value) { m_targetCloseDateHasBeenSet = true; m_targetCloseDate.assign(value); }
    inline AwsOpportunityLifeCycle& WithTargetCloseDate(const Aws::String& value) { SetTargetCloseDate(value); return *this;}
    inline AwsOpportunityLifeCycle& WithTargetCloseDate(Aws::String&& value) { SetTargetCloseDate(std::move(value)); return *this;}
    inline AwsOpportunityLifeCycle& WithTargetCloseDate(const char* value) { SetTargetCloseDate(value); return *this;}
    ///@}
  private:

    AwsClosedLostReason m_closedLostReason;
    bool m_closedLostReasonHasBeenSet = false;

    Aws::String m_nextSteps;
    bool m_nextStepsHasBeenSet = false;

    Aws::Vector<ProfileNextStepsHistory> m_nextStepsHistory;
    bool m_nextStepsHistoryHasBeenSet = false;

    AwsOpportunityStage m_stage;
    bool m_stageHasBeenSet = false;

    Aws::String m_targetCloseDate;
    bool m_targetCloseDateHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
