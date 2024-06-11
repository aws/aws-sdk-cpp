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
#include <aws/transcribe/model/ToxicityDetectionSettings.h>
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


    ///@{
    /**
     * <p>The name of the transcription job. Job names are case sensitive and must be
     * unique within an Amazon Web Services account.</p>
     */
    inline const Aws::String& GetTranscriptionJobName() const{ return m_transcriptionJobName; }
    inline bool TranscriptionJobNameHasBeenSet() const { return m_transcriptionJobNameHasBeenSet; }
    inline void SetTranscriptionJobName(const Aws::String& value) { m_transcriptionJobNameHasBeenSet = true; m_transcriptionJobName = value; }
    inline void SetTranscriptionJobName(Aws::String&& value) { m_transcriptionJobNameHasBeenSet = true; m_transcriptionJobName = std::move(value); }
    inline void SetTranscriptionJobName(const char* value) { m_transcriptionJobNameHasBeenSet = true; m_transcriptionJobName.assign(value); }
    inline TranscriptionJob& WithTranscriptionJobName(const Aws::String& value) { SetTranscriptionJobName(value); return *this;}
    inline TranscriptionJob& WithTranscriptionJobName(Aws::String&& value) { SetTranscriptionJobName(std::move(value)); return *this;}
    inline TranscriptionJob& WithTranscriptionJobName(const char* value) { SetTranscriptionJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the status of the specified transcription job.</p> <p>If the status
     * is <code>COMPLETED</code>, the job is finished and you can find the results at
     * the location specified in <code>TranscriptFileUri</code> (or
     * <code>RedactedTranscriptFileUri</code>, if you requested transcript redaction).
     * If the status is <code>FAILED</code>, <code>FailureReason</code> provides
     * details on why your transcription job failed.</p>
     */
    inline const TranscriptionJobStatus& GetTranscriptionJobStatus() const{ return m_transcriptionJobStatus; }
    inline bool TranscriptionJobStatusHasBeenSet() const { return m_transcriptionJobStatusHasBeenSet; }
    inline void SetTranscriptionJobStatus(const TranscriptionJobStatus& value) { m_transcriptionJobStatusHasBeenSet = true; m_transcriptionJobStatus = value; }
    inline void SetTranscriptionJobStatus(TranscriptionJobStatus&& value) { m_transcriptionJobStatusHasBeenSet = true; m_transcriptionJobStatus = std::move(value); }
    inline TranscriptionJob& WithTranscriptionJobStatus(const TranscriptionJobStatus& value) { SetTranscriptionJobStatus(value); return *this;}
    inline TranscriptionJob& WithTranscriptionJobStatus(TranscriptionJobStatus&& value) { SetTranscriptionJobStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language code used to create your transcription job. This parameter is
     * used with single-language identification. For multi-language identification
     * requests, refer to the plural version of this parameter,
     * <code>LanguageCodes</code>.</p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }
    inline TranscriptionJob& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}
    inline TranscriptionJob& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sample rate, in hertz, of the audio track in your input media file.</p>
     */
    inline int GetMediaSampleRateHertz() const{ return m_mediaSampleRateHertz; }
    inline bool MediaSampleRateHertzHasBeenSet() const { return m_mediaSampleRateHertzHasBeenSet; }
    inline void SetMediaSampleRateHertz(int value) { m_mediaSampleRateHertzHasBeenSet = true; m_mediaSampleRateHertz = value; }
    inline TranscriptionJob& WithMediaSampleRateHertz(int value) { SetMediaSampleRateHertz(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the input media file.</p>
     */
    inline const MediaFormat& GetMediaFormat() const{ return m_mediaFormat; }
    inline bool MediaFormatHasBeenSet() const { return m_mediaFormatHasBeenSet; }
    inline void SetMediaFormat(const MediaFormat& value) { m_mediaFormatHasBeenSet = true; m_mediaFormat = value; }
    inline void SetMediaFormat(MediaFormat&& value) { m_mediaFormatHasBeenSet = true; m_mediaFormat = std::move(value); }
    inline TranscriptionJob& WithMediaFormat(const MediaFormat& value) { SetMediaFormat(value); return *this;}
    inline TranscriptionJob& WithMediaFormat(MediaFormat&& value) { SetMediaFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the Amazon S3 location of the media file you used in your
     * request.</p>
     */
    inline const Media& GetMedia() const{ return m_media; }
    inline bool MediaHasBeenSet() const { return m_mediaHasBeenSet; }
    inline void SetMedia(const Media& value) { m_mediaHasBeenSet = true; m_media = value; }
    inline void SetMedia(Media&& value) { m_mediaHasBeenSet = true; m_media = std::move(value); }
    inline TranscriptionJob& WithMedia(const Media& value) { SetMedia(value); return *this;}
    inline TranscriptionJob& WithMedia(Media&& value) { SetMedia(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides you with the Amazon S3 URI you can use to access your
     * transcript.</p>
     */
    inline const Transcript& GetTranscript() const{ return m_transcript; }
    inline bool TranscriptHasBeenSet() const { return m_transcriptHasBeenSet; }
    inline void SetTranscript(const Transcript& value) { m_transcriptHasBeenSet = true; m_transcript = value; }
    inline void SetTranscript(Transcript&& value) { m_transcriptHasBeenSet = true; m_transcript = std::move(value); }
    inline TranscriptionJob& WithTranscript(const Transcript& value) { SetTranscript(value); return *this;}
    inline TranscriptionJob& WithTranscript(Transcript&& value) { SetTranscript(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the specified transcription job began processing.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.789000-07:00</code> represents a
     * transcription job that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline TranscriptionJob& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline TranscriptionJob& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the specified transcription job request was made.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.761000-07:00</code> represents a
     * transcription job that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline TranscriptionJob& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline TranscriptionJob& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the specified transcription job finished processing.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:33:13.922000-07:00</code> represents a
     * transcription job that started processing at 12:33 PM UTC-7 on May 4, 2022.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTime() const{ return m_completionTime; }
    inline bool CompletionTimeHasBeenSet() const { return m_completionTimeHasBeenSet; }
    inline void SetCompletionTime(const Aws::Utils::DateTime& value) { m_completionTimeHasBeenSet = true; m_completionTime = value; }
    inline void SetCompletionTime(Aws::Utils::DateTime&& value) { m_completionTimeHasBeenSet = true; m_completionTime = std::move(value); }
    inline TranscriptionJob& WithCompletionTime(const Aws::Utils::DateTime& value) { SetCompletionTime(value); return *this;}
    inline TranscriptionJob& WithCompletionTime(Aws::Utils::DateTime&& value) { SetCompletionTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>TranscriptionJobStatus</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the transcription job
     * request failed.</p> <p>The <code>FailureReason</code> field contains one of the
     * following values:</p> <ul> <li> <p> <code>Unsupported media format</code>.</p>
     * <p>The media format specified in <code>MediaFormat</code> isn't valid. Refer to
     * refer to the <code>MediaFormat</code> parameter for a list of supported
     * formats.</p> </li> <li> <p> <code>The media format provided does not match the
     * detected media format</code>.</p> <p>The media format specified in
     * <code>MediaFormat</code> doesn't match the format of the input file. Check the
     * media format of your media file and correct the specified value.</p> </li> <li>
     * <p> <code>Invalid sample rate for audio file</code>.</p> <p>The sample rate
     * specified in <code>MediaSampleRateHertz</code> isn't valid. The sample rate must
     * be between 8,000 and 48,000 hertz.</p> </li> <li> <p> <code>The sample rate
     * provided does not match the detected sample rate</code>.</p> <p>The sample rate
     * specified in <code>MediaSampleRateHertz</code> doesn't match the sample rate
     * detected in your input media file. Check the sample rate of your media file and
     * correct the specified value.</p> </li> <li> <p> <code>Invalid file size: file
     * size too large</code>.</p> <p>The size of your media file is larger than what
     * Amazon Transcribe can process. For more information, refer to <a
     * href="https://docs.aws.amazon.com/general/latest/gr/transcribe.html#limits-amazon-transcribe">Service
     * quotas</a>.</p> </li> <li> <p> <code>Invalid number of channels: number of
     * channels too large</code>.</p> <p>Your audio contains more channels than Amazon
     * Transcribe is able to process. For more information, refer to <a
     * href="https://docs.aws.amazon.com/general/latest/gr/transcribe.html#limits-amazon-transcribe">Service
     * quotas</a>.</p> </li> </ul>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }
    inline TranscriptionJob& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline TranscriptionJob& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline TranscriptionJob& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information on any additional settings that were included in your
     * request. Additional settings include channel identification, alternative
     * transcriptions, speaker partitioning, custom vocabularies, and custom vocabulary
     * filters.</p>
     */
    inline const Settings& GetSettings() const{ return m_settings; }
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }
    inline void SetSettings(const Settings& value) { m_settingsHasBeenSet = true; m_settings = value; }
    inline void SetSettings(Settings&& value) { m_settingsHasBeenSet = true; m_settings = std::move(value); }
    inline TranscriptionJob& WithSettings(const Settings& value) { SetSettings(value); return *this;}
    inline TranscriptionJob& WithSettings(Settings&& value) { SetSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information on the custom language model you included in your
     * request.</p>
     */
    inline const ModelSettings& GetModelSettings() const{ return m_modelSettings; }
    inline bool ModelSettingsHasBeenSet() const { return m_modelSettingsHasBeenSet; }
    inline void SetModelSettings(const ModelSettings& value) { m_modelSettingsHasBeenSet = true; m_modelSettings = value; }
    inline void SetModelSettings(ModelSettings&& value) { m_modelSettingsHasBeenSet = true; m_modelSettings = std::move(value); }
    inline TranscriptionJob& WithModelSettings(const ModelSettings& value) { SetModelSettings(value); return *this;}
    inline TranscriptionJob& WithModelSettings(ModelSettings&& value) { SetModelSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information about how your transcription job was processed. This
     * parameter shows if your request was queued and what data access role was
     * used.</p>
     */
    inline const JobExecutionSettings& GetJobExecutionSettings() const{ return m_jobExecutionSettings; }
    inline bool JobExecutionSettingsHasBeenSet() const { return m_jobExecutionSettingsHasBeenSet; }
    inline void SetJobExecutionSettings(const JobExecutionSettings& value) { m_jobExecutionSettingsHasBeenSet = true; m_jobExecutionSettings = value; }
    inline void SetJobExecutionSettings(JobExecutionSettings&& value) { m_jobExecutionSettingsHasBeenSet = true; m_jobExecutionSettings = std::move(value); }
    inline TranscriptionJob& WithJobExecutionSettings(const JobExecutionSettings& value) { SetJobExecutionSettings(value); return *this;}
    inline TranscriptionJob& WithJobExecutionSettings(JobExecutionSettings&& value) { SetJobExecutionSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether redaction was enabled in your transcript.</p>
     */
    inline const ContentRedaction& GetContentRedaction() const{ return m_contentRedaction; }
    inline bool ContentRedactionHasBeenSet() const { return m_contentRedactionHasBeenSet; }
    inline void SetContentRedaction(const ContentRedaction& value) { m_contentRedactionHasBeenSet = true; m_contentRedaction = value; }
    inline void SetContentRedaction(ContentRedaction&& value) { m_contentRedactionHasBeenSet = true; m_contentRedaction = std::move(value); }
    inline TranscriptionJob& WithContentRedaction(const ContentRedaction& value) { SetContentRedaction(value); return *this;}
    inline TranscriptionJob& WithContentRedaction(ContentRedaction&& value) { SetContentRedaction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether automatic language identification was enabled
     * (<code>TRUE</code>) for the specified transcription job.</p>
     */
    inline bool GetIdentifyLanguage() const{ return m_identifyLanguage; }
    inline bool IdentifyLanguageHasBeenSet() const { return m_identifyLanguageHasBeenSet; }
    inline void SetIdentifyLanguage(bool value) { m_identifyLanguageHasBeenSet = true; m_identifyLanguage = value; }
    inline TranscriptionJob& WithIdentifyLanguage(bool value) { SetIdentifyLanguage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether automatic multi-language identification was enabled
     * (<code>TRUE</code>) for the specified transcription job.</p>
     */
    inline bool GetIdentifyMultipleLanguages() const{ return m_identifyMultipleLanguages; }
    inline bool IdentifyMultipleLanguagesHasBeenSet() const { return m_identifyMultipleLanguagesHasBeenSet; }
    inline void SetIdentifyMultipleLanguages(bool value) { m_identifyMultipleLanguagesHasBeenSet = true; m_identifyMultipleLanguages = value; }
    inline TranscriptionJob& WithIdentifyMultipleLanguages(bool value) { SetIdentifyMultipleLanguages(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the language codes you specified in your request.</p>
     */
    inline const Aws::Vector<LanguageCode>& GetLanguageOptions() const{ return m_languageOptions; }
    inline bool LanguageOptionsHasBeenSet() const { return m_languageOptionsHasBeenSet; }
    inline void SetLanguageOptions(const Aws::Vector<LanguageCode>& value) { m_languageOptionsHasBeenSet = true; m_languageOptions = value; }
    inline void SetLanguageOptions(Aws::Vector<LanguageCode>&& value) { m_languageOptionsHasBeenSet = true; m_languageOptions = std::move(value); }
    inline TranscriptionJob& WithLanguageOptions(const Aws::Vector<LanguageCode>& value) { SetLanguageOptions(value); return *this;}
    inline TranscriptionJob& WithLanguageOptions(Aws::Vector<LanguageCode>&& value) { SetLanguageOptions(std::move(value)); return *this;}
    inline TranscriptionJob& AddLanguageOptions(const LanguageCode& value) { m_languageOptionsHasBeenSet = true; m_languageOptions.push_back(value); return *this; }
    inline TranscriptionJob& AddLanguageOptions(LanguageCode&& value) { m_languageOptionsHasBeenSet = true; m_languageOptions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The confidence score associated with the language identified in your media
     * file.</p> <p>Confidence scores are values between 0 and 1; a larger value
     * indicates a higher probability that the identified language correctly matches
     * the language spoken in your media.</p>
     */
    inline double GetIdentifiedLanguageScore() const{ return m_identifiedLanguageScore; }
    inline bool IdentifiedLanguageScoreHasBeenSet() const { return m_identifiedLanguageScoreHasBeenSet; }
    inline void SetIdentifiedLanguageScore(double value) { m_identifiedLanguageScoreHasBeenSet = true; m_identifiedLanguageScore = value; }
    inline TranscriptionJob& WithIdentifiedLanguageScore(double value) { SetIdentifiedLanguageScore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language codes used to create your transcription job. This parameter is
     * used with multi-language identification. For single-language identification
     * requests, refer to the singular version of this parameter,
     * <code>LanguageCode</code>.</p>
     */
    inline const Aws::Vector<LanguageCodeItem>& GetLanguageCodes() const{ return m_languageCodes; }
    inline bool LanguageCodesHasBeenSet() const { return m_languageCodesHasBeenSet; }
    inline void SetLanguageCodes(const Aws::Vector<LanguageCodeItem>& value) { m_languageCodesHasBeenSet = true; m_languageCodes = value; }
    inline void SetLanguageCodes(Aws::Vector<LanguageCodeItem>&& value) { m_languageCodesHasBeenSet = true; m_languageCodes = std::move(value); }
    inline TranscriptionJob& WithLanguageCodes(const Aws::Vector<LanguageCodeItem>& value) { SetLanguageCodes(value); return *this;}
    inline TranscriptionJob& WithLanguageCodes(Aws::Vector<LanguageCodeItem>&& value) { SetLanguageCodes(std::move(value)); return *this;}
    inline TranscriptionJob& AddLanguageCodes(const LanguageCodeItem& value) { m_languageCodesHasBeenSet = true; m_languageCodes.push_back(value); return *this; }
    inline TranscriptionJob& AddLanguageCodes(LanguageCodeItem&& value) { m_languageCodesHasBeenSet = true; m_languageCodes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags, each in the form of a key:value pair, assigned to the specified
     * transcription job.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline TranscriptionJob& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline TranscriptionJob& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline TranscriptionJob& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline TranscriptionJob& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether subtitles were generated with your transcription.</p>
     */
    inline const SubtitlesOutput& GetSubtitles() const{ return m_subtitles; }
    inline bool SubtitlesHasBeenSet() const { return m_subtitlesHasBeenSet; }
    inline void SetSubtitles(const SubtitlesOutput& value) { m_subtitlesHasBeenSet = true; m_subtitles = value; }
    inline void SetSubtitles(SubtitlesOutput&& value) { m_subtitlesHasBeenSet = true; m_subtitles = std::move(value); }
    inline TranscriptionJob& WithSubtitles(const SubtitlesOutput& value) { SetSubtitles(value); return *this;}
    inline TranscriptionJob& WithSubtitles(SubtitlesOutput&& value) { SetSubtitles(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the name and language of all custom language models, custom
     * vocabularies, and custom vocabulary filters that you included in your
     * request.</p>
     */
    inline const Aws::Map<LanguageCode, LanguageIdSettings>& GetLanguageIdSettings() const{ return m_languageIdSettings; }
    inline bool LanguageIdSettingsHasBeenSet() const { return m_languageIdSettingsHasBeenSet; }
    inline void SetLanguageIdSettings(const Aws::Map<LanguageCode, LanguageIdSettings>& value) { m_languageIdSettingsHasBeenSet = true; m_languageIdSettings = value; }
    inline void SetLanguageIdSettings(Aws::Map<LanguageCode, LanguageIdSettings>&& value) { m_languageIdSettingsHasBeenSet = true; m_languageIdSettings = std::move(value); }
    inline TranscriptionJob& WithLanguageIdSettings(const Aws::Map<LanguageCode, LanguageIdSettings>& value) { SetLanguageIdSettings(value); return *this;}
    inline TranscriptionJob& WithLanguageIdSettings(Aws::Map<LanguageCode, LanguageIdSettings>&& value) { SetLanguageIdSettings(std::move(value)); return *this;}
    inline TranscriptionJob& AddLanguageIdSettings(const LanguageCode& key, const LanguageIdSettings& value) { m_languageIdSettingsHasBeenSet = true; m_languageIdSettings.emplace(key, value); return *this; }
    inline TranscriptionJob& AddLanguageIdSettings(LanguageCode&& key, const LanguageIdSettings& value) { m_languageIdSettingsHasBeenSet = true; m_languageIdSettings.emplace(std::move(key), value); return *this; }
    inline TranscriptionJob& AddLanguageIdSettings(const LanguageCode& key, LanguageIdSettings&& value) { m_languageIdSettingsHasBeenSet = true; m_languageIdSettings.emplace(key, std::move(value)); return *this; }
    inline TranscriptionJob& AddLanguageIdSettings(LanguageCode&& key, LanguageIdSettings&& value) { m_languageIdSettingsHasBeenSet = true; m_languageIdSettings.emplace(std::move(key), std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Provides information about the toxicity detection settings applied to your
     * transcription.</p>
     */
    inline const Aws::Vector<ToxicityDetectionSettings>& GetToxicityDetection() const{ return m_toxicityDetection; }
    inline bool ToxicityDetectionHasBeenSet() const { return m_toxicityDetectionHasBeenSet; }
    inline void SetToxicityDetection(const Aws::Vector<ToxicityDetectionSettings>& value) { m_toxicityDetectionHasBeenSet = true; m_toxicityDetection = value; }
    inline void SetToxicityDetection(Aws::Vector<ToxicityDetectionSettings>&& value) { m_toxicityDetectionHasBeenSet = true; m_toxicityDetection = std::move(value); }
    inline TranscriptionJob& WithToxicityDetection(const Aws::Vector<ToxicityDetectionSettings>& value) { SetToxicityDetection(value); return *this;}
    inline TranscriptionJob& WithToxicityDetection(Aws::Vector<ToxicityDetectionSettings>&& value) { SetToxicityDetection(std::move(value)); return *this;}
    inline TranscriptionJob& AddToxicityDetection(const ToxicityDetectionSettings& value) { m_toxicityDetectionHasBeenSet = true; m_toxicityDetection.push_back(value); return *this; }
    inline TranscriptionJob& AddToxicityDetection(ToxicityDetectionSettings&& value) { m_toxicityDetectionHasBeenSet = true; m_toxicityDetection.push_back(std::move(value)); return *this; }
    ///@}
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

    Aws::Vector<ToxicityDetectionSettings> m_toxicityDetection;
    bool m_toxicityDetectionHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
