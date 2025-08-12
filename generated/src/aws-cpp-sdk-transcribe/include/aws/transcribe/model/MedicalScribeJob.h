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
    AWS_TRANSCRIBESERVICE_API MedicalScribeJob() = default;
    AWS_TRANSCRIBESERVICE_API MedicalScribeJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API MedicalScribeJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Medical Scribe job. Job names are case sensitive and must be
     * unique within an Amazon Web Services account.</p>
     */
    inline const Aws::String& GetMedicalScribeJobName() const { return m_medicalScribeJobName; }
    inline bool MedicalScribeJobNameHasBeenSet() const { return m_medicalScribeJobNameHasBeenSet; }
    template<typename MedicalScribeJobNameT = Aws::String>
    void SetMedicalScribeJobName(MedicalScribeJobNameT&& value) { m_medicalScribeJobNameHasBeenSet = true; m_medicalScribeJobName = std::forward<MedicalScribeJobNameT>(value); }
    template<typename MedicalScribeJobNameT = Aws::String>
    MedicalScribeJob& WithMedicalScribeJobName(MedicalScribeJobNameT&& value) { SetMedicalScribeJobName(std::forward<MedicalScribeJobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the status of the specified Medical Scribe job.</p> <p>If the status
     * is <code>COMPLETED</code>, the job is finished and you can find the results at
     * the location specified in <code>MedicalScribeOutput</code> If the status is
     * <code>FAILED</code>, <code>FailureReason</code> provides details on why your
     * Medical Scribe job failed.</p>
     */
    inline MedicalScribeJobStatus GetMedicalScribeJobStatus() const { return m_medicalScribeJobStatus; }
    inline bool MedicalScribeJobStatusHasBeenSet() const { return m_medicalScribeJobStatusHasBeenSet; }
    inline void SetMedicalScribeJobStatus(MedicalScribeJobStatus value) { m_medicalScribeJobStatusHasBeenSet = true; m_medicalScribeJobStatus = value; }
    inline MedicalScribeJob& WithMedicalScribeJobStatus(MedicalScribeJobStatus value) { SetMedicalScribeJobStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language code used to create your Medical Scribe job. US English
     * (<code>en-US</code>) is the only supported language for Medical Scribe jobs.
     * </p>
     */
    inline MedicalScribeLanguageCode GetLanguageCode() const { return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    inline void SetLanguageCode(MedicalScribeLanguageCode value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }
    inline MedicalScribeJob& WithLanguageCode(MedicalScribeLanguageCode value) { SetLanguageCode(value); return *this;}
    ///@}

    ///@{
    
    inline const Media& GetMedia() const { return m_media; }
    inline bool MediaHasBeenSet() const { return m_mediaHasBeenSet; }
    template<typename MediaT = Media>
    void SetMedia(MediaT&& value) { m_mediaHasBeenSet = true; m_media = std::forward<MediaT>(value); }
    template<typename MediaT = Media>
    MedicalScribeJob& WithMedia(MediaT&& value) { SetMedia(std::forward<MediaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the output of your Medical Scribe job.
     * <code>ClinicalDocumentUri</code> holds the Amazon S3 URI for the Clinical
     * Document and <code>TranscriptFileUri</code> holds the Amazon S3 URI for the
     * Transcript.</p>
     */
    inline const MedicalScribeOutput& GetMedicalScribeOutput() const { return m_medicalScribeOutput; }
    inline bool MedicalScribeOutputHasBeenSet() const { return m_medicalScribeOutputHasBeenSet; }
    template<typename MedicalScribeOutputT = MedicalScribeOutput>
    void SetMedicalScribeOutput(MedicalScribeOutputT&& value) { m_medicalScribeOutputHasBeenSet = true; m_medicalScribeOutput = std::forward<MedicalScribeOutputT>(value); }
    template<typename MedicalScribeOutputT = MedicalScribeOutput>
    MedicalScribeJob& WithMedicalScribeOutput(MedicalScribeOutputT&& value) { SetMedicalScribeOutput(std::forward<MedicalScribeOutputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time your Medical Scribe job began processing.</p> <p>Timestamps
     * are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>. For example,
     * <code>2022-05-04T12:32:58.789000-07:00</code> represents a Medical Scribe job
     * that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    MedicalScribeJob& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the specified Medical Scribe job request was made.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.761000-07:00</code> represents a Medical
     * Scribe job that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    MedicalScribeJob& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the specified Medical Scribe job finished processing.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.761000-07:00</code> represents a Medical
     * Scribe job that finished processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTime() const { return m_completionTime; }
    inline bool CompletionTimeHasBeenSet() const { return m_completionTimeHasBeenSet; }
    template<typename CompletionTimeT = Aws::Utils::DateTime>
    void SetCompletionTime(CompletionTimeT&& value) { m_completionTimeHasBeenSet = true; m_completionTime = std::forward<CompletionTimeT>(value); }
    template<typename CompletionTimeT = Aws::Utils::DateTime>
    MedicalScribeJob& WithCompletionTime(CompletionTimeT&& value) { SetCompletionTime(std::forward<CompletionTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>MedicalScribeJobStatus</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the transcription job
     * failed. See also: <a
     * href="https://docs.aws.amazon.com/transcribe/latest/APIReference/CommonErrors.html">Common
     * Errors</a>.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    MedicalScribeJob& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
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
    inline const MedicalScribeSettings& GetSettings() const { return m_settings; }
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }
    template<typename SettingsT = MedicalScribeSettings>
    void SetSettings(SettingsT&& value) { m_settingsHasBeenSet = true; m_settings = std::forward<SettingsT>(value); }
    template<typename SettingsT = MedicalScribeSettings>
    MedicalScribeJob& WithSettings(SettingsT&& value) { SetSettings(std::forward<SettingsT>(value)); return *this;}
    ///@}

    ///@{
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
    inline const Aws::String& GetDataAccessRoleArn() const { return m_dataAccessRoleArn; }
    inline bool DataAccessRoleArnHasBeenSet() const { return m_dataAccessRoleArnHasBeenSet; }
    template<typename DataAccessRoleArnT = Aws::String>
    void SetDataAccessRoleArn(DataAccessRoleArnT&& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = std::forward<DataAccessRoleArnT>(value); }
    template<typename DataAccessRoleArnT = Aws::String>
    MedicalScribeJob& WithDataAccessRoleArn(DataAccessRoleArnT&& value) { SetDataAccessRoleArn(std::forward<DataAccessRoleArnT>(value)); return *this;}
    ///@}

    ///@{
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
    inline const Aws::Vector<MedicalScribeChannelDefinition>& GetChannelDefinitions() const { return m_channelDefinitions; }
    inline bool ChannelDefinitionsHasBeenSet() const { return m_channelDefinitionsHasBeenSet; }
    template<typename ChannelDefinitionsT = Aws::Vector<MedicalScribeChannelDefinition>>
    void SetChannelDefinitions(ChannelDefinitionsT&& value) { m_channelDefinitionsHasBeenSet = true; m_channelDefinitions = std::forward<ChannelDefinitionsT>(value); }
    template<typename ChannelDefinitionsT = Aws::Vector<MedicalScribeChannelDefinition>>
    MedicalScribeJob& WithChannelDefinitions(ChannelDefinitionsT&& value) { SetChannelDefinitions(std::forward<ChannelDefinitionsT>(value)); return *this;}
    template<typename ChannelDefinitionsT = MedicalScribeChannelDefinition>
    MedicalScribeJob& AddChannelDefinitions(ChannelDefinitionsT&& value) { m_channelDefinitionsHasBeenSet = true; m_channelDefinitions.emplace_back(std::forward<ChannelDefinitionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether the <code>MedicalScribeContext</code> object was provided
     * when the Medical Scribe job was started.</p>
     */
    inline bool GetMedicalScribeContextProvided() const { return m_medicalScribeContextProvided; }
    inline bool MedicalScribeContextProvidedHasBeenSet() const { return m_medicalScribeContextProvidedHasBeenSet; }
    inline void SetMedicalScribeContextProvided(bool value) { m_medicalScribeContextProvidedHasBeenSet = true; m_medicalScribeContextProvided = value; }
    inline MedicalScribeJob& WithMedicalScribeContextProvided(bool value) { SetMedicalScribeContextProvided(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Adds one or more custom tags, each in the form of a key:value pair, to the
     * Medical Scribe job.</p> <p>To learn more about using tags with Amazon
     * Transcribe, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/tagging.html">Tagging
     * resources</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    MedicalScribeJob& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    MedicalScribeJob& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_medicalScribeJobName;
    bool m_medicalScribeJobNameHasBeenSet = false;

    MedicalScribeJobStatus m_medicalScribeJobStatus{MedicalScribeJobStatus::NOT_SET};
    bool m_medicalScribeJobStatusHasBeenSet = false;

    MedicalScribeLanguageCode m_languageCode{MedicalScribeLanguageCode::NOT_SET};
    bool m_languageCodeHasBeenSet = false;

    Media m_media;
    bool m_mediaHasBeenSet = false;

    MedicalScribeOutput m_medicalScribeOutput;
    bool m_medicalScribeOutputHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_completionTime{};
    bool m_completionTimeHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    MedicalScribeSettings m_settings;
    bool m_settingsHasBeenSet = false;

    Aws::String m_dataAccessRoleArn;
    bool m_dataAccessRoleArnHasBeenSet = false;

    Aws::Vector<MedicalScribeChannelDefinition> m_channelDefinitions;
    bool m_channelDefinitionsHasBeenSet = false;

    bool m_medicalScribeContextProvided{false};
    bool m_medicalScribeContextProvidedHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
