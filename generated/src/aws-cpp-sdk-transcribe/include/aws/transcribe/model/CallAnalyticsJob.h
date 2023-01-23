/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/transcribe/model/CallAnalyticsJobStatus.h>
#include <aws/transcribe/model/LanguageCode.h>
#include <aws/transcribe/model/MediaFormat.h>
#include <aws/transcribe/model/Media.h>
#include <aws/transcribe/model/Transcript.h>
#include <aws/core/utils/DateTime.h>
#include <aws/transcribe/model/CallAnalyticsJobSettings.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/transcribe/model/ChannelDefinition.h>
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
   * <p>Provides detailed information about a Call Analytics job.</p> <p>To view the
   * job's status, refer to <code>CallAnalyticsJobStatus</code>. If the status is
   * <code>COMPLETED</code>, the job is finished. You can find your completed
   * transcript at the URI specified in <code>TranscriptFileUri</code>. If the status
   * is <code>FAILED</code>, <code>FailureReason</code> provides details on why your
   * transcription job failed.</p> <p>If you enabled personally identifiable
   * information (PII) redaction, the redacted transcript appears at the location
   * specified in <code>RedactedTranscriptFileUri</code>.</p> <p>If you chose to
   * redact the audio in your media file, you can find your redacted media file at
   * the location specified in the <code>RedactedMediaFileUri</code> field of your
   * response.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/CallAnalyticsJob">AWS
   * API Reference</a></p>
   */
  class CallAnalyticsJob
  {
  public:
    AWS_TRANSCRIBESERVICE_API CallAnalyticsJob();
    AWS_TRANSCRIBESERVICE_API CallAnalyticsJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API CallAnalyticsJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the Call Analytics job. Job names are case sensitive and must be
     * unique within an Amazon Web Services account.</p>
     */
    inline const Aws::String& GetCallAnalyticsJobName() const{ return m_callAnalyticsJobName; }

    /**
     * <p>The name of the Call Analytics job. Job names are case sensitive and must be
     * unique within an Amazon Web Services account.</p>
     */
    inline bool CallAnalyticsJobNameHasBeenSet() const { return m_callAnalyticsJobNameHasBeenSet; }

    /**
     * <p>The name of the Call Analytics job. Job names are case sensitive and must be
     * unique within an Amazon Web Services account.</p>
     */
    inline void SetCallAnalyticsJobName(const Aws::String& value) { m_callAnalyticsJobNameHasBeenSet = true; m_callAnalyticsJobName = value; }

    /**
     * <p>The name of the Call Analytics job. Job names are case sensitive and must be
     * unique within an Amazon Web Services account.</p>
     */
    inline void SetCallAnalyticsJobName(Aws::String&& value) { m_callAnalyticsJobNameHasBeenSet = true; m_callAnalyticsJobName = std::move(value); }

    /**
     * <p>The name of the Call Analytics job. Job names are case sensitive and must be
     * unique within an Amazon Web Services account.</p>
     */
    inline void SetCallAnalyticsJobName(const char* value) { m_callAnalyticsJobNameHasBeenSet = true; m_callAnalyticsJobName.assign(value); }

    /**
     * <p>The name of the Call Analytics job. Job names are case sensitive and must be
     * unique within an Amazon Web Services account.</p>
     */
    inline CallAnalyticsJob& WithCallAnalyticsJobName(const Aws::String& value) { SetCallAnalyticsJobName(value); return *this;}

    /**
     * <p>The name of the Call Analytics job. Job names are case sensitive and must be
     * unique within an Amazon Web Services account.</p>
     */
    inline CallAnalyticsJob& WithCallAnalyticsJobName(Aws::String&& value) { SetCallAnalyticsJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the Call Analytics job. Job names are case sensitive and must be
     * unique within an Amazon Web Services account.</p>
     */
    inline CallAnalyticsJob& WithCallAnalyticsJobName(const char* value) { SetCallAnalyticsJobName(value); return *this;}


    /**
     * <p>Provides the status of the specified Call Analytics job.</p> <p>If the status
     * is <code>COMPLETED</code>, the job is finished and you can find the results at
     * the location specified in <code>TranscriptFileUri</code> (or
     * <code>RedactedTranscriptFileUri</code>, if you requested transcript redaction).
     * If the status is <code>FAILED</code>, <code>FailureReason</code> provides
     * details on why your transcription job failed.</p>
     */
    inline const CallAnalyticsJobStatus& GetCallAnalyticsJobStatus() const{ return m_callAnalyticsJobStatus; }

    /**
     * <p>Provides the status of the specified Call Analytics job.</p> <p>If the status
     * is <code>COMPLETED</code>, the job is finished and you can find the results at
     * the location specified in <code>TranscriptFileUri</code> (or
     * <code>RedactedTranscriptFileUri</code>, if you requested transcript redaction).
     * If the status is <code>FAILED</code>, <code>FailureReason</code> provides
     * details on why your transcription job failed.</p>
     */
    inline bool CallAnalyticsJobStatusHasBeenSet() const { return m_callAnalyticsJobStatusHasBeenSet; }

    /**
     * <p>Provides the status of the specified Call Analytics job.</p> <p>If the status
     * is <code>COMPLETED</code>, the job is finished and you can find the results at
     * the location specified in <code>TranscriptFileUri</code> (or
     * <code>RedactedTranscriptFileUri</code>, if you requested transcript redaction).
     * If the status is <code>FAILED</code>, <code>FailureReason</code> provides
     * details on why your transcription job failed.</p>
     */
    inline void SetCallAnalyticsJobStatus(const CallAnalyticsJobStatus& value) { m_callAnalyticsJobStatusHasBeenSet = true; m_callAnalyticsJobStatus = value; }

    /**
     * <p>Provides the status of the specified Call Analytics job.</p> <p>If the status
     * is <code>COMPLETED</code>, the job is finished and you can find the results at
     * the location specified in <code>TranscriptFileUri</code> (or
     * <code>RedactedTranscriptFileUri</code>, if you requested transcript redaction).
     * If the status is <code>FAILED</code>, <code>FailureReason</code> provides
     * details on why your transcription job failed.</p>
     */
    inline void SetCallAnalyticsJobStatus(CallAnalyticsJobStatus&& value) { m_callAnalyticsJobStatusHasBeenSet = true; m_callAnalyticsJobStatus = std::move(value); }

    /**
     * <p>Provides the status of the specified Call Analytics job.</p> <p>If the status
     * is <code>COMPLETED</code>, the job is finished and you can find the results at
     * the location specified in <code>TranscriptFileUri</code> (or
     * <code>RedactedTranscriptFileUri</code>, if you requested transcript redaction).
     * If the status is <code>FAILED</code>, <code>FailureReason</code> provides
     * details on why your transcription job failed.</p>
     */
    inline CallAnalyticsJob& WithCallAnalyticsJobStatus(const CallAnalyticsJobStatus& value) { SetCallAnalyticsJobStatus(value); return *this;}

    /**
     * <p>Provides the status of the specified Call Analytics job.</p> <p>If the status
     * is <code>COMPLETED</code>, the job is finished and you can find the results at
     * the location specified in <code>TranscriptFileUri</code> (or
     * <code>RedactedTranscriptFileUri</code>, if you requested transcript redaction).
     * If the status is <code>FAILED</code>, <code>FailureReason</code> provides
     * details on why your transcription job failed.</p>
     */
    inline CallAnalyticsJob& WithCallAnalyticsJobStatus(CallAnalyticsJobStatus&& value) { SetCallAnalyticsJobStatus(std::move(value)); return *this;}


    /**
     * <p>The language code used to create your Call Analytics job. For a list of
     * supported languages and their associated language codes, refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table.</p> <p>If you don't know the language spoken in your media
     * file, you can omit this field and let Amazon Transcribe automatically identify
     * the language of your media. To improve the accuracy of language identification,
     * you can include several language codes and Amazon Transcribe chooses the closest
     * match for your transcription.</p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>The language code used to create your Call Analytics job. For a list of
     * supported languages and their associated language codes, refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table.</p> <p>If you don't know the language spoken in your media
     * file, you can omit this field and let Amazon Transcribe automatically identify
     * the language of your media. To improve the accuracy of language identification,
     * you can include several language codes and Amazon Transcribe chooses the closest
     * match for your transcription.</p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p>The language code used to create your Call Analytics job. For a list of
     * supported languages and their associated language codes, refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table.</p> <p>If you don't know the language spoken in your media
     * file, you can omit this field and let Amazon Transcribe automatically identify
     * the language of your media. To improve the accuracy of language identification,
     * you can include several language codes and Amazon Transcribe chooses the closest
     * match for your transcription.</p>
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>The language code used to create your Call Analytics job. For a list of
     * supported languages and their associated language codes, refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table.</p> <p>If you don't know the language spoken in your media
     * file, you can omit this field and let Amazon Transcribe automatically identify
     * the language of your media. To improve the accuracy of language identification,
     * you can include several language codes and Amazon Transcribe chooses the closest
     * match for your transcription.</p>
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>The language code used to create your Call Analytics job. For a list of
     * supported languages and their associated language codes, refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table.</p> <p>If you don't know the language spoken in your media
     * file, you can omit this field and let Amazon Transcribe automatically identify
     * the language of your media. To improve the accuracy of language identification,
     * you can include several language codes and Amazon Transcribe chooses the closest
     * match for your transcription.</p>
     */
    inline CallAnalyticsJob& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The language code used to create your Call Analytics job. For a list of
     * supported languages and their associated language codes, refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table.</p> <p>If you don't know the language spoken in your media
     * file, you can omit this field and let Amazon Transcribe automatically identify
     * the language of your media. To improve the accuracy of language identification,
     * you can include several language codes and Amazon Transcribe chooses the closest
     * match for your transcription.</p>
     */
    inline CallAnalyticsJob& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


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
    inline CallAnalyticsJob& WithMediaSampleRateHertz(int value) { SetMediaSampleRateHertz(value); return *this;}


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
    inline CallAnalyticsJob& WithMediaFormat(const MediaFormat& value) { SetMediaFormat(value); return *this;}

    /**
     * <p>The format of the input media file.</p>
     */
    inline CallAnalyticsJob& WithMediaFormat(MediaFormat&& value) { SetMediaFormat(std::move(value)); return *this;}


    /**
     * <p>Provides the Amazon S3 location of the media file you used in your Call
     * Analytics request.</p>
     */
    inline const Media& GetMedia() const{ return m_media; }

    /**
     * <p>Provides the Amazon S3 location of the media file you used in your Call
     * Analytics request.</p>
     */
    inline bool MediaHasBeenSet() const { return m_mediaHasBeenSet; }

    /**
     * <p>Provides the Amazon S3 location of the media file you used in your Call
     * Analytics request.</p>
     */
    inline void SetMedia(const Media& value) { m_mediaHasBeenSet = true; m_media = value; }

    /**
     * <p>Provides the Amazon S3 location of the media file you used in your Call
     * Analytics request.</p>
     */
    inline void SetMedia(Media&& value) { m_mediaHasBeenSet = true; m_media = std::move(value); }

    /**
     * <p>Provides the Amazon S3 location of the media file you used in your Call
     * Analytics request.</p>
     */
    inline CallAnalyticsJob& WithMedia(const Media& value) { SetMedia(value); return *this;}

    /**
     * <p>Provides the Amazon S3 location of the media file you used in your Call
     * Analytics request.</p>
     */
    inline CallAnalyticsJob& WithMedia(Media&& value) { SetMedia(std::move(value)); return *this;}


    
    inline const Transcript& GetTranscript() const{ return m_transcript; }

    
    inline bool TranscriptHasBeenSet() const { return m_transcriptHasBeenSet; }

    
    inline void SetTranscript(const Transcript& value) { m_transcriptHasBeenSet = true; m_transcript = value; }

    
    inline void SetTranscript(Transcript&& value) { m_transcriptHasBeenSet = true; m_transcript = std::move(value); }

    
    inline CallAnalyticsJob& WithTranscript(const Transcript& value) { SetTranscript(value); return *this;}

    
    inline CallAnalyticsJob& WithTranscript(Transcript&& value) { SetTranscript(std::move(value)); return *this;}


    /**
     * <p>The date and time the specified Call Analytics job began processing.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.789000-07:00</code> represents a
     * transcription job that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The date and time the specified Call Analytics job began processing.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.789000-07:00</code> represents a
     * transcription job that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The date and time the specified Call Analytics job began processing.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.789000-07:00</code> represents a
     * transcription job that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The date and time the specified Call Analytics job began processing.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.789000-07:00</code> represents a
     * transcription job that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The date and time the specified Call Analytics job began processing.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.789000-07:00</code> represents a
     * transcription job that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline CallAnalyticsJob& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The date and time the specified Call Analytics job began processing.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.789000-07:00</code> represents a
     * transcription job that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline CallAnalyticsJob& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The date and time the specified Call Analytics job request was made.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.761000-07:00</code> represents a
     * transcription job that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The date and time the specified Call Analytics job request was made.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.761000-07:00</code> represents a
     * transcription job that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The date and time the specified Call Analytics job request was made.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.761000-07:00</code> represents a
     * transcription job that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The date and time the specified Call Analytics job request was made.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.761000-07:00</code> represents a
     * transcription job that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The date and time the specified Call Analytics job request was made.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.761000-07:00</code> represents a
     * transcription job that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline CallAnalyticsJob& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The date and time the specified Call Analytics job request was made.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.761000-07:00</code> represents a
     * transcription job that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline CallAnalyticsJob& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The date and time the specified Call Analytics job finished processing.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:33:13.922000-07:00</code> represents a
     * transcription job that started processing at 12:33 PM UTC-7 on May 4, 2022.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTime() const{ return m_completionTime; }

    /**
     * <p>The date and time the specified Call Analytics job finished processing.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:33:13.922000-07:00</code> represents a
     * transcription job that started processing at 12:33 PM UTC-7 on May 4, 2022.</p>
     */
    inline bool CompletionTimeHasBeenSet() const { return m_completionTimeHasBeenSet; }

    /**
     * <p>The date and time the specified Call Analytics job finished processing.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:33:13.922000-07:00</code> represents a
     * transcription job that started processing at 12:33 PM UTC-7 on May 4, 2022.</p>
     */
    inline void SetCompletionTime(const Aws::Utils::DateTime& value) { m_completionTimeHasBeenSet = true; m_completionTime = value; }

    /**
     * <p>The date and time the specified Call Analytics job finished processing.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:33:13.922000-07:00</code> represents a
     * transcription job that started processing at 12:33 PM UTC-7 on May 4, 2022.</p>
     */
    inline void SetCompletionTime(Aws::Utils::DateTime&& value) { m_completionTimeHasBeenSet = true; m_completionTime = std::move(value); }

    /**
     * <p>The date and time the specified Call Analytics job finished processing.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:33:13.922000-07:00</code> represents a
     * transcription job that started processing at 12:33 PM UTC-7 on May 4, 2022.</p>
     */
    inline CallAnalyticsJob& WithCompletionTime(const Aws::Utils::DateTime& value) { SetCompletionTime(value); return *this;}

    /**
     * <p>The date and time the specified Call Analytics job finished processing.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:33:13.922000-07:00</code> represents a
     * transcription job that started processing at 12:33 PM UTC-7 on May 4, 2022.</p>
     */
    inline CallAnalyticsJob& WithCompletionTime(Aws::Utils::DateTime&& value) { SetCompletionTime(std::move(value)); return *this;}


    /**
     * <p>If <code>CallAnalyticsJobStatus</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the Call Analytics job
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
     * <p>If <code>CallAnalyticsJobStatus</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the Call Analytics job
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
     * <p>If <code>CallAnalyticsJobStatus</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the Call Analytics job
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
     * <p>If <code>CallAnalyticsJobStatus</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the Call Analytics job
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
     * <p>If <code>CallAnalyticsJobStatus</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the Call Analytics job
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
     * <p>If <code>CallAnalyticsJobStatus</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the Call Analytics job
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
    inline CallAnalyticsJob& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>If <code>CallAnalyticsJobStatus</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the Call Analytics job
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
    inline CallAnalyticsJob& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>If <code>CallAnalyticsJobStatus</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the Call Analytics job
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
    inline CallAnalyticsJob& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) you included in your request.</p>
     */
    inline const Aws::String& GetDataAccessRoleArn() const{ return m_dataAccessRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) you included in your request.</p>
     */
    inline bool DataAccessRoleArnHasBeenSet() const { return m_dataAccessRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) you included in your request.</p>
     */
    inline void SetDataAccessRoleArn(const Aws::String& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) you included in your request.</p>
     */
    inline void SetDataAccessRoleArn(Aws::String&& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) you included in your request.</p>
     */
    inline void SetDataAccessRoleArn(const char* value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) you included in your request.</p>
     */
    inline CallAnalyticsJob& WithDataAccessRoleArn(const Aws::String& value) { SetDataAccessRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) you included in your request.</p>
     */
    inline CallAnalyticsJob& WithDataAccessRoleArn(Aws::String&& value) { SetDataAccessRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) you included in your request.</p>
     */
    inline CallAnalyticsJob& WithDataAccessRoleArn(const char* value) { SetDataAccessRoleArn(value); return *this;}


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
    inline CallAnalyticsJob& WithIdentifiedLanguageScore(double value) { SetIdentifiedLanguageScore(value); return *this;}


    /**
     * <p>Provides information on any additional settings that were included in your
     * request. Additional settings include content redaction and language
     * identification settings.</p>
     */
    inline const CallAnalyticsJobSettings& GetSettings() const{ return m_settings; }

    /**
     * <p>Provides information on any additional settings that were included in your
     * request. Additional settings include content redaction and language
     * identification settings.</p>
     */
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }

    /**
     * <p>Provides information on any additional settings that were included in your
     * request. Additional settings include content redaction and language
     * identification settings.</p>
     */
    inline void SetSettings(const CallAnalyticsJobSettings& value) { m_settingsHasBeenSet = true; m_settings = value; }

    /**
     * <p>Provides information on any additional settings that were included in your
     * request. Additional settings include content redaction and language
     * identification settings.</p>
     */
    inline void SetSettings(CallAnalyticsJobSettings&& value) { m_settingsHasBeenSet = true; m_settings = std::move(value); }

    /**
     * <p>Provides information on any additional settings that were included in your
     * request. Additional settings include content redaction and language
     * identification settings.</p>
     */
    inline CallAnalyticsJob& WithSettings(const CallAnalyticsJobSettings& value) { SetSettings(value); return *this;}

    /**
     * <p>Provides information on any additional settings that were included in your
     * request. Additional settings include content redaction and language
     * identification settings.</p>
     */
    inline CallAnalyticsJob& WithSettings(CallAnalyticsJobSettings&& value) { SetSettings(std::move(value)); return *this;}


    /**
     * <p>Indicates which speaker is on which channel.</p>
     */
    inline const Aws::Vector<ChannelDefinition>& GetChannelDefinitions() const{ return m_channelDefinitions; }

    /**
     * <p>Indicates which speaker is on which channel.</p>
     */
    inline bool ChannelDefinitionsHasBeenSet() const { return m_channelDefinitionsHasBeenSet; }

    /**
     * <p>Indicates which speaker is on which channel.</p>
     */
    inline void SetChannelDefinitions(const Aws::Vector<ChannelDefinition>& value) { m_channelDefinitionsHasBeenSet = true; m_channelDefinitions = value; }

    /**
     * <p>Indicates which speaker is on which channel.</p>
     */
    inline void SetChannelDefinitions(Aws::Vector<ChannelDefinition>&& value) { m_channelDefinitionsHasBeenSet = true; m_channelDefinitions = std::move(value); }

    /**
     * <p>Indicates which speaker is on which channel.</p>
     */
    inline CallAnalyticsJob& WithChannelDefinitions(const Aws::Vector<ChannelDefinition>& value) { SetChannelDefinitions(value); return *this;}

    /**
     * <p>Indicates which speaker is on which channel.</p>
     */
    inline CallAnalyticsJob& WithChannelDefinitions(Aws::Vector<ChannelDefinition>&& value) { SetChannelDefinitions(std::move(value)); return *this;}

    /**
     * <p>Indicates which speaker is on which channel.</p>
     */
    inline CallAnalyticsJob& AddChannelDefinitions(const ChannelDefinition& value) { m_channelDefinitionsHasBeenSet = true; m_channelDefinitions.push_back(value); return *this; }

    /**
     * <p>Indicates which speaker is on which channel.</p>
     */
    inline CallAnalyticsJob& AddChannelDefinitions(ChannelDefinition&& value) { m_channelDefinitionsHasBeenSet = true; m_channelDefinitions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_callAnalyticsJobName;
    bool m_callAnalyticsJobNameHasBeenSet = false;

    CallAnalyticsJobStatus m_callAnalyticsJobStatus;
    bool m_callAnalyticsJobStatusHasBeenSet = false;

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

    Aws::String m_dataAccessRoleArn;
    bool m_dataAccessRoleArnHasBeenSet = false;

    double m_identifiedLanguageScore;
    bool m_identifiedLanguageScoreHasBeenSet = false;

    CallAnalyticsJobSettings m_settings;
    bool m_settingsHasBeenSet = false;

    Aws::Vector<ChannelDefinition> m_channelDefinitions;
    bool m_channelDefinitionsHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
