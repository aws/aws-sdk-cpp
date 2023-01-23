/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/transcribe/model/TranscriptionJobStatus.h>
#include <aws/transcribe/model/LanguageCode.h>
#include <aws/transcribe/model/MediaFormat.h>
#include <aws/transcribe/model/Media.h>
#include <aws/transcribe/model/MedicalTranscript.h>
#include <aws/core/utils/DateTime.h>
#include <aws/transcribe/model/MedicalTranscriptionSetting.h>
#include <aws/transcribe/model/MedicalContentIdentificationType.h>
#include <aws/transcribe/model/Specialty.h>
#include <aws/transcribe/model/Type.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Provides detailed information about a medical transcription job.</p> <p>To
   * view the status of the specified medical transcription job, check the
   * <code>TranscriptionJobStatus</code> field. If the status is
   * <code>COMPLETED</code>, the job is finished and you can find the results at the
   * location specified in <code>TranscriptFileUri</code>. If the status is
   * <code>FAILED</code>, <code>FailureReason</code> provides details on why your
   * transcription job failed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/MedicalTranscriptionJob">AWS
   * API Reference</a></p>
   */
  class MedicalTranscriptionJob
  {
  public:
    AWS_TRANSCRIBESERVICE_API MedicalTranscriptionJob();
    AWS_TRANSCRIBESERVICE_API MedicalTranscriptionJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API MedicalTranscriptionJob& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline MedicalTranscriptionJob& WithMedicalTranscriptionJobName(const Aws::String& value) { SetMedicalTranscriptionJobName(value); return *this;}

    /**
     * <p>The name of the medical transcription job. Job names are case sensitive and
     * must be unique within an Amazon Web Services account.</p>
     */
    inline MedicalTranscriptionJob& WithMedicalTranscriptionJobName(Aws::String&& value) { SetMedicalTranscriptionJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the medical transcription job. Job names are case sensitive and
     * must be unique within an Amazon Web Services account.</p>
     */
    inline MedicalTranscriptionJob& WithMedicalTranscriptionJobName(const char* value) { SetMedicalTranscriptionJobName(value); return *this;}


    /**
     * <p>Provides the status of the specified medical transcription job.</p> <p>If the
     * status is <code>COMPLETED</code>, the job is finished and you can find the
     * results at the location specified in <code>TranscriptFileUri</code>. If the
     * status is <code>FAILED</code>, <code>FailureReason</code> provides details on
     * why your transcription job failed.</p>
     */
    inline const TranscriptionJobStatus& GetTranscriptionJobStatus() const{ return m_transcriptionJobStatus; }

    /**
     * <p>Provides the status of the specified medical transcription job.</p> <p>If the
     * status is <code>COMPLETED</code>, the job is finished and you can find the
     * results at the location specified in <code>TranscriptFileUri</code>. If the
     * status is <code>FAILED</code>, <code>FailureReason</code> provides details on
     * why your transcription job failed.</p>
     */
    inline bool TranscriptionJobStatusHasBeenSet() const { return m_transcriptionJobStatusHasBeenSet; }

    /**
     * <p>Provides the status of the specified medical transcription job.</p> <p>If the
     * status is <code>COMPLETED</code>, the job is finished and you can find the
     * results at the location specified in <code>TranscriptFileUri</code>. If the
     * status is <code>FAILED</code>, <code>FailureReason</code> provides details on
     * why your transcription job failed.</p>
     */
    inline void SetTranscriptionJobStatus(const TranscriptionJobStatus& value) { m_transcriptionJobStatusHasBeenSet = true; m_transcriptionJobStatus = value; }

    /**
     * <p>Provides the status of the specified medical transcription job.</p> <p>If the
     * status is <code>COMPLETED</code>, the job is finished and you can find the
     * results at the location specified in <code>TranscriptFileUri</code>. If the
     * status is <code>FAILED</code>, <code>FailureReason</code> provides details on
     * why your transcription job failed.</p>
     */
    inline void SetTranscriptionJobStatus(TranscriptionJobStatus&& value) { m_transcriptionJobStatusHasBeenSet = true; m_transcriptionJobStatus = std::move(value); }

    /**
     * <p>Provides the status of the specified medical transcription job.</p> <p>If the
     * status is <code>COMPLETED</code>, the job is finished and you can find the
     * results at the location specified in <code>TranscriptFileUri</code>. If the
     * status is <code>FAILED</code>, <code>FailureReason</code> provides details on
     * why your transcription job failed.</p>
     */
    inline MedicalTranscriptionJob& WithTranscriptionJobStatus(const TranscriptionJobStatus& value) { SetTranscriptionJobStatus(value); return *this;}

    /**
     * <p>Provides the status of the specified medical transcription job.</p> <p>If the
     * status is <code>COMPLETED</code>, the job is finished and you can find the
     * results at the location specified in <code>TranscriptFileUri</code>. If the
     * status is <code>FAILED</code>, <code>FailureReason</code> provides details on
     * why your transcription job failed.</p>
     */
    inline MedicalTranscriptionJob& WithTranscriptionJobStatus(TranscriptionJobStatus&& value) { SetTranscriptionJobStatus(std::move(value)); return *this;}


    /**
     * <p>The language code used to create your medical transcription job. US English
     * (<code>en-US</code>) is the only supported language for medical
     * transcriptions.</p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>The language code used to create your medical transcription job. US English
     * (<code>en-US</code>) is the only supported language for medical
     * transcriptions.</p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p>The language code used to create your medical transcription job. US English
     * (<code>en-US</code>) is the only supported language for medical
     * transcriptions.</p>
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>The language code used to create your medical transcription job. US English
     * (<code>en-US</code>) is the only supported language for medical
     * transcriptions.</p>
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>The language code used to create your medical transcription job. US English
     * (<code>en-US</code>) is the only supported language for medical
     * transcriptions.</p>
     */
    inline MedicalTranscriptionJob& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The language code used to create your medical transcription job. US English
     * (<code>en-US</code>) is the only supported language for medical
     * transcriptions.</p>
     */
    inline MedicalTranscriptionJob& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * <p>The sample rate, in hertz, of the audio track in your input media file.</p>
     */
    inline int GetMediaSampleRateHertz() const{ return m_mediaSampleRateHertz; }

    /**
     * <p>The sample rate, in hertz, of the audio track in your input media file.</p>
     */
    inline bool MediaSampleRateHertzHasBeenSet() const { return m_mediaSampleRateHertzHasBeenSet; }

    /**
     * <p>The sample rate, in hertz, of the audio track in your input media file.</p>
     */
    inline void SetMediaSampleRateHertz(int value) { m_mediaSampleRateHertzHasBeenSet = true; m_mediaSampleRateHertz = value; }

    /**
     * <p>The sample rate, in hertz, of the audio track in your input media file.</p>
     */
    inline MedicalTranscriptionJob& WithMediaSampleRateHertz(int value) { SetMediaSampleRateHertz(value); return *this;}


    /**
     * <p>The format of the input media file.</p>
     */
    inline const MediaFormat& GetMediaFormat() const{ return m_mediaFormat; }

    /**
     * <p>The format of the input media file.</p>
     */
    inline bool MediaFormatHasBeenSet() const { return m_mediaFormatHasBeenSet; }

    /**
     * <p>The format of the input media file.</p>
     */
    inline void SetMediaFormat(const MediaFormat& value) { m_mediaFormatHasBeenSet = true; m_mediaFormat = value; }

    /**
     * <p>The format of the input media file.</p>
     */
    inline void SetMediaFormat(MediaFormat&& value) { m_mediaFormatHasBeenSet = true; m_mediaFormat = std::move(value); }

    /**
     * <p>The format of the input media file.</p>
     */
    inline MedicalTranscriptionJob& WithMediaFormat(const MediaFormat& value) { SetMediaFormat(value); return *this;}

    /**
     * <p>The format of the input media file.</p>
     */
    inline MedicalTranscriptionJob& WithMediaFormat(MediaFormat&& value) { SetMediaFormat(std::move(value)); return *this;}


    
    inline const Media& GetMedia() const{ return m_media; }

    
    inline bool MediaHasBeenSet() const { return m_mediaHasBeenSet; }

    
    inline void SetMedia(const Media& value) { m_mediaHasBeenSet = true; m_media = value; }

    
    inline void SetMedia(Media&& value) { m_mediaHasBeenSet = true; m_media = std::move(value); }

    
    inline MedicalTranscriptionJob& WithMedia(const Media& value) { SetMedia(value); return *this;}

    
    inline MedicalTranscriptionJob& WithMedia(Media&& value) { SetMedia(std::move(value)); return *this;}


    /**
     * <p>Provides you with the Amazon S3 URI you can use to access your
     * transcript.</p>
     */
    inline const MedicalTranscript& GetTranscript() const{ return m_transcript; }

    /**
     * <p>Provides you with the Amazon S3 URI you can use to access your
     * transcript.</p>
     */
    inline bool TranscriptHasBeenSet() const { return m_transcriptHasBeenSet; }

    /**
     * <p>Provides you with the Amazon S3 URI you can use to access your
     * transcript.</p>
     */
    inline void SetTranscript(const MedicalTranscript& value) { m_transcriptHasBeenSet = true; m_transcript = value; }

    /**
     * <p>Provides you with the Amazon S3 URI you can use to access your
     * transcript.</p>
     */
    inline void SetTranscript(MedicalTranscript&& value) { m_transcriptHasBeenSet = true; m_transcript = std::move(value); }

    /**
     * <p>Provides you with the Amazon S3 URI you can use to access your
     * transcript.</p>
     */
    inline MedicalTranscriptionJob& WithTranscript(const MedicalTranscript& value) { SetTranscript(value); return *this;}

    /**
     * <p>Provides you with the Amazon S3 URI you can use to access your
     * transcript.</p>
     */
    inline MedicalTranscriptionJob& WithTranscript(MedicalTranscript&& value) { SetTranscript(std::move(value)); return *this;}


    /**
     * <p>The date and time the specified medical transcription job began
     * processing.</p> <p>Timestamps are in the format
     * <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>. For example,
     * <code>2022-05-04T12:32:58.789000-07:00</code> represents a transcription job
     * that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The date and time the specified medical transcription job began
     * processing.</p> <p>Timestamps are in the format
     * <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>. For example,
     * <code>2022-05-04T12:32:58.789000-07:00</code> represents a transcription job
     * that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The date and time the specified medical transcription job began
     * processing.</p> <p>Timestamps are in the format
     * <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>. For example,
     * <code>2022-05-04T12:32:58.789000-07:00</code> represents a transcription job
     * that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The date and time the specified medical transcription job began
     * processing.</p> <p>Timestamps are in the format
     * <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>. For example,
     * <code>2022-05-04T12:32:58.789000-07:00</code> represents a transcription job
     * that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The date and time the specified medical transcription job began
     * processing.</p> <p>Timestamps are in the format
     * <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>. For example,
     * <code>2022-05-04T12:32:58.789000-07:00</code> represents a transcription job
     * that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline MedicalTranscriptionJob& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The date and time the specified medical transcription job began
     * processing.</p> <p>Timestamps are in the format
     * <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>. For example,
     * <code>2022-05-04T12:32:58.789000-07:00</code> represents a transcription job
     * that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline MedicalTranscriptionJob& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


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
    inline MedicalTranscriptionJob& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The date and time the specified medical transcription job request was
     * made.</p> <p>Timestamps are in the format
     * <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>. For example,
     * <code>2022-05-04T12:32:58.761000-07:00</code> represents a transcription job
     * that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline MedicalTranscriptionJob& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


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
    inline MedicalTranscriptionJob& WithCompletionTime(const Aws::Utils::DateTime& value) { SetCompletionTime(value); return *this;}

    /**
     * <p>The date and time the specified medical transcription job finished
     * processing.</p> <p>Timestamps are in the format
     * <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>. For example,
     * <code>2022-05-04T12:33:13.922000-07:00</code> represents a transcription job
     * that started processing at 12:33 PM UTC-7 on May 4, 2022.</p>
     */
    inline MedicalTranscriptionJob& WithCompletionTime(Aws::Utils::DateTime&& value) { SetCompletionTime(std::move(value)); return *this;}


    /**
     * <p>If <code>TranscriptionJobStatus</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the transcription job
     * request failed.</p> <p>The <code>FailureReason</code> field contains one of the
     * following values:</p> <ul> <li> <p> <code>Unsupported media format</code>.</p>
     * <p>The media format specified in <code>MediaFormat</code> isn't valid. Refer to
     * <b>MediaFormat</b> for a list of supported formats.</p> </li> <li> <p> <code>The
     * media format provided does not match the detected media format</code>.</p>
     * <p>The media format specified in <code>MediaFormat</code> doesn't match the
     * format of the input file. Check the media format of your media file and correct
     * the specified value.</p> </li> <li> <p> <code>Invalid sample rate for audio
     * file</code>.</p> <p>The sample rate specified in
     * <code>MediaSampleRateHertz</code> isn't valid. The sample rate must be between
     * 16,000 and 48,000 hertz.</p> </li> <li> <p> <code>The sample rate provided does
     * not match the detected sample rate</code>.</p> <p>The sample rate specified in
     * <code>MediaSampleRateHertz</code> doesn't match the sample rate detected in your
     * input media file. Check the sample rate of your media file and correct the
     * specified value.</p> </li> <li> <p> <code>Invalid file size: file size too
     * large</code>.</p> <p>The size of your media file is larger than what Amazon
     * Transcribe can process. For more information, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/limits-guidelines.html#limits">Guidelines
     * and quotas</a>.</p> </li> <li> <p> <code>Invalid number of channels: number of
     * channels too large</code>.</p> <p>Your audio contains more channels than Amazon
     * Transcribe is able to process. For more information, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/limits-guidelines.html#limits">Guidelines
     * and quotas</a>.</p> </li> </ul>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>If <code>TranscriptionJobStatus</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the transcription job
     * request failed.</p> <p>The <code>FailureReason</code> field contains one of the
     * following values:</p> <ul> <li> <p> <code>Unsupported media format</code>.</p>
     * <p>The media format specified in <code>MediaFormat</code> isn't valid. Refer to
     * <b>MediaFormat</b> for a list of supported formats.</p> </li> <li> <p> <code>The
     * media format provided does not match the detected media format</code>.</p>
     * <p>The media format specified in <code>MediaFormat</code> doesn't match the
     * format of the input file. Check the media format of your media file and correct
     * the specified value.</p> </li> <li> <p> <code>Invalid sample rate for audio
     * file</code>.</p> <p>The sample rate specified in
     * <code>MediaSampleRateHertz</code> isn't valid. The sample rate must be between
     * 16,000 and 48,000 hertz.</p> </li> <li> <p> <code>The sample rate provided does
     * not match the detected sample rate</code>.</p> <p>The sample rate specified in
     * <code>MediaSampleRateHertz</code> doesn't match the sample rate detected in your
     * input media file. Check the sample rate of your media file and correct the
     * specified value.</p> </li> <li> <p> <code>Invalid file size: file size too
     * large</code>.</p> <p>The size of your media file is larger than what Amazon
     * Transcribe can process. For more information, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/limits-guidelines.html#limits">Guidelines
     * and quotas</a>.</p> </li> <li> <p> <code>Invalid number of channels: number of
     * channels too large</code>.</p> <p>Your audio contains more channels than Amazon
     * Transcribe is able to process. For more information, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/limits-guidelines.html#limits">Guidelines
     * and quotas</a>.</p> </li> </ul>
     */
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }

    /**
     * <p>If <code>TranscriptionJobStatus</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the transcription job
     * request failed.</p> <p>The <code>FailureReason</code> field contains one of the
     * following values:</p> <ul> <li> <p> <code>Unsupported media format</code>.</p>
     * <p>The media format specified in <code>MediaFormat</code> isn't valid. Refer to
     * <b>MediaFormat</b> for a list of supported formats.</p> </li> <li> <p> <code>The
     * media format provided does not match the detected media format</code>.</p>
     * <p>The media format specified in <code>MediaFormat</code> doesn't match the
     * format of the input file. Check the media format of your media file and correct
     * the specified value.</p> </li> <li> <p> <code>Invalid sample rate for audio
     * file</code>.</p> <p>The sample rate specified in
     * <code>MediaSampleRateHertz</code> isn't valid. The sample rate must be between
     * 16,000 and 48,000 hertz.</p> </li> <li> <p> <code>The sample rate provided does
     * not match the detected sample rate</code>.</p> <p>The sample rate specified in
     * <code>MediaSampleRateHertz</code> doesn't match the sample rate detected in your
     * input media file. Check the sample rate of your media file and correct the
     * specified value.</p> </li> <li> <p> <code>Invalid file size: file size too
     * large</code>.</p> <p>The size of your media file is larger than what Amazon
     * Transcribe can process. For more information, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/limits-guidelines.html#limits">Guidelines
     * and quotas</a>.</p> </li> <li> <p> <code>Invalid number of channels: number of
     * channels too large</code>.</p> <p>Your audio contains more channels than Amazon
     * Transcribe is able to process. For more information, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/limits-guidelines.html#limits">Guidelines
     * and quotas</a>.</p> </li> </ul>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    /**
     * <p>If <code>TranscriptionJobStatus</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the transcription job
     * request failed.</p> <p>The <code>FailureReason</code> field contains one of the
     * following values:</p> <ul> <li> <p> <code>Unsupported media format</code>.</p>
     * <p>The media format specified in <code>MediaFormat</code> isn't valid. Refer to
     * <b>MediaFormat</b> for a list of supported formats.</p> </li> <li> <p> <code>The
     * media format provided does not match the detected media format</code>.</p>
     * <p>The media format specified in <code>MediaFormat</code> doesn't match the
     * format of the input file. Check the media format of your media file and correct
     * the specified value.</p> </li> <li> <p> <code>Invalid sample rate for audio
     * file</code>.</p> <p>The sample rate specified in
     * <code>MediaSampleRateHertz</code> isn't valid. The sample rate must be between
     * 16,000 and 48,000 hertz.</p> </li> <li> <p> <code>The sample rate provided does
     * not match the detected sample rate</code>.</p> <p>The sample rate specified in
     * <code>MediaSampleRateHertz</code> doesn't match the sample rate detected in your
     * input media file. Check the sample rate of your media file and correct the
     * specified value.</p> </li> <li> <p> <code>Invalid file size: file size too
     * large</code>.</p> <p>The size of your media file is larger than what Amazon
     * Transcribe can process. For more information, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/limits-guidelines.html#limits">Guidelines
     * and quotas</a>.</p> </li> <li> <p> <code>Invalid number of channels: number of
     * channels too large</code>.</p> <p>Your audio contains more channels than Amazon
     * Transcribe is able to process. For more information, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/limits-guidelines.html#limits">Guidelines
     * and quotas</a>.</p> </li> </ul>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }

    /**
     * <p>If <code>TranscriptionJobStatus</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the transcription job
     * request failed.</p> <p>The <code>FailureReason</code> field contains one of the
     * following values:</p> <ul> <li> <p> <code>Unsupported media format</code>.</p>
     * <p>The media format specified in <code>MediaFormat</code> isn't valid. Refer to
     * <b>MediaFormat</b> for a list of supported formats.</p> </li> <li> <p> <code>The
     * media format provided does not match the detected media format</code>.</p>
     * <p>The media format specified in <code>MediaFormat</code> doesn't match the
     * format of the input file. Check the media format of your media file and correct
     * the specified value.</p> </li> <li> <p> <code>Invalid sample rate for audio
     * file</code>.</p> <p>The sample rate specified in
     * <code>MediaSampleRateHertz</code> isn't valid. The sample rate must be between
     * 16,000 and 48,000 hertz.</p> </li> <li> <p> <code>The sample rate provided does
     * not match the detected sample rate</code>.</p> <p>The sample rate specified in
     * <code>MediaSampleRateHertz</code> doesn't match the sample rate detected in your
     * input media file. Check the sample rate of your media file and correct the
     * specified value.</p> </li> <li> <p> <code>Invalid file size: file size too
     * large</code>.</p> <p>The size of your media file is larger than what Amazon
     * Transcribe can process. For more information, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/limits-guidelines.html#limits">Guidelines
     * and quotas</a>.</p> </li> <li> <p> <code>Invalid number of channels: number of
     * channels too large</code>.</p> <p>Your audio contains more channels than Amazon
     * Transcribe is able to process. For more information, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/limits-guidelines.html#limits">Guidelines
     * and quotas</a>.</p> </li> </ul>
     */
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }

    /**
     * <p>If <code>TranscriptionJobStatus</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the transcription job
     * request failed.</p> <p>The <code>FailureReason</code> field contains one of the
     * following values:</p> <ul> <li> <p> <code>Unsupported media format</code>.</p>
     * <p>The media format specified in <code>MediaFormat</code> isn't valid. Refer to
     * <b>MediaFormat</b> for a list of supported formats.</p> </li> <li> <p> <code>The
     * media format provided does not match the detected media format</code>.</p>
     * <p>The media format specified in <code>MediaFormat</code> doesn't match the
     * format of the input file. Check the media format of your media file and correct
     * the specified value.</p> </li> <li> <p> <code>Invalid sample rate for audio
     * file</code>.</p> <p>The sample rate specified in
     * <code>MediaSampleRateHertz</code> isn't valid. The sample rate must be between
     * 16,000 and 48,000 hertz.</p> </li> <li> <p> <code>The sample rate provided does
     * not match the detected sample rate</code>.</p> <p>The sample rate specified in
     * <code>MediaSampleRateHertz</code> doesn't match the sample rate detected in your
     * input media file. Check the sample rate of your media file and correct the
     * specified value.</p> </li> <li> <p> <code>Invalid file size: file size too
     * large</code>.</p> <p>The size of your media file is larger than what Amazon
     * Transcribe can process. For more information, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/limits-guidelines.html#limits">Guidelines
     * and quotas</a>.</p> </li> <li> <p> <code>Invalid number of channels: number of
     * channels too large</code>.</p> <p>Your audio contains more channels than Amazon
     * Transcribe is able to process. For more information, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/limits-guidelines.html#limits">Guidelines
     * and quotas</a>.</p> </li> </ul>
     */
    inline MedicalTranscriptionJob& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>If <code>TranscriptionJobStatus</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the transcription job
     * request failed.</p> <p>The <code>FailureReason</code> field contains one of the
     * following values:</p> <ul> <li> <p> <code>Unsupported media format</code>.</p>
     * <p>The media format specified in <code>MediaFormat</code> isn't valid. Refer to
     * <b>MediaFormat</b> for a list of supported formats.</p> </li> <li> <p> <code>The
     * media format provided does not match the detected media format</code>.</p>
     * <p>The media format specified in <code>MediaFormat</code> doesn't match the
     * format of the input file. Check the media format of your media file and correct
     * the specified value.</p> </li> <li> <p> <code>Invalid sample rate for audio
     * file</code>.</p> <p>The sample rate specified in
     * <code>MediaSampleRateHertz</code> isn't valid. The sample rate must be between
     * 16,000 and 48,000 hertz.</p> </li> <li> <p> <code>The sample rate provided does
     * not match the detected sample rate</code>.</p> <p>The sample rate specified in
     * <code>MediaSampleRateHertz</code> doesn't match the sample rate detected in your
     * input media file. Check the sample rate of your media file and correct the
     * specified value.</p> </li> <li> <p> <code>Invalid file size: file size too
     * large</code>.</p> <p>The size of your media file is larger than what Amazon
     * Transcribe can process. For more information, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/limits-guidelines.html#limits">Guidelines
     * and quotas</a>.</p> </li> <li> <p> <code>Invalid number of channels: number of
     * channels too large</code>.</p> <p>Your audio contains more channels than Amazon
     * Transcribe is able to process. For more information, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/limits-guidelines.html#limits">Guidelines
     * and quotas</a>.</p> </li> </ul>
     */
    inline MedicalTranscriptionJob& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>If <code>TranscriptionJobStatus</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the transcription job
     * request failed.</p> <p>The <code>FailureReason</code> field contains one of the
     * following values:</p> <ul> <li> <p> <code>Unsupported media format</code>.</p>
     * <p>The media format specified in <code>MediaFormat</code> isn't valid. Refer to
     * <b>MediaFormat</b> for a list of supported formats.</p> </li> <li> <p> <code>The
     * media format provided does not match the detected media format</code>.</p>
     * <p>The media format specified in <code>MediaFormat</code> doesn't match the
     * format of the input file. Check the media format of your media file and correct
     * the specified value.</p> </li> <li> <p> <code>Invalid sample rate for audio
     * file</code>.</p> <p>The sample rate specified in
     * <code>MediaSampleRateHertz</code> isn't valid. The sample rate must be between
     * 16,000 and 48,000 hertz.</p> </li> <li> <p> <code>The sample rate provided does
     * not match the detected sample rate</code>.</p> <p>The sample rate specified in
     * <code>MediaSampleRateHertz</code> doesn't match the sample rate detected in your
     * input media file. Check the sample rate of your media file and correct the
     * specified value.</p> </li> <li> <p> <code>Invalid file size: file size too
     * large</code>.</p> <p>The size of your media file is larger than what Amazon
     * Transcribe can process. For more information, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/limits-guidelines.html#limits">Guidelines
     * and quotas</a>.</p> </li> <li> <p> <code>Invalid number of channels: number of
     * channels too large</code>.</p> <p>Your audio contains more channels than Amazon
     * Transcribe is able to process. For more information, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/limits-guidelines.html#limits">Guidelines
     * and quotas</a>.</p> </li> </ul>
     */
    inline MedicalTranscriptionJob& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>Provides information on any additional settings that were included in your
     * request. Additional settings include channel identification, alternative
     * transcriptions, speaker partitioning, custom vocabularies, and custom vocabulary
     * filters.</p>
     */
    inline const MedicalTranscriptionSetting& GetSettings() const{ return m_settings; }

    /**
     * <p>Provides information on any additional settings that were included in your
     * request. Additional settings include channel identification, alternative
     * transcriptions, speaker partitioning, custom vocabularies, and custom vocabulary
     * filters.</p>
     */
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }

    /**
     * <p>Provides information on any additional settings that were included in your
     * request. Additional settings include channel identification, alternative
     * transcriptions, speaker partitioning, custom vocabularies, and custom vocabulary
     * filters.</p>
     */
    inline void SetSettings(const MedicalTranscriptionSetting& value) { m_settingsHasBeenSet = true; m_settings = value; }

    /**
     * <p>Provides information on any additional settings that were included in your
     * request. Additional settings include channel identification, alternative
     * transcriptions, speaker partitioning, custom vocabularies, and custom vocabulary
     * filters.</p>
     */
    inline void SetSettings(MedicalTranscriptionSetting&& value) { m_settingsHasBeenSet = true; m_settings = std::move(value); }

    /**
     * <p>Provides information on any additional settings that were included in your
     * request. Additional settings include channel identification, alternative
     * transcriptions, speaker partitioning, custom vocabularies, and custom vocabulary
     * filters.</p>
     */
    inline MedicalTranscriptionJob& WithSettings(const MedicalTranscriptionSetting& value) { SetSettings(value); return *this;}

    /**
     * <p>Provides information on any additional settings that were included in your
     * request. Additional settings include channel identification, alternative
     * transcriptions, speaker partitioning, custom vocabularies, and custom vocabulary
     * filters.</p>
     */
    inline MedicalTranscriptionJob& WithSettings(MedicalTranscriptionSetting&& value) { SetSettings(std::move(value)); return *this;}


    /**
     * <p>Indicates whether content identification was enabled for your transcription
     * request.</p>
     */
    inline const MedicalContentIdentificationType& GetContentIdentificationType() const{ return m_contentIdentificationType; }

    /**
     * <p>Indicates whether content identification was enabled for your transcription
     * request.</p>
     */
    inline bool ContentIdentificationTypeHasBeenSet() const { return m_contentIdentificationTypeHasBeenSet; }

    /**
     * <p>Indicates whether content identification was enabled for your transcription
     * request.</p>
     */
    inline void SetContentIdentificationType(const MedicalContentIdentificationType& value) { m_contentIdentificationTypeHasBeenSet = true; m_contentIdentificationType = value; }

    /**
     * <p>Indicates whether content identification was enabled for your transcription
     * request.</p>
     */
    inline void SetContentIdentificationType(MedicalContentIdentificationType&& value) { m_contentIdentificationTypeHasBeenSet = true; m_contentIdentificationType = std::move(value); }

    /**
     * <p>Indicates whether content identification was enabled for your transcription
     * request.</p>
     */
    inline MedicalTranscriptionJob& WithContentIdentificationType(const MedicalContentIdentificationType& value) { SetContentIdentificationType(value); return *this;}

    /**
     * <p>Indicates whether content identification was enabled for your transcription
     * request.</p>
     */
    inline MedicalTranscriptionJob& WithContentIdentificationType(MedicalContentIdentificationType&& value) { SetContentIdentificationType(std::move(value)); return *this;}


    /**
     * <p>Describes the medical specialty represented in your media.</p>
     */
    inline const Specialty& GetSpecialty() const{ return m_specialty; }

    /**
     * <p>Describes the medical specialty represented in your media.</p>
     */
    inline bool SpecialtyHasBeenSet() const { return m_specialtyHasBeenSet; }

    /**
     * <p>Describes the medical specialty represented in your media.</p>
     */
    inline void SetSpecialty(const Specialty& value) { m_specialtyHasBeenSet = true; m_specialty = value; }

    /**
     * <p>Describes the medical specialty represented in your media.</p>
     */
    inline void SetSpecialty(Specialty&& value) { m_specialtyHasBeenSet = true; m_specialty = std::move(value); }

    /**
     * <p>Describes the medical specialty represented in your media.</p>
     */
    inline MedicalTranscriptionJob& WithSpecialty(const Specialty& value) { SetSpecialty(value); return *this;}

    /**
     * <p>Describes the medical specialty represented in your media.</p>
     */
    inline MedicalTranscriptionJob& WithSpecialty(Specialty&& value) { SetSpecialty(std::move(value)); return *this;}


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
    inline MedicalTranscriptionJob& WithType(const Type& value) { SetType(value); return *this;}

    /**
     * <p>Indicates whether the input media is a dictation or a conversation, as
     * specified in the <code>StartMedicalTranscriptionJob</code> request.</p>
     */
    inline MedicalTranscriptionJob& WithType(Type&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The tags, each in the form of a key:value pair, assigned to the specified
     * medical transcription job.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags, each in the form of a key:value pair, assigned to the specified
     * medical transcription job.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags, each in the form of a key:value pair, assigned to the specified
     * medical transcription job.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags, each in the form of a key:value pair, assigned to the specified
     * medical transcription job.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags, each in the form of a key:value pair, assigned to the specified
     * medical transcription job.</p>
     */
    inline MedicalTranscriptionJob& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags, each in the form of a key:value pair, assigned to the specified
     * medical transcription job.</p>
     */
    inline MedicalTranscriptionJob& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags, each in the form of a key:value pair, assigned to the specified
     * medical transcription job.</p>
     */
    inline MedicalTranscriptionJob& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags, each in the form of a key:value pair, assigned to the specified
     * medical transcription job.</p>
     */
    inline MedicalTranscriptionJob& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_medicalTranscriptionJobName;
    bool m_medicalTranscriptionJobNameHasBeenSet = false;

    TranscriptionJobStatus m_transcriptionJobStatus;
    bool m_transcriptionJobStatusHasBeenSet = false;

    LanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet = false;

    int m_mediaSampleRateHertz;
    bool m_mediaSampleRateHertzHasBeenSet = false;

    MediaFormat m_mediaFormat;
    bool m_mediaFormatHasBeenSet = false;

    Media m_media;
    bool m_mediaHasBeenSet = false;

    MedicalTranscript m_transcript;
    bool m_transcriptHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_completionTime;
    bool m_completionTimeHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    MedicalTranscriptionSetting m_settings;
    bool m_settingsHasBeenSet = false;

    MedicalContentIdentificationType m_contentIdentificationType;
    bool m_contentIdentificationTypeHasBeenSet = false;

    Specialty m_specialty;
    bool m_specialtyHasBeenSet = false;

    Type m_type;
    bool m_typeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
