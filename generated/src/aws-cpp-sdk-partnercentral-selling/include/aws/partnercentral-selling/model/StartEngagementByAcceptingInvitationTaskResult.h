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
    AWS_PARTNERCENTRALSELLING_API StartEngagementByAcceptingInvitationTaskResult();
    AWS_PARTNERCENTRALSELLING_API StartEngagementByAcceptingInvitationTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PARTNERCENTRALSELLING_API StartEngagementByAcceptingInvitationTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns the identifier of the engagement invitation that was accepted and
     * used to create the opportunity.</p>
     */
    inline const Aws::String& GetEngagementInvitationId() const{ return m_engagementInvitationId; }
    inline void SetEngagementInvitationId(const Aws::String& value) { m_engagementInvitationId = value; }
    inline void SetEngagementInvitationId(Aws::String&& value) { m_engagementInvitationId = std::move(value); }
    inline void SetEngagementInvitationId(const char* value) { m_engagementInvitationId.assign(value); }
    inline StartEngagementByAcceptingInvitationTaskResult& WithEngagementInvitationId(const Aws::String& value) { SetEngagementInvitationId(value); return *this;}
    inline StartEngagementByAcceptingInvitationTaskResult& WithEngagementInvitationId(Aws::String&& value) { SetEngagementInvitationId(std::move(value)); return *this;}
    inline StartEngagementByAcceptingInvitationTaskResult& WithEngagementInvitationId(const char* value) { SetEngagementInvitationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the task fails, this field contains a detailed message describing the
     * failure and possible recovery steps.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline void SetMessage(const Aws::String& value) { m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_message.assign(value); }
    inline StartEngagementByAcceptingInvitationTaskResult& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline StartEngagementByAcceptingInvitationTaskResult& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline StartEngagementByAcceptingInvitationTaskResult& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the original opportunity identifier passed in the request. This is
     * the unique identifier for the opportunity.</p>
     */
    inline const Aws::String& GetOpportunityId() const{ return m_opportunityId; }
    inline void SetOpportunityId(const Aws::String& value) { m_opportunityId = value; }
    inline void SetOpportunityId(Aws::String&& value) { m_opportunityId = std::move(value); }
    inline void SetOpportunityId(const char* value) { m_opportunityId.assign(value); }
    inline StartEngagementByAcceptingInvitationTaskResult& WithOpportunityId(const Aws::String& value) { SetOpportunityId(value); return *this;}
    inline StartEngagementByAcceptingInvitationTaskResult& WithOpportunityId(Aws::String&& value) { SetOpportunityId(std::move(value)); return *this;}
    inline StartEngagementByAcceptingInvitationTaskResult& WithOpportunityId(const char* value) { SetOpportunityId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the reason for task failure using an enumerated code.</p>
     */
    inline const ReasonCode& GetReasonCode() const{ return m_reasonCode; }
    inline void SetReasonCode(const ReasonCode& value) { m_reasonCode = value; }
    inline void SetReasonCode(ReasonCode&& value) { m_reasonCode = std::move(value); }
    inline StartEngagementByAcceptingInvitationTaskResult& WithReasonCode(const ReasonCode& value) { SetReasonCode(value); return *this;}
    inline StartEngagementByAcceptingInvitationTaskResult& WithReasonCode(ReasonCode&& value) { SetReasonCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Resource Snapshot Job created as part of this task.</p>
     */
    inline const Aws::String& GetResourceSnapshotJobId() const{ return m_resourceSnapshotJobId; }
    inline void SetResourceSnapshotJobId(const Aws::String& value) { m_resourceSnapshotJobId = value; }
    inline void SetResourceSnapshotJobId(Aws::String&& value) { m_resourceSnapshotJobId = std::move(value); }
    inline void SetResourceSnapshotJobId(const char* value) { m_resourceSnapshotJobId.assign(value); }
    inline StartEngagementByAcceptingInvitationTaskResult& WithResourceSnapshotJobId(const Aws::String& value) { SetResourceSnapshotJobId(value); return *this;}
    inline StartEngagementByAcceptingInvitationTaskResult& WithResourceSnapshotJobId(Aws::String&& value) { SetResourceSnapshotJobId(std::move(value)); return *this;}
    inline StartEngagementByAcceptingInvitationTaskResult& WithResourceSnapshotJobId(const char* value) { SetResourceSnapshotJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp indicating when the task was initiated. The format follows RFC
     * 3339 section 5.6.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTime = std::move(value); }
    inline StartEngagementByAcceptingInvitationTaskResult& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline StartEngagementByAcceptingInvitationTaskResult& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the task, used for tracking and managing
     * the task within AWS.</p>
     */
    inline const Aws::String& GetTaskArn() const{ return m_taskArn; }
    inline void SetTaskArn(const Aws::String& value) { m_taskArn = value; }
    inline void SetTaskArn(Aws::String&& value) { m_taskArn = std::move(value); }
    inline void SetTaskArn(const char* value) { m_taskArn.assign(value); }
    inline StartEngagementByAcceptingInvitationTaskResult& WithTaskArn(const Aws::String& value) { SetTaskArn(value); return *this;}
    inline StartEngagementByAcceptingInvitationTaskResult& WithTaskArn(Aws::String&& value) { SetTaskArn(std::move(value)); return *this;}
    inline StartEngagementByAcceptingInvitationTaskResult& WithTaskArn(const char* value) { SetTaskArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the task, used to track the task’s progress.</p>
     */
    inline const Aws::String& GetTaskId() const{ return m_taskId; }
    inline void SetTaskId(const Aws::String& value) { m_taskId = value; }
    inline void SetTaskId(Aws::String&& value) { m_taskId = std::move(value); }
    inline void SetTaskId(const char* value) { m_taskId.assign(value); }
    inline StartEngagementByAcceptingInvitationTaskResult& WithTaskId(const Aws::String& value) { SetTaskId(value); return *this;}
    inline StartEngagementByAcceptingInvitationTaskResult& WithTaskId(Aws::String&& value) { SetTaskId(std::move(value)); return *this;}
    inline StartEngagementByAcceptingInvitationTaskResult& WithTaskId(const char* value) { SetTaskId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the current status of the task.</p>
     */
    inline const TaskStatus& GetTaskStatus() const{ return m_taskStatus; }
    inline void SetTaskStatus(const TaskStatus& value) { m_taskStatus = value; }
    inline void SetTaskStatus(TaskStatus&& value) { m_taskStatus = std::move(value); }
    inline StartEngagementByAcceptingInvitationTaskResult& WithTaskStatus(const TaskStatus& value) { SetTaskStatus(value); return *this;}
    inline StartEngagementByAcceptingInvitationTaskResult& WithTaskStatus(TaskStatus&& value) { SetTaskStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartEngagementByAcceptingInvitationTaskResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartEngagementByAcceptingInvitationTaskResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartEngagementByAcceptingInvitationTaskResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_engagementInvitationId;

    Aws::String m_message;

    Aws::String m_opportunityId;

    ReasonCode m_reasonCode;

    Aws::String m_resourceSnapshotJobId;

    Aws::Utils::DateTime m_startTime;

    Aws::String m_taskArn;

    Aws::String m_taskId;

    TaskStatus m_taskStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
