/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p> The QualificationRequest data structure represents a request a Worker has
   * made for a Qualification. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/QualificationRequest">AWS
   * API Reference</a></p>
   */
  class QualificationRequest
  {
  public:
    AWS_MTURK_API QualificationRequest() = default;
    AWS_MTURK_API QualificationRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_MTURK_API QualificationRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MTURK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the Qualification request, a unique identifier generated when the
     * request was submitted. </p>
     */
    inline const Aws::String& GetQualificationRequestId() const { return m_qualificationRequestId; }
    inline bool QualificationRequestIdHasBeenSet() const { return m_qualificationRequestIdHasBeenSet; }
    template<typename QualificationRequestIdT = Aws::String>
    void SetQualificationRequestId(QualificationRequestIdT&& value) { m_qualificationRequestIdHasBeenSet = true; m_qualificationRequestId = std::forward<QualificationRequestIdT>(value); }
    template<typename QualificationRequestIdT = Aws::String>
    QualificationRequest& WithQualificationRequestId(QualificationRequestIdT&& value) { SetQualificationRequestId(std::forward<QualificationRequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the Qualification type the Worker is requesting, as returned by
     * the CreateQualificationType operation. </p>
     */
    inline const Aws::String& GetQualificationTypeId() const { return m_qualificationTypeId; }
    inline bool QualificationTypeIdHasBeenSet() const { return m_qualificationTypeIdHasBeenSet; }
    template<typename QualificationTypeIdT = Aws::String>
    void SetQualificationTypeId(QualificationTypeIdT&& value) { m_qualificationTypeIdHasBeenSet = true; m_qualificationTypeId = std::forward<QualificationTypeIdT>(value); }
    template<typename QualificationTypeIdT = Aws::String>
    QualificationRequest& WithQualificationTypeId(QualificationTypeIdT&& value) { SetQualificationTypeId(std::forward<QualificationTypeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the Worker requesting the Qualification.</p>
     */
    inline const Aws::String& GetWorkerId() const { return m_workerId; }
    inline bool WorkerIdHasBeenSet() const { return m_workerIdHasBeenSet; }
    template<typename WorkerIdT = Aws::String>
    void SetWorkerId(WorkerIdT&& value) { m_workerIdHasBeenSet = true; m_workerId = std::forward<WorkerIdT>(value); }
    template<typename WorkerIdT = Aws::String>
    QualificationRequest& WithWorkerId(WorkerIdT&& value) { SetWorkerId(std::forward<WorkerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The contents of the Qualification test that was presented to the Worker, if
     * the type has a test and the Worker has submitted answers. This value is
     * identical to the QuestionForm associated with the Qualification type at the time
     * the Worker requests the Qualification.</p>
     */
    inline const Aws::String& GetTest() const { return m_test; }
    inline bool TestHasBeenSet() const { return m_testHasBeenSet; }
    template<typename TestT = Aws::String>
    void SetTest(TestT&& value) { m_testHasBeenSet = true; m_test = std::forward<TestT>(value); }
    template<typename TestT = Aws::String>
    QualificationRequest& WithTest(TestT&& value) { SetTest(std::forward<TestT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Worker's answers for the Qualification type's test contained in a
     * QuestionFormAnswers document, if the type has a test and the Worker has
     * submitted answers. If the Worker does not provide any answers, Answer may be
     * empty. </p>
     */
    inline const Aws::String& GetAnswer() const { return m_answer; }
    inline bool AnswerHasBeenSet() const { return m_answerHasBeenSet; }
    template<typename AnswerT = Aws::String>
    void SetAnswer(AnswerT&& value) { m_answerHasBeenSet = true; m_answer = std::forward<AnswerT>(value); }
    template<typename AnswerT = Aws::String>
    QualificationRequest& WithAnswer(AnswerT&& value) { SetAnswer(std::forward<AnswerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the Qualification request had a status of Submitted. This
     * is either the time the Worker submitted answers for a Qualification test, or the
     * time the Worker requested the Qualification if the Qualification type does not
     * have a test. </p>
     */
    inline const Aws::Utils::DateTime& GetSubmitTime() const { return m_submitTime; }
    inline bool SubmitTimeHasBeenSet() const { return m_submitTimeHasBeenSet; }
    template<typename SubmitTimeT = Aws::Utils::DateTime>
    void SetSubmitTime(SubmitTimeT&& value) { m_submitTimeHasBeenSet = true; m_submitTime = std::forward<SubmitTimeT>(value); }
    template<typename SubmitTimeT = Aws::Utils::DateTime>
    QualificationRequest& WithSubmitTime(SubmitTimeT&& value) { SetSubmitTime(std::forward<SubmitTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_qualificationRequestId;
    bool m_qualificationRequestIdHasBeenSet = false;

    Aws::String m_qualificationTypeId;
    bool m_qualificationTypeIdHasBeenSet = false;

    Aws::String m_workerId;
    bool m_workerIdHasBeenSet = false;

    Aws::String m_test;
    bool m_testHasBeenSet = false;

    Aws::String m_answer;
    bool m_answerHasBeenSet = false;

    Aws::Utils::DateTime m_submitTime{};
    bool m_submitTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
