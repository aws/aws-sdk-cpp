/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/transcribe/model/LanguageCode.h>
#include <aws/transcribe/model/TranscriptionJobStatus.h>
#include <aws/transcribe/model/OutputLocationType.h>
#include <aws/transcribe/model/Specialty.h>
#include <aws/transcribe/model/MedicalContentIdentificationType.h>
#include <aws/transcribe/model/Type.h>
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
   * <p>Provides detailed information about a specific medical transcription
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/MedicalTranscriptionJobSummary">AWS
   * API Reference</a></p>
   */
  class MedicalTranscriptionJobSummary
  {
  public:
    AWS_TRANSCRIBESERVICE_API MedicalTranscriptionJobSummary();
    AWS_TRANSCRIBESERVICE_API MedicalTranscriptionJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API MedicalTranscriptionJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the medical transcription job. Job names are case sensitive and
     * must be unique within an Amazon Web Services account.</p>
     */
    inline const Aws::String& GetMedicalTranscriptionJobName() const{ return m_medicalTranscriptionJobName; }

    /**
     * <p>The name of the medical transcription job. Job names are case sensitive and
     * must be unique within an Amazon Web Services account.</p>
     */
    inline bool MedicalTranscriptionJobNameHasBeenSet() const { return m_medicalTranscriptionJobNameHasBeenSet; }

    /**
     * <p>The name of the medical transcription job. Job names are case sensitive and
     * must be unique within an Amazon Web Services account.</p>
     */
    inline void SetMedicalTranscriptionJobName(const Aws::String& value) { m_medicalTranscriptionJobNameHasBeenSet = true; m_medicalTranscriptionJobName = value; }

    /**
     * <p>The name of the medical transcription job. Job names are case sensitive and
     * must be unique within an Amazon Web Services account.</p>
     */
    inline void SetMedicalTranscriptionJobName(Aws::String&& value) { m_medicalTranscriptionJobNameHasBeenSet = true; m_medicalTranscriptionJobName = std::move(value); }

    /**
     * <p>The name of the medical transcription job. Job names are case sensitive and
     * must be unique within an Amazon Web Services account.</p>
     */
    inline void SetMedicalTranscriptionJobName(const char* value) { m_medicalTranscriptionJobNameHasBeenSet = true; m_medicalTranscriptionJobName.assign(value); }

    /**
     * <p>The name of the medical transcription job. Job names are case sensitive and
     * must be unique within an Amazon Web Services account.</p>
     */
    inline MedicalTranscriptionJobSummary& WithMedicalTranscriptionJobName(const Aws::String& value) { SetMedicalTranscriptionJobName(value); return *this;}

    /**
     * <p>The name of the medical transcription job. Job names are case sensitive and
     * must be unique within an Amazon Web Services account.</p>
     */
    inline MedicalTranscriptionJobSummary& WithMedicalTranscriptionJobName(Aws::String&& value) { SetMedicalTranscriptionJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the medical transcription job. Job names are case sensitive and
     * must be unique within an Amazon Web Services account.</p>
     */
    inline MedicalTranscriptionJobSummary& WithMedicalTranscriptionJobName(const char* value) { SetMedicalTranscriptionJobName(value); return *this;}


    /**
     * <p>The date and time the specified medical transcription job request was
     * made.</p> <p>Timestamps are in the format
     * <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>. For example,
     * <code>2022-05-04T12:32:58.761000-07:00</code> represents a transcription job
     * that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The date and time the specified medical transcription job request was
     * made.</p> <p>Timestamps are in the format
     * <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>. For example,
     * <code>2022-05-04T12:32:58.761000-07:00</code> represents a transcription job
     * that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The date and time the specified medical transcription job request was
     * made.</p> <p>Timestamps are in the format
     * <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>. For example,
     * <code>2022-05-04T12:32:58.761000-07:00</code> represents a transcription job
     * that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The date and time the specified medical transcription job request was
     * made.</p> <p>Timestamps are in the format
     * <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>. For example,
     * <code>2022-05-04T12:32:58.761000-07:00</code> represents a transcription job
     * that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The date and time the specified medical transcription job request was
     * made.</p> <p>Timestamps are in the format
     * <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>. For example,
     * <code>2022-05-04T12:32:58.761000-07:00</code> represents a transcription job
     * that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline MedicalTranscriptionJobSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The date and time the specified medical transcription job request was
     * made.</p> <p>Timestamps are in the format
     * <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>. For example,
     * <code>2022-05-04T12:32:58.761000-07:00</code> represents a transcription job
     * that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline MedicalTranscriptionJobSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The date and time your medical transcription job began processing.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.789000-07:00</code> represents a
     * transcription job that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The date and time your medical transcription job began processing.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.789000-07:00</code> represents a
     * transcription job that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The date and time your medical transcription job began processing.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.789000-07:00</code> represents a
     * transcription job that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The date and time your medical transcription job began processing.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.789000-07:00</code> represents a
     * transcription job that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The date and time your medical transcription job began processing.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.789000-07:00</code> represents a
     * transcription job that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline MedicalTranscriptionJobSummary& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The date and time your medical transcription job began processing.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.789000-07:00</code> represents a
     * transcription job that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline MedicalTranscriptionJobSummary& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The date and time the specified medical transcription job finished
     * processing.</p> <p>Timestamps are in the format
     * <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>. For example,
     * <code>2022-05-04T12:33:13.922000-07:00</code> represents a transcription job
     * that started processing at 12:33 PM UTC-7 on May 4, 2022.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTime() const{ return m_completionTime; }

    /**
     * <p>The date and time the specified medical transcription job finished
     * processing.</p> <p>Timestamps are in the format
     * <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>. For example,
     * <code>2022-05-04T12:33:13.922000-07:00</code> represents a transcription job
     * that started processing at 12:33 PM UTC-7 on May 4, 2022.</p>
     */
    inline bool CompletionTimeHasBeenSet() const { return m_completionTimeHasBeenSet; }

    /**
     * <p>The date and time the specified medical transcription job finished
     * processing.</p> <p>Timestamps are in the format
     * <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>. For example,
     * <code>2022-05-04T12:33:13.922000-07:00</code> represents a transcription job
     * that started processing at 12:33 PM UTC-7 on May 4, 2022.</p>
     */
    inline void SetCompletionTime(const Aws::Utils::DateTime& value) { m_completionTimeHasBeenSet = true; m_completionTime = value; }

    /**
     * <p>The date and time the specified medical transcription job finished
     * processing.</p> <p>Timestamps are in the format
     * <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>. For example,
     * <code>2022-05-04T12:33:13.922000-07:00</code> represents a transcription job
     * that started processing at 12:33 PM UTC-7 on May 4, 2022.</p>
     */
    inline void SetCompletionTime(Aws::Utils::DateTime&& value) { m_completionTimeHasBeenSet = true; m_completionTime = std::move(value); }

    /**
     * <p>The date and time the specified medical transcription job finished
     * processing.</p> <p>Timestamps are in the format
     * <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>. For example,
     * <code>2022-05-04T12:33:13.922000-07:00</code> represents a transcription job
     * that started processing at 12:33 PM UTC-7 on May 4, 2022.</p>
     */
    inline MedicalTranscriptionJobSummary& WithCompletionTime(const Aws::Utils::DateTime& value) { SetCompletionTime(value); return *this;}

    /**
     * <p>The date and time the specified medical transcription job finished
     * processing.</p> <p>Timestamps are in the format
     * <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>. For example,
     * <code>2022-05-04T12:33:13.922000-07:00</code> represents a transcription job
     * that started processing at 12:33 PM UTC-7 on May 4, 2022.</p>
     */
    inline MedicalTranscriptionJobSummary& WithCompletionTime(Aws::Utils::DateTime&& value) { SetCompletionTime(std::move(value)); return *this;}


    /**
     * <p>The language code used to create your medical transcription. US English
     * (<code>en-US</code>) is the only supported language for medical
     * transcriptions.</p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>The language code used to create your medical transcription. US English
     * (<code>en-US</code>) is the only supported language for medical
     * transcriptions.</p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p>The language code used to create your medical transcription. US English
     * (<code>en-US</code>) is the only supported language for medical
     * transcriptions.</p>
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>The language code used to create your medical transcription. US English
     * (<code>en-US</code>) is the only supported language for medical
     * transcriptions.</p>
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>The language code used to create your medical transcription. US English
     * (<code>en-US</code>) is the only supported language for medical
     * transcriptions.</p>
     */
    inline MedicalTranscriptionJobSummary& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The language code used to create your medical transcription. US English
     * (<code>en-US</code>) is the only supported language for medical
     * transcriptions.</p>
     */
    inline MedicalTranscriptionJobSummary& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * <p>Provides the status of your medical transcription job.</p> <p>If the status
     * is <code>COMPLETED</code>, the job is finished and you can find the results at
     * the location specified in <code>TranscriptFileUri</code>. If the status is
     * <code>FAILED</code>, <code>FailureReason</code> provides details on why your
     * transcription job failed.</p>
     */
    inline const TranscriptionJobStatus& GetTranscriptionJobStatus() const{ return m_transcriptionJobStatus; }

    /**
     * <p>Provides the status of your medical transcription job.</p> <p>If the status
     * is <code>COMPLETED</code>, the job is finished and you can find the results at
     * the location specified in <code>TranscriptFileUri</code>. If the status is
     * <code>FAILED</code>, <code>FailureReason</code> provides details on why your
     * transcription job failed.</p>
     */
    inline bool TranscriptionJobStatusHasBeenSet() const { return m_transcriptionJobStatusHasBeenSet; }

    /**
     * <p>Provides the status of your medical transcription job.</p> <p>If the status
     * is <code>COMPLETED</code>, the job is finished and you can find the results at
     * the location specified in <code>TranscriptFileUri</code>. If the status is
     * <code>FAILED</code>, <code>FailureReason</code> provides details on why your
     * transcription job failed.</p>
     */
    inline void SetTranscriptionJobStatus(const TranscriptionJobStatus& value) { m_transcriptionJobStatusHasBeenSet = true; m_transcriptionJobStatus = value; }

    /**
     * <p>Provides the status of your medical transcription job.</p> <p>If the status
     * is <code>COMPLETED</code>, the job is finished and you can find the results at
     * the location specified in <code>TranscriptFileUri</code>. If the status is
     * <code>FAILED</code>, <code>FailureReason</code> provides details on why your
     * transcription job failed.</p>
     */
    inline void SetTranscriptionJobStatus(TranscriptionJobStatus&& value) { m_transcriptionJobStatusHasBeenSet = true; m_transcriptionJobStatus = std::move(value); }

    /**
     * <p>Provides the status of your medical transcription job.</p> <p>If the status
     * is <code>COMPLETED</code>, the job is finished and you can find the results at
     * the location specified in <code>TranscriptFileUri</code>. If the status is
     * <code>FAILED</code>, <code>FailureReason</code> provides details on why your
     * transcription job failed.</p>
     */
    inline MedicalTranscriptionJobSummary& WithTranscriptionJobStatus(const TranscriptionJobStatus& value) { SetTranscriptionJobStatus(value); return *this;}

    /**
     * <p>Provides the status of your medical transcription job.</p> <p>If the status
     * is <code>COMPLETED</code>, the job is finished and you can find the results at
     * the location specified in <code>TranscriptFileUri</code>. If the status is
     * <code>FAILED</code>, <code>FailureReason</code> provides details on why your
     * transcription job failed.</p>
     */
    inline MedicalTranscriptionJobSummary& WithTranscriptionJobStatus(TranscriptionJobStatus&& value) { SetTranscriptionJobStatus(std::move(value)); return *this;}


    /**
     * <p>If <code>TranscriptionJobStatus</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the transcription job
     * failed. See also: <a
     * href="https://docs.aws.amazon.com/transcribe/latest/APIReference/CommonErrors.html">Common
     * Errors</a>.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>If <code>TranscriptionJobStatus</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the transcription job
     * failed. See also: <a
     * href="https://docs.aws.amazon.com/transcribe/latest/APIReference/CommonErrors.html">Common
     * Errors</a>.</p>
     */
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }

    /**
     * <p>If <code>TranscriptionJobStatus</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the transcription job
     * failed. See also: <a
     * href="https://docs.aws.amazon.com/transcribe/latest/APIReference/CommonErrors.html">Common
     * Errors</a>.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    /**
     * <p>If <code>TranscriptionJobStatus</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the transcription job
     * failed. See also: <a
     * href="https://docs.aws.amazon.com/transcribe/latest/APIReference/CommonErrors.html">Common
     * Errors</a>.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }

    /**
     * <p>If <code>TranscriptionJobStatus</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the transcription job
     * failed. See also: <a
     * href="https://docs.aws.amazon.com/transcribe/latest/APIReference/CommonErrors.html">Common
     * Errors</a>.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }

    /**
     * <p>If <code>TranscriptionJobStatus</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the transcription job
     * failed. See also: <a
     * href="https://docs.aws.amazon.com/transcribe/latest/APIReference/CommonErrors.html">Common
     * Errors</a>.</p>
     */
    inline MedicalTranscriptionJobSummary& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>If <code>TranscriptionJobStatus</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the transcription job
     * failed. See also: <a
     * href="https://docs.aws.amazon.com/transcribe/latest/APIReference/CommonErrors.html">Common
     * Errors</a>.</p>
     */
    inline MedicalTranscriptionJobSummary& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>If <code>TranscriptionJobStatus</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the transcription job
     * failed. See also: <a
     * href="https://docs.aws.amazon.com/transcribe/latest/APIReference/CommonErrors.html">Common
     * Errors</a>.</p>
     */
    inline MedicalTranscriptionJobSummary& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>Indicates where the specified medical transcription output is stored.</p>
     * <p>If the value is <code>CUSTOMER_BUCKET</code>, the location is the Amazon S3
     * bucket you specified using the <code>OutputBucketName</code> parameter in your
     * request. If you also included <code>OutputKey</code> in your request, your
     * output is located in the path you specified in your request.</p> <p>If the value
     * is <code>SERVICE_BUCKET</code>, the location is a service-managed Amazon S3
     * bucket. To access a transcript stored in a service-managed bucket, use the URI
     * shown in the <code>TranscriptFileUri</code> field.</p>
     */
    inline const OutputLocationType& GetOutputLocationType() const{ return m_outputLocationType; }

    /**
     * <p>Indicates where the specified medical transcription output is stored.</p>
     * <p>If the value is <code>CUSTOMER_BUCKET</code>, the location is the Amazon S3
     * bucket you specified using the <code>OutputBucketName</code> parameter in your
     * request. If you also included <code>OutputKey</code> in your request, your
     * output is located in the path you specified in your request.</p> <p>If the value
     * is <code>SERVICE_BUCKET</code>, the location is a service-managed Amazon S3
     * bucket. To access a transcript stored in a service-managed bucket, use the URI
     * shown in the <code>TranscriptFileUri</code> field.</p>
     */
    inline bool OutputLocationTypeHasBeenSet() const { return m_outputLocationTypeHasBeenSet; }

    /**
     * <p>Indicates where the specified medical transcription output is stored.</p>
     * <p>If the value is <code>CUSTOMER_BUCKET</code>, the location is the Amazon S3
     * bucket you specified using the <code>OutputBucketName</code> parameter in your
     * request. If you also included <code>OutputKey</code> in your request, your
     * output is located in the path you specified in your request.</p> <p>If the value
     * is <code>SERVICE_BUCKET</code>, the location is a service-managed Amazon S3
     * bucket. To access a transcript stored in a service-managed bucket, use the URI
     * shown in the <code>TranscriptFileUri</code> field.</p>
     */
    inline void SetOutputLocationType(const OutputLocationType& value) { m_outputLocationTypeHasBeenSet = true; m_outputLocationType = value; }

    /**
     * <p>Indicates where the specified medical transcription output is stored.</p>
     * <p>If the value is <code>CUSTOMER_BUCKET</code>, the location is the Amazon S3
     * bucket you specified using the <code>OutputBucketName</code> parameter in your
     * request. If you also included <code>OutputKey</code> in your request, your
     * output is located in the path you specified in your request.</p> <p>If the value
     * is <code>SERVICE_BUCKET</code>, the location is a service-managed Amazon S3
     * bucket. To access a transcript stored in a service-managed bucket, use the URI
     * shown in the <code>TranscriptFileUri</code> field.</p>
     */
    inline void SetOutputLocationType(OutputLocationType&& value) { m_outputLocationTypeHasBeenSet = true; m_outputLocationType = std::move(value); }

    /**
     * <p>Indicates where the specified medical transcription output is stored.</p>
     * <p>If the value is <code>CUSTOMER_BUCKET</code>, the location is the Amazon S3
     * bucket you specified using the <code>OutputBucketName</code> parameter in your
     * request. If you also included <code>OutputKey</code> in your request, your
     * output is located in the path you specified in your request.</p> <p>If the value
     * is <code>SERVICE_BUCKET</code>, the location is a service-managed Amazon S3
     * bucket. To access a transcript stored in a service-managed bucket, use the URI
     * shown in the <code>TranscriptFileUri</code> field.</p>
     */
    inline MedicalTranscriptionJobSummary& WithOutputLocationType(const OutputLocationType& value) { SetOutputLocationType(value); return *this;}

    /**
     * <p>Indicates where the specified medical transcription output is stored.</p>
     * <p>If the value is <code>CUSTOMER_BUCKET</code>, the location is the Amazon S3
     * bucket you specified using the <code>OutputBucketName</code> parameter in your
     * request. If you also included <code>OutputKey</code> in your request, your
     * output is located in the path you specified in your request.</p> <p>If the value
     * is <code>SERVICE_BUCKET</code>, the location is a service-managed Amazon S3
     * bucket. To access a transcript stored in a service-managed bucket, use the URI
     * shown in the <code>TranscriptFileUri</code> field.</p>
     */
    inline MedicalTranscriptionJobSummary& WithOutputLocationType(OutputLocationType&& value) { SetOutputLocationType(std::move(value)); return *this;}


    /**
     * <p>Provides the medical specialty represented in your media.</p>
     */
    inline const Specialty& GetSpecialty() const{ return m_specialty; }

    /**
     * <p>Provides the medical specialty represented in your media.</p>
     */
    inline bool SpecialtyHasBeenSet() const { return m_specialtyHasBeenSet; }

    /**
     * <p>Provides the medical specialty represented in your media.</p>
     */
    inline void SetSpecialty(const Specialty& value) { m_specialtyHasBeenSet = true; m_specialty = value; }

    /**
     * <p>Provides the medical specialty represented in your media.</p>
     */
    inline void SetSpecialty(Specialty&& value) { m_specialtyHasBeenSet = true; m_specialty = std::move(value); }

    /**
     * <p>Provides the medical specialty represented in your media.</p>
     */
    inline MedicalTranscriptionJobSummary& WithSpecialty(const Specialty& value) { SetSpecialty(value); return *this;}

    /**
     * <p>Provides the medical specialty represented in your media.</p>
     */
    inline MedicalTranscriptionJobSummary& WithSpecialty(Specialty&& value) { SetSpecialty(std::move(value)); return *this;}


    /**
     * <p>Labels all personal health information (PHI) identified in your transcript.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/phi-id.html">Identifying
     * personal health information (PHI) in a transcription</a>.</p>
     */
    inline const MedicalContentIdentificationType& GetContentIdentificationType() const{ return m_contentIdentificationType; }

    /**
     * <p>Labels all personal health information (PHI) identified in your transcript.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/phi-id.html">Identifying
     * personal health information (PHI) in a transcription</a>.</p>
     */
    inline bool ContentIdentificationTypeHasBeenSet() const { return m_contentIdentificationTypeHasBeenSet; }

    /**
     * <p>Labels all personal health information (PHI) identified in your transcript.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/phi-id.html">Identifying
     * personal health information (PHI) in a transcription</a>.</p>
     */
    inline void SetContentIdentificationType(const MedicalContentIdentificationType& value) { m_contentIdentificationTypeHasBeenSet = true; m_contentIdentificationType = value; }

    /**
     * <p>Labels all personal health information (PHI) identified in your transcript.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/phi-id.html">Identifying
     * personal health information (PHI) in a transcription</a>.</p>
     */
    inline void SetContentIdentificationType(MedicalContentIdentificationType&& value) { m_contentIdentificationTypeHasBeenSet = true; m_contentIdentificationType = std::move(value); }

    /**
     * <p>Labels all personal health information (PHI) identified in your transcript.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/phi-id.html">Identifying
     * personal health information (PHI) in a transcription</a>.</p>
     */
    inline MedicalTranscriptionJobSummary& WithContentIdentificationType(const MedicalContentIdentificationType& value) { SetContentIdentificationType(value); return *this;}

    /**
     * <p>Labels all personal health information (PHI) identified in your transcript.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/phi-id.html">Identifying
     * personal health information (PHI) in a transcription</a>.</p>
     */
    inline MedicalTranscriptionJobSummary& WithContentIdentificationType(MedicalContentIdentificationType&& value) { SetContentIdentificationType(std::move(value)); return *this;}


    /**
     * <p>Indicates whether the input media is a dictation or a conversation, as
     * specified in the <code>StartMedicalTranscriptionJob</code> request.</p>
     */
    inline const Type& GetType() const{ return m_type; }

    /**
     * <p>Indicates whether the input media is a dictation or a conversation, as
     * specified in the <code>StartMedicalTranscriptionJob</code> request.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Indicates whether the input media is a dictation or a conversation, as
     * specified in the <code>StartMedicalTranscriptionJob</code> request.</p>
     */
    inline void SetType(const Type& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Indicates whether the input media is a dictation or a conversation, as
     * specified in the <code>StartMedicalTranscriptionJob</code> request.</p>
     */
    inline void SetType(Type&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Indicates whether the input media is a dictation or a conversation, as
     * specified in the <code>StartMedicalTranscriptionJob</code> request.</p>
     */
    inline MedicalTranscriptionJobSummary& WithType(const Type& value) { SetType(value); return *this;}

    /**
     * <p>Indicates whether the input media is a dictation or a conversation, as
     * specified in the <code>StartMedicalTranscriptionJob</code> request.</p>
     */
    inline MedicalTranscriptionJobSummary& WithType(Type&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_medicalTranscriptionJobName;
    bool m_medicalTranscriptionJobNameHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_completionTime;
    bool m_completionTimeHasBeenSet = false;

    LanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet = false;

    TranscriptionJobStatus m_transcriptionJobStatus;
    bool m_transcriptionJobStatusHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    OutputLocationType m_outputLocationType;
    bool m_outputLocationTypeHasBeenSet = false;

    Specialty m_specialty;
    bool m_specialtyHasBeenSet = false;

    MedicalContentIdentificationType m_contentIdentificationType;
    bool m_contentIdentificationTypeHasBeenSet = false;

    Type m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
