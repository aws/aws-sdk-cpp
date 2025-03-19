/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/mturk-requester/MTurkRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mturk-requester/model/QualificationTypeStatus.h>
#include <utility>

namespace Aws
{
namespace MTurk
{
namespace Model
{

  /**
   */
  class UpdateQualificationTypeRequest : public MTurkRequest
  {
  public:
    AWS_MTURK_API UpdateQualificationTypeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateQualificationType"; }

    AWS_MTURK_API Aws::String SerializePayload() const override;

    AWS_MTURK_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the Qualification type to update.</p>
     */
    inline const Aws::String& GetQualificationTypeId() const { return m_qualificationTypeId; }
    inline bool QualificationTypeIdHasBeenSet() const { return m_qualificationTypeIdHasBeenSet; }
    template<typename QualificationTypeIdT = Aws::String>
    void SetQualificationTypeId(QualificationTypeIdT&& value) { m_qualificationTypeIdHasBeenSet = true; m_qualificationTypeId = std::forward<QualificationTypeIdT>(value); }
    template<typename QualificationTypeIdT = Aws::String>
    UpdateQualificationTypeRequest& WithQualificationTypeId(QualificationTypeIdT&& value) { SetQualificationTypeId(std::forward<QualificationTypeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new description of the Qualification type.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateQualificationTypeRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new status of the Qualification type - Active | Inactive</p>
     */
    inline QualificationTypeStatus GetQualificationTypeStatus() const { return m_qualificationTypeStatus; }
    inline bool QualificationTypeStatusHasBeenSet() const { return m_qualificationTypeStatusHasBeenSet; }
    inline void SetQualificationTypeStatus(QualificationTypeStatus value) { m_qualificationTypeStatusHasBeenSet = true; m_qualificationTypeStatus = value; }
    inline UpdateQualificationTypeRequest& WithQualificationTypeStatus(QualificationTypeStatus value) { SetQualificationTypeStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The questions for the Qualification test a Worker must answer correctly to
     * obtain a Qualification of this type. If this parameter is specified,
     * <code>TestDurationInSeconds</code> must also be specified.</p> <p>Constraints:
     * Must not be longer than 65535 bytes. Must be a QuestionForm data structure. This
     * parameter cannot be specified if AutoGranted is true.</p> <p>Constraints: None.
     * If not specified, the Worker may request the Qualification without answering any
     * questions.</p>
     */
    inline const Aws::String& GetTest() const { return m_test; }
    inline bool TestHasBeenSet() const { return m_testHasBeenSet; }
    template<typename TestT = Aws::String>
    void SetTest(TestT&& value) { m_testHasBeenSet = true; m_test = std::forward<TestT>(value); }
    template<typename TestT = Aws::String>
    UpdateQualificationTypeRequest& WithTest(TestT&& value) { SetTest(std::forward<TestT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The answers to the Qualification test specified in the Test parameter, in the
     * form of an AnswerKey data structure.</p>
     */
    inline const Aws::String& GetAnswerKey() const { return m_answerKey; }
    inline bool AnswerKeyHasBeenSet() const { return m_answerKeyHasBeenSet; }
    template<typename AnswerKeyT = Aws::String>
    void SetAnswerKey(AnswerKeyT&& value) { m_answerKeyHasBeenSet = true; m_answerKey = std::forward<AnswerKeyT>(value); }
    template<typename AnswerKeyT = Aws::String>
    UpdateQualificationTypeRequest& WithAnswerKey(AnswerKeyT&& value) { SetAnswerKey(std::forward<AnswerKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of seconds the Worker has to complete the Qualification test,
     * starting from the time the Worker requests the Qualification.</p>
     */
    inline long long GetTestDurationInSeconds() const { return m_testDurationInSeconds; }
    inline bool TestDurationInSecondsHasBeenSet() const { return m_testDurationInSecondsHasBeenSet; }
    inline void SetTestDurationInSeconds(long long value) { m_testDurationInSecondsHasBeenSet = true; m_testDurationInSeconds = value; }
    inline UpdateQualificationTypeRequest& WithTestDurationInSeconds(long long value) { SetTestDurationInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time, in seconds, that Workers must wait after requesting a
     * Qualification of the specified Qualification type before they can retry the
     * Qualification request. It is not possible to disable retries for a Qualification
     * type after it has been created with retries enabled. If you want to disable
     * retries, you must dispose of the existing retry-enabled Qualification type using
     * DisposeQualificationType and then create a new Qualification type with retries
     * disabled using CreateQualificationType.</p>
     */
    inline long long GetRetryDelayInSeconds() const { return m_retryDelayInSeconds; }
    inline bool RetryDelayInSecondsHasBeenSet() const { return m_retryDelayInSecondsHasBeenSet; }
    inline void SetRetryDelayInSeconds(long long value) { m_retryDelayInSecondsHasBeenSet = true; m_retryDelayInSeconds = value; }
    inline UpdateQualificationTypeRequest& WithRetryDelayInSeconds(long long value) { SetRetryDelayInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether requests for the Qualification type are granted
     * immediately, without prompting the Worker with a Qualification test.</p>
     * <p>Constraints: If the Test parameter is specified, this parameter cannot be
     * true.</p>
     */
    inline bool GetAutoGranted() const { return m_autoGranted; }
    inline bool AutoGrantedHasBeenSet() const { return m_autoGrantedHasBeenSet; }
    inline void SetAutoGranted(bool value) { m_autoGrantedHasBeenSet = true; m_autoGranted = value; }
    inline UpdateQualificationTypeRequest& WithAutoGranted(bool value) { SetAutoGranted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Qualification value to use for automatically granted Qualifications. This
     * parameter is used only if the AutoGranted parameter is true.</p>
     */
    inline int GetAutoGrantedValue() const { return m_autoGrantedValue; }
    inline bool AutoGrantedValueHasBeenSet() const { return m_autoGrantedValueHasBeenSet; }
    inline void SetAutoGrantedValue(int value) { m_autoGrantedValueHasBeenSet = true; m_autoGrantedValue = value; }
    inline UpdateQualificationTypeRequest& WithAutoGrantedValue(int value) { SetAutoGrantedValue(value); return *this;}
    ///@}
  private:

    Aws::String m_qualificationTypeId;
    bool m_qualificationTypeIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    QualificationTypeStatus m_qualificationTypeStatus{QualificationTypeStatus::NOT_SET};
    bool m_qualificationTypeStatusHasBeenSet = false;

    Aws::String m_test;
    bool m_testHasBeenSet = false;

    Aws::String m_answerKey;
    bool m_answerKeyHasBeenSet = false;

    long long m_testDurationInSeconds{0};
    bool m_testDurationInSecondsHasBeenSet = false;

    long long m_retryDelayInSeconds{0};
    bool m_retryDelayInSecondsHasBeenSet = false;

    bool m_autoGranted{false};
    bool m_autoGrantedHasBeenSet = false;

    int m_autoGrantedValue{0};
    bool m_autoGrantedValueHasBeenSet = false;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
