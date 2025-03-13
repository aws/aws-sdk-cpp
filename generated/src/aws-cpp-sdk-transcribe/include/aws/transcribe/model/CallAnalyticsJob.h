/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/transcribe/model/CallAnalyticsJobStatus.h>
#include <aws/transcribe/model/CallAnalyticsJobDetails.h>
#include <aws/transcribe/model/LanguageCode.h>
#include <aws/transcribe/model/MediaFormat.h>
#include <aws/transcribe/model/Media.h>
#include <aws/transcribe/model/Transcript.h>
#include <aws/core/utils/DateTime.h>
#include <aws/transcribe/model/CallAnalyticsJobSettings.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/transcribe/model/ChannelDefinition.h>
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
    AWS_TRANSCRIBESERVICE_API CallAnalyticsJob() = default;
    AWS_TRANSCRIBESERVICE_API CallAnalyticsJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API CallAnalyticsJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Call Analytics job. Job names are case sensitive and must be
     * unique within an Amazon Web Services account.</p>
     */
    inline const Aws::String& GetCallAnalyticsJobName() const { return m_callAnalyticsJobName; }
    inline bool CallAnalyticsJobNameHasBeenSet() const { return m_callAnalyticsJobNameHasBeenSet; }
    template<typename CallAnalyticsJobNameT = Aws::String>
    void SetCallAnalyticsJobName(CallAnalyticsJobNameT&& value) { m_callAnalyticsJobNameHasBeenSet = true; m_callAnalyticsJobName = std::forward<CallAnalyticsJobNameT>(value); }
    template<typename CallAnalyticsJobNameT = Aws::String>
    CallAnalyticsJob& WithCallAnalyticsJobName(CallAnalyticsJobNameT&& value) { SetCallAnalyticsJobName(std::forward<CallAnalyticsJobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the status of the specified Call Analytics job.</p> <p>If the status
     * is <code>COMPLETED</code>, the job is finished and you can find the results at
     * the location specified in <code>TranscriptFileUri</code> (or
     * <code>RedactedTranscriptFileUri</code>, if you requested transcript redaction).
     * If the status is <code>FAILED</code>, <code>FailureReason</code> provides
     * details on why your transcription job failed.</p>
     */
    inline CallAnalyticsJobStatus GetCallAnalyticsJobStatus() const { return m_callAnalyticsJobStatus; }
    inline bool CallAnalyticsJobStatusHasBeenSet() const { return m_callAnalyticsJobStatusHasBeenSet; }
    inline void SetCallAnalyticsJobStatus(CallAnalyticsJobStatus value) { m_callAnalyticsJobStatusHasBeenSet = true; m_callAnalyticsJobStatus = value; }
    inline CallAnalyticsJob& WithCallAnalyticsJobStatus(CallAnalyticsJobStatus value) { SetCallAnalyticsJobStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides detailed information about a call analytics job, including
     * information about skipped analytics features.</p>
     */
    inline const CallAnalyticsJobDetails& GetCallAnalyticsJobDetails() const { return m_callAnalyticsJobDetails; }
    inline bool CallAnalyticsJobDetailsHasBeenSet() const { return m_callAnalyticsJobDetailsHasBeenSet; }
    template<typename CallAnalyticsJobDetailsT = CallAnalyticsJobDetails>
    void SetCallAnalyticsJobDetails(CallAnalyticsJobDetailsT&& value) { m_callAnalyticsJobDetailsHasBeenSet = true; m_callAnalyticsJobDetails = std::forward<CallAnalyticsJobDetailsT>(value); }
    template<typename CallAnalyticsJobDetailsT = CallAnalyticsJobDetails>
    CallAnalyticsJob& WithCallAnalyticsJobDetails(CallAnalyticsJobDetailsT&& value) { SetCallAnalyticsJobDetails(std::forward<CallAnalyticsJobDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language code used to create your Call Analytics job. For a list of
     * supported languages and their associated language codes, refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table.</p> <p>If you do not know the language spoken in your media
     * file, you can omit this field and let Amazon Transcribe automatically identify
     * the language of your media. To improve the accuracy of language identification,
     * you can include several language codes and Amazon Transcribe chooses the closest
     * match for your transcription.</p>
     */
    inline LanguageCode GetLanguageCode() const { return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    inline void SetLanguageCode(LanguageCode value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }
    inline CallAnalyticsJob& WithLanguageCode(LanguageCode value) { SetLanguageCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sample rate, in hertz, of the audio track in your input media file.</p>
     */
    inline int GetMediaSampleRateHertz() const { return m_mediaSampleRateHertz; }
    inline bool MediaSampleRateHertzHasBeenSet() const { return m_mediaSampleRateHertzHasBeenSet; }
    inline void SetMediaSampleRateHertz(int value) { m_mediaSampleRateHertzHasBeenSet = true; m_mediaSampleRateHertz = value; }
    inline CallAnalyticsJob& WithMediaSampleRateHertz(int value) { SetMediaSampleRateHertz(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the input media file.</p>
     */
    inline MediaFormat GetMediaFormat() const { return m_mediaFormat; }
    inline bool MediaFormatHasBeenSet() const { return m_mediaFormatHasBeenSet; }
    inline void SetMediaFormat(MediaFormat value) { m_mediaFormatHasBeenSet = true; m_mediaFormat = value; }
    inline CallAnalyticsJob& WithMediaFormat(MediaFormat value) { SetMediaFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the Amazon S3 location of the media file you used in your Call
     * Analytics request.</p>
     */
    inline const Media& GetMedia() const { return m_media; }
    inline bool MediaHasBeenSet() const { return m_mediaHasBeenSet; }
    template<typename MediaT = Media>
    void SetMedia(MediaT&& value) { m_mediaHasBeenSet = true; m_media = std::forward<MediaT>(value); }
    template<typename MediaT = Media>
    CallAnalyticsJob& WithMedia(MediaT&& value) { SetMedia(std::forward<MediaT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Transcript& GetTranscript() const { return m_transcript; }
    inline bool TranscriptHasBeenSet() const { return m_transcriptHasBeenSet; }
    template<typename TranscriptT = Transcript>
    void SetTranscript(TranscriptT&& value) { m_transcriptHasBeenSet = true; m_transcript = std::forward<TranscriptT>(value); }
    template<typename TranscriptT = Transcript>
    CallAnalyticsJob& WithTranscript(TranscriptT&& value) { SetTranscript(std::forward<TranscriptT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the specified Call Analytics job began processing.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.789000-07:00</code> represents a
     * transcription job that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    CallAnalyticsJob& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the specified Call Analytics job request was made.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.761000-07:00</code> represents a
     * transcription job that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    CallAnalyticsJob& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the specified Call Analytics job finished processing.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:33:13.922000-07:00</code> represents a
     * transcription job that started processing at 12:33 PM UTC-7 on May 4, 2022.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTime() const { return m_completionTime; }
    inline bool CompletionTimeHasBeenSet() const { return m_completionTimeHasBeenSet; }
    template<typename CompletionTimeT = Aws::Utils::DateTime>
    void SetCompletionTime(CompletionTimeT&& value) { m_completionTimeHasBeenSet = true; m_completionTime = std::forward<CompletionTimeT>(value); }
    template<typename CompletionTimeT = Aws::Utils::DateTime>
    CallAnalyticsJob& WithCompletionTime(CompletionTimeT&& value) { SetCompletionTime(std::forward<CompletionTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>CallAnalyticsJobStatus</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the Call Analytics job
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
    CallAnalyticsJob& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) you included in your request.</p>
     */
    inline const Aws::String& GetDataAccessRoleArn() const { return m_dataAccessRoleArn; }
    inline bool DataAccessRoleArnHasBeenSet() const { return m_dataAccessRoleArnHasBeenSet; }
    template<typename DataAccessRoleArnT = Aws::String>
    void SetDataAccessRoleArn(DataAccessRoleArnT&& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = std::forward<DataAccessRoleArnT>(value); }
    template<typename DataAccessRoleArnT = Aws::String>
    CallAnalyticsJob& WithDataAccessRoleArn(DataAccessRoleArnT&& value) { SetDataAccessRoleArn(std::forward<DataAccessRoleArnT>(value)); return *this;}
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
    inline CallAnalyticsJob& WithIdentifiedLanguageScore(double value) { SetIdentifiedLanguageScore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information on any additional settings that were included in your
     * request. Additional settings include content redaction and language
     * identification settings.</p>
     */
    inline const CallAnalyticsJobSettings& GetSettings() const { return m_settings; }
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }
    template<typename SettingsT = CallAnalyticsJobSettings>
    void SetSettings(SettingsT&& value) { m_settingsHasBeenSet = true; m_settings = std::forward<SettingsT>(value); }
    template<typename SettingsT = CallAnalyticsJobSettings>
    CallAnalyticsJob& WithSettings(SettingsT&& value) { SetSettings(std::forward<SettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates which speaker is on which channel.</p>
     */
    inline const Aws::Vector<ChannelDefinition>& GetChannelDefinitions() const { return m_channelDefinitions; }
    inline bool ChannelDefinitionsHasBeenSet() const { return m_channelDefinitionsHasBeenSet; }
    template<typename ChannelDefinitionsT = Aws::Vector<ChannelDefinition>>
    void SetChannelDefinitions(ChannelDefinitionsT&& value) { m_channelDefinitionsHasBeenSet = true; m_channelDefinitions = std::forward<ChannelDefinitionsT>(value); }
    template<typename ChannelDefinitionsT = Aws::Vector<ChannelDefinition>>
    CallAnalyticsJob& WithChannelDefinitions(ChannelDefinitionsT&& value) { SetChannelDefinitions(std::forward<ChannelDefinitionsT>(value)); return *this;}
    template<typename ChannelDefinitionsT = ChannelDefinition>
    CallAnalyticsJob& AddChannelDefinitions(ChannelDefinitionsT&& value) { m_channelDefinitionsHasBeenSet = true; m_channelDefinitions.emplace_back(std::forward<ChannelDefinitionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags, each in the form of a key:value pair, assigned to the specified
     * call analytics job.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CallAnalyticsJob& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CallAnalyticsJob& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_callAnalyticsJobName;
    bool m_callAnalyticsJobNameHasBeenSet = false;

    CallAnalyticsJobStatus m_callAnalyticsJobStatus{CallAnalyticsJobStatus::NOT_SET};
    bool m_callAnalyticsJobStatusHasBeenSet = false;

    CallAnalyticsJobDetails m_callAnalyticsJobDetails;
    bool m_callAnalyticsJobDetailsHasBeenSet = false;

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

    Aws::String m_dataAccessRoleArn;
    bool m_dataAccessRoleArnHasBeenSet = false;

    double m_identifiedLanguageScore{0.0};
    bool m_identifiedLanguageScoreHasBeenSet = false;

    CallAnalyticsJobSettings m_settings;
    bool m_settingsHasBeenSet = false;

    Aws::Vector<ChannelDefinition> m_channelDefinitions;
    bool m_channelDefinitionsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
