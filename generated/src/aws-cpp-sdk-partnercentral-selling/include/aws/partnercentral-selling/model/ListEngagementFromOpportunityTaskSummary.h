/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/model/ReasonCode.h>
#include <aws/core/utils/DateTime.h>
#include <aws/partnercentral-selling/model/TaskStatus.h>
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
    AWS_PARTNERCENTRALSELLING_API ListEngagementFromOpportunityTaskSummary();
    AWS_PARTNERCENTRALSELLING_API ListEngagementFromOpportunityTaskSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API ListEngagementFromOpportunityTaskSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The unique identifier of the engagement created as a result of the task.
     * This field is populated when the task is completed successfully. </p>
     */
    inline const Aws::String& GetEngagementId() const{ return m_engagementId; }
    inline bool EngagementIdHasBeenSet() const { return m_engagementIdHasBeenSet; }
    inline void SetEngagementId(const Aws::String& value) { m_engagementIdHasBeenSet = true; m_engagementId = value; }
    inline void SetEngagementId(Aws::String&& value) { m_engagementIdHasBeenSet = true; m_engagementId = std::move(value); }
    inline void SetEngagementId(const char* value) { m_engagementIdHasBeenSet = true; m_engagementId.assign(value); }
    inline ListEngagementFromOpportunityTaskSummary& WithEngagementId(const Aws::String& value) { SetEngagementId(value); return *this;}
    inline ListEngagementFromOpportunityTaskSummary& WithEngagementId(Aws::String&& value) { SetEngagementId(std::move(value)); return *this;}
    inline ListEngagementFromOpportunityTaskSummary& WithEngagementId(const char* value) { SetEngagementId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the Engagement Invitation.</p>
     */
    inline const Aws::String& GetEngagementInvitationId() const{ return m_engagementInvitationId; }
    inline bool EngagementInvitationIdHasBeenSet() const { return m_engagementInvitationIdHasBeenSet; }
    inline void SetEngagementInvitationId(const Aws::String& value) { m_engagementInvitationIdHasBeenSet = true; m_engagementInvitationId = value; }
    inline void SetEngagementInvitationId(Aws::String&& value) { m_engagementInvitationIdHasBeenSet = true; m_engagementInvitationId = std::move(value); }
    inline void SetEngagementInvitationId(const char* value) { m_engagementInvitationIdHasBeenSet = true; m_engagementInvitationId.assign(value); }
    inline ListEngagementFromOpportunityTaskSummary& WithEngagementInvitationId(const Aws::String& value) { SetEngagementInvitationId(value); return *this;}
    inline ListEngagementFromOpportunityTaskSummary& WithEngagementInvitationId(Aws::String&& value) { SetEngagementInvitationId(std::move(value)); return *this;}
    inline ListEngagementFromOpportunityTaskSummary& WithEngagementInvitationId(const char* value) { SetEngagementInvitationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A detailed message providing additional information about the task,
     * especially useful in case of failures. This field may contain error details or
     * other relevant information about the task's execution </p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline ListEngagementFromOpportunityTaskSummary& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline ListEngagementFromOpportunityTaskSummary& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline ListEngagementFromOpportunityTaskSummary& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique identifier of the original Opportunity from which the Engagement
     * is being created. This field helps track the source of the Engagement creation
     * task. </p>
     */
    inline const Aws::String& GetOpportunityId() const{ return m_opportunityId; }
    inline bool OpportunityIdHasBeenSet() const { return m_opportunityIdHasBeenSet; }
    inline void SetOpportunityId(const Aws::String& value) { m_opportunityIdHasBeenSet = true; m_opportunityId = value; }
    inline void SetOpportunityId(Aws::String&& value) { m_opportunityIdHasBeenSet = true; m_opportunityId = std::move(value); }
    inline void SetOpportunityId(const char* value) { m_opportunityIdHasBeenSet = true; m_opportunityId.assign(value); }
    inline ListEngagementFromOpportunityTaskSummary& WithOpportunityId(const Aws::String& value) { SetOpportunityId(value); return *this;}
    inline ListEngagementFromOpportunityTaskSummary& WithOpportunityId(Aws::String&& value) { SetOpportunityId(std::move(value)); return *this;}
    inline ListEngagementFromOpportunityTaskSummary& WithOpportunityId(const char* value) { SetOpportunityId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A code indicating the specific reason for a task failure. This field is
     * populated when the task status is FAILED and provides a categorized reason for
     * the failure. </p>
     */
    inline const ReasonCode& GetReasonCode() const{ return m_reasonCode; }
    inline bool ReasonCodeHasBeenSet() const { return m_reasonCodeHasBeenSet; }
    inline void SetReasonCode(const ReasonCode& value) { m_reasonCodeHasBeenSet = true; m_reasonCode = value; }
    inline void SetReasonCode(ReasonCode&& value) { m_reasonCodeHasBeenSet = true; m_reasonCode = std::move(value); }
    inline ListEngagementFromOpportunityTaskSummary& WithReasonCode(const ReasonCode& value) { SetReasonCode(value); return *this;}
    inline ListEngagementFromOpportunityTaskSummary& WithReasonCode(ReasonCode&& value) { SetReasonCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The identifier of the resource snapshot job associated with this task, if a
     * snapshot was created as part of the Engagement creation process. </p>
     */
    inline const Aws::String& GetResourceSnapshotJobId() const{ return m_resourceSnapshotJobId; }
    inline bool ResourceSnapshotJobIdHasBeenSet() const { return m_resourceSnapshotJobIdHasBeenSet; }
    inline void SetResourceSnapshotJobId(const Aws::String& value) { m_resourceSnapshotJobIdHasBeenSet = true; m_resourceSnapshotJobId = value; }
    inline void SetResourceSnapshotJobId(Aws::String&& value) { m_resourceSnapshotJobIdHasBeenSet = true; m_resourceSnapshotJobId = std::move(value); }
    inline void SetResourceSnapshotJobId(const char* value) { m_resourceSnapshotJobIdHasBeenSet = true; m_resourceSnapshotJobId.assign(value); }
    inline ListEngagementFromOpportunityTaskSummary& WithResourceSnapshotJobId(const Aws::String& value) { SetResourceSnapshotJobId(value); return *this;}
    inline ListEngagementFromOpportunityTaskSummary& WithResourceSnapshotJobId(Aws::String&& value) { SetResourceSnapshotJobId(std::move(value)); return *this;}
    inline ListEngagementFromOpportunityTaskSummary& WithResourceSnapshotJobId(const char* value) { SetResourceSnapshotJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp indicating when the task was initiated, in RFC 3339 5.6
     * date-time format. </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline ListEngagementFromOpportunityTaskSummary& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline ListEngagementFromOpportunityTaskSummary& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) uniquely identifying this task within AWS.
     * This ARN can be used for referencing the task in other AWS services or APIs.
     * </p>
     */
    inline const Aws::String& GetTaskArn() const{ return m_taskArn; }
    inline bool TaskArnHasBeenSet() const { return m_taskArnHasBeenSet; }
    inline void SetTaskArn(const Aws::String& value) { m_taskArnHasBeenSet = true; m_taskArn = value; }
    inline void SetTaskArn(Aws::String&& value) { m_taskArnHasBeenSet = true; m_taskArn = std::move(value); }
    inline void SetTaskArn(const char* value) { m_taskArnHasBeenSet = true; m_taskArn.assign(value); }
    inline ListEngagementFromOpportunityTaskSummary& WithTaskArn(const Aws::String& value) { SetTaskArn(value); return *this;}
    inline ListEngagementFromOpportunityTaskSummary& WithTaskArn(Aws::String&& value) { SetTaskArn(std::move(value)); return *this;}
    inline ListEngagementFromOpportunityTaskSummary& WithTaskArn(const char* value) { SetTaskArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A unique identifier for a specific task. </p>
     */
    inline const Aws::String& GetTaskId() const{ return m_taskId; }
    inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }
    inline void SetTaskId(const Aws::String& value) { m_taskIdHasBeenSet = true; m_taskId = value; }
    inline void SetTaskId(Aws::String&& value) { m_taskIdHasBeenSet = true; m_taskId = std::move(value); }
    inline void SetTaskId(const char* value) { m_taskIdHasBeenSet = true; m_taskId.assign(value); }
    inline ListEngagementFromOpportunityTaskSummary& WithTaskId(const Aws::String& value) { SetTaskId(value); return *this;}
    inline ListEngagementFromOpportunityTaskSummary& WithTaskId(Aws::String&& value) { SetTaskId(std::move(value)); return *this;}
    inline ListEngagementFromOpportunityTaskSummary& WithTaskId(const char* value) { SetTaskId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The current status of the task. </p>
     */
    inline const TaskStatus& GetTaskStatus() const{ return m_taskStatus; }
    inline bool TaskStatusHasBeenSet() const { return m_taskStatusHasBeenSet; }
    inline void SetTaskStatus(const TaskStatus& value) { m_taskStatusHasBeenSet = true; m_taskStatus = value; }
    inline void SetTaskStatus(TaskStatus&& value) { m_taskStatusHasBeenSet = true; m_taskStatus = std::move(value); }
    inline ListEngagementFromOpportunityTaskSummary& WithTaskStatus(const TaskStatus& value) { SetTaskStatus(value); return *this;}
    inline ListEngagementFromOpportunityTaskSummary& WithTaskStatus(TaskStatus&& value) { SetTaskStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_engagementId;
    bool m_engagementIdHasBeenSet = false;

    Aws::String m_engagementInvitationId;
    bool m_engagementInvitationIdHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_opportunityId;
    bool m_opportunityIdHasBeenSet = false;

    ReasonCode m_reasonCode;
    bool m_reasonCodeHasBeenSet = false;

    Aws::String m_resourceSnapshotJobId;
    bool m_resourceSnapshotJobIdHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::String m_taskArn;
    bool m_taskArnHasBeenSet = false;

    Aws::String m_taskId;
    bool m_taskIdHasBeenSet = false;

    TaskStatus m_taskStatus;
    bool m_taskStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
