﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/mturk-requester/model/QualificationTypeStatus.h>
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
   * <p> The QualificationType data structure represents a Qualification type, a
   * description of a property of a Worker that must match the requirements of a HIT
   * for the Worker to be able to accept the HIT. The type also describes how a
   * Worker can obtain a Qualification of that type, such as through a Qualification
   * test. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/QualificationType">AWS
   * API Reference</a></p>
   */
  class QualificationType
  {
  public:
    AWS_MTURK_API QualificationType();
    AWS_MTURK_API QualificationType(Aws::Utils::Json::JsonView jsonValue);
    AWS_MTURK_API QualificationType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MTURK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> A unique identifier for the Qualification type. A Qualification type is
     * given a Qualification type ID when you call the CreateQualificationType
     * operation. </p>
     */
    inline const Aws::String& GetQualificationTypeId() const{ return m_qualificationTypeId; }
    inline bool QualificationTypeIdHasBeenSet() const { return m_qualificationTypeIdHasBeenSet; }
    inline void SetQualificationTypeId(const Aws::String& value) { m_qualificationTypeIdHasBeenSet = true; m_qualificationTypeId = value; }
    inline void SetQualificationTypeId(Aws::String&& value) { m_qualificationTypeIdHasBeenSet = true; m_qualificationTypeId = std::move(value); }
    inline void SetQualificationTypeId(const char* value) { m_qualificationTypeIdHasBeenSet = true; m_qualificationTypeId.assign(value); }
    inline QualificationType& WithQualificationTypeId(const Aws::String& value) { SetQualificationTypeId(value); return *this;}
    inline QualificationType& WithQualificationTypeId(Aws::String&& value) { SetQualificationTypeId(std::move(value)); return *this;}
    inline QualificationType& WithQualificationTypeId(const char* value) { SetQualificationTypeId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The date and time the Qualification type was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline QualificationType& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline QualificationType& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the Qualification type. The type name is used to identify the
     * type, and to find the type using a Qualification type search. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline QualificationType& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline QualificationType& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline QualificationType& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A long description for the Qualification type. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline QualificationType& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline QualificationType& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline QualificationType& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> One or more words or phrases that describe theQualification type, separated
     * by commas. The Keywords make the type easier to find using a search. </p>
     */
    inline const Aws::String& GetKeywords() const{ return m_keywords; }
    inline bool KeywordsHasBeenSet() const { return m_keywordsHasBeenSet; }
    inline void SetKeywords(const Aws::String& value) { m_keywordsHasBeenSet = true; m_keywords = value; }
    inline void SetKeywords(Aws::String&& value) { m_keywordsHasBeenSet = true; m_keywords = std::move(value); }
    inline void SetKeywords(const char* value) { m_keywordsHasBeenSet = true; m_keywords.assign(value); }
    inline QualificationType& WithKeywords(const Aws::String& value) { SetKeywords(value); return *this;}
    inline QualificationType& WithKeywords(Aws::String&& value) { SetKeywords(std::move(value)); return *this;}
    inline QualificationType& WithKeywords(const char* value) { SetKeywords(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the Qualification type. A Qualification type's status
     * determines if users can apply to receive a Qualification of this type, and if
     * HITs can be created with requirements based on this type. Valid values are
     * Active | Inactive. </p>
     */
    inline const QualificationTypeStatus& GetQualificationTypeStatus() const{ return m_qualificationTypeStatus; }
    inline bool QualificationTypeStatusHasBeenSet() const { return m_qualificationTypeStatusHasBeenSet; }
    inline void SetQualificationTypeStatus(const QualificationTypeStatus& value) { m_qualificationTypeStatusHasBeenSet = true; m_qualificationTypeStatus = value; }
    inline void SetQualificationTypeStatus(QualificationTypeStatus&& value) { m_qualificationTypeStatusHasBeenSet = true; m_qualificationTypeStatus = std::move(value); }
    inline QualificationType& WithQualificationTypeStatus(const QualificationTypeStatus& value) { SetQualificationTypeStatus(value); return *this;}
    inline QualificationType& WithQualificationTypeStatus(QualificationTypeStatus&& value) { SetQualificationTypeStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The questions for a Qualification test associated with this Qualification
     * type that a user can take to obtain a Qualification of this type. This parameter
     * must be specified if AnswerKey is present. A Qualification type cannot have both
     * a specified Test parameter and an AutoGranted value of true. </p>
     */
    inline const Aws::String& GetTest() const{ return m_test; }
    inline bool TestHasBeenSet() const { return m_testHasBeenSet; }
    inline void SetTest(const Aws::String& value) { m_testHasBeenSet = true; m_test = value; }
    inline void SetTest(Aws::String&& value) { m_testHasBeenSet = true; m_test = std::move(value); }
    inline void SetTest(const char* value) { m_testHasBeenSet = true; m_test.assign(value); }
    inline QualificationType& WithTest(const Aws::String& value) { SetTest(value); return *this;}
    inline QualificationType& WithTest(Aws::String&& value) { SetTest(std::move(value)); return *this;}
    inline QualificationType& WithTest(const char* value) { SetTest(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The amount of time, in seconds, given to a Worker to complete the
     * Qualification test, beginning from the time the Worker requests the
     * Qualification. </p>
     */
    inline long long GetTestDurationInSeconds() const{ return m_testDurationInSeconds; }
    inline bool TestDurationInSecondsHasBeenSet() const { return m_testDurationInSecondsHasBeenSet; }
    inline void SetTestDurationInSeconds(long long value) { m_testDurationInSecondsHasBeenSet = true; m_testDurationInSeconds = value; }
    inline QualificationType& WithTestDurationInSeconds(long long value) { SetTestDurationInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The answers to the Qualification test specified in the Test parameter.</p>
     */
    inline const Aws::String& GetAnswerKey() const{ return m_answerKey; }
    inline bool AnswerKeyHasBeenSet() const { return m_answerKeyHasBeenSet; }
    inline void SetAnswerKey(const Aws::String& value) { m_answerKeyHasBeenSet = true; m_answerKey = value; }
    inline void SetAnswerKey(Aws::String&& value) { m_answerKeyHasBeenSet = true; m_answerKey = std::move(value); }
    inline void SetAnswerKey(const char* value) { m_answerKeyHasBeenSet = true; m_answerKey.assign(value); }
    inline QualificationType& WithAnswerKey(const Aws::String& value) { SetAnswerKey(value); return *this;}
    inline QualificationType& WithAnswerKey(Aws::String&& value) { SetAnswerKey(std::move(value)); return *this;}
    inline QualificationType& WithAnswerKey(const char* value) { SetAnswerKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The amount of time, in seconds, Workers must wait after taking the
     * Qualification test before they can take it again. Workers can take a
     * Qualification test multiple times if they were not granted the Qualification
     * from a previous attempt, or if the test offers a gradient score and they want a
     * better score. If not specified, retries are disabled and Workers can request a
     * Qualification only once. </p>
     */
    inline long long GetRetryDelayInSeconds() const{ return m_retryDelayInSeconds; }
    inline bool RetryDelayInSecondsHasBeenSet() const { return m_retryDelayInSecondsHasBeenSet; }
    inline void SetRetryDelayInSeconds(long long value) { m_retryDelayInSecondsHasBeenSet = true; m_retryDelayInSeconds = value; }
    inline QualificationType& WithRetryDelayInSeconds(long long value) { SetRetryDelayInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies whether the Qualification type is one that a user can request
     * through the Amazon Mechanical Turk web site, such as by taking a Qualification
     * test. This value is False for Qualifications assigned automatically by the
     * system. Valid values are True | False. </p>
     */
    inline bool GetIsRequestable() const{ return m_isRequestable; }
    inline bool IsRequestableHasBeenSet() const { return m_isRequestableHasBeenSet; }
    inline void SetIsRequestable(bool value) { m_isRequestableHasBeenSet = true; m_isRequestable = value; }
    inline QualificationType& WithIsRequestable(bool value) { SetIsRequestable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies that requests for the Qualification type are granted immediately,
     * without prompting the Worker with a Qualification test. Valid values are True |
     * False.</p>
     */
    inline bool GetAutoGranted() const{ return m_autoGranted; }
    inline bool AutoGrantedHasBeenSet() const { return m_autoGrantedHasBeenSet; }
    inline void SetAutoGranted(bool value) { m_autoGrantedHasBeenSet = true; m_autoGranted = value; }
    inline QualificationType& WithAutoGranted(bool value) { SetAutoGranted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Qualification integer value to use for automatically granted
     * Qualifications, if AutoGranted is true. This is 1 by default. </p>
     */
    inline int GetAutoGrantedValue() const{ return m_autoGrantedValue; }
    inline bool AutoGrantedValueHasBeenSet() const { return m_autoGrantedValueHasBeenSet; }
    inline void SetAutoGrantedValue(int value) { m_autoGrantedValueHasBeenSet = true; m_autoGrantedValue = value; }
    inline QualificationType& WithAutoGrantedValue(int value) { SetAutoGrantedValue(value); return *this;}
    ///@}
  private:

    Aws::String m_qualificationTypeId;
    bool m_qualificationTypeIdHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_keywords;
    bool m_keywordsHasBeenSet = false;

    QualificationTypeStatus m_qualificationTypeStatus;
    bool m_qualificationTypeStatusHasBeenSet = false;

    Aws::String m_test;
    bool m_testHasBeenSet = false;

    long long m_testDurationInSeconds;
    bool m_testDurationInSecondsHasBeenSet = false;

    Aws::String m_answerKey;
    bool m_answerKeyHasBeenSet = false;

    long long m_retryDelayInSeconds;
    bool m_retryDelayInSecondsHasBeenSet = false;

    bool m_isRequestable;
    bool m_isRequestableHasBeenSet = false;

    bool m_autoGranted;
    bool m_autoGrantedHasBeenSet = false;

    int m_autoGrantedValue;
    bool m_autoGrantedValueHasBeenSet = false;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
