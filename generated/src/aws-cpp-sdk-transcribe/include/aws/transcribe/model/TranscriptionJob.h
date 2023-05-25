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
#include <aws/transcribe/model/Transcript.h>
#include <aws/core/utils/DateTime.h>
#include <aws/transcribe/model/Settings.h>
#include <aws/transcribe/model/ModelSettings.h>
#include <aws/transcribe/model/JobExecutionSettings.h>
#include <aws/transcribe/model/ContentRedaction.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/transcribe/model/SubtitlesOutput.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/transcribe/model/LanguageCodeItem.h>
#include <aws/transcribe/model/Tag.h>
#include <aws/transcribe/model/LanguageIdSettings.h>
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
   * <p>Provides detailed information about a transcription job.</p> <p>To view the
   * status of the specified transcription job, check the
   * <code>TranscriptionJobStatus</code> field. If the status is
   * <code>COMPLETED</code>, the job is finished and you can find the results at the
   * location specified in <code>TranscriptFileUri</code>. If the status is
   * <code>FAILED</code>, <code>FailureReason</code> provides details on why your
   * transcription job failed.</p> <p>If you enabled content redaction, the redacted
   * transcript can be found at the location specified in
   * <code>RedactedTranscriptFileUri</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/TranscriptionJob">AWS
   * API Reference</a></p>
   */
  class TranscriptionJob
  {
  public:
    AWS_TRANSCRIBESERVICE_API TranscriptionJob();
    AWS_TRANSCRIBESERVICE_API TranscriptionJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API TranscriptionJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the transcription job. Job names are case sensitive and must be
     * unique within an Amazon Web Services account.</p>
     */
    inline const Aws::String& GetTranscriptionJobName() const{ return m_transcriptionJobName; }

    /**
     * <p>The name of the transcription job. Job names are case sensitive and must be
     * unique within an Amazon Web Services account.</p>
     */
    inline bool TranscriptionJobNameHasBeenSet() const { return m_transcriptionJobNameHasBeenSet; }

    /**
     * <p>The name of the transcription job. Job names are case sensitive and must be
     * unique within an Amazon Web Services account.</p>
     */
    inline void SetTranscriptionJobName(const Aws::String& value) { m_transcriptionJobNameHasBeenSet = true; m_transcriptionJobName = value; }

    /**
     * <p>The name of the transcription job. Job names are case sensitive and must be
     * unique within an Amazon Web Services account.</p>
     */
    inline void SetTranscriptionJobName(Aws::String&& value) { m_transcriptionJobNameHasBeenSet = true; m_transcriptionJobName = std::move(value); }

    /**
     * <p>The name of the transcription job. Job names are case sensitive and must be
     * unique within an Amazon Web Services account.</p>
     */
    inline void SetTranscriptionJobName(const char* value) { m_transcriptionJobNameHasBeenSet = true; m_transcriptionJobName.assign(value); }

    /**
     * <p>The name of the transcription job. Job names are case sensitive and must be
     * unique within an Amazon Web Services account.</p>
     */
    inline TranscriptionJob& WithTranscriptionJobName(const Aws::String& value) { SetTranscriptionJobName(value); return *this;}

    /**
     * <p>The name of the transcription job. Job names are case sensitive and must be
     * unique within an Amazon Web Services account.</p>
     */
    inline TranscriptionJob& WithTranscriptionJobName(Aws::String&& value) { SetTranscriptionJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the transcription job. Job names are case sensitive and must be
     * unique within an Amazon Web Services account.</p>
     */
    inline TranscriptionJob& WithTranscriptionJobName(const char* value) { SetTranscriptionJobName(value); return *this;}


    /**
     * <p>Provides the status of the specified transcription job.</p> <p>If the status
     * is <code>COMPLETED</code>, the job is finished and you can find the results at
     * the location specified in <code>TranscriptFileUri</code> (or
     * <code>RedactedTranscriptFileUri</code>, if you requested transcript redaction).
     * If the status is <code>FAILED</code>, <code>FailureReason</code> provides
     * details on why your transcription job failed.</p>
     */
    inline const TranscriptionJobStatus& GetTranscriptionJobStatus() const{ return m_transcriptionJobStatus; }

    /**
     * <p>Provides the status of the specified transcription job.</p> <p>If the status
     * is <code>COMPLETED</code>, the job is finished and you can find the results at
     * the location specified in <code>TranscriptFileUri</code> (or
     * <code>RedactedTranscriptFileUri</code>, if you requested transcript redaction).
     * If the status is <code>FAILED</code>, <code>FailureReason</code> provides
     * details on why your transcription job failed.</p>
     */
    inline bool TranscriptionJobStatusHasBeenSet() const { return m_transcriptionJobStatusHasBeenSet; }

    /**
     * <p>Provides the status of the specified transcription job.</p> <p>If the status
     * is <code>COMPLETED</code>, the job is finished and you can find the results at
     * the location specified in <code>TranscriptFileUri</code> (or
     * <code>RedactedTranscriptFileUri</code>, if you requested transcript redaction).
     * If the status is <code>FAILED</code>, <code>FailureReason</code> provides
     * details on why your transcription job failed.</p>
     */
    inline void SetTranscriptionJobStatus(const TranscriptionJobStatus& value) { m_transcriptionJobStatusHasBeenSet = true; m_transcriptionJobStatus = value; }

    /**
     * <p>Provides the status of the specified transcription job.</p> <p>If the status
     * is <code>COMPLETED</code>, the job is finished and you can find the results at
     * the location specified in <code>TranscriptFileUri</code> (or
     * <code>RedactedTranscriptFileUri</code>, if you requested transcript redaction).
     * If the status is <code>FAILED</code>, <code>FailureReason</code> provides
     * details on why your transcription job failed.</p>
     */
    inline void SetTranscriptionJobStatus(TranscriptionJobStatus&& value) { m_transcriptionJobStatusHasBeenSet = true; m_transcriptionJobStatus = std::move(value); }

    /**
     * <p>Provides the status of the specified transcription job.</p> <p>If the status
     * is <code>COMPLETED</code>, the job is finished and you can find the results at
     * the location specified in <code>TranscriptFileUri</code> (or
     * <code>RedactedTranscriptFileUri</code>, if you requested transcript redaction).
     * If the status is <code>FAILED</code>, <code>FailureReason</code> provides
     * details on why your transcription job failed.</p>
     */
    inline TranscriptionJob& WithTranscriptionJobStatus(const TranscriptionJobStatus& value) { SetTranscriptionJobStatus(value); return *this;}

    /**
     * <p>Provides the status of the specified transcription job.</p> <p>If the status
     * is <code>COMPLETED</code>, the job is finished and you can find the results at
     * the location specified in <code>TranscriptFileUri</code> (or
     * <code>RedactedTranscriptFileUri</code>, if you requested transcript redaction).
     * If the status is <code>FAILED</code>, <code>FailureReason</code> provides
     * details on why your transcription job failed.</p>
     */
    inline TranscriptionJob& WithTranscriptionJobStatus(TranscriptionJobStatus&& value) { SetTranscriptionJobStatus(std::move(value)); return *this;}


    /**
     * <p>The language code used to create your transcription job. This parameter is
     * used with single-language identification. For multi-language identification
     * requests, refer to the plural version of this parameter,
     * <code>LanguageCodes</code>.</p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>The language code used to create your transcription job. This parameter is
     * used with single-language identification. For multi-language identification
     * requests, refer to the plural version of this parameter,
     * <code>LanguageCodes</code>.</p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p>The language code used to create your transcription job. This parameter is
     * used with single-language identification. For multi-language identification
     * requests, refer to the plural version of this parameter,
     * <code>LanguageCodes</code>.</p>
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>The language code used to create your transcription job. This parameter is
     * used with single-language identification. For multi-language identification
     * requests, refer to the plural version of this parameter,
     * <code>LanguageCodes</code>.</p>
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>The language code used to create your transcription job. This parameter is
     * used with single-language identification. For multi-language identification
     * requests, refer to the plural version of this parameter,
     * <code>LanguageCodes</code>.</p>
     */
    inline TranscriptionJob& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The language code used to create your transcription job. This parameter is
     * used with single-language identification. For multi-language identification
     * requests, refer to the plural version of this parameter,
     * <code>LanguageCodes</code>.</p>
     */
    inline TranscriptionJob& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


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
    inline TranscriptionJob& WithMediaSampleRateHertz(int value) { SetMediaSampleRateHertz(value); return *this;}


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
    inline TranscriptionJob& WithMediaFormat(const MediaFormat& value) { SetMediaFormat(value); return *this;}

    /**
     * <p>The format of the input media file.</p>
     */
    inline TranscriptionJob& WithMediaFormat(MediaFormat&& value) { SetMediaFormat(std::move(value)); return *this;}


    /**
     * <p>Provides the Amazon S3 location of the media file you used in your
     * request.</p>
     */
    inline const Media& GetMedia() const{ return m_media; }

    /**
     * <p>Provides the Amazon S3 location of the media file you used in your
     * request.</p>
     */
    inline bool MediaHasBeenSet() const { return m_mediaHasBeenSet; }

    /**
     * <p>Provides the Amazon S3 location of the media file you used in your
     * request.</p>
     */
    inline void SetMedia(const Media& value) { m_mediaHasBeenSet = true; m_media = value; }

    /**
     * <p>Provides the Amazon S3 location of the media file you used in your
     * request.</p>
     */
    inline void SetMedia(Media&& value) { m_mediaHasBeenSet = true; m_media = std::move(value); }

    /**
     * <p>Provides the Amazon S3 location of the media file you used in your
     * request.</p>
     */
    inline TranscriptionJob& WithMedia(const Media& value) { SetMedia(value); return *this;}

    /**
     * <p>Provides the Amazon S3 location of the media file you used in your
     * request.</p>
     */
    inline TranscriptionJob& WithMedia(Media&& value) { SetMedia(std::move(value)); return *this;}


    /**
     * <p>Provides you with the Amazon S3 URI you can use to access your
     * transcript.</p>
     */
    inline const Transcript& GetTranscript() const{ return m_transcript; }

    /**
     * <p>Provides you with the Amazon S3 URI you can use to access your
     * transcript.</p>
     */
    inline bool TranscriptHasBeenSet() const { return m_transcriptHasBeenSet; }

    /**
     * <p>Provides you with the Amazon S3 URI you can use to access your
     * transcript.</p>
     */
    inline void SetTranscript(const Transcript& value) { m_transcriptHasBeenSet = true; m_transcript = value; }

    /**
     * <p>Provides you with the Amazon S3 URI you can use to access your
     * transcript.</p>
     */
    inline void SetTranscript(Transcript&& value) { m_transcriptHasBeenSet = true; m_transcript = std::move(value); }

    /**
     * <p>Provides you with the Amazon S3 URI you can use to access your
     * transcript.</p>
     */
    inline TranscriptionJob& WithTranscript(const Transcript& value) { SetTranscript(value); return *this;}

    /**
     * <p>Provides you with the Amazon S3 URI you can use to access your
     * transcript.</p>
     */
    inline TranscriptionJob& WithTranscript(Transcript&& value) { SetTranscript(std::move(value)); return *this;}


    /**
     * <p>The date and time the specified transcription job began processing.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.789000-07:00</code> represents a
     * transcription job that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The date and time the specified transcription job began processing.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.789000-07:00</code> represents a
     * transcription job that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The date and time the specified transcription job began processing.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.789000-07:00</code> represents a
     * transcription job that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The date and time the specified transcription job began processing.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.789000-07:00</code> represents a
     * transcription job that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The date and time the specified transcription job began processing.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.789000-07:00</code> represents a
     * transcription job that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline TranscriptionJob& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The date and time the specified transcription job began processing.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.789000-07:00</code> represents a
     * transcription job that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline TranscriptionJob& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The date and time the specified transcription job request was made.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.761000-07:00</code> represents a
     * transcription job that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The date and time the specified transcription job request was made.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.761000-07:00</code> represents a
     * transcription job that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The date and time the specified transcription job request was made.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.761000-07:00</code> represents a
     * transcription job that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The date and time the specified transcription job request was made.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.761000-07:00</code> represents a
     * transcription job that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The date and time the specified transcription job request was made.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.761000-07:00</code> represents a
     * transcription job that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline TranscriptionJob& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The date and time the specified transcription job request was made.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.761000-07:00</code> represents a
     * transcription job that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline TranscriptionJob& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The date and time the specified transcription job finished processing.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:33:13.922000-07:00</code> represents a
     * transcription job that started processing at 12:33 PM UTC-7 on May 4, 2022.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTime() const{ return m_completionTime; }

    /**
     * <p>The date and time the specified transcription job finished processing.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:33:13.922000-07:00</code> represents a
     * transcription job that started processing at 12:33 PM UTC-7 on May 4, 2022.</p>
     */
    inline bool CompletionTimeHasBeenSet() const { return m_completionTimeHasBeenSet; }

    /**
     * <p>The date and time the specified transcription job finished processing.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:33:13.922000-07:00</code> represents a
     * transcription job that started processing at 12:33 PM UTC-7 on May 4, 2022.</p>
     */
    inline void SetCompletionTime(const Aws::Utils::DateTime& value) { m_completionTimeHasBeenSet = true; m_completionTime = value; }

    /**
     * <p>The date and time the specified transcription job finished processing.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:33:13.922000-07:00</code> represents a
     * transcription job that started processing at 12:33 PM UTC-7 on May 4, 2022.</p>
     */
    inline void SetCompletionTime(Aws::Utils::DateTime&& value) { m_completionTimeHasBeenSet = true; m_completionTime = std::move(value); }

    /**
     * <p>The date and time the specified transcription job finished processing.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:33:13.922000-07:00</code> represents a
     * transcription job that started processing at 12:33 PM UTC-7 on May 4, 2022.</p>
     */
    inline TranscriptionJob& WithCompletionTime(const Aws::Utils::DateTime& value) { SetCompletionTime(value); return *this;}

    /**
     * <p>The date and time the specified transcription job finished processing.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:33:13.922000-07:00</code> represents a
     * transcription job that started processing at 12:33 PM UTC-7 on May 4, 2022.</p>
     */
    inline TranscriptionJob& WithCompletionTime(Aws::Utils::DateTime&& value) { SetCompletionTime(std::move(value)); return *this;}


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
     * 8,000 and 48,000 hertz.</p> </li> <li> <p> <code>The sample rate provided does
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
     * 8,000 and 48,000 hertz.</p> </li> <li> <p> <code>The sample rate provided does
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
     * 8,000 and 48,000 hertz.</p> </li> <li> <p> <code>The sample rate provided does
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
     * 8,000 and 48,000 hertz.</p> </li> <li> <p> <code>The sample rate provided does
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
     * 8,000 and 48,000 hertz.</p> </li> <li> <p> <code>The sample rate provided does
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
     * 8,000 and 48,000 hertz.</p> </li> <li> <p> <code>The sample rate provided does
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
    inline TranscriptionJob& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

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
     * 8,000 and 48,000 hertz.</p> </li> <li> <p> <code>The sample rate provided does
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
    inline TranscriptionJob& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

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
     * 8,000 and 48,000 hertz.</p> </li> <li> <p> <code>The sample rate provided does
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
    inline TranscriptionJob& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>Provides information on any additional settings that were included in your
     * request. Additional settings include channel identification, alternative
     * transcriptions, speaker partitioning, custom vocabularies, and custom vocabulary
     * filters.</p>
     */
    inline const Settings& GetSettings() const{ return m_settings; }

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
    inline void SetSettings(const Settings& value) { m_settingsHasBeenSet = true; m_settings = value; }

    /**
     * <p>Provides information on any additional settings that were included in your
     * request. Additional settings include channel identification, alternative
     * transcriptions, speaker partitioning, custom vocabularies, and custom vocabulary
     * filters.</p>
     */
    inline void SetSettings(Settings&& value) { m_settingsHasBeenSet = true; m_settings = std::move(value); }

    /**
     * <p>Provides information on any additional settings that were included in your
     * request. Additional settings include channel identification, alternative
     * transcriptions, speaker partitioning, custom vocabularies, and custom vocabulary
     * filters.</p>
     */
    inline TranscriptionJob& WithSettings(const Settings& value) { SetSettings(value); return *this;}

    /**
     * <p>Provides information on any additional settings that were included in your
     * request. Additional settings include channel identification, alternative
     * transcriptions, speaker partitioning, custom vocabularies, and custom vocabulary
     * filters.</p>
     */
    inline TranscriptionJob& WithSettings(Settings&& value) { SetSettings(std::move(value)); return *this;}


    /**
     * <p>Provides information on the custom language model you included in your
     * request.</p>
     */
    inline const ModelSettings& GetModelSettings() const{ return m_modelSettings; }

    /**
     * <p>Provides information on the custom language model you included in your
     * request.</p>
     */
    inline bool ModelSettingsHasBeenSet() const { return m_modelSettingsHasBeenSet; }

    /**
     * <p>Provides information on the custom language model you included in your
     * request.</p>
     */
    inline void SetModelSettings(const ModelSettings& value) { m_modelSettingsHasBeenSet = true; m_modelSettings = value; }

    /**
     * <p>Provides information on the custom language model you included in your
     * request.</p>
     */
    inline void SetModelSettings(ModelSettings&& value) { m_modelSettingsHasBeenSet = true; m_modelSettings = std::move(value); }

    /**
     * <p>Provides information on the custom language model you included in your
     * request.</p>
     */
    inline TranscriptionJob& WithModelSettings(const ModelSettings& value) { SetModelSettings(value); return *this;}

    /**
     * <p>Provides information on the custom language model you included in your
     * request.</p>
     */
    inline TranscriptionJob& WithModelSettings(ModelSettings&& value) { SetModelSettings(std::move(value)); return *this;}


    /**
     * <p>Provides information about how your transcription job was processed. This
     * parameter shows if your request was queued and what data access role was
     * used.</p>
     */
    inline const JobExecutionSettings& GetJobExecutionSettings() const{ return m_jobExecutionSettings; }

    /**
     * <p>Provides information about how your transcription job was processed. This
     * parameter shows if your request was queued and what data access role was
     * used.</p>
     */
    inline bool JobExecutionSettingsHasBeenSet() const { return m_jobExecutionSettingsHasBeenSet; }

    /**
     * <p>Provides information about how your transcription job was processed. This
     * parameter shows if your request was queued and what data access role was
     * used.</p>
     */
    inline void SetJobExecutionSettings(const JobExecutionSettings& value) { m_jobExecutionSettingsHasBeenSet = true; m_jobExecutionSettings = value; }

    /**
     * <p>Provides information about how your transcription job was processed. This
     * parameter shows if your request was queued and what data access role was
     * used.</p>
     */
    inline void SetJobExecutionSettings(JobExecutionSettings&& value) { m_jobExecutionSettingsHasBeenSet = true; m_jobExecutionSettings = std::move(value); }

    /**
     * <p>Provides information about how your transcription job was processed. This
     * parameter shows if your request was queued and what data access role was
     * used.</p>
     */
    inline TranscriptionJob& WithJobExecutionSettings(const JobExecutionSettings& value) { SetJobExecutionSettings(value); return *this;}

    /**
     * <p>Provides information about how your transcription job was processed. This
     * parameter shows if your request was queued and what data access role was
     * used.</p>
     */
    inline TranscriptionJob& WithJobExecutionSettings(JobExecutionSettings&& value) { SetJobExecutionSettings(std::move(value)); return *this;}


    /**
     * <p>Indicates whether redaction was enabled in your transcript.</p>
     */
    inline const ContentRedaction& GetContentRedaction() const{ return m_contentRedaction; }

    /**
     * <p>Indicates whether redaction was enabled in your transcript.</p>
     */
    inline bool ContentRedactionHasBeenSet() const { return m_contentRedactionHasBeenSet; }

    /**
     * <p>Indicates whether redaction was enabled in your transcript.</p>
     */
    inline void SetContentRedaction(const ContentRedaction& value) { m_contentRedactionHasBeenSet = true; m_contentRedaction = value; }

    /**
     * <p>Indicates whether redaction was enabled in your transcript.</p>
     */
    inline void SetContentRedaction(ContentRedaction&& value) { m_contentRedactionHasBeenSet = true; m_contentRedaction = std::move(value); }

    /**
     * <p>Indicates whether redaction was enabled in your transcript.</p>
     */
    inline TranscriptionJob& WithContentRedaction(const ContentRedaction& value) { SetContentRedaction(value); return *this;}

    /**
     * <p>Indicates whether redaction was enabled in your transcript.</p>
     */
    inline TranscriptionJob& WithContentRedaction(ContentRedaction&& value) { SetContentRedaction(std::move(value)); return *this;}


    /**
     * <p>Indicates whether automatic language identification was enabled
     * (<code>TRUE</code>) for the specified transcription job.</p>
     */
    inline bool GetIdentifyLanguage() const{ return m_identifyLanguage; }

    /**
     * <p>Indicates whether automatic language identification was enabled
     * (<code>TRUE</code>) for the specified transcription job.</p>
     */
    inline bool IdentifyLanguageHasBeenSet() const { return m_identifyLanguageHasBeenSet; }

    /**
     * <p>Indicates whether automatic language identification was enabled
     * (<code>TRUE</code>) for the specified transcription job.</p>
     */
    inline void SetIdentifyLanguage(bool value) { m_identifyLanguageHasBeenSet = true; m_identifyLanguage = value; }

    /**
     * <p>Indicates whether automatic language identification was enabled
     * (<code>TRUE</code>) for the specified transcription job.</p>
     */
    inline TranscriptionJob& WithIdentifyLanguage(bool value) { SetIdentifyLanguage(value); return *this;}


    /**
     * <p>Indicates whether automatic multi-language identification was enabled
     * (<code>TRUE</code>) for the specified transcription job.</p>
     */
    inline bool GetIdentifyMultipleLanguages() const{ return m_identifyMultipleLanguages; }

    /**
     * <p>Indicates whether automatic multi-language identification was enabled
     * (<code>TRUE</code>) for the specified transcription job.</p>
     */
    inline bool IdentifyMultipleLanguagesHasBeenSet() const { return m_identifyMultipleLanguagesHasBeenSet; }

    /**
     * <p>Indicates whether automatic multi-language identification was enabled
     * (<code>TRUE</code>) for the specified transcription job.</p>
     */
    inline void SetIdentifyMultipleLanguages(bool value) { m_identifyMultipleLanguagesHasBeenSet = true; m_identifyMultipleLanguages = value; }

    /**
     * <p>Indicates whether automatic multi-language identification was enabled
     * (<code>TRUE</code>) for the specified transcription job.</p>
     */
    inline TranscriptionJob& WithIdentifyMultipleLanguages(bool value) { SetIdentifyMultipleLanguages(value); return *this;}


    /**
     * <p>Provides the language codes you specified in your request.</p>
     */
    inline const Aws::Vector<LanguageCode>& GetLanguageOptions() const{ return m_languageOptions; }

    /**
     * <p>Provides the language codes you specified in your request.</p>
     */
    inline bool LanguageOptionsHasBeenSet() const { return m_languageOptionsHasBeenSet; }

    /**
     * <p>Provides the language codes you specified in your request.</p>
     */
    inline void SetLanguageOptions(const Aws::Vector<LanguageCode>& value) { m_languageOptionsHasBeenSet = true; m_languageOptions = value; }

    /**
     * <p>Provides the language codes you specified in your request.</p>
     */
    inline void SetLanguageOptions(Aws::Vector<LanguageCode>&& value) { m_languageOptionsHasBeenSet = true; m_languageOptions = std::move(value); }

    /**
     * <p>Provides the language codes you specified in your request.</p>
     */
    inline TranscriptionJob& WithLanguageOptions(const Aws::Vector<LanguageCode>& value) { SetLanguageOptions(value); return *this;}

    /**
     * <p>Provides the language codes you specified in your request.</p>
     */
    inline TranscriptionJob& WithLanguageOptions(Aws::Vector<LanguageCode>&& value) { SetLanguageOptions(std::move(value)); return *this;}

    /**
     * <p>Provides the language codes you specified in your request.</p>
     */
    inline TranscriptionJob& AddLanguageOptions(const LanguageCode& value) { m_languageOptionsHasBeenSet = true; m_languageOptions.push_back(value); return *this; }

    /**
     * <p>Provides the language codes you specified in your request.</p>
     */
    inline TranscriptionJob& AddLanguageOptions(LanguageCode&& value) { m_languageOptionsHasBeenSet = true; m_languageOptions.push_back(std::move(value)); return *this; }


    /**
     * <p>The confidence score associated with the language identified in your media
     * file.</p> <p>Confidence scores are values between 0 and 1; a larger value
     * indicates a higher probability that the identified language correctly matches
     * the language spoken in your media.</p>
     */
    inline double GetIdentifiedLanguageScore() const{ return m_identifiedLanguageScore; }

    /**
     * <p>The confidence score associated with the language identified in your media
     * file.</p> <p>Confidence scores are values between 0 and 1; a larger value
     * indicates a higher probability that the identified language correctly matches
     * the language spoken in your media.</p>
     */
    inline bool IdentifiedLanguageScoreHasBeenSet() const { return m_identifiedLanguageScoreHasBeenSet; }

    /**
     * <p>The confidence score associated with the language identified in your media
     * file.</p> <p>Confidence scores are values between 0 and 1; a larger value
     * indicates a higher probability that the identified language correctly matches
     * the language spoken in your media.</p>
     */
    inline void SetIdentifiedLanguageScore(double value) { m_identifiedLanguageScoreHasBeenSet = true; m_identifiedLanguageScore = value; }

    /**
     * <p>The confidence score associated with the language identified in your media
     * file.</p> <p>Confidence scores are values between 0 and 1; a larger value
     * indicates a higher probability that the identified language correctly matches
     * the language spoken in your media.</p>
     */
    inline TranscriptionJob& WithIdentifiedLanguageScore(double value) { SetIdentifiedLanguageScore(value); return *this;}


    /**
     * <p>The language codes used to create your transcription job. This parameter is
     * used with multi-language identification. For single-language identification
     * requests, refer to the singular version of this parameter,
     * <code>LanguageCode</code>.</p>
     */
    inline const Aws::Vector<LanguageCodeItem>& GetLanguageCodes() const{ return m_languageCodes; }

    /**
     * <p>The language codes used to create your transcription job. This parameter is
     * used with multi-language identification. For single-language identification
     * requests, refer to the singular version of this parameter,
     * <code>LanguageCode</code>.</p>
     */
    inline bool LanguageCodesHasBeenSet() const { return m_languageCodesHasBeenSet; }

    /**
     * <p>The language codes used to create your transcription job. This parameter is
     * used with multi-language identification. For single-language identification
     * requests, refer to the singular version of this parameter,
     * <code>LanguageCode</code>.</p>
     */
    inline void SetLanguageCodes(const Aws::Vector<LanguageCodeItem>& value) { m_languageCodesHasBeenSet = true; m_languageCodes = value; }

    /**
     * <p>The language codes used to create your transcription job. This parameter is
     * used with multi-language identification. For single-language identification
     * requests, refer to the singular version of this parameter,
     * <code>LanguageCode</code>.</p>
     */
    inline void SetLanguageCodes(Aws::Vector<LanguageCodeItem>&& value) { m_languageCodesHasBeenSet = true; m_languageCodes = std::move(value); }

    /**
     * <p>The language codes used to create your transcription job. This parameter is
     * used with multi-language identification. For single-language identification
     * requests, refer to the singular version of this parameter,
     * <code>LanguageCode</code>.</p>
     */
    inline TranscriptionJob& WithLanguageCodes(const Aws::Vector<LanguageCodeItem>& value) { SetLanguageCodes(value); return *this;}

    /**
     * <p>The language codes used to create your transcription job. This parameter is
     * used with multi-language identification. For single-language identification
     * requests, refer to the singular version of this parameter,
     * <code>LanguageCode</code>.</p>
     */
    inline TranscriptionJob& WithLanguageCodes(Aws::Vector<LanguageCodeItem>&& value) { SetLanguageCodes(std::move(value)); return *this;}

    /**
     * <p>The language codes used to create your transcription job. This parameter is
     * used with multi-language identification. For single-language identification
     * requests, refer to the singular version of this parameter,
     * <code>LanguageCode</code>.</p>
     */
    inline TranscriptionJob& AddLanguageCodes(const LanguageCodeItem& value) { m_languageCodesHasBeenSet = true; m_languageCodes.push_back(value); return *this; }

    /**
     * <p>The language codes used to create your transcription job. This parameter is
     * used with multi-language identification. For single-language identification
     * requests, refer to the singular version of this parameter,
     * <code>LanguageCode</code>.</p>
     */
    inline TranscriptionJob& AddLanguageCodes(LanguageCodeItem&& value) { m_languageCodesHasBeenSet = true; m_languageCodes.push_back(std::move(value)); return *this; }


    /**
     * <p>The tags, each in the form of a key:value pair, assigned to the specified
     * transcription job.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags, each in the form of a key:value pair, assigned to the specified
     * transcription job.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags, each in the form of a key:value pair, assigned to the specified
     * transcription job.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags, each in the form of a key:value pair, assigned to the specified
     * transcription job.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags, each in the form of a key:value pair, assigned to the specified
     * transcription job.</p>
     */
    inline TranscriptionJob& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags, each in the form of a key:value pair, assigned to the specified
     * transcription job.</p>
     */
    inline TranscriptionJob& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags, each in the form of a key:value pair, assigned to the specified
     * transcription job.</p>
     */
    inline TranscriptionJob& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags, each in the form of a key:value pair, assigned to the specified
     * transcription job.</p>
     */
    inline TranscriptionJob& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>Indicates whether subtitles were generated with your transcription.</p>
     */
    inline const SubtitlesOutput& GetSubtitles() const{ return m_subtitles; }

    /**
     * <p>Indicates whether subtitles were generated with your transcription.</p>
     */
    inline bool SubtitlesHasBeenSet() const { return m_subtitlesHasBeenSet; }

    /**
     * <p>Indicates whether subtitles were generated with your transcription.</p>
     */
    inline void SetSubtitles(const SubtitlesOutput& value) { m_subtitlesHasBeenSet = true; m_subtitles = value; }

    /**
     * <p>Indicates whether subtitles were generated with your transcription.</p>
     */
    inline void SetSubtitles(SubtitlesOutput&& value) { m_subtitlesHasBeenSet = true; m_subtitles = std::move(value); }

    /**
     * <p>Indicates whether subtitles were generated with your transcription.</p>
     */
    inline TranscriptionJob& WithSubtitles(const SubtitlesOutput& value) { SetSubtitles(value); return *this;}

    /**
     * <p>Indicates whether subtitles were generated with your transcription.</p>
     */
    inline TranscriptionJob& WithSubtitles(SubtitlesOutput&& value) { SetSubtitles(std::move(value)); return *this;}


    /**
     * <p>Provides the name and language of all custom language models, custom
     * vocabularies, and custom vocabulary filters that you included in your
     * request.</p>
     */
    inline const Aws::Map<LanguageCode, LanguageIdSettings>& GetLanguageIdSettings() const{ return m_languageIdSettings; }

    /**
     * <p>Provides the name and language of all custom language models, custom
     * vocabularies, and custom vocabulary filters that you included in your
     * request.</p>
     */
    inline bool LanguageIdSettingsHasBeenSet() const { return m_languageIdSettingsHasBeenSet; }

    /**
     * <p>Provides the name and language of all custom language models, custom
     * vocabularies, and custom vocabulary filters that you included in your
     * request.</p>
     */
    inline void SetLanguageIdSettings(const Aws::Map<LanguageCode, LanguageIdSettings>& value) { m_languageIdSettingsHasBeenSet = true; m_languageIdSettings = value; }

    /**
     * <p>Provides the name and language of all custom language models, custom
     * vocabularies, and custom vocabulary filters that you included in your
     * request.</p>
     */
    inline void SetLanguageIdSettings(Aws::Map<LanguageCode, LanguageIdSettings>&& value) { m_languageIdSettingsHasBeenSet = true; m_languageIdSettings = std::move(value); }

    /**
     * <p>Provides the name and language of all custom language models, custom
     * vocabularies, and custom vocabulary filters that you included in your
     * request.</p>
     */
    inline TranscriptionJob& WithLanguageIdSettings(const Aws::Map<LanguageCode, LanguageIdSettings>& value) { SetLanguageIdSettings(value); return *this;}

    /**
     * <p>Provides the name and language of all custom language models, custom
     * vocabularies, and custom vocabulary filters that you included in your
     * request.</p>
     */
    inline TranscriptionJob& WithLanguageIdSettings(Aws::Map<LanguageCode, LanguageIdSettings>&& value) { SetLanguageIdSettings(std::move(value)); return *this;}

    /**
     * <p>Provides the name and language of all custom language models, custom
     * vocabularies, and custom vocabulary filters that you included in your
     * request.</p>
     */
    inline TranscriptionJob& AddLanguageIdSettings(const LanguageCode& key, const LanguageIdSettings& value) { m_languageIdSettingsHasBeenSet = true; m_languageIdSettings.emplace(key, value); return *this; }

    /**
     * <p>Provides the name and language of all custom language models, custom
     * vocabularies, and custom vocabulary filters that you included in your
     * request.</p>
     */
    inline TranscriptionJob& AddLanguageIdSettings(LanguageCode&& key, const LanguageIdSettings& value) { m_languageIdSettingsHasBeenSet = true; m_languageIdSettings.emplace(std::move(key), value); return *this; }

    /**
     * <p>Provides the name and language of all custom language models, custom
     * vocabularies, and custom vocabulary filters that you included in your
     * request.</p>
     */
    inline TranscriptionJob& AddLanguageIdSettings(const LanguageCode& key, LanguageIdSettings&& value) { m_languageIdSettingsHasBeenSet = true; m_languageIdSettings.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Provides the name and language of all custom language models, custom
     * vocabularies, and custom vocabulary filters that you included in your
     * request.</p>
     */
    inline TranscriptionJob& AddLanguageIdSettings(LanguageCode&& key, LanguageIdSettings&& value) { m_languageIdSettingsHasBeenSet = true; m_languageIdSettings.emplace(std::move(key), std::move(value)); return *this; }

  private:

    Aws::String m_transcriptionJobName;
    bool m_transcriptionJobNameHasBeenSet = false;

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

    Transcript m_transcript;
    bool m_transcriptHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_completionTime;
    bool m_completionTimeHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Settings m_settings;
    bool m_settingsHasBeenSet = false;

    ModelSettings m_modelSettings;
    bool m_modelSettingsHasBeenSet = false;

    JobExecutionSettings m_jobExecutionSettings;
    bool m_jobExecutionSettingsHasBeenSet = false;

    ContentRedaction m_contentRedaction;
    bool m_contentRedactionHasBeenSet = false;

    bool m_identifyLanguage;
    bool m_identifyLanguageHasBeenSet = false;

    bool m_identifyMultipleLanguages;
    bool m_identifyMultipleLanguagesHasBeenSet = false;

    Aws::Vector<LanguageCode> m_languageOptions;
    bool m_languageOptionsHasBeenSet = false;

    double m_identifiedLanguageScore;
    bool m_identifiedLanguageScoreHasBeenSet = false;

    Aws::Vector<LanguageCodeItem> m_languageCodes;
    bool m_languageCodesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    SubtitlesOutput m_subtitles;
    bool m_subtitlesHasBeenSet = false;

    Aws::Map<LanguageCode, LanguageIdSettings> m_languageIdSettings;
    bool m_languageIdSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
