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
    AWS_TRANSCRIBESERVICE_API TranscriptionJob() = default;
    AWS_TRANSCRIBESERVICE_API TranscriptionJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API TranscriptionJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the transcription job. Job names are case sensitive and must be
     * unique within an Amazon Web Services account.</p>
     */
    inline const Aws::String& GetTranscriptionJobName() const { return m_transcriptionJobName; }
    inline bool TranscriptionJobNameHasBeenSet() const { return m_transcriptionJobNameHasBeenSet; }
    template<typename TranscriptionJobNameT = Aws::String>
    void SetTranscriptionJobName(TranscriptionJobNameT&& value) { m_transcriptionJobNameHasBeenSet = true; m_transcriptionJobName = std::forward<TranscriptionJobNameT>(value); }
    template<typename TranscriptionJobNameT = Aws::String>
    TranscriptionJob& WithTranscriptionJobName(TranscriptionJobNameT&& value) { SetTranscriptionJobName(std::forward<TranscriptionJobNameT>(value)); return *this;}
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
    inline TranscriptionJobStatus GetTranscriptionJobStatus() const { return m_transcriptionJobStatus; }
    inline bool TranscriptionJobStatusHasBeenSet() const { return m_transcriptionJobStatusHasBeenSet; }
    inline void SetTranscriptionJobStatus(TranscriptionJobStatus value) { m_transcriptionJobStatusHasBeenSet = true; m_transcriptionJobStatus = value; }
    inline TranscriptionJob& WithTranscriptionJobStatus(TranscriptionJobStatus value) { SetTranscriptionJobStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language code used to create your transcription job. This parameter is
     * used with single-language identification. For multi-language identification
     * requests, refer to the plural version of this parameter,
     * <code>LanguageCodes</code>.</p>
     */
    inline LanguageCode GetLanguageCode() const { return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    inline void SetLanguageCode(LanguageCode value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }
    inline TranscriptionJob& WithLanguageCode(LanguageCode value) { SetLanguageCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sample rate, in hertz, of the audio track in your input media file.</p>
     */
    inline int GetMediaSampleRateHertz() const { return m_mediaSampleRateHertz; }
    inline bool MediaSampleRateHertzHasBeenSet() const { return m_mediaSampleRateHertzHasBeenSet; }
    inline void SetMediaSampleRateHertz(int value) { m_mediaSampleRateHertzHasBeenSet = true; m_mediaSampleRateHertz = value; }
    inline TranscriptionJob& WithMediaSampleRateHertz(int value) { SetMediaSampleRateHertz(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the input media file.</p>
     */
    inline MediaFormat GetMediaFormat() const { return m_mediaFormat; }
    inline bool MediaFormatHasBeenSet() const { return m_mediaFormatHasBeenSet; }
    inline void SetMediaFormat(MediaFormat value) { m_mediaFormatHasBeenSet = true; m_mediaFormat = value; }
    inline TranscriptionJob& WithMediaFormat(MediaFormat value) { SetMediaFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the Amazon S3 location of the media file you used in your
     * request.</p>
     */
    inline const Media& GetMedia() const { return m_media; }
    inline bool MediaHasBeenSet() const { return m_mediaHasBeenSet; }
    template<typename MediaT = Media>
    void SetMedia(MediaT&& value) { m_mediaHasBeenSet = true; m_media = std::forward<MediaT>(value); }
    template<typename MediaT = Media>
    TranscriptionJob& WithMedia(MediaT&& value) { SetMedia(std::forward<MediaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides you with the Amazon S3 URI you can use to access your
     * transcript.</p>
     */
    inline const Transcript& GetTranscript() const { return m_transcript; }
    inline bool TranscriptHasBeenSet() const { return m_transcriptHasBeenSet; }
    template<typename TranscriptT = Transcript>
    void SetTranscript(TranscriptT&& value) { m_transcriptHasBeenSet = true; m_transcript = std::forward<TranscriptT>(value); }
    template<typename TranscriptT = Transcript>
    TranscriptionJob& WithTranscript(TranscriptT&& value) { SetTranscript(std::forward<TranscriptT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the specified transcription job began processing.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.789000-07:00</code> represents a
     * transcription job that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    TranscriptionJob& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the specified transcription job request was made.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.761000-07:00</code> represents a
     * transcription job that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    TranscriptionJob& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the specified transcription job finished processing.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:33:13.922000-07:00</code> represents a
     * transcription job that started processing at 12:33 PM UTC-7 on May 4, 2022.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTime() const { return m_completionTime; }
    inline bool CompletionTimeHasBeenSet() const { return m_completionTimeHasBeenSet; }
    template<typename CompletionTimeT = Aws::Utils::DateTime>
    void SetCompletionTime(CompletionTimeT&& value) { m_completionTimeHasBeenSet = true; m_completionTime = std::forward<CompletionTimeT>(value); }
    template<typename CompletionTimeT = Aws::Utils::DateTime>
    TranscriptionJob& WithCompletionTime(CompletionTimeT&& value) { SetCompletionTime(std::forward<CompletionTimeT>(value)); return *this;}
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
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    TranscriptionJob& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information on any additional settings that were included in your
     * request. Additional settings include channel identification, alternative
     * transcriptions, speaker partitioning, custom vocabularies, and custom vocabulary
     * filters.</p>
     */
    inline const Settings& GetSettings() const { return m_settings; }
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }
    template<typename SettingsT = Settings>
    void SetSettings(SettingsT&& value) { m_settingsHasBeenSet = true; m_settings = std::forward<SettingsT>(value); }
    template<typename SettingsT = Settings>
    TranscriptionJob& WithSettings(SettingsT&& value) { SetSettings(std::forward<SettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information on the custom language model you included in your
     * request.</p>
     */
    inline const ModelSettings& GetModelSettings() const { return m_modelSettings; }
    inline bool ModelSettingsHasBeenSet() const { return m_modelSettingsHasBeenSet; }
    template<typename ModelSettingsT = ModelSettings>
    void SetModelSettings(ModelSettingsT&& value) { m_modelSettingsHasBeenSet = true; m_modelSettings = std::forward<ModelSettingsT>(value); }
    template<typename ModelSettingsT = ModelSettings>
    TranscriptionJob& WithModelSettings(ModelSettingsT&& value) { SetModelSettings(std::forward<ModelSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information about how your transcription job was processed. This
     * parameter shows if your request was queued and what data access role was
     * used.</p>
     */
    inline const JobExecutionSettings& GetJobExecutionSettings() const { return m_jobExecutionSettings; }
    inline bool JobExecutionSettingsHasBeenSet() const { return m_jobExecutionSettingsHasBeenSet; }
    template<typename JobExecutionSettingsT = JobExecutionSettings>
    void SetJobExecutionSettings(JobExecutionSettingsT&& value) { m_jobExecutionSettingsHasBeenSet = true; m_jobExecutionSettings = std::forward<JobExecutionSettingsT>(value); }
    template<typename JobExecutionSettingsT = JobExecutionSettings>
    TranscriptionJob& WithJobExecutionSettings(JobExecutionSettingsT&& value) { SetJobExecutionSettings(std::forward<JobExecutionSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether redaction was enabled in your transcript.</p>
     */
    inline const ContentRedaction& GetContentRedaction() const { return m_contentRedaction; }
    inline bool ContentRedactionHasBeenSet() const { return m_contentRedactionHasBeenSet; }
    template<typename ContentRedactionT = ContentRedaction>
    void SetContentRedaction(ContentRedactionT&& value) { m_contentRedactionHasBeenSet = true; m_contentRedaction = std::forward<ContentRedactionT>(value); }
    template<typename ContentRedactionT = ContentRedaction>
    TranscriptionJob& WithContentRedaction(ContentRedactionT&& value) { SetContentRedaction(std::forward<ContentRedactionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether automatic language identification was enabled
     * (<code>TRUE</code>) for the specified transcription job.</p>
     */
    inline bool GetIdentifyLanguage() const { return m_identifyLanguage; }
    inline bool IdentifyLanguageHasBeenSet() const { return m_identifyLanguageHasBeenSet; }
    inline void SetIdentifyLanguage(bool value) { m_identifyLanguageHasBeenSet = true; m_identifyLanguage = value; }
    inline TranscriptionJob& WithIdentifyLanguage(bool value) { SetIdentifyLanguage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether automatic multi-language identification was enabled
     * (<code>TRUE</code>) for the specified transcription job.</p>
     */
    inline bool GetIdentifyMultipleLanguages() const { return m_identifyMultipleLanguages; }
    inline bool IdentifyMultipleLanguagesHasBeenSet() const { return m_identifyMultipleLanguagesHasBeenSet; }
    inline void SetIdentifyMultipleLanguages(bool value) { m_identifyMultipleLanguagesHasBeenSet = true; m_identifyMultipleLanguages = value; }
    inline TranscriptionJob& WithIdentifyMultipleLanguages(bool value) { SetIdentifyMultipleLanguages(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the language codes you specified in your request.</p>
     */
    inline const Aws::Vector<LanguageCode>& GetLanguageOptions() const { return m_languageOptions; }
    inline bool LanguageOptionsHasBeenSet() const { return m_languageOptionsHasBeenSet; }
    template<typename LanguageOptionsT = Aws::Vector<LanguageCode>>
    void SetLanguageOptions(LanguageOptionsT&& value) { m_languageOptionsHasBeenSet = true; m_languageOptions = std::forward<LanguageOptionsT>(value); }
    template<typename LanguageOptionsT = Aws::Vector<LanguageCode>>
    TranscriptionJob& WithLanguageOptions(LanguageOptionsT&& value) { SetLanguageOptions(std::forward<LanguageOptionsT>(value)); return *this;}
    inline TranscriptionJob& AddLanguageOptions(LanguageCode value) { m_languageOptionsHasBeenSet = true; m_languageOptions.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The confidence score associated with the language identified in your media
     * file.</p> <p>Confidence scores are values between 0 and 1; a larger value
     * indicates a higher probability that the identified language correctly matches
     * the language spoken in your media.</p>
     */
    inline double GetIdentifiedLanguageScore() const { return m_identifiedLanguageScore; }
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
    inline const Aws::Vector<LanguageCodeItem>& GetLanguageCodes() const { return m_languageCodes; }
    inline bool LanguageCodesHasBeenSet() const { return m_languageCodesHasBeenSet; }
    template<typename LanguageCodesT = Aws::Vector<LanguageCodeItem>>
    void SetLanguageCodes(LanguageCodesT&& value) { m_languageCodesHasBeenSet = true; m_languageCodes = std::forward<LanguageCodesT>(value); }
    template<typename LanguageCodesT = Aws::Vector<LanguageCodeItem>>
    TranscriptionJob& WithLanguageCodes(LanguageCodesT&& value) { SetLanguageCodes(std::forward<LanguageCodesT>(value)); return *this;}
    template<typename LanguageCodesT = LanguageCodeItem>
    TranscriptionJob& AddLanguageCodes(LanguageCodesT&& value) { m_languageCodesHasBeenSet = true; m_languageCodes.emplace_back(std::forward<LanguageCodesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags, each in the form of a key:value pair, assigned to the specified
     * transcription job.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    TranscriptionJob& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    TranscriptionJob& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether subtitles were generated with your transcription.</p>
     */
    inline const SubtitlesOutput& GetSubtitles() const { return m_subtitles; }
    inline bool SubtitlesHasBeenSet() const { return m_subtitlesHasBeenSet; }
    template<typename SubtitlesT = SubtitlesOutput>
    void SetSubtitles(SubtitlesT&& value) { m_subtitlesHasBeenSet = true; m_subtitles = std::forward<SubtitlesT>(value); }
    template<typename SubtitlesT = SubtitlesOutput>
    TranscriptionJob& WithSubtitles(SubtitlesT&& value) { SetSubtitles(std::forward<SubtitlesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the name and language of all custom language models, custom
     * vocabularies, and custom vocabulary filters that you included in your
     * request.</p>
     */
    inline const Aws::Map<LanguageCode, LanguageIdSettings>& GetLanguageIdSettings() const { return m_languageIdSettings; }
    inline bool LanguageIdSettingsHasBeenSet() const { return m_languageIdSettingsHasBeenSet; }
    template<typename LanguageIdSettingsT = Aws::Map<LanguageCode, LanguageIdSettings>>
    void SetLanguageIdSettings(LanguageIdSettingsT&& value) { m_languageIdSettingsHasBeenSet = true; m_languageIdSettings = std::forward<LanguageIdSettingsT>(value); }
    template<typename LanguageIdSettingsT = Aws::Map<LanguageCode, LanguageIdSettings>>
    TranscriptionJob& WithLanguageIdSettings(LanguageIdSettingsT&& value) { SetLanguageIdSettings(std::forward<LanguageIdSettingsT>(value)); return *this;}
    inline TranscriptionJob& AddLanguageIdSettings(LanguageCode key, LanguageIdSettings value) {
      m_languageIdSettingsHasBeenSet = true; m_languageIdSettings.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Provides information about the toxicity detection settings applied to your
     * transcription.</p>
     */
    inline const Aws::Vector<ToxicityDetectionSettings>& GetToxicityDetection() const { return m_toxicityDetection; }
    inline bool ToxicityDetectionHasBeenSet() const { return m_toxicityDetectionHasBeenSet; }
    template<typename ToxicityDetectionT = Aws::Vector<ToxicityDetectionSettings>>
    void SetToxicityDetection(ToxicityDetectionT&& value) { m_toxicityDetectionHasBeenSet = true; m_toxicityDetection = std::forward<ToxicityDetectionT>(value); }
    template<typename ToxicityDetectionT = Aws::Vector<ToxicityDetectionSettings>>
    TranscriptionJob& WithToxicityDetection(ToxicityDetectionT&& value) { SetToxicityDetection(std::forward<ToxicityDetectionT>(value)); return *this;}
    template<typename ToxicityDetectionT = ToxicityDetectionSettings>
    TranscriptionJob& AddToxicityDetection(ToxicityDetectionT&& value) { m_toxicityDetectionHasBeenSet = true; m_toxicityDetection.emplace_back(std::forward<ToxicityDetectionT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_transcriptionJobName;
    bool m_transcriptionJobNameHasBeenSet = false;

    TranscriptionJobStatus m_transcriptionJobStatus{TranscriptionJobStatus::NOT_SET};
    bool m_transcriptionJobStatusHasBeenSet = false;

    LanguageCode m_languageCode{LanguageCode::NOT_SET};
    bool m_languageCodeHasBeenSet = false;

    int m_mediaSampleRateHertz{0};
    bool m_mediaSampleRateHertzHasBeenSet = false;

    MediaFormat m_mediaFormat{MediaFormat::NOT_SET};
    bool m_mediaFormatHasBeenSet = false;

    Media m_media;
    bool m_mediaHasBeenSet = false;

    Transcript m_transcript;
    bool m_transcriptHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_completionTime{};
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

    bool m_identifyLanguage{false};
    bool m_identifyLanguageHasBeenSet = false;

    bool m_identifyMultipleLanguages{false};
    bool m_identifyMultipleLanguagesHasBeenSet = false;

    Aws::Vector<LanguageCode> m_languageOptions;
    bool m_languageOptionsHasBeenSet = false;

    double m_identifiedLanguageScore{0.0};
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
