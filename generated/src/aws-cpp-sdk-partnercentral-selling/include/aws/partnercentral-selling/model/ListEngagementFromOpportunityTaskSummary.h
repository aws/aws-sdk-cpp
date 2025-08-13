/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/partnercentral-selling/model/TaskStatus.h>
#include <aws/partnercentral-selling/model/ReasonCode.h>
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
   * <p> Provides a summary of a task related to creating an engagement from an
   * opportunity. This structure contains key information about the task's status,
   * associated identifiers, and any failure details. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/ListEngagementFromOpportunityTaskSummary">AWS
   * API Reference</a></p>
   */
  class ListEngagementFromOpportunityTaskSummary
  {
  public:
    AWS_PARTNERCENTRALSELLING_API ListEngagementFromOpportunityTaskSummary() = default;
    AWS_PARTNERCENTRALSELLING_API ListEngagementFromOpportunityTaskSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API ListEngagementFromOpportunityTaskSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> A unique identifier for a specific task. </p>
     */
    inline const Aws::String& GetTaskId() const { return m_taskId; }
    inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }
    template<typename TaskIdT = Aws::String>
    void SetTaskId(TaskIdT&& value) { m_taskIdHasBeenSet = true; m_taskId = std::forward<TaskIdT>(value); }
    template<typename TaskIdT = Aws::String>
    ListEngagementFromOpportunityTaskSummary& WithTaskId(TaskIdT&& value) { SetTaskId(std::forward<TaskIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) uniquely identifying this task within AWS.
     * This ARN can be used for referencing the task in other AWS services or APIs.
     * </p>
     */
    inline const Aws::String& GetTaskArn() const { return m_taskArn; }
    inline bool TaskArnHasBeenSet() const { return m_taskArnHasBeenSet; }
    template<typename TaskArnT = Aws::String>
    void SetTaskArn(TaskArnT&& value) { m_taskArnHasBeenSet = true; m_taskArn = std::forward<TaskArnT>(value); }
    template<typename TaskArnT = Aws::String>
    ListEngagementFromOpportunityTaskSummary& WithTaskArn(TaskArnT&& value) { SetTaskArn(std::forward<TaskArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp indicating when the task was initiated, in RFC 3339 5.6
     * date-time format. </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    ListEngagementFromOpportunityTaskSummary& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The current status of the task. </p>
     */
    inline TaskStatus GetTaskStatus() const { return m_taskStatus; }
    inline bool TaskStatusHasBeenSet() const { return m_taskStatusHasBeenSet; }
    inline void SetTaskStatus(TaskStatus value) { m_taskStatusHasBeenSet = true; m_taskStatus = value; }
    inline ListEngagementFromOpportunityTaskSummary& WithTaskStatus(TaskStatus value) { SetTaskStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A detailed message providing additional information about the task,
     * especially useful in case of failures. This field may contain error details or
     * other relevant information about the task's execution </p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    ListEngagementFromOpportunityTaskSummary& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A code indicating the specific reason for a task failure. This field is
     * populated when the task status is FAILED and provides a categorized reason for
     * the failure. </p>
     */
    inline ReasonCode GetReasonCode() const { return m_reasonCode; }
    inline bool ReasonCodeHasBeenSet() const { return m_reasonCodeHasBeenSet; }
    inline void SetReasonCode(ReasonCode value) { m_reasonCodeHasBeenSet = true; m_reasonCode = value; }
    inline ListEngagementFromOpportunityTaskSummary& WithReasonCode(ReasonCode value) { SetReasonCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique identifier of the original Opportunity from which the Engagement
     * is being created. This field helps track the source of the Engagement creation
     * task. </p>
     */
    inline const Aws::String& GetOpportunityId() const { return m_opportunityId; }
    inline bool OpportunityIdHasBeenSet() const { return m_opportunityIdHasBeenSet; }
    template<typename OpportunityIdT = Aws::String>
    void SetOpportunityId(OpportunityIdT&& value) { m_opportunityIdHasBeenSet = true; m_opportunityId = std::forward<OpportunityIdT>(value); }
    template<typename OpportunityIdT = Aws::String>
    ListEngagementFromOpportunityTaskSummary& WithOpportunityId(OpportunityIdT&& value) { SetOpportunityId(std::forward<OpportunityIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The identifier of the resource snapshot job associated with this task, if a
     * snapshot was created as part of the Engagement creation process. </p>
     */
    inline const Aws::String& GetResourceSnapshotJobId() const { return m_resourceSnapshotJobId; }
    inline bool ResourceSnapshotJobIdHasBeenSet() const { return m_resourceSnapshotJobIdHasBeenSet; }
    template<typename ResourceSnapshotJobIdT = Aws::String>
    void SetResourceSnapshotJobId(ResourceSnapshotJobIdT&& value) { m_resourceSnapshotJobIdHasBeenSet = true; m_resourceSnapshotJobId = std::forward<ResourceSnapshotJobIdT>(value); }
    template<typename ResourceSnapshotJobIdT = Aws::String>
    ListEngagementFromOpportunityTaskSummary& WithResourceSnapshotJobId(ResourceSnapshotJobIdT&& value) { SetResourceSnapshotJobId(std::forward<ResourceSnapshotJobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique identifier of the engagement created as a result of the task.
     * This field is populated when the task is completed successfully. </p>
     */
    inline const Aws::String& GetEngagementId() const { return m_engagementId; }
    inline bool EngagementIdHasBeenSet() const { return m_engagementIdHasBeenSet; }
    template<typename EngagementIdT = Aws::String>
    void SetEngagementId(EngagementIdT&& value) { m_engagementIdHasBeenSet = true; m_engagementId = std::forward<EngagementIdT>(value); }
    template<typename EngagementIdT = Aws::String>
    ListEngagementFromOpportunityTaskSummary& WithEngagementId(EngagementIdT&& value) { SetEngagementId(std::forward<EngagementIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the Engagement Invitation.</p>
     */
    inline const Aws::String& GetEngagementInvitationId() const { return m_engagementInvitationId; }
    inline bool EngagementInvitationIdHasBeenSet() const { return m_engagementInvitationIdHasBeenSet; }
    template<typename EngagementInvitationIdT = Aws::String>
    void SetEngagementInvitationId(EngagementInvitationIdT&& value) { m_engagementInvitationIdHasBeenSet = true; m_engagementInvitationId = std::forward<EngagementInvitationIdT>(value); }
    template<typename EngagementInvitationIdT = Aws::String>
    ListEngagementFromOpportunityTaskSummary& WithEngagementInvitationId(EngagementInvitationIdT&& value) { SetEngagementInvitationId(std::forward<EngagementInvitationIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_taskId;
    bool m_taskIdHasBeenSet = false;

    Aws::String m_taskArn;
    bool m_taskArnHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    TaskStatus m_taskStatus{TaskStatus::NOT_SET};
    bool m_taskStatusHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    ReasonCode m_reasonCode{ReasonCode::NOT_SET};
    bool m_reasonCodeHasBeenSet = false;

    Aws::String m_opportunityId;
    bool m_opportunityIdHasBeenSet = false;

    Aws::String m_resourceSnapshotJobId;
    bool m_resourceSnapshotJobIdHasBeenSet = false;

    Aws::String m_engagementId;
    bool m_engagementIdHasBeenSet = false;

    Aws::String m_engagementInvitationId;
    bool m_engagementInvitationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
