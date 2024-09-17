/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mturk-requester/model/AssignmentStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace MTurk
{
namespace Model
{

  /**
   * <p> The Assignment data structure represents a single assignment of a HIT to a
   * Worker. The assignment tracks the Worker's efforts to complete the HIT, and
   * contains the results for later retrieval. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/Assignment">AWS
   * API Reference</a></p>
   */
  class Assignment
  {
  public:
    AWS_MTURK_API Assignment();
    AWS_MTURK_API Assignment(Aws::Utils::Json::JsonView jsonValue);
    AWS_MTURK_API Assignment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MTURK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> A unique identifier for the assignment.</p>
     */
    inline const Aws::String& GetAssignmentId() const{ return m_assignmentId; }
    inline bool AssignmentIdHasBeenSet() const { return m_assignmentIdHasBeenSet; }
    inline void SetAssignmentId(const Aws::String& value) { m_assignmentIdHasBeenSet = true; m_assignmentId = value; }
    inline void SetAssignmentId(Aws::String&& value) { m_assignmentIdHasBeenSet = true; m_assignmentId = std::move(value); }
    inline void SetAssignmentId(const char* value) { m_assignmentIdHasBeenSet = true; m_assignmentId.assign(value); }
    inline Assignment& WithAssignmentId(const Aws::String& value) { SetAssignmentId(value); return *this;}
    inline Assignment& WithAssignmentId(Aws::String&& value) { SetAssignmentId(std::move(value)); return *this;}
    inline Assignment& WithAssignmentId(const char* value) { SetAssignmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the Worker who accepted the HIT.</p>
     */
    inline const Aws::String& GetWorkerId() const{ return m_workerId; }
    inline bool WorkerIdHasBeenSet() const { return m_workerIdHasBeenSet; }
    inline void SetWorkerId(const Aws::String& value) { m_workerIdHasBeenSet = true; m_workerId = value; }
    inline void SetWorkerId(Aws::String&& value) { m_workerIdHasBeenSet = true; m_workerId = std::move(value); }
    inline void SetWorkerId(const char* value) { m_workerIdHasBeenSet = true; m_workerId.assign(value); }
    inline Assignment& WithWorkerId(const Aws::String& value) { SetWorkerId(value); return *this;}
    inline Assignment& WithWorkerId(Aws::String&& value) { SetWorkerId(std::move(value)); return *this;}
    inline Assignment& WithWorkerId(const char* value) { SetWorkerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the HIT.</p>
     */
    inline const Aws::String& GetHITId() const{ return m_hITId; }
    inline bool HITIdHasBeenSet() const { return m_hITIdHasBeenSet; }
    inline void SetHITId(const Aws::String& value) { m_hITIdHasBeenSet = true; m_hITId = value; }
    inline void SetHITId(Aws::String&& value) { m_hITIdHasBeenSet = true; m_hITId = std::move(value); }
    inline void SetHITId(const char* value) { m_hITIdHasBeenSet = true; m_hITId.assign(value); }
    inline Assignment& WithHITId(const Aws::String& value) { SetHITId(value); return *this;}
    inline Assignment& WithHITId(Aws::String&& value) { SetHITId(std::move(value)); return *this;}
    inline Assignment& WithHITId(const char* value) { SetHITId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the assignment.</p>
     */
    inline const AssignmentStatus& GetAssignmentStatus() const{ return m_assignmentStatus; }
    inline bool AssignmentStatusHasBeenSet() const { return m_assignmentStatusHasBeenSet; }
    inline void SetAssignmentStatus(const AssignmentStatus& value) { m_assignmentStatusHasBeenSet = true; m_assignmentStatus = value; }
    inline void SetAssignmentStatus(AssignmentStatus&& value) { m_assignmentStatusHasBeenSet = true; m_assignmentStatus = std::move(value); }
    inline Assignment& WithAssignmentStatus(const AssignmentStatus& value) { SetAssignmentStatus(value); return *this;}
    inline Assignment& WithAssignmentStatus(AssignmentStatus&& value) { SetAssignmentStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> If results have been submitted, AutoApprovalTime is the date and time the
     * results of the assignment results are considered Approved automatically if they
     * have not already been explicitly approved or rejected by the Requester. This
     * value is derived from the auto-approval delay specified by the Requester in the
     * HIT. This value is omitted from the assignment if the Worker has not yet
     * submitted results.</p>
     */
    inline const Aws::Utils::DateTime& GetAutoApprovalTime() const{ return m_autoApprovalTime; }
    inline bool AutoApprovalTimeHasBeenSet() const { return m_autoApprovalTimeHasBeenSet; }
    inline void SetAutoApprovalTime(const Aws::Utils::DateTime& value) { m_autoApprovalTimeHasBeenSet = true; m_autoApprovalTime = value; }
    inline void SetAutoApprovalTime(Aws::Utils::DateTime&& value) { m_autoApprovalTimeHasBeenSet = true; m_autoApprovalTime = std::move(value); }
    inline Assignment& WithAutoApprovalTime(const Aws::Utils::DateTime& value) { SetAutoApprovalTime(value); return *this;}
    inline Assignment& WithAutoApprovalTime(Aws::Utils::DateTime&& value) { SetAutoApprovalTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The date and time the Worker accepted the assignment.</p>
     */
    inline const Aws::Utils::DateTime& GetAcceptTime() const{ return m_acceptTime; }
    inline bool AcceptTimeHasBeenSet() const { return m_acceptTimeHasBeenSet; }
    inline void SetAcceptTime(const Aws::Utils::DateTime& value) { m_acceptTimeHasBeenSet = true; m_acceptTime = value; }
    inline void SetAcceptTime(Aws::Utils::DateTime&& value) { m_acceptTimeHasBeenSet = true; m_acceptTime = std::move(value); }
    inline Assignment& WithAcceptTime(const Aws::Utils::DateTime& value) { SetAcceptTime(value); return *this;}
    inline Assignment& WithAcceptTime(Aws::Utils::DateTime&& value) { SetAcceptTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> If the Worker has submitted results, SubmitTime is the date and time the
     * assignment was submitted. This value is omitted from the assignment if the
     * Worker has not yet submitted results.</p>
     */
    inline const Aws::Utils::DateTime& GetSubmitTime() const{ return m_submitTime; }
    inline bool SubmitTimeHasBeenSet() const { return m_submitTimeHasBeenSet; }
    inline void SetSubmitTime(const Aws::Utils::DateTime& value) { m_submitTimeHasBeenSet = true; m_submitTime = value; }
    inline void SetSubmitTime(Aws::Utils::DateTime&& value) { m_submitTimeHasBeenSet = true; m_submitTime = std::move(value); }
    inline Assignment& WithSubmitTime(const Aws::Utils::DateTime& value) { SetSubmitTime(value); return *this;}
    inline Assignment& WithSubmitTime(Aws::Utils::DateTime&& value) { SetSubmitTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> If the Worker has submitted results and the Requester has approved the
     * results, ApprovalTime is the date and time the Requester approved the results.
     * This value is omitted from the assignment if the Requester has not yet approved
     * the results.</p>
     */
    inline const Aws::Utils::DateTime& GetApprovalTime() const{ return m_approvalTime; }
    inline bool ApprovalTimeHasBeenSet() const { return m_approvalTimeHasBeenSet; }
    inline void SetApprovalTime(const Aws::Utils::DateTime& value) { m_approvalTimeHasBeenSet = true; m_approvalTime = value; }
    inline void SetApprovalTime(Aws::Utils::DateTime&& value) { m_approvalTimeHasBeenSet = true; m_approvalTime = std::move(value); }
    inline Assignment& WithApprovalTime(const Aws::Utils::DateTime& value) { SetApprovalTime(value); return *this;}
    inline Assignment& WithApprovalTime(Aws::Utils::DateTime&& value) { SetApprovalTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> If the Worker has submitted results and the Requester has rejected the
     * results, RejectionTime is the date and time the Requester rejected the
     * results.</p>
     */
    inline const Aws::Utils::DateTime& GetRejectionTime() const{ return m_rejectionTime; }
    inline bool RejectionTimeHasBeenSet() const { return m_rejectionTimeHasBeenSet; }
    inline void SetRejectionTime(const Aws::Utils::DateTime& value) { m_rejectionTimeHasBeenSet = true; m_rejectionTime = value; }
    inline void SetRejectionTime(Aws::Utils::DateTime&& value) { m_rejectionTimeHasBeenSet = true; m_rejectionTime = std::move(value); }
    inline Assignment& WithRejectionTime(const Aws::Utils::DateTime& value) { SetRejectionTime(value); return *this;}
    inline Assignment& WithRejectionTime(Aws::Utils::DateTime&& value) { SetRejectionTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The date and time of the deadline for the assignment. This value is derived
     * from the deadline specification for the HIT and the date and time the Worker
     * accepted the HIT.</p>
     */
    inline const Aws::Utils::DateTime& GetDeadline() const{ return m_deadline; }
    inline bool DeadlineHasBeenSet() const { return m_deadlineHasBeenSet; }
    inline void SetDeadline(const Aws::Utils::DateTime& value) { m_deadlineHasBeenSet = true; m_deadline = value; }
    inline void SetDeadline(Aws::Utils::DateTime&& value) { m_deadlineHasBeenSet = true; m_deadline = std::move(value); }
    inline Assignment& WithDeadline(const Aws::Utils::DateTime& value) { SetDeadline(value); return *this;}
    inline Assignment& WithDeadline(Aws::Utils::DateTime&& value) { SetDeadline(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Worker's answers submitted for the HIT contained in a
     * QuestionFormAnswers document, if the Worker provides an answer. If the Worker
     * does not provide any answers, Answer may contain a QuestionFormAnswers document,
     * or Answer may be empty.</p>
     */
    inline const Aws::String& GetAnswer() const{ return m_answer; }
    inline bool AnswerHasBeenSet() const { return m_answerHasBeenSet; }
    inline void SetAnswer(const Aws::String& value) { m_answerHasBeenSet = true; m_answer = value; }
    inline void SetAnswer(Aws::String&& value) { m_answerHasBeenSet = true; m_answer = std::move(value); }
    inline void SetAnswer(const char* value) { m_answerHasBeenSet = true; m_answer.assign(value); }
    inline Assignment& WithAnswer(const Aws::String& value) { SetAnswer(value); return *this;}
    inline Assignment& WithAnswer(Aws::String&& value) { SetAnswer(std::move(value)); return *this;}
    inline Assignment& WithAnswer(const char* value) { SetAnswer(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The feedback string included with the call to the ApproveAssignment
     * operation or the RejectAssignment operation, if the Requester approved or
     * rejected the assignment and specified feedback.</p>
     */
    inline const Aws::String& GetRequesterFeedback() const{ return m_requesterFeedback; }
    inline bool RequesterFeedbackHasBeenSet() const { return m_requesterFeedbackHasBeenSet; }
    inline void SetRequesterFeedback(const Aws::String& value) { m_requesterFeedbackHasBeenSet = true; m_requesterFeedback = value; }
    inline void SetRequesterFeedback(Aws::String&& value) { m_requesterFeedbackHasBeenSet = true; m_requesterFeedback = std::move(value); }
    inline void SetRequesterFeedback(const char* value) { m_requesterFeedbackHasBeenSet = true; m_requesterFeedback.assign(value); }
    inline Assignment& WithRequesterFeedback(const Aws::String& value) { SetRequesterFeedback(value); return *this;}
    inline Assignment& WithRequesterFeedback(Aws::String&& value) { SetRequesterFeedback(std::move(value)); return *this;}
    inline Assignment& WithRequesterFeedback(const char* value) { SetRequesterFeedback(value); return *this;}
    ///@}
  private:

    Aws::String m_assignmentId;
    bool m_assignmentIdHasBeenSet = false;

    Aws::String m_workerId;
    bool m_workerIdHasBeenSet = false;

    Aws::String m_hITId;
    bool m_hITIdHasBeenSet = false;

    AssignmentStatus m_assignmentStatus;
    bool m_assignmentStatusHasBeenSet = false;

    Aws::Utils::DateTime m_autoApprovalTime;
    bool m_autoApprovalTimeHasBeenSet = false;

    Aws::Utils::DateTime m_acceptTime;
    bool m_acceptTimeHasBeenSet = false;

    Aws::Utils::DateTime m_submitTime;
    bool m_submitTimeHasBeenSet = false;

    Aws::Utils::DateTime m_approvalTime;
    bool m_approvalTimeHasBeenSet = false;

    Aws::Utils::DateTime m_rejectionTime;
    bool m_rejectionTimeHasBeenSet = false;

    Aws::Utils::DateTime m_deadline;
    bool m_deadlineHasBeenSet = false;

    Aws::String m_answer;
    bool m_answerHasBeenSet = false;

    Aws::String m_requesterFeedback;
    bool m_requesterFeedbackHasBeenSet = false;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
