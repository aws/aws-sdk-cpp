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
    AWS_TRANSCRIBESERVICE_API MedicalScribeJobSummary();
    AWS_TRANSCRIBESERVICE_API MedicalScribeJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API MedicalScribeJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the Medical Scribe job. Job names are case sensitive and must be
     * unique within an Amazon Web Services account.</p>
     */
    inline const Aws::String& GetMedicalScribeJobName() const{ return m_medicalScribeJobName; }

    /**
     * <p>The name of the Medical Scribe job. Job names are case sensitive and must be
     * unique within an Amazon Web Services account.</p>
     */
    inline bool MedicalScribeJobNameHasBeenSet() const { return m_medicalScribeJobNameHasBeenSet; }

    /**
     * <p>The name of the Medical Scribe job. Job names are case sensitive and must be
     * unique within an Amazon Web Services account.</p>
     */
    inline void SetMedicalScribeJobName(const Aws::String& value) { m_medicalScribeJobNameHasBeenSet = true; m_medicalScribeJobName = value; }

    /**
     * <p>The name of the Medical Scribe job. Job names are case sensitive and must be
     * unique within an Amazon Web Services account.</p>
     */
    inline void SetMedicalScribeJobName(Aws::String&& value) { m_medicalScribeJobNameHasBeenSet = true; m_medicalScribeJobName = std::move(value); }

    /**
     * <p>The name of the Medical Scribe job. Job names are case sensitive and must be
     * unique within an Amazon Web Services account.</p>
     */
    inline void SetMedicalScribeJobName(const char* value) { m_medicalScribeJobNameHasBeenSet = true; m_medicalScribeJobName.assign(value); }

    /**
     * <p>The name of the Medical Scribe job. Job names are case sensitive and must be
     * unique within an Amazon Web Services account.</p>
     */
    inline MedicalScribeJobSummary& WithMedicalScribeJobName(const Aws::String& value) { SetMedicalScribeJobName(value); return *this;}

    /**
     * <p>The name of the Medical Scribe job. Job names are case sensitive and must be
     * unique within an Amazon Web Services account.</p>
     */
    inline MedicalScribeJobSummary& WithMedicalScribeJobName(Aws::String&& value) { SetMedicalScribeJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the Medical Scribe job. Job names are case sensitive and must be
     * unique within an Amazon Web Services account.</p>
     */
    inline MedicalScribeJobSummary& WithMedicalScribeJobName(const char* value) { SetMedicalScribeJobName(value); return *this;}


    /**
     * <p>The date and time the specified Medical Scribe job request was made.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.761000-07:00</code> represents a Medical
     * Scribe job that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The date and time the specified Medical Scribe job request was made.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.761000-07:00</code> represents a Medical
     * Scribe job that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The date and time the specified Medical Scribe job request was made.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.761000-07:00</code> represents a Medical
     * Scribe job that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The date and time the specified Medical Scribe job request was made.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.761000-07:00</code> represents a Medical
     * Scribe job that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The date and time the specified Medical Scribe job request was made.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.761000-07:00</code> represents a Medical
     * Scribe job that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline MedicalScribeJobSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The date and time the specified Medical Scribe job request was made.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.761000-07:00</code> represents a Medical
     * Scribe job that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline MedicalScribeJobSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The date and time your Medical Scribe job began processing.</p> <p>Timestamps
     * are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>. For example,
     * <code>2022-05-04T12:32:58.789000-07:00</code> represents a Medical Scribe job
     * that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The date and time your Medical Scribe job began processing.</p> <p>Timestamps
     * are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>. For example,
     * <code>2022-05-04T12:32:58.789000-07:00</code> represents a Medical Scribe job
     * that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The date and time your Medical Scribe job began processing.</p> <p>Timestamps
     * are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>. For example,
     * <code>2022-05-04T12:32:58.789000-07:00</code> represents a Medical Scribe job
     * that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The date and time your Medical Scribe job began processing.</p> <p>Timestamps
     * are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>. For example,
     * <code>2022-05-04T12:32:58.789000-07:00</code> represents a Medical Scribe job
     * that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The date and time your Medical Scribe job began processing.</p> <p>Timestamps
     * are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>. For example,
     * <code>2022-05-04T12:32:58.789000-07:00</code> represents a Medical Scribe job
     * that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline MedicalScribeJobSummary& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The date and time your Medical Scribe job began processing.</p> <p>Timestamps
     * are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>. For example,
     * <code>2022-05-04T12:32:58.789000-07:00</code> represents a Medical Scribe job
     * that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline MedicalScribeJobSummary& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The date and time the specified Medical Scribe job finished processing.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.761000-07:00</code> represents a Medical
     * Scribe job that finished processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTime() const{ return m_completionTime; }

    /**
     * <p>The date and time the specified Medical Scribe job finished processing.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.761000-07:00</code> represents a Medical
     * Scribe job that finished processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline bool CompletionTimeHasBeenSet() const { return m_completionTimeHasBeenSet; }

    /**
     * <p>The date and time the specified Medical Scribe job finished processing.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.761000-07:00</code> represents a Medical
     * Scribe job that finished processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline void SetCompletionTime(const Aws::Utils::DateTime& value) { m_completionTimeHasBeenSet = true; m_completionTime = value; }

    /**
     * <p>The date and time the specified Medical Scribe job finished processing.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.761000-07:00</code> represents a Medical
     * Scribe job that finished processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline void SetCompletionTime(Aws::Utils::DateTime&& value) { m_completionTimeHasBeenSet = true; m_completionTime = std::move(value); }

    /**
     * <p>The date and time the specified Medical Scribe job finished processing.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.761000-07:00</code> represents a Medical
     * Scribe job that finished processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline MedicalScribeJobSummary& WithCompletionTime(const Aws::Utils::DateTime& value) { SetCompletionTime(value); return *this;}

    /**
     * <p>The date and time the specified Medical Scribe job finished processing.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.761000-07:00</code> represents a Medical
     * Scribe job that finished processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline MedicalScribeJobSummary& WithCompletionTime(Aws::Utils::DateTime&& value) { SetCompletionTime(std::move(value)); return *this;}


    /**
     * <p>The language code used to create your Medical Scribe job. US English
     * (<code>en-US</code>) is the only supported language for Medical Scribe jobs.
     * </p>
     */
    inline const MedicalScribeLanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>The language code used to create your Medical Scribe job. US English
     * (<code>en-US</code>) is the only supported language for Medical Scribe jobs.
     * </p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p>The language code used to create your Medical Scribe job. US English
     * (<code>en-US</code>) is the only supported language for Medical Scribe jobs.
     * </p>
     */
    inline void SetLanguageCode(const MedicalScribeLanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>The language code used to create your Medical Scribe job. US English
     * (<code>en-US</code>) is the only supported language for Medical Scribe jobs.
     * </p>
     */
    inline void SetLanguageCode(MedicalScribeLanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>The language code used to create your Medical Scribe job. US English
     * (<code>en-US</code>) is the only supported language for Medical Scribe jobs.
     * </p>
     */
    inline MedicalScribeJobSummary& WithLanguageCode(const MedicalScribeLanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The language code used to create your Medical Scribe job. US English
     * (<code>en-US</code>) is the only supported language for Medical Scribe jobs.
     * </p>
     */
    inline MedicalScribeJobSummary& WithLanguageCode(MedicalScribeLanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * <p>Provides the status of the specified Medical Scribe job.</p> <p>If the status
     * is <code>COMPLETED</code>, the job is finished and you can find the results at
     * the location specified in <code>MedicalScribeOutput</code> If the status is
     * <code>FAILED</code>, <code>FailureReason</code> provides details on why your
     * Medical Scribe job failed.</p>
     */
    inline const MedicalScribeJobStatus& GetMedicalScribeJobStatus() const{ return m_medicalScribeJobStatus; }

    /**
     * <p>Provides the status of the specified Medical Scribe job.</p> <p>If the status
     * is <code>COMPLETED</code>, the job is finished and you can find the results at
     * the location specified in <code>MedicalScribeOutput</code> If the status is
     * <code>FAILED</code>, <code>FailureReason</code> provides details on why your
     * Medical Scribe job failed.</p>
     */
    inline bool MedicalScribeJobStatusHasBeenSet() const { return m_medicalScribeJobStatusHasBeenSet; }

    /**
     * <p>Provides the status of the specified Medical Scribe job.</p> <p>If the status
     * is <code>COMPLETED</code>, the job is finished and you can find the results at
     * the location specified in <code>MedicalScribeOutput</code> If the status is
     * <code>FAILED</code>, <code>FailureReason</code> provides details on why your
     * Medical Scribe job failed.</p>
     */
    inline void SetMedicalScribeJobStatus(const MedicalScribeJobStatus& value) { m_medicalScribeJobStatusHasBeenSet = true; m_medicalScribeJobStatus = value; }

    /**
     * <p>Provides the status of the specified Medical Scribe job.</p> <p>If the status
     * is <code>COMPLETED</code>, the job is finished and you can find the results at
     * the location specified in <code>MedicalScribeOutput</code> If the status is
     * <code>FAILED</code>, <code>FailureReason</code> provides details on why your
     * Medical Scribe job failed.</p>
     */
    inline void SetMedicalScribeJobStatus(MedicalScribeJobStatus&& value) { m_medicalScribeJobStatusHasBeenSet = true; m_medicalScribeJobStatus = std::move(value); }

    /**
     * <p>Provides the status of the specified Medical Scribe job.</p> <p>If the status
     * is <code>COMPLETED</code>, the job is finished and you can find the results at
     * the location specified in <code>MedicalScribeOutput</code> If the status is
     * <code>FAILED</code>, <code>FailureReason</code> provides details on why your
     * Medical Scribe job failed.</p>
     */
    inline MedicalScribeJobSummary& WithMedicalScribeJobStatus(const MedicalScribeJobStatus& value) { SetMedicalScribeJobStatus(value); return *this;}

    /**
     * <p>Provides the status of the specified Medical Scribe job.</p> <p>If the status
     * is <code>COMPLETED</code>, the job is finished and you can find the results at
     * the location specified in <code>MedicalScribeOutput</code> If the status is
     * <code>FAILED</code>, <code>FailureReason</code> provides details on why your
     * Medical Scribe job failed.</p>
     */
    inline MedicalScribeJobSummary& WithMedicalScribeJobStatus(MedicalScribeJobStatus&& value) { SetMedicalScribeJobStatus(std::move(value)); return *this;}


    /**
     * <p>If <code>MedicalScribeJobStatus</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the transcription job
     * failed. See also: <a
     * href="https://docs.aws.amazon.com/transcribe/latest/APIReference/CommonErrors.html">Common
     * Errors</a>.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>If <code>MedicalScribeJobStatus</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the transcription job
     * failed. See also: <a
     * href="https://docs.aws.amazon.com/transcribe/latest/APIReference/CommonErrors.html">Common
     * Errors</a>.</p>
     */
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }

    /**
     * <p>If <code>MedicalScribeJobStatus</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the transcription job
     * failed. See also: <a
     * href="https://docs.aws.amazon.com/transcribe/latest/APIReference/CommonErrors.html">Common
     * Errors</a>.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    /**
     * <p>If <code>MedicalScribeJobStatus</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the transcription job
     * failed. See also: <a
     * href="https://docs.aws.amazon.com/transcribe/latest/APIReference/CommonErrors.html">Common
     * Errors</a>.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }

    /**
     * <p>If <code>MedicalScribeJobStatus</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the transcription job
     * failed. See also: <a
     * href="https://docs.aws.amazon.com/transcribe/latest/APIReference/CommonErrors.html">Common
     * Errors</a>.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }

    /**
     * <p>If <code>MedicalScribeJobStatus</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the transcription job
     * failed. See also: <a
     * href="https://docs.aws.amazon.com/transcribe/latest/APIReference/CommonErrors.html">Common
     * Errors</a>.</p>
     */
    inline MedicalScribeJobSummary& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>If <code>MedicalScribeJobStatus</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the transcription job
     * failed. See also: <a
     * href="https://docs.aws.amazon.com/transcribe/latest/APIReference/CommonErrors.html">Common
     * Errors</a>.</p>
     */
    inline MedicalScribeJobSummary& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>If <code>MedicalScribeJobStatus</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the transcription job
     * failed. See also: <a
     * href="https://docs.aws.amazon.com/transcribe/latest/APIReference/CommonErrors.html">Common
     * Errors</a>.</p>
     */
    inline MedicalScribeJobSummary& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}

  private:

    Aws::String m_medicalScribeJobName;
    bool m_medicalScribeJobNameHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_completionTime;
    bool m_completionTimeHasBeenSet = false;

    MedicalScribeLanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet = false;

    MedicalScribeJobStatus m_medicalScribeJobStatus;
    bool m_medicalScribeJobStatusHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
