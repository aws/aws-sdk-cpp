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
    AWS_TRANSCRIBESERVICE_API MedicalTranscriptionJob() = default;
    AWS_TRANSCRIBESERVICE_API MedicalTranscriptionJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API MedicalTranscriptionJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the medical transcription job. Job names are case sensitive and
     * must be unique within an Amazon Web Services account.</p>
     */
    inline const Aws::String& GetMedicalTranscriptionJobName() const { return m_medicalTranscriptionJobName; }
    inline bool MedicalTranscriptionJobNameHasBeenSet() const { return m_medicalTranscriptionJobNameHasBeenSet; }
    template<typename MedicalTranscriptionJobNameT = Aws::String>
    void SetMedicalTranscriptionJobName(MedicalTranscriptionJobNameT&& value) { m_medicalTranscriptionJobNameHasBeenSet = true; m_medicalTranscriptionJobName = std::forward<MedicalTranscriptionJobNameT>(value); }
    template<typename MedicalTranscriptionJobNameT = Aws::String>
    MedicalTranscriptionJob& WithMedicalTranscriptionJobName(MedicalTranscriptionJobNameT&& value) { SetMedicalTranscriptionJobName(std::forward<MedicalTranscriptionJobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the status of the specified medical transcription job.</p> <p>If the
     * status is <code>COMPLETED</code>, the job is finished and you can find the
     * results at the location specified in <code>TranscriptFileUri</code>. If the
     * status is <code>FAILED</code>, <code>FailureReason</code> provides details on
     * why your transcription job failed.</p>
     */
    inline TranscriptionJobStatus GetTranscriptionJobStatus() const { return m_transcriptionJobStatus; }
    inline bool TranscriptionJobStatusHasBeenSet() const { return m_transcriptionJobStatusHasBeenSet; }
    inline void SetTranscriptionJobStatus(TranscriptionJobStatus value) { m_transcriptionJobStatusHasBeenSet = true; m_transcriptionJobStatus = value; }
    inline MedicalTranscriptionJob& WithTranscriptionJobStatus(TranscriptionJobStatus value) { SetTranscriptionJobStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language code used to create your medical transcription job. US English
     * (<code>en-US</code>) is the only supported language for medical
     * transcriptions.</p>
     */
    inline LanguageCode GetLanguageCode() const { return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    inline void SetLanguageCode(LanguageCode value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }
    inline MedicalTranscriptionJob& WithLanguageCode(LanguageCode value) { SetLanguageCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sample rate, in hertz, of the audio track in your input media file.</p>
     */
    inline int GetMediaSampleRateHertz() const { return m_mediaSampleRateHertz; }
    inline bool MediaSampleRateHertzHasBeenSet() const { return m_mediaSampleRateHertzHasBeenSet; }
    inline void SetMediaSampleRateHertz(int value) { m_mediaSampleRateHertzHasBeenSet = true; m_mediaSampleRateHertz = value; }
    inline MedicalTranscriptionJob& WithMediaSampleRateHertz(int value) { SetMediaSampleRateHertz(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the input media file.</p>
     */
    inline MediaFormat GetMediaFormat() const { return m_mediaFormat; }
    inline bool MediaFormatHasBeenSet() const { return m_mediaFormatHasBeenSet; }
    inline void SetMediaFormat(MediaFormat value) { m_mediaFormatHasBeenSet = true; m_mediaFormat = value; }
    inline MedicalTranscriptionJob& WithMediaFormat(MediaFormat value) { SetMediaFormat(value); return *this;}
    ///@}

    ///@{
    
    inline const Media& GetMedia() const { return m_media; }
    inline bool MediaHasBeenSet() const { return m_mediaHasBeenSet; }
    template<typename MediaT = Media>
    void SetMedia(MediaT&& value) { m_mediaHasBeenSet = true; m_media = std::forward<MediaT>(value); }
    template<typename MediaT = Media>
    MedicalTranscriptionJob& WithMedia(MediaT&& value) { SetMedia(std::forward<MediaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides you with the Amazon S3 URI you can use to access your
     * transcript.</p>
     */
    inline const MedicalTranscript& GetTranscript() const { return m_transcript; }
    inline bool TranscriptHasBeenSet() const { return m_transcriptHasBeenSet; }
    template<typename TranscriptT = MedicalTranscript>
    void SetTranscript(TranscriptT&& value) { m_transcriptHasBeenSet = true; m_transcript = std::forward<TranscriptT>(value); }
    template<typename TranscriptT = MedicalTranscript>
    MedicalTranscriptionJob& WithTranscript(TranscriptT&& value) { SetTranscript(std::forward<TranscriptT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the specified medical transcription job began
     * processing.</p> <p>Timestamps are in the format
     * <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>. For example,
     * <code>2022-05-04T12:32:58.789000-07:00</code> represents a transcription job
     * that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    MedicalTranscriptionJob& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the specified medical transcription job request was
     * made.</p> <p>Timestamps are in the format
     * <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>. For example,
     * <code>2022-05-04T12:32:58.761000-07:00</code> represents a transcription job
     * that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    MedicalTranscriptionJob& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the specified medical transcription job finished
     * processing.</p> <p>Timestamps are in the format
     * <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>. For example,
     * <code>2022-05-04T12:33:13.922000-07:00</code> represents a transcription job
     * that started processing at 12:33 PM UTC-7 on May 4, 2022.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTime() const { return m_completionTime; }
    inline bool CompletionTimeHasBeenSet() const { return m_completionTimeHasBeenSet; }
    template<typename CompletionTimeT = Aws::Utils::DateTime>
    void SetCompletionTime(CompletionTimeT&& value) { m_completionTimeHasBeenSet = true; m_completionTime = std::forward<CompletionTimeT>(value); }
    template<typename CompletionTimeT = Aws::Utils::DateTime>
    MedicalTranscriptionJob& WithCompletionTime(CompletionTimeT&& value) { SetCompletionTime(std::forward<CompletionTimeT>(value)); return *this;}
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
     * be between 16,000 and 48,000 hertz.</p> </li> <li> <p> <code>The sample rate
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
    MedicalTranscriptionJob& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information on any additional settings that were included in your
     * request. Additional settings include channel identification, alternative
     * transcriptions, speaker partitioning, custom vocabularies, and custom vocabulary
     * filters.</p>
     */
    inline const MedicalTranscriptionSetting& GetSettings() const { return m_settings; }
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }
    template<typename SettingsT = MedicalTranscriptionSetting>
    void SetSettings(SettingsT&& value) { m_settingsHasBeenSet = true; m_settings = std::forward<SettingsT>(value); }
    template<typename SettingsT = MedicalTranscriptionSetting>
    MedicalTranscriptionJob& WithSettings(SettingsT&& value) { SetSettings(std::forward<SettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether content identification was enabled for your transcription
     * request.</p>
     */
    inline MedicalContentIdentificationType GetContentIdentificationType() const { return m_contentIdentificationType; }
    inline bool ContentIdentificationTypeHasBeenSet() const { return m_contentIdentificationTypeHasBeenSet; }
    inline void SetContentIdentificationType(MedicalContentIdentificationType value) { m_contentIdentificationTypeHasBeenSet = true; m_contentIdentificationType = value; }
    inline MedicalTranscriptionJob& WithContentIdentificationType(MedicalContentIdentificationType value) { SetContentIdentificationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the medical specialty represented in your media.</p>
     */
    inline Specialty GetSpecialty() const { return m_specialty; }
    inline bool SpecialtyHasBeenSet() const { return m_specialtyHasBeenSet; }
    inline void SetSpecialty(Specialty value) { m_specialtyHasBeenSet = true; m_specialty = value; }
    inline MedicalTranscriptionJob& WithSpecialty(Specialty value) { SetSpecialty(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the input media is a dictation or a conversation, as
     * specified in the <code>StartMedicalTranscriptionJob</code> request.</p>
     */
    inline Type GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(Type value) { m_typeHasBeenSet = true; m_type = value; }
    inline MedicalTranscriptionJob& WithType(Type value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags, each in the form of a key:value pair, assigned to the specified
     * medical transcription job.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    MedicalTranscriptionJob& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    MedicalTranscriptionJob& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_medicalTranscriptionJobName;
    bool m_medicalTranscriptionJobNameHasBeenSet = false;

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

    MedicalTranscript m_transcript;
    bool m_transcriptHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_completionTime{};
    bool m_completionTimeHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    MedicalTranscriptionSetting m_settings;
    bool m_settingsHasBeenSet = false;

    MedicalContentIdentificationType m_contentIdentificationType{MedicalContentIdentificationType::NOT_SET};
    bool m_contentIdentificationTypeHasBeenSet = false;

    Specialty m_specialty{Specialty::NOT_SET};
    bool m_specialtyHasBeenSet = false;

    Type m_type{Type::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
