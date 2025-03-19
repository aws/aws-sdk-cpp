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
    AWS_MTURK_API Assignment() = default;
    AWS_MTURK_API Assignment(Aws::Utils::Json::JsonView jsonValue);
    AWS_MTURK_API Assignment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MTURK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> A unique identifier for the assignment.</p>
     */
    inline const Aws::String& GetAssignmentId() const { return m_assignmentId; }
    inline bool AssignmentIdHasBeenSet() const { return m_assignmentIdHasBeenSet; }
    template<typename AssignmentIdT = Aws::String>
    void SetAssignmentId(AssignmentIdT&& value) { m_assignmentIdHasBeenSet = true; m_assignmentId = std::forward<AssignmentIdT>(value); }
    template<typename AssignmentIdT = Aws::String>
    Assignment& WithAssignmentId(AssignmentIdT&& value) { SetAssignmentId(std::forward<AssignmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the Worker who accepted the HIT.</p>
     */
    inline const Aws::String& GetWorkerId() const { return m_workerId; }
    inline bool WorkerIdHasBeenSet() const { return m_workerIdHasBeenSet; }
    template<typename WorkerIdT = Aws::String>
    void SetWorkerId(WorkerIdT&& value) { m_workerIdHasBeenSet = true; m_workerId = std::forward<WorkerIdT>(value); }
    template<typename WorkerIdT = Aws::String>
    Assignment& WithWorkerId(WorkerIdT&& value) { SetWorkerId(std::forward<WorkerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the HIT.</p>
     */
    inline const Aws::String& GetHITId() const { return m_hITId; }
    inline bool HITIdHasBeenSet() const { return m_hITIdHasBeenSet; }
    template<typename HITIdT = Aws::String>
    void SetHITId(HITIdT&& value) { m_hITIdHasBeenSet = true; m_hITId = std::forward<HITIdT>(value); }
    template<typename HITIdT = Aws::String>
    Assignment& WithHITId(HITIdT&& value) { SetHITId(std::forward<HITIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the assignment.</p>
     */
    inline AssignmentStatus GetAssignmentStatus() const { return m_assignmentStatus; }
    inline bool AssignmentStatusHasBeenSet() const { return m_assignmentStatusHasBeenSet; }
    inline void SetAssignmentStatus(AssignmentStatus value) { m_assignmentStatusHasBeenSet = true; m_assignmentStatus = value; }
    inline Assignment& WithAssignmentStatus(AssignmentStatus value) { SetAssignmentStatus(value); return *this;}
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
    inline const Aws::Utils::DateTime& GetAutoApprovalTime() const { return m_autoApprovalTime; }
    inline bool AutoApprovalTimeHasBeenSet() const { return m_autoApprovalTimeHasBeenSet; }
    template<typename AutoApprovalTimeT = Aws::Utils::DateTime>
    void SetAutoApprovalTime(AutoApprovalTimeT&& value) { m_autoApprovalTimeHasBeenSet = true; m_autoApprovalTime = std::forward<AutoApprovalTimeT>(value); }
    template<typename AutoApprovalTimeT = Aws::Utils::DateTime>
    Assignment& WithAutoApprovalTime(AutoApprovalTimeT&& value) { SetAutoApprovalTime(std::forward<AutoApprovalTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The date and time the Worker accepted the assignment.</p>
     */
    inline const Aws::Utils::DateTime& GetAcceptTime() const { return m_acceptTime; }
    inline bool AcceptTimeHasBeenSet() const { return m_acceptTimeHasBeenSet; }
    template<typename AcceptTimeT = Aws::Utils::DateTime>
    void SetAcceptTime(AcceptTimeT&& value) { m_acceptTimeHasBeenSet = true; m_acceptTime = std::forward<AcceptTimeT>(value); }
    template<typename AcceptTimeT = Aws::Utils::DateTime>
    Assignment& WithAcceptTime(AcceptTimeT&& value) { SetAcceptTime(std::forward<AcceptTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> If the Worker has submitted results, SubmitTime is the date and time the
     * assignment was submitted. This value is omitted from the assignment if the
     * Worker has not yet submitted results.</p>
     */
    inline const Aws::Utils::DateTime& GetSubmitTime() const { return m_submitTime; }
    inline bool SubmitTimeHasBeenSet() const { return m_submitTimeHasBeenSet; }
    template<typename SubmitTimeT = Aws::Utils::DateTime>
    void SetSubmitTime(SubmitTimeT&& value) { m_submitTimeHasBeenSet = true; m_submitTime = std::forward<SubmitTimeT>(value); }
    template<typename SubmitTimeT = Aws::Utils::DateTime>
    Assignment& WithSubmitTime(SubmitTimeT&& value) { SetSubmitTime(std::forward<SubmitTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> If the Worker has submitted results and the Requester has approved the
     * results, ApprovalTime is the date and time the Requester approved the results.
     * This value is omitted from the assignment if the Requester has not yet approved
     * the results.</p>
     */
    inline const Aws::Utils::DateTime& GetApprovalTime() const { return m_approvalTime; }
    inline bool ApprovalTimeHasBeenSet() const { return m_approvalTimeHasBeenSet; }
    template<typename ApprovalTimeT = Aws::Utils::DateTime>
    void SetApprovalTime(ApprovalTimeT&& value) { m_approvalTimeHasBeenSet = true; m_approvalTime = std::forward<ApprovalTimeT>(value); }
    template<typename ApprovalTimeT = Aws::Utils::DateTime>
    Assignment& WithApprovalTime(ApprovalTimeT&& value) { SetApprovalTime(std::forward<ApprovalTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> If the Worker has submitted results and the Requester has rejected the
     * results, RejectionTime is the date and time the Requester rejected the
     * results.</p>
     */
    inline const Aws::Utils::DateTime& GetRejectionTime() const { return m_rejectionTime; }
    inline bool RejectionTimeHasBeenSet() const { return m_rejectionTimeHasBeenSet; }
    template<typename RejectionTimeT = Aws::Utils::DateTime>
    void SetRejectionTime(RejectionTimeT&& value) { m_rejectionTimeHasBeenSet = true; m_rejectionTime = std::forward<RejectionTimeT>(value); }
    template<typename RejectionTimeT = Aws::Utils::DateTime>
    Assignment& WithRejectionTime(RejectionTimeT&& value) { SetRejectionTime(std::forward<RejectionTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The date and time of the deadline for the assignment. This value is derived
     * from the deadline specification for the HIT and the date and time the Worker
     * accepted the HIT.</p>
     */
    inline const Aws::Utils::DateTime& GetDeadline() const { return m_deadline; }
    inline bool DeadlineHasBeenSet() const { return m_deadlineHasBeenSet; }
    template<typename DeadlineT = Aws::Utils::DateTime>
    void SetDeadline(DeadlineT&& value) { m_deadlineHasBeenSet = true; m_deadline = std::forward<DeadlineT>(value); }
    template<typename DeadlineT = Aws::Utils::DateTime>
    Assignment& WithDeadline(DeadlineT&& value) { SetDeadline(std::forward<DeadlineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Worker's answers submitted for the HIT contained in a
     * QuestionFormAnswers document, if the Worker provides an answer. If the Worker
     * does not provide any answers, Answer may contain a QuestionFormAnswers document,
     * or Answer may be empty.</p>
     */
    inline const Aws::String& GetAnswer() const { return m_answer; }
    inline bool AnswerHasBeenSet() const { return m_answerHasBeenSet; }
    template<typename AnswerT = Aws::String>
    void SetAnswer(AnswerT&& value) { m_answerHasBeenSet = true; m_answer = std::forward<AnswerT>(value); }
    template<typename AnswerT = Aws::String>
    Assignment& WithAnswer(AnswerT&& value) { SetAnswer(std::forward<AnswerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The feedback string included with the call to the ApproveAssignment
     * operation or the RejectAssignment operation, if the Requester approved or
     * rejected the assignment and specified feedback.</p>
     */
    inline const Aws::String& GetRequesterFeedback() const { return m_requesterFeedback; }
    inline bool RequesterFeedbackHasBeenSet() const { return m_requesterFeedbackHasBeenSet; }
    template<typename RequesterFeedbackT = Aws::String>
    void SetRequesterFeedback(RequesterFeedbackT&& value) { m_requesterFeedbackHasBeenSet = true; m_requesterFeedback = std::forward<RequesterFeedbackT>(value); }
    template<typename RequesterFeedbackT = Aws::String>
    Assignment& WithRequesterFeedback(RequesterFeedbackT&& value) { SetRequesterFeedback(std::forward<RequesterFeedbackT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_assignmentId;
    bool m_assignmentIdHasBeenSet = false;

    Aws::String m_workerId;
    bool m_workerIdHasBeenSet = false;

    Aws::String m_hITId;
    bool m_hITIdHasBeenSet = false;

    AssignmentStatus m_assignmentStatus{AssignmentStatus::NOT_SET};
    bool m_assignmentStatusHasBeenSet = false;

    Aws::Utils::DateTime m_autoApprovalTime{};
    bool m_autoApprovalTimeHasBeenSet = false;

    Aws::Utils::DateTime m_acceptTime{};
    bool m_acceptTimeHasBeenSet = false;

    Aws::Utils::DateTime m_submitTime{};
    bool m_submitTimeHasBeenSet = false;

    Aws::Utils::DateTime m_approvalTime{};
    bool m_approvalTimeHasBeenSet = false;

    Aws::Utils::DateTime m_rejectionTime{};
    bool m_rejectionTimeHasBeenSet = false;

    Aws::Utils::DateTime m_deadline{};
    bool m_deadlineHasBeenSet = false;

    Aws::String m_answer;
    bool m_answerHasBeenSet = false;

    Aws::String m_requesterFeedback;
    bool m_requesterFeedbackHasBeenSet = false;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
