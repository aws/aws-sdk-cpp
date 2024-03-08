/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/transcribe/model/MedicalScribeJobStatus.h>
#include <aws/transcribe/model/MedicalScribeLanguageCode.h>
#include <aws/transcribe/model/Media.h>
#include <aws/transcribe/model/MedicalScribeOutput.h>
#include <aws/core/utils/DateTime.h>
#include <aws/transcribe/model/MedicalScribeSettings.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/transcribe/model/MedicalScribeChannelDefinition.h>
#include <aws/transcribe/model/Tag.h>
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
   * <p>Provides detailed information about a Medical Scribe job.</p> <p>To view the
   * status of the specified Medical Scribe job, check the
   * <code>MedicalScribeJobStatus</code> field. If the status is
   * <code>COMPLETED</code>, the job is finished and you can find the results at the
   * locations specified in <code>MedicalScribeOutput</code>. If the status is
   * <code>FAILED</code>, <code>FailureReason</code> provides details on why your
   * Medical Scribe job failed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/MedicalScribeJob">AWS
   * API Reference</a></p>
   */
  class MedicalScribeJob
  {
  public:
    AWS_TRANSCRIBESERVICE_API MedicalScribeJob();
    AWS_TRANSCRIBESERVICE_API MedicalScribeJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API MedicalScribeJob& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline MedicalScribeJob& WithMedicalScribeJobName(const Aws::String& value) { SetMedicalScribeJobName(value); return *this;}

    /**
     * <p>The name of the Medical Scribe job. Job names are case sensitive and must be
     * unique within an Amazon Web Services account.</p>
     */
    inline MedicalScribeJob& WithMedicalScribeJobName(Aws::String&& value) { SetMedicalScribeJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the Medical Scribe job. Job names are case sensitive and must be
     * unique within an Amazon Web Services account.</p>
     */
    inline MedicalScribeJob& WithMedicalScribeJobName(const char* value) { SetMedicalScribeJobName(value); return *this;}


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
    inline MedicalScribeJob& WithMedicalScribeJobStatus(const MedicalScribeJobStatus& value) { SetMedicalScribeJobStatus(value); return *this;}

    /**
     * <p>Provides the status of the specified Medical Scribe job.</p> <p>If the status
     * is <code>COMPLETED</code>, the job is finished and you can find the results at
     * the location specified in <code>MedicalScribeOutput</code> If the status is
     * <code>FAILED</code>, <code>FailureReason</code> provides details on why your
     * Medical Scribe job failed.</p>
     */
    inline MedicalScribeJob& WithMedicalScribeJobStatus(MedicalScribeJobStatus&& value) { SetMedicalScribeJobStatus(std::move(value)); return *this;}


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
    inline MedicalScribeJob& WithLanguageCode(const MedicalScribeLanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The language code used to create your Medical Scribe job. US English
     * (<code>en-US</code>) is the only supported language for Medical Scribe jobs.
     * </p>
     */
    inline MedicalScribeJob& WithLanguageCode(MedicalScribeLanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    
    inline const Media& GetMedia() const{ return m_media; }

    
    inline bool MediaHasBeenSet() const { return m_mediaHasBeenSet; }

    
    inline void SetMedia(const Media& value) { m_mediaHasBeenSet = true; m_media = value; }

    
    inline void SetMedia(Media&& value) { m_mediaHasBeenSet = true; m_media = std::move(value); }

    
    inline MedicalScribeJob& WithMedia(const Media& value) { SetMedia(value); return *this;}

    
    inline MedicalScribeJob& WithMedia(Media&& value) { SetMedia(std::move(value)); return *this;}


    /**
     * <p>The location of the output of your Medical Scribe job.
     * <code>ClinicalDocumentUri</code> holds the Amazon S3 URI for the Clinical
     * Document and <code>TranscriptFileUri</code> holds the Amazon S3 URI for the
     * Transcript.</p>
     */
    inline const MedicalScribeOutput& GetMedicalScribeOutput() const{ return m_medicalScribeOutput; }

    /**
     * <p>The location of the output of your Medical Scribe job.
     * <code>ClinicalDocumentUri</code> holds the Amazon S3 URI for the Clinical
     * Document and <code>TranscriptFileUri</code> holds the Amazon S3 URI for the
     * Transcript.</p>
     */
    inline bool MedicalScribeOutputHasBeenSet() const { return m_medicalScribeOutputHasBeenSet; }

    /**
     * <p>The location of the output of your Medical Scribe job.
     * <code>ClinicalDocumentUri</code> holds the Amazon S3 URI for the Clinical
     * Document and <code>TranscriptFileUri</code> holds the Amazon S3 URI for the
     * Transcript.</p>
     */
    inline void SetMedicalScribeOutput(const MedicalScribeOutput& value) { m_medicalScribeOutputHasBeenSet = true; m_medicalScribeOutput = value; }

    /**
     * <p>The location of the output of your Medical Scribe job.
     * <code>ClinicalDocumentUri</code> holds the Amazon S3 URI for the Clinical
     * Document and <code>TranscriptFileUri</code> holds the Amazon S3 URI for the
     * Transcript.</p>
     */
    inline void SetMedicalScribeOutput(MedicalScribeOutput&& value) { m_medicalScribeOutputHasBeenSet = true; m_medicalScribeOutput = std::move(value); }

    /**
     * <p>The location of the output of your Medical Scribe job.
     * <code>ClinicalDocumentUri</code> holds the Amazon S3 URI for the Clinical
     * Document and <code>TranscriptFileUri</code> holds the Amazon S3 URI for the
     * Transcript.</p>
     */
    inline MedicalScribeJob& WithMedicalScribeOutput(const MedicalScribeOutput& value) { SetMedicalScribeOutput(value); return *this;}

    /**
     * <p>The location of the output of your Medical Scribe job.
     * <code>ClinicalDocumentUri</code> holds the Amazon S3 URI for the Clinical
     * Document and <code>TranscriptFileUri</code> holds the Amazon S3 URI for the
     * Transcript.</p>
     */
    inline MedicalScribeJob& WithMedicalScribeOutput(MedicalScribeOutput&& value) { SetMedicalScribeOutput(std::move(value)); return *this;}


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
    inline MedicalScribeJob& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The date and time your Medical Scribe job began processing.</p> <p>Timestamps
     * are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>. For example,
     * <code>2022-05-04T12:32:58.789000-07:00</code> represents a Medical Scribe job
     * that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline MedicalScribeJob& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


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
    inline MedicalScribeJob& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The date and time the specified Medical Scribe job request was made.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.761000-07:00</code> represents a Medical
     * Scribe job that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline MedicalScribeJob& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


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
    inline MedicalScribeJob& WithCompletionTime(const Aws::Utils::DateTime& value) { SetCompletionTime(value); return *this;}

    /**
     * <p>The date and time the specified Medical Scribe job finished processing.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.761000-07:00</code> represents a Medical
     * Scribe job that finished processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline MedicalScribeJob& WithCompletionTime(Aws::Utils::DateTime&& value) { SetCompletionTime(std::move(value)); return *this;}


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
    inline MedicalScribeJob& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>If <code>MedicalScribeJobStatus</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the transcription job
     * failed. See also: <a
     * href="https://docs.aws.amazon.com/transcribe/latest/APIReference/CommonErrors.html">Common
     * Errors</a>.</p>
     */
    inline MedicalScribeJob& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>If <code>MedicalScribeJobStatus</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the transcription job
     * failed. See also: <a
     * href="https://docs.aws.amazon.com/transcribe/latest/APIReference/CommonErrors.html">Common
     * Errors</a>.</p>
     */
    inline MedicalScribeJob& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>Makes it possible to control how your Medical Scribe job is processed using a
     * <code>MedicalScribeSettings</code> object. Specify
     * <code>ChannelIdentification</code> if <code>ChannelDefinitions</code> are set.
     * Enabled <code>ShowSpeakerLabels</code> if <code>ChannelIdentification</code> and
     * <code>ChannelDefinitions</code> are not set. One and only one of
     * <code>ChannelIdentification</code> and <code>ShowSpeakerLabels</code> must be
     * set. If <code>ShowSpeakerLabels</code> is set, <code>MaxSpeakerLabels</code>
     * must also be set. Use <code>Settings</code> to specify a vocabulary or
     * vocabulary filter or both using <code>VocabularyName</code>,
     * <code>VocabularyFilterName</code>. <code>VocabularyFilterMethod</code> must be
     * specified if <code>VocabularyFilterName</code> is set. </p>
     */
    inline const MedicalScribeSettings& GetSettings() const{ return m_settings; }

    /**
     * <p>Makes it possible to control how your Medical Scribe job is processed using a
     * <code>MedicalScribeSettings</code> object. Specify
     * <code>ChannelIdentification</code> if <code>ChannelDefinitions</code> are set.
     * Enabled <code>ShowSpeakerLabels</code> if <code>ChannelIdentification</code> and
     * <code>ChannelDefinitions</code> are not set. One and only one of
     * <code>ChannelIdentification</code> and <code>ShowSpeakerLabels</code> must be
     * set. If <code>ShowSpeakerLabels</code> is set, <code>MaxSpeakerLabels</code>
     * must also be set. Use <code>Settings</code> to specify a vocabulary or
     * vocabulary filter or both using <code>VocabularyName</code>,
     * <code>VocabularyFilterName</code>. <code>VocabularyFilterMethod</code> must be
     * specified if <code>VocabularyFilterName</code> is set. </p>
     */
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }

    /**
     * <p>Makes it possible to control how your Medical Scribe job is processed using a
     * <code>MedicalScribeSettings</code> object. Specify
     * <code>ChannelIdentification</code> if <code>ChannelDefinitions</code> are set.
     * Enabled <code>ShowSpeakerLabels</code> if <code>ChannelIdentification</code> and
     * <code>ChannelDefinitions</code> are not set. One and only one of
     * <code>ChannelIdentification</code> and <code>ShowSpeakerLabels</code> must be
     * set. If <code>ShowSpeakerLabels</code> is set, <code>MaxSpeakerLabels</code>
     * must also be set. Use <code>Settings</code> to specify a vocabulary or
     * vocabulary filter or both using <code>VocabularyName</code>,
     * <code>VocabularyFilterName</code>. <code>VocabularyFilterMethod</code> must be
     * specified if <code>VocabularyFilterName</code> is set. </p>
     */
    inline void SetSettings(const MedicalScribeSettings& value) { m_settingsHasBeenSet = true; m_settings = value; }

    /**
     * <p>Makes it possible to control how your Medical Scribe job is processed using a
     * <code>MedicalScribeSettings</code> object. Specify
     * <code>ChannelIdentification</code> if <code>ChannelDefinitions</code> are set.
     * Enabled <code>ShowSpeakerLabels</code> if <code>ChannelIdentification</code> and
     * <code>ChannelDefinitions</code> are not set. One and only one of
     * <code>ChannelIdentification</code> and <code>ShowSpeakerLabels</code> must be
     * set. If <code>ShowSpeakerLabels</code> is set, <code>MaxSpeakerLabels</code>
     * must also be set. Use <code>Settings</code> to specify a vocabulary or
     * vocabulary filter or both using <code>VocabularyName</code>,
     * <code>VocabularyFilterName</code>. <code>VocabularyFilterMethod</code> must be
     * specified if <code>VocabularyFilterName</code> is set. </p>
     */
    inline void SetSettings(MedicalScribeSettings&& value) { m_settingsHasBeenSet = true; m_settings = std::move(value); }

    /**
     * <p>Makes it possible to control how your Medical Scribe job is processed using a
     * <code>MedicalScribeSettings</code> object. Specify
     * <code>ChannelIdentification</code> if <code>ChannelDefinitions</code> are set.
     * Enabled <code>ShowSpeakerLabels</code> if <code>ChannelIdentification</code> and
     * <code>ChannelDefinitions</code> are not set. One and only one of
     * <code>ChannelIdentification</code> and <code>ShowSpeakerLabels</code> must be
     * set. If <code>ShowSpeakerLabels</code> is set, <code>MaxSpeakerLabels</code>
     * must also be set. Use <code>Settings</code> to specify a vocabulary or
     * vocabulary filter or both using <code>VocabularyName</code>,
     * <code>VocabularyFilterName</code>. <code>VocabularyFilterMethod</code> must be
     * specified if <code>VocabularyFilterName</code> is set. </p>
     */
    inline MedicalScribeJob& WithSettings(const MedicalScribeSettings& value) { SetSettings(value); return *this;}

    /**
     * <p>Makes it possible to control how your Medical Scribe job is processed using a
     * <code>MedicalScribeSettings</code> object. Specify
     * <code>ChannelIdentification</code> if <code>ChannelDefinitions</code> are set.
     * Enabled <code>ShowSpeakerLabels</code> if <code>ChannelIdentification</code> and
     * <code>ChannelDefinitions</code> are not set. One and only one of
     * <code>ChannelIdentification</code> and <code>ShowSpeakerLabels</code> must be
     * set. If <code>ShowSpeakerLabels</code> is set, <code>MaxSpeakerLabels</code>
     * must also be set. Use <code>Settings</code> to specify a vocabulary or
     * vocabulary filter or both using <code>VocabularyName</code>,
     * <code>VocabularyFilterName</code>. <code>VocabularyFilterMethod</code> must be
     * specified if <code>VocabularyFilterName</code> is set. </p>
     */
    inline MedicalScribeJob& WithSettings(MedicalScribeSettings&& value) { SetSettings(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permissions to access
     * the Amazon S3 bucket that contains your input files, write to the output bucket,
     * and use your KMS key if supplied. If the role that you specify doesn’t have the
     * appropriate permissions your request fails.</p> <p>IAM role ARNs have the format
     * <code>arn:partition:iam::account:role/role-name-with-path</code>. For example:
     * <code>arn:aws:iam::111122223333:role/Admin</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-arns">IAM
     * ARNs</a>.</p>
     */
    inline const Aws::String& GetDataAccessRoleArn() const{ return m_dataAccessRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permissions to access
     * the Amazon S3 bucket that contains your input files, write to the output bucket,
     * and use your KMS key if supplied. If the role that you specify doesn’t have the
     * appropriate permissions your request fails.</p> <p>IAM role ARNs have the format
     * <code>arn:partition:iam::account:role/role-name-with-path</code>. For example:
     * <code>arn:aws:iam::111122223333:role/Admin</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-arns">IAM
     * ARNs</a>.</p>
     */
    inline bool DataAccessRoleArnHasBeenSet() const { return m_dataAccessRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permissions to access
     * the Amazon S3 bucket that contains your input files, write to the output bucket,
     * and use your KMS key if supplied. If the role that you specify doesn’t have the
     * appropriate permissions your request fails.</p> <p>IAM role ARNs have the format
     * <code>arn:partition:iam::account:role/role-name-with-path</code>. For example:
     * <code>arn:aws:iam::111122223333:role/Admin</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-arns">IAM
     * ARNs</a>.</p>
     */
    inline void SetDataAccessRoleArn(const Aws::String& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permissions to access
     * the Amazon S3 bucket that contains your input files, write to the output bucket,
     * and use your KMS key if supplied. If the role that you specify doesn’t have the
     * appropriate permissions your request fails.</p> <p>IAM role ARNs have the format
     * <code>arn:partition:iam::account:role/role-name-with-path</code>. For example:
     * <code>arn:aws:iam::111122223333:role/Admin</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-arns">IAM
     * ARNs</a>.</p>
     */
    inline void SetDataAccessRoleArn(Aws::String&& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permissions to access
     * the Amazon S3 bucket that contains your input files, write to the output bucket,
     * and use your KMS key if supplied. If the role that you specify doesn’t have the
     * appropriate permissions your request fails.</p> <p>IAM role ARNs have the format
     * <code>arn:partition:iam::account:role/role-name-with-path</code>. For example:
     * <code>arn:aws:iam::111122223333:role/Admin</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-arns">IAM
     * ARNs</a>.</p>
     */
    inline void SetDataAccessRoleArn(const char* value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permissions to access
     * the Amazon S3 bucket that contains your input files, write to the output bucket,
     * and use your KMS key if supplied. If the role that you specify doesn’t have the
     * appropriate permissions your request fails.</p> <p>IAM role ARNs have the format
     * <code>arn:partition:iam::account:role/role-name-with-path</code>. For example:
     * <code>arn:aws:iam::111122223333:role/Admin</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-arns">IAM
     * ARNs</a>.</p>
     */
    inline MedicalScribeJob& WithDataAccessRoleArn(const Aws::String& value) { SetDataAccessRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permissions to access
     * the Amazon S3 bucket that contains your input files, write to the output bucket,
     * and use your KMS key if supplied. If the role that you specify doesn’t have the
     * appropriate permissions your request fails.</p> <p>IAM role ARNs have the format
     * <code>arn:partition:iam::account:role/role-name-with-path</code>. For example:
     * <code>arn:aws:iam::111122223333:role/Admin</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-arns">IAM
     * ARNs</a>.</p>
     */
    inline MedicalScribeJob& WithDataAccessRoleArn(Aws::String&& value) { SetDataAccessRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permissions to access
     * the Amazon S3 bucket that contains your input files, write to the output bucket,
     * and use your KMS key if supplied. If the role that you specify doesn’t have the
     * appropriate permissions your request fails.</p> <p>IAM role ARNs have the format
     * <code>arn:partition:iam::account:role/role-name-with-path</code>. For example:
     * <code>arn:aws:iam::111122223333:role/Admin</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-arns">IAM
     * ARNs</a>.</p>
     */
    inline MedicalScribeJob& WithDataAccessRoleArn(const char* value) { SetDataAccessRoleArn(value); return *this;}


    /**
     * <p>Makes it possible to specify which speaker is on which channel. For example,
     * if the clinician is the first participant to speak, you would set
     * <code>ChannelId</code> of the first <code>ChannelDefinition</code> in the list
     * to <code>0</code> (to indicate the first channel) and
     * <code>ParticipantRole</code> to <code>CLINICIAN</code> (to indicate that it's
     * the clinician speaking). Then you would set the <code>ChannelId</code> of the
     * second <code>ChannelDefinition</code> in the list to <code>1</code> (to indicate
     * the second channel) and <code>ParticipantRole</code> to <code>PATIENT</code> (to
     * indicate that it's the patient speaking). </p>
     */
    inline const Aws::Vector<MedicalScribeChannelDefinition>& GetChannelDefinitions() const{ return m_channelDefinitions; }

    /**
     * <p>Makes it possible to specify which speaker is on which channel. For example,
     * if the clinician is the first participant to speak, you would set
     * <code>ChannelId</code> of the first <code>ChannelDefinition</code> in the list
     * to <code>0</code> (to indicate the first channel) and
     * <code>ParticipantRole</code> to <code>CLINICIAN</code> (to indicate that it's
     * the clinician speaking). Then you would set the <code>ChannelId</code> of the
     * second <code>ChannelDefinition</code> in the list to <code>1</code> (to indicate
     * the second channel) and <code>ParticipantRole</code> to <code>PATIENT</code> (to
     * indicate that it's the patient speaking). </p>
     */
    inline bool ChannelDefinitionsHasBeenSet() const { return m_channelDefinitionsHasBeenSet; }

    /**
     * <p>Makes it possible to specify which speaker is on which channel. For example,
     * if the clinician is the first participant to speak, you would set
     * <code>ChannelId</code> of the first <code>ChannelDefinition</code> in the list
     * to <code>0</code> (to indicate the first channel) and
     * <code>ParticipantRole</code> to <code>CLINICIAN</code> (to indicate that it's
     * the clinician speaking). Then you would set the <code>ChannelId</code> of the
     * second <code>ChannelDefinition</code> in the list to <code>1</code> (to indicate
     * the second channel) and <code>ParticipantRole</code> to <code>PATIENT</code> (to
     * indicate that it's the patient speaking). </p>
     */
    inline void SetChannelDefinitions(const Aws::Vector<MedicalScribeChannelDefinition>& value) { m_channelDefinitionsHasBeenSet = true; m_channelDefinitions = value; }

    /**
     * <p>Makes it possible to specify which speaker is on which channel. For example,
     * if the clinician is the first participant to speak, you would set
     * <code>ChannelId</code> of the first <code>ChannelDefinition</code> in the list
     * to <code>0</code> (to indicate the first channel) and
     * <code>ParticipantRole</code> to <code>CLINICIAN</code> (to indicate that it's
     * the clinician speaking). Then you would set the <code>ChannelId</code> of the
     * second <code>ChannelDefinition</code> in the list to <code>1</code> (to indicate
     * the second channel) and <code>ParticipantRole</code> to <code>PATIENT</code> (to
     * indicate that it's the patient speaking). </p>
     */
    inline void SetChannelDefinitions(Aws::Vector<MedicalScribeChannelDefinition>&& value) { m_channelDefinitionsHasBeenSet = true; m_channelDefinitions = std::move(value); }

    /**
     * <p>Makes it possible to specify which speaker is on which channel. For example,
     * if the clinician is the first participant to speak, you would set
     * <code>ChannelId</code> of the first <code>ChannelDefinition</code> in the list
     * to <code>0</code> (to indicate the first channel) and
     * <code>ParticipantRole</code> to <code>CLINICIAN</code> (to indicate that it's
     * the clinician speaking). Then you would set the <code>ChannelId</code> of the
     * second <code>ChannelDefinition</code> in the list to <code>1</code> (to indicate
     * the second channel) and <code>ParticipantRole</code> to <code>PATIENT</code> (to
     * indicate that it's the patient speaking). </p>
     */
    inline MedicalScribeJob& WithChannelDefinitions(const Aws::Vector<MedicalScribeChannelDefinition>& value) { SetChannelDefinitions(value); return *this;}

    /**
     * <p>Makes it possible to specify which speaker is on which channel. For example,
     * if the clinician is the first participant to speak, you would set
     * <code>ChannelId</code> of the first <code>ChannelDefinition</code> in the list
     * to <code>0</code> (to indicate the first channel) and
     * <code>ParticipantRole</code> to <code>CLINICIAN</code> (to indicate that it's
     * the clinician speaking). Then you would set the <code>ChannelId</code> of the
     * second <code>ChannelDefinition</code> in the list to <code>1</code> (to indicate
     * the second channel) and <code>ParticipantRole</code> to <code>PATIENT</code> (to
     * indicate that it's the patient speaking). </p>
     */
    inline MedicalScribeJob& WithChannelDefinitions(Aws::Vector<MedicalScribeChannelDefinition>&& value) { SetChannelDefinitions(std::move(value)); return *this;}

    /**
     * <p>Makes it possible to specify which speaker is on which channel. For example,
     * if the clinician is the first participant to speak, you would set
     * <code>ChannelId</code> of the first <code>ChannelDefinition</code> in the list
     * to <code>0</code> (to indicate the first channel) and
     * <code>ParticipantRole</code> to <code>CLINICIAN</code> (to indicate that it's
     * the clinician speaking). Then you would set the <code>ChannelId</code> of the
     * second <code>ChannelDefinition</code> in the list to <code>1</code> (to indicate
     * the second channel) and <code>ParticipantRole</code> to <code>PATIENT</code> (to
     * indicate that it's the patient speaking). </p>
     */
    inline MedicalScribeJob& AddChannelDefinitions(const MedicalScribeChannelDefinition& value) { m_channelDefinitionsHasBeenSet = true; m_channelDefinitions.push_back(value); return *this; }

    /**
     * <p>Makes it possible to specify which speaker is on which channel. For example,
     * if the clinician is the first participant to speak, you would set
     * <code>ChannelId</code> of the first <code>ChannelDefinition</code> in the list
     * to <code>0</code> (to indicate the first channel) and
     * <code>ParticipantRole</code> to <code>CLINICIAN</code> (to indicate that it's
     * the clinician speaking). Then you would set the <code>ChannelId</code> of the
     * second <code>ChannelDefinition</code> in the list to <code>1</code> (to indicate
     * the second channel) and <code>ParticipantRole</code> to <code>PATIENT</code> (to
     * indicate that it's the patient speaking). </p>
     */
    inline MedicalScribeJob& AddChannelDefinitions(MedicalScribeChannelDefinition&& value) { m_channelDefinitionsHasBeenSet = true; m_channelDefinitions.push_back(std::move(value)); return *this; }


    /**
     * <p>Adds one or more custom tags, each in the form of a key:value pair, to the
     * Medica Scribe job.</p> <p>To learn more about using tags with Amazon Transcribe,
     * refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/tagging.html">Tagging
     * resources</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Adds one or more custom tags, each in the form of a key:value pair, to the
     * Medica Scribe job.</p> <p>To learn more about using tags with Amazon Transcribe,
     * refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/tagging.html">Tagging
     * resources</a>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Adds one or more custom tags, each in the form of a key:value pair, to the
     * Medica Scribe job.</p> <p>To learn more about using tags with Amazon Transcribe,
     * refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/tagging.html">Tagging
     * resources</a>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Adds one or more custom tags, each in the form of a key:value pair, to the
     * Medica Scribe job.</p> <p>To learn more about using tags with Amazon Transcribe,
     * refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/tagging.html">Tagging
     * resources</a>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Adds one or more custom tags, each in the form of a key:value pair, to the
     * Medica Scribe job.</p> <p>To learn more about using tags with Amazon Transcribe,
     * refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/tagging.html">Tagging
     * resources</a>.</p>
     */
    inline MedicalScribeJob& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Adds one or more custom tags, each in the form of a key:value pair, to the
     * Medica Scribe job.</p> <p>To learn more about using tags with Amazon Transcribe,
     * refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/tagging.html">Tagging
     * resources</a>.</p>
     */
    inline MedicalScribeJob& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Adds one or more custom tags, each in the form of a key:value pair, to the
     * Medica Scribe job.</p> <p>To learn more about using tags with Amazon Transcribe,
     * refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/tagging.html">Tagging
     * resources</a>.</p>
     */
    inline MedicalScribeJob& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Adds one or more custom tags, each in the form of a key:value pair, to the
     * Medica Scribe job.</p> <p>To learn more about using tags with Amazon Transcribe,
     * refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/tagging.html">Tagging
     * resources</a>.</p>
     */
    inline MedicalScribeJob& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_medicalScribeJobName;
    bool m_medicalScribeJobNameHasBeenSet = false;

    MedicalScribeJobStatus m_medicalScribeJobStatus;
    bool m_medicalScribeJobStatusHasBeenSet = false;

    MedicalScribeLanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet = false;

    Media m_media;
    bool m_mediaHasBeenSet = false;

    MedicalScribeOutput m_medicalScribeOutput;
    bool m_medicalScribeOutputHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_completionTime;
    bool m_completionTimeHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    MedicalScribeSettings m_settings;
    bool m_settingsHasBeenSet = false;

    Aws::String m_dataAccessRoleArn;
    bool m_dataAccessRoleArnHasBeenSet = false;

    Aws::Vector<MedicalScribeChannelDefinition> m_channelDefinitions;
    bool m_channelDefinitionsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
