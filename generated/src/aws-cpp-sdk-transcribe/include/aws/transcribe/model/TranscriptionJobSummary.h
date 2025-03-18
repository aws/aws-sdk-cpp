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
#include <aws/transcribe/model/ContentRedaction.h>
#include <aws/transcribe/model/ModelSettings.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/transcribe/model/LanguageCodeItem.h>
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
   * <p>Provides detailed information about a specific transcription
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/TranscriptionJobSummary">AWS
   * API Reference</a></p>
   */
  class TranscriptionJobSummary
  {
  public:
    AWS_TRANSCRIBESERVICE_API TranscriptionJobSummary() = default;
    AWS_TRANSCRIBESERVICE_API TranscriptionJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API TranscriptionJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    TranscriptionJobSummary& WithTranscriptionJobName(TranscriptionJobNameT&& value) { SetTranscriptionJobName(std::forward<TranscriptionJobNameT>(value)); return *this;}
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
    TranscriptionJobSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time your transcription job began processing.</p> <p>Timestamps
     * are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>. For example,
     * <code>2022-05-04T12:32:58.789000-07:00</code> represents a transcription job
     * that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    TranscriptionJobSummary& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
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
    TranscriptionJobSummary& WithCompletionTime(CompletionTimeT&& value) { SetCompletionTime(std::forward<CompletionTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language code used to create your transcription.</p>
     */
    inline LanguageCode GetLanguageCode() const { return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    inline void SetLanguageCode(LanguageCode value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }
    inline TranscriptionJobSummary& WithLanguageCode(LanguageCode value) { SetLanguageCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the status of your transcription job.</p> <p>If the status is
     * <code>COMPLETED</code>, the job is finished and you can find the results at the
     * location specified in <code>TranscriptFileUri</code> (or
     * <code>RedactedTranscriptFileUri</code>, if you requested transcript redaction).
     * If the status is <code>FAILED</code>, <code>FailureReason</code> provides
     * details on why your transcription job failed.</p>
     */
    inline TranscriptionJobStatus GetTranscriptionJobStatus() const { return m_transcriptionJobStatus; }
    inline bool TranscriptionJobStatusHasBeenSet() const { return m_transcriptionJobStatusHasBeenSet; }
    inline void SetTranscriptionJobStatus(TranscriptionJobStatus value) { m_transcriptionJobStatusHasBeenSet = true; m_transcriptionJobStatus = value; }
    inline TranscriptionJobSummary& WithTranscriptionJobStatus(TranscriptionJobStatus value) { SetTranscriptionJobStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>TranscriptionJobStatus</code> is <code>FAILED</code>,
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
    TranscriptionJobSummary& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates where the specified transcription output is stored.</p> <p>If the
     * value is <code>CUSTOMER_BUCKET</code>, the location is the Amazon S3 bucket you
     * specified using the <code>OutputBucketName</code> parameter in your request. If
     * you also included <code>OutputKey</code> in your request, your output is located
     * in the path you specified in your request.</p> <p>If the value is
     * <code>SERVICE_BUCKET</code>, the location is a service-managed Amazon S3 bucket.
     * To access a transcript stored in a service-managed bucket, use the URI shown in
     * the <code>TranscriptFileUri</code> or <code>RedactedTranscriptFileUri</code>
     * field.</p>
     */
    inline OutputLocationType GetOutputLocationType() const { return m_outputLocationType; }
    inline bool OutputLocationTypeHasBeenSet() const { return m_outputLocationTypeHasBeenSet; }
    inline void SetOutputLocationType(OutputLocationType value) { m_outputLocationTypeHasBeenSet = true; m_outputLocationType = value; }
    inline TranscriptionJobSummary& WithOutputLocationType(OutputLocationType value) { SetOutputLocationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content redaction settings of the transcription job.</p>
     */
    inline const ContentRedaction& GetContentRedaction() const { return m_contentRedaction; }
    inline bool ContentRedactionHasBeenSet() const { return m_contentRedactionHasBeenSet; }
    template<typename ContentRedactionT = ContentRedaction>
    void SetContentRedaction(ContentRedactionT&& value) { m_contentRedactionHasBeenSet = true; m_contentRedaction = std::forward<ContentRedactionT>(value); }
    template<typename ContentRedactionT = ContentRedaction>
    TranscriptionJobSummary& WithContentRedaction(ContentRedactionT&& value) { SetContentRedaction(std::forward<ContentRedactionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ModelSettings& GetModelSettings() const { return m_modelSettings; }
    inline bool ModelSettingsHasBeenSet() const { return m_modelSettingsHasBeenSet; }
    template<typename ModelSettingsT = ModelSettings>
    void SetModelSettings(ModelSettingsT&& value) { m_modelSettingsHasBeenSet = true; m_modelSettings = std::forward<ModelSettingsT>(value); }
    template<typename ModelSettingsT = ModelSettings>
    TranscriptionJobSummary& WithModelSettings(ModelSettingsT&& value) { SetModelSettings(std::forward<ModelSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether automatic language identification was enabled
     * (<code>TRUE</code>) for the specified transcription job.</p>
     */
    inline bool GetIdentifyLanguage() const { return m_identifyLanguage; }
    inline bool IdentifyLanguageHasBeenSet() const { return m_identifyLanguageHasBeenSet; }
    inline void SetIdentifyLanguage(bool value) { m_identifyLanguageHasBeenSet = true; m_identifyLanguage = value; }
    inline TranscriptionJobSummary& WithIdentifyLanguage(bool value) { SetIdentifyLanguage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether automatic multi-language identification was enabled
     * (<code>TRUE</code>) for the specified transcription job.</p>
     */
    inline bool GetIdentifyMultipleLanguages() const { return m_identifyMultipleLanguages; }
    inline bool IdentifyMultipleLanguagesHasBeenSet() const { return m_identifyMultipleLanguagesHasBeenSet; }
    inline void SetIdentifyMultipleLanguages(bool value) { m_identifyMultipleLanguagesHasBeenSet = true; m_identifyMultipleLanguages = value; }
    inline TranscriptionJobSummary& WithIdentifyMultipleLanguages(bool value) { SetIdentifyMultipleLanguages(value); return *this;}
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
    inline TranscriptionJobSummary& WithIdentifiedLanguageScore(double value) { SetIdentifiedLanguageScore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language codes used to create your transcription job. This parameter is
     * used with multi-language identification. For single-language identification, the
     * singular version of this parameter, <code>LanguageCode</code>, is present.</p>
     */
    inline const Aws::Vector<LanguageCodeItem>& GetLanguageCodes() const { return m_languageCodes; }
    inline bool LanguageCodesHasBeenSet() const { return m_languageCodesHasBeenSet; }
    template<typename LanguageCodesT = Aws::Vector<LanguageCodeItem>>
    void SetLanguageCodes(LanguageCodesT&& value) { m_languageCodesHasBeenSet = true; m_languageCodes = std::forward<LanguageCodesT>(value); }
    template<typename LanguageCodesT = Aws::Vector<LanguageCodeItem>>
    TranscriptionJobSummary& WithLanguageCodes(LanguageCodesT&& value) { SetLanguageCodes(std::forward<LanguageCodesT>(value)); return *this;}
    template<typename LanguageCodesT = LanguageCodeItem>
    TranscriptionJobSummary& AddLanguageCodes(LanguageCodesT&& value) { m_languageCodesHasBeenSet = true; m_languageCodes.emplace_back(std::forward<LanguageCodesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether toxicity detection was enabled for the specified
     * transcription job.</p>
     */
    inline const Aws::Vector<ToxicityDetectionSettings>& GetToxicityDetection() const { return m_toxicityDetection; }
    inline bool ToxicityDetectionHasBeenSet() const { return m_toxicityDetectionHasBeenSet; }
    template<typename ToxicityDetectionT = Aws::Vector<ToxicityDetectionSettings>>
    void SetToxicityDetection(ToxicityDetectionT&& value) { m_toxicityDetectionHasBeenSet = true; m_toxicityDetection = std::forward<ToxicityDetectionT>(value); }
    template<typename ToxicityDetectionT = Aws::Vector<ToxicityDetectionSettings>>
    TranscriptionJobSummary& WithToxicityDetection(ToxicityDetectionT&& value) { SetToxicityDetection(std::forward<ToxicityDetectionT>(value)); return *this;}
    template<typename ToxicityDetectionT = ToxicityDetectionSettings>
    TranscriptionJobSummary& AddToxicityDetection(ToxicityDetectionT&& value) { m_toxicityDetectionHasBeenSet = true; m_toxicityDetection.emplace_back(std::forward<ToxicityDetectionT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_transcriptionJobName;
    bool m_transcriptionJobNameHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_completionTime{};
    bool m_completionTimeHasBeenSet = false;

    LanguageCode m_languageCode{LanguageCode::NOT_SET};
    bool m_languageCodeHasBeenSet = false;

    TranscriptionJobStatus m_transcriptionJobStatus{TranscriptionJobStatus::NOT_SET};
    bool m_transcriptionJobStatusHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    OutputLocationType m_outputLocationType{OutputLocationType::NOT_SET};
    bool m_outputLocationTypeHasBeenSet = false;

    ContentRedaction m_contentRedaction;
    bool m_contentRedactionHasBeenSet = false;

    ModelSettings m_modelSettings;
    bool m_modelSettingsHasBeenSet = false;

    bool m_identifyLanguage{false};
    bool m_identifyLanguageHasBeenSet = false;

    bool m_identifyMultipleLanguages{false};
    bool m_identifyMultipleLanguagesHasBeenSet = false;

    double m_identifiedLanguageScore{0.0};
    bool m_identifiedLanguageScoreHasBeenSet = false;

    Aws::Vector<LanguageCodeItem> m_languageCodes;
    bool m_languageCodesHasBeenSet = false;

    Aws::Vector<ToxicityDetectionSettings> m_toxicityDetection;
    bool m_toxicityDetectionHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
