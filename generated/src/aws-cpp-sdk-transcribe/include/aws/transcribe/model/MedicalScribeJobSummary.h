/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/transcribe/model/MedicalScribeLanguageCode.h>
#include <aws/transcribe/model/MedicalScribeJobStatus.h>
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
namespace TranscribeService
{
namespace Model
{

  /**
   * <p>Provides detailed information about a specific Medical Scribe
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/MedicalScribeJobSummary">AWS
   * API Reference</a></p>
   */
  class MedicalScribeJobSummary
  {
  public:
    AWS_TRANSCRIBESERVICE_API MedicalScribeJobSummary() = default;
    AWS_TRANSCRIBESERVICE_API MedicalScribeJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API MedicalScribeJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Medical Scribe job. Job names are case sensitive and must be
     * unique within an Amazon Web Services account.</p>
     */
    inline const Aws::String& GetMedicalScribeJobName() const { return m_medicalScribeJobName; }
    inline bool MedicalScribeJobNameHasBeenSet() const { return m_medicalScribeJobNameHasBeenSet; }
    template<typename MedicalScribeJobNameT = Aws::String>
    void SetMedicalScribeJobName(MedicalScribeJobNameT&& value) { m_medicalScribeJobNameHasBeenSet = true; m_medicalScribeJobName = std::forward<MedicalScribeJobNameT>(value); }
    template<typename MedicalScribeJobNameT = Aws::String>
    MedicalScribeJobSummary& WithMedicalScribeJobName(MedicalScribeJobNameT&& value) { SetMedicalScribeJobName(std::forward<MedicalScribeJobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the specified Medical Scribe job request was made.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.761000-07:00</code> represents a Medical
     * Scribe job that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    MedicalScribeJobSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time your Medical Scribe job began processing.</p> <p>Timestamps
     * are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>. For example,
     * <code>2022-05-04T12:32:58.789000-07:00</code> represents a Medical Scribe job
     * that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    MedicalScribeJobSummary& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the specified Medical Scribe job finished processing.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.761000-07:00</code> represents a Medical
     * Scribe job that finished processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTime() const { return m_completionTime; }
    inline bool CompletionTimeHasBeenSet() const { return m_completionTimeHasBeenSet; }
    template<typename CompletionTimeT = Aws::Utils::DateTime>
    void SetCompletionTime(CompletionTimeT&& value) { m_completionTimeHasBeenSet = true; m_completionTime = std::forward<CompletionTimeT>(value); }
    template<typename CompletionTimeT = Aws::Utils::DateTime>
    MedicalScribeJobSummary& WithCompletionTime(CompletionTimeT&& value) { SetCompletionTime(std::forward<CompletionTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language code used to create your Medical Scribe job. US English
     * (<code>en-US</code>) is the only supported language for Medical Scribe jobs.
     * </p>
     */
    inline MedicalScribeLanguageCode GetLanguageCode() const { return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    inline void SetLanguageCode(MedicalScribeLanguageCode value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }
    inline MedicalScribeJobSummary& WithLanguageCode(MedicalScribeLanguageCode value) { SetLanguageCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the status of the specified Medical Scribe job.</p> <p>If the status
     * is <code>COMPLETED</code>, the job is finished and you can find the results at
     * the location specified in <code>MedicalScribeOutput</code> If the status is
     * <code>FAILED</code>, <code>FailureReason</code> provides details on why your
     * Medical Scribe job failed.</p>
     */
    inline MedicalScribeJobStatus GetMedicalScribeJobStatus() const { return m_medicalScribeJobStatus; }
    inline bool MedicalScribeJobStatusHasBeenSet() const { return m_medicalScribeJobStatusHasBeenSet; }
    inline void SetMedicalScribeJobStatus(MedicalScribeJobStatus value) { m_medicalScribeJobStatusHasBeenSet = true; m_medicalScribeJobStatus = value; }
    inline MedicalScribeJobSummary& WithMedicalScribeJobStatus(MedicalScribeJobStatus value) { SetMedicalScribeJobStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>MedicalScribeJobStatus</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the transcription job
     * failed. See also: <a
     * href="https://docs.aws.amazon.com/transcribe/latest/APIReference/CommonErrors.html">Common
     * Errors</a>.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    MedicalScribeJobSummary& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_medicalScribeJobName;
    bool m_medicalScribeJobNameHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_completionTime{};
    bool m_completionTimeHasBeenSet = false;

    MedicalScribeLanguageCode m_languageCode{MedicalScribeLanguageCode::NOT_SET};
    bool m_languageCodeHasBeenSet = false;

    MedicalScribeJobStatus m_medicalScribeJobStatus{MedicalScribeJobStatus::NOT_SET};
    bool m_medicalScribeJobStatusHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
