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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace PartnerCentralSelling
{
namespace Model
{
  class StartEngagementByAcceptingInvitationTaskResult
  {
  public:
    AWS_PARTNERCENTRALSELLING_API StartEngagementByAcceptingInvitationTaskResult() = default;
    AWS_PARTNERCENTRALSELLING_API StartEngagementByAcceptingInvitationTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PARTNERCENTRALSELLING_API StartEngagementByAcceptingInvitationTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the task, used to track the task’s progress.</p>
     */
    inline const Aws::String& GetTaskId() const { return m_taskId; }
    template<typename TaskIdT = Aws::String>
    void SetTaskId(TaskIdT&& value) { m_taskIdHasBeenSet = true; m_taskId = std::forward<TaskIdT>(value); }
    template<typename TaskIdT = Aws::String>
    StartEngagementByAcceptingInvitationTaskResult& WithTaskId(TaskIdT&& value) { SetTaskId(std::forward<TaskIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the task, used for tracking and managing
     * the task within AWS.</p>
     */
    inline const Aws::String& GetTaskArn() const { return m_taskArn; }
    template<typename TaskArnT = Aws::String>
    void SetTaskArn(TaskArnT&& value) { m_taskArnHasBeenSet = true; m_taskArn = std::forward<TaskArnT>(value); }
    template<typename TaskArnT = Aws::String>
    StartEngagementByAcceptingInvitationTaskResult& WithTaskArn(TaskArnT&& value) { SetTaskArn(std::forward<TaskArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp indicating when the task was initiated. The format follows RFC
     * 3339 section 5.6.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    StartEngagementByAcceptingInvitationTaskResult& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the current status of the task.</p>
     */
    inline TaskStatus GetTaskStatus() const { return m_taskStatus; }
    inline void SetTaskStatus(TaskStatus value) { m_taskStatusHasBeenSet = true; m_taskStatus = value; }
    inline StartEngagementByAcceptingInvitationTaskResult& WithTaskStatus(TaskStatus value) { SetTaskStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the task fails, this field contains a detailed message describing the
     * failure and possible recovery steps.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    StartEngagementByAcceptingInvitationTaskResult& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the reason for task failure using an enumerated code.</p>
     */
    inline ReasonCode GetReasonCode() const { return m_reasonCode; }
    inline void SetReasonCode(ReasonCode value) { m_reasonCodeHasBeenSet = true; m_reasonCode = value; }
    inline StartEngagementByAcceptingInvitationTaskResult& WithReasonCode(ReasonCode value) { SetReasonCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the original opportunity identifier passed in the request. This is
     * the unique identifier for the opportunity.</p>
     */
    inline const Aws::String& GetOpportunityId() const { return m_opportunityId; }
    template<typename OpportunityIdT = Aws::String>
    void SetOpportunityId(OpportunityIdT&& value) { m_opportunityIdHasBeenSet = true; m_opportunityId = std::forward<OpportunityIdT>(value); }
    template<typename OpportunityIdT = Aws::String>
    StartEngagementByAcceptingInvitationTaskResult& WithOpportunityId(OpportunityIdT&& value) { SetOpportunityId(std::forward<OpportunityIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Resource Snapshot Job created as part of this task.</p>
     */
    inline const Aws::String& GetResourceSnapshotJobId() const { return m_resourceSnapshotJobId; }
    template<typename ResourceSnapshotJobIdT = Aws::String>
    void SetResourceSnapshotJobId(ResourceSnapshotJobIdT&& value) { m_resourceSnapshotJobIdHasBeenSet = true; m_resourceSnapshotJobId = std::forward<ResourceSnapshotJobIdT>(value); }
    template<typename ResourceSnapshotJobIdT = Aws::String>
    StartEngagementByAcceptingInvitationTaskResult& WithResourceSnapshotJobId(ResourceSnapshotJobIdT&& value) { SetResourceSnapshotJobId(std::forward<ResourceSnapshotJobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the identifier of the engagement invitation that was accepted and
     * used to create the opportunity.</p>
     */
    inline const Aws::String& GetEngagementInvitationId() const { return m_engagementInvitationId; }
    template<typename EngagementInvitationIdT = Aws::String>
    void SetEngagementInvitationId(EngagementInvitationIdT&& value) { m_engagementInvitationIdHasBeenSet = true; m_engagementInvitationId = std::forward<EngagementInvitationIdT>(value); }
    template<typename EngagementInvitationIdT = Aws::String>
    StartEngagementByAcceptingInvitationTaskResult& WithEngagementInvitationId(EngagementInvitationIdT&& value) { SetEngagementInvitationId(std::forward<EngagementInvitationIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartEngagementByAcceptingInvitationTaskResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::String m_engagementInvitationId;
    bool m_engagementInvitationIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
