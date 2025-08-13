/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/model/AwsClosedLostReason.h>
#include <aws/partnercentral-selling/model/AwsOpportunityStage.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_PARTNERCENTRALSELLING_API AwsOpportunityLifeCycle() = default;
    AWS_PARTNERCENTRALSELLING_API AwsOpportunityLifeCycle(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API AwsOpportunityLifeCycle& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates the expected date by which the opportunity is projected to close.
     * This field helps in planning resources and timelines for both the partner and
     * AWS.</p>
     */
    inline const Aws::String& GetTargetCloseDate() const { return m_targetCloseDate; }
    inline bool TargetCloseDateHasBeenSet() const { return m_targetCloseDateHasBeenSet; }
    template<typename TargetCloseDateT = Aws::String>
    void SetTargetCloseDate(TargetCloseDateT&& value) { m_targetCloseDateHasBeenSet = true; m_targetCloseDate = std::forward<TargetCloseDateT>(value); }
    template<typename TargetCloseDateT = Aws::String>
    AwsOpportunityLifeCycle& WithTargetCloseDate(TargetCloseDateT&& value) { SetTargetCloseDate(std::forward<TargetCloseDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the reason why an opportunity was marked as <code>Closed
     * Lost</code>. This helps in understanding the context behind the lost opportunity
     * and aids in refining future strategies.</p>
     */
    inline AwsClosedLostReason GetClosedLostReason() const { return m_closedLostReason; }
    inline bool ClosedLostReasonHasBeenSet() const { return m_closedLostReasonHasBeenSet; }
    inline void SetClosedLostReason(AwsClosedLostReason value) { m_closedLostReasonHasBeenSet = true; m_closedLostReason = value; }
    inline AwsOpportunityLifeCycle& WithClosedLostReason(AwsClosedLostReason value) { SetClosedLostReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the current stage of the opportunity in its lifecycle, such as
     * <code>Qualification</code>, <code>Validation</code>, or <code>Closed Won</code>.
     * This helps in understanding the opportunity's progress.</p>
     */
    inline AwsOpportunityStage GetStage() const { return m_stage; }
    inline bool StageHasBeenSet() const { return m_stageHasBeenSet; }
    inline void SetStage(AwsOpportunityStage value) { m_stageHasBeenSet = true; m_stage = value; }
    inline AwsOpportunityLifeCycle& WithStage(AwsOpportunityStage value) { SetStage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the immediate next steps required to progress the opportunity.
     * These steps are based on AWS guidance and the current stage of the
     * opportunity.</p>
     */
    inline const Aws::String& GetNextSteps() const { return m_nextSteps; }
    inline bool NextStepsHasBeenSet() const { return m_nextStepsHasBeenSet; }
    template<typename NextStepsT = Aws::String>
    void SetNextSteps(NextStepsT&& value) { m_nextStepsHasBeenSet = true; m_nextSteps = std::forward<NextStepsT>(value); }
    template<typename NextStepsT = Aws::String>
    AwsOpportunityLifeCycle& WithNextSteps(NextStepsT&& value) { SetNextSteps(std::forward<NextStepsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides a historical log of previous next steps that were taken to move the
     * opportunity forward. This helps in tracking the decision-making process and
     * identifying any delays or obstacles encountered.</p>
     */
    inline const Aws::Vector<ProfileNextStepsHistory>& GetNextStepsHistory() const { return m_nextStepsHistory; }
    inline bool NextStepsHistoryHasBeenSet() const { return m_nextStepsHistoryHasBeenSet; }
    template<typename NextStepsHistoryT = Aws::Vector<ProfileNextStepsHistory>>
    void SetNextStepsHistory(NextStepsHistoryT&& value) { m_nextStepsHistoryHasBeenSet = true; m_nextStepsHistory = std::forward<NextStepsHistoryT>(value); }
    template<typename NextStepsHistoryT = Aws::Vector<ProfileNextStepsHistory>>
    AwsOpportunityLifeCycle& WithNextStepsHistory(NextStepsHistoryT&& value) { SetNextStepsHistory(std::forward<NextStepsHistoryT>(value)); return *this;}
    template<typename NextStepsHistoryT = ProfileNextStepsHistory>
    AwsOpportunityLifeCycle& AddNextStepsHistory(NextStepsHistoryT&& value) { m_nextStepsHistoryHasBeenSet = true; m_nextStepsHistory.emplace_back(std::forward<NextStepsHistoryT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_targetCloseDate;
    bool m_targetCloseDateHasBeenSet = false;

    AwsClosedLostReason m_closedLostReason{AwsClosedLostReason::NOT_SET};
    bool m_closedLostReasonHasBeenSet = false;

    AwsOpportunityStage m_stage{AwsOpportunityStage::NOT_SET};
    bool m_stageHasBeenSet = false;

    Aws::String m_nextSteps;
    bool m_nextStepsHasBeenSet = false;

    Aws::Vector<ProfileNextStepsHistory> m_nextStepsHistory;
    bool m_nextStepsHistoryHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
