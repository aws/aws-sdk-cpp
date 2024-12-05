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
   * <p> Specifies a subset of fields associated with tasks related to accepting an
   * engagement invitation. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/ListEngagementByAcceptingInvitationTaskSummary">AWS
   * API Reference</a></p>
   */
  class ListEngagementByAcceptingInvitationTaskSummary
  {
  public:
    AWS_PARTNERCENTRALSELLING_API ListEngagementByAcceptingInvitationTaskSummary();
    AWS_PARTNERCENTRALSELLING_API ListEngagementByAcceptingInvitationTaskSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API ListEngagementByAcceptingInvitationTaskSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The unique identifier of the engagement invitation that was accepted. </p>
     */
    inline const Aws::String& GetEngagementInvitationId() const{ return m_engagementInvitationId; }
    inline bool EngagementInvitationIdHasBeenSet() const { return m_engagementInvitationIdHasBeenSet; }
    inline void SetEngagementInvitationId(const Aws::String& value) { m_engagementInvitationIdHasBeenSet = true; m_engagementInvitationId = value; }
    inline void SetEngagementInvitationId(Aws::String&& value) { m_engagementInvitationIdHasBeenSet = true; m_engagementInvitationId = std::move(value); }
    inline void SetEngagementInvitationId(const char* value) { m_engagementInvitationIdHasBeenSet = true; m_engagementInvitationId.assign(value); }
    inline ListEngagementByAcceptingInvitationTaskSummary& WithEngagementInvitationId(const Aws::String& value) { SetEngagementInvitationId(value); return *this;}
    inline ListEngagementByAcceptingInvitationTaskSummary& WithEngagementInvitationId(Aws::String&& value) { SetEngagementInvitationId(std::move(value)); return *this;}
    inline ListEngagementByAcceptingInvitationTaskSummary& WithEngagementInvitationId(const char* value) { SetEngagementInvitationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Detailed message describing the failure and possible recovery steps. </p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline ListEngagementByAcceptingInvitationTaskSummary& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline ListEngagementByAcceptingInvitationTaskSummary& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline ListEngagementByAcceptingInvitationTaskSummary& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Unique identifier of opportunity that was created. </p>
     */
    inline const Aws::String& GetOpportunityId() const{ return m_opportunityId; }
    inline bool OpportunityIdHasBeenSet() const { return m_opportunityIdHasBeenSet; }
    inline void SetOpportunityId(const Aws::String& value) { m_opportunityIdHasBeenSet = true; m_opportunityId = value; }
    inline void SetOpportunityId(Aws::String&& value) { m_opportunityIdHasBeenSet = true; m_opportunityId = std::move(value); }
    inline void SetOpportunityId(const char* value) { m_opportunityIdHasBeenSet = true; m_opportunityId.assign(value); }
    inline ListEngagementByAcceptingInvitationTaskSummary& WithOpportunityId(const Aws::String& value) { SetOpportunityId(value); return *this;}
    inline ListEngagementByAcceptingInvitationTaskSummary& WithOpportunityId(Aws::String&& value) { SetOpportunityId(std::move(value)); return *this;}
    inline ListEngagementByAcceptingInvitationTaskSummary& WithOpportunityId(const char* value) { SetOpportunityId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A code pointing to the specific reason for the failure. </p>
     */
    inline const ReasonCode& GetReasonCode() const{ return m_reasonCode; }
    inline bool ReasonCodeHasBeenSet() const { return m_reasonCodeHasBeenSet; }
    inline void SetReasonCode(const ReasonCode& value) { m_reasonCodeHasBeenSet = true; m_reasonCode = value; }
    inline void SetReasonCode(ReasonCode&& value) { m_reasonCodeHasBeenSet = true; m_reasonCode = std::move(value); }
    inline ListEngagementByAcceptingInvitationTaskSummary& WithReasonCode(const ReasonCode& value) { SetReasonCode(value); return *this;}
    inline ListEngagementByAcceptingInvitationTaskSummary& WithReasonCode(ReasonCode&& value) { SetReasonCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Unique identifier of the resource snapshot job that was created. </p>
     */
    inline const Aws::String& GetResourceSnapshotJobId() const{ return m_resourceSnapshotJobId; }
    inline bool ResourceSnapshotJobIdHasBeenSet() const { return m_resourceSnapshotJobIdHasBeenSet; }
    inline void SetResourceSnapshotJobId(const Aws::String& value) { m_resourceSnapshotJobIdHasBeenSet = true; m_resourceSnapshotJobId = value; }
    inline void SetResourceSnapshotJobId(Aws::String&& value) { m_resourceSnapshotJobIdHasBeenSet = true; m_resourceSnapshotJobId = std::move(value); }
    inline void SetResourceSnapshotJobId(const char* value) { m_resourceSnapshotJobIdHasBeenSet = true; m_resourceSnapshotJobId.assign(value); }
    inline ListEngagementByAcceptingInvitationTaskSummary& WithResourceSnapshotJobId(const Aws::String& value) { SetResourceSnapshotJobId(value); return *this;}
    inline ListEngagementByAcceptingInvitationTaskSummary& WithResourceSnapshotJobId(Aws::String&& value) { SetResourceSnapshotJobId(std::move(value)); return *this;}
    inline ListEngagementByAcceptingInvitationTaskSummary& WithResourceSnapshotJobId(const char* value) { SetResourceSnapshotJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Task start timestamp. </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline ListEngagementByAcceptingInvitationTaskSummary& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline ListEngagementByAcceptingInvitationTaskSummary& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) that uniquely identifies the task. </p>
     */
    inline const Aws::String& GetTaskArn() const{ return m_taskArn; }
    inline bool TaskArnHasBeenSet() const { return m_taskArnHasBeenSet; }
    inline void SetTaskArn(const Aws::String& value) { m_taskArnHasBeenSet = true; m_taskArn = value; }
    inline void SetTaskArn(Aws::String&& value) { m_taskArnHasBeenSet = true; m_taskArn = std::move(value); }
    inline void SetTaskArn(const char* value) { m_taskArnHasBeenSet = true; m_taskArn.assign(value); }
    inline ListEngagementByAcceptingInvitationTaskSummary& WithTaskArn(const Aws::String& value) { SetTaskArn(value); return *this;}
    inline ListEngagementByAcceptingInvitationTaskSummary& WithTaskArn(Aws::String&& value) { SetTaskArn(std::move(value)); return *this;}
    inline ListEngagementByAcceptingInvitationTaskSummary& WithTaskArn(const char* value) { SetTaskArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Unique identifier of the task. </p>
     */
    inline const Aws::String& GetTaskId() const{ return m_taskId; }
    inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }
    inline void SetTaskId(const Aws::String& value) { m_taskIdHasBeenSet = true; m_taskId = value; }
    inline void SetTaskId(Aws::String&& value) { m_taskIdHasBeenSet = true; m_taskId = std::move(value); }
    inline void SetTaskId(const char* value) { m_taskIdHasBeenSet = true; m_taskId.assign(value); }
    inline ListEngagementByAcceptingInvitationTaskSummary& WithTaskId(const Aws::String& value) { SetTaskId(value); return *this;}
    inline ListEngagementByAcceptingInvitationTaskSummary& WithTaskId(Aws::String&& value) { SetTaskId(std::move(value)); return *this;}
    inline ListEngagementByAcceptingInvitationTaskSummary& WithTaskId(const char* value) { SetTaskId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Status of the task. </p>
     */
    inline const TaskStatus& GetTaskStatus() const{ return m_taskStatus; }
    inline bool TaskStatusHasBeenSet() const { return m_taskStatusHasBeenSet; }
    inline void SetTaskStatus(const TaskStatus& value) { m_taskStatusHasBeenSet = true; m_taskStatus = value; }
    inline void SetTaskStatus(TaskStatus&& value) { m_taskStatusHasBeenSet = true; m_taskStatus = std::move(value); }
    inline ListEngagementByAcceptingInvitationTaskSummary& WithTaskStatus(const TaskStatus& value) { SetTaskStatus(value); return *this;}
    inline ListEngagementByAcceptingInvitationTaskSummary& WithTaskStatus(TaskStatus&& value) { SetTaskStatus(std::move(value)); return *this;}
    ///@}
  private:

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
