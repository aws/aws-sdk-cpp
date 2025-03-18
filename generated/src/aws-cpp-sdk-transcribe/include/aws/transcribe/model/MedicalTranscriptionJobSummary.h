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
    AWS_TRANSCRIBESERVICE_API MedicalTranscriptionJobSummary() = default;
    AWS_TRANSCRIBESERVICE_API MedicalTranscriptionJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API MedicalTranscriptionJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    MedicalTranscriptionJobSummary& WithMedicalTranscriptionJobName(MedicalTranscriptionJobNameT&& value) { SetMedicalTranscriptionJobName(std::forward<MedicalTranscriptionJobNameT>(value)); return *this;}
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
    MedicalTranscriptionJobSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time your medical transcription job began processing.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.789000-07:00</code> represents a
     * transcription job that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    MedicalTranscriptionJobSummary& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
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
    MedicalTranscriptionJobSummary& WithCompletionTime(CompletionTimeT&& value) { SetCompletionTime(std::forward<CompletionTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language code used to create your medical transcription. US English
     * (<code>en-US</code>) is the only supported language for medical
     * transcriptions.</p>
     */
    inline LanguageCode GetLanguageCode() const { return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    inline void SetLanguageCode(LanguageCode value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }
    inline MedicalTranscriptionJobSummary& WithLanguageCode(LanguageCode value) { SetLanguageCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the status of your medical transcription job.</p> <p>If the status
     * is <code>COMPLETED</code>, the job is finished and you can find the results at
     * the location specified in <code>TranscriptFileUri</code>. If the status is
     * <code>FAILED</code>, <code>FailureReason</code> provides details on why your
     * transcription job failed.</p>
     */
    inline TranscriptionJobStatus GetTranscriptionJobStatus() const { return m_transcriptionJobStatus; }
    inline bool TranscriptionJobStatusHasBeenSet() const { return m_transcriptionJobStatusHasBeenSet; }
    inline void SetTranscriptionJobStatus(TranscriptionJobStatus value) { m_transcriptionJobStatusHasBeenSet = true; m_transcriptionJobStatus = value; }
    inline MedicalTranscriptionJobSummary& WithTranscriptionJobStatus(TranscriptionJobStatus value) { SetTranscriptionJobStatus(value); return *this;}
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
    MedicalTranscriptionJobSummary& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
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
    inline OutputLocationType GetOutputLocationType() const { return m_outputLocationType; }
    inline bool OutputLocationTypeHasBeenSet() const { return m_outputLocationTypeHasBeenSet; }
    inline void SetOutputLocationType(OutputLocationType value) { m_outputLocationTypeHasBeenSet = true; m_outputLocationType = value; }
    inline MedicalTranscriptionJobSummary& WithOutputLocationType(OutputLocationType value) { SetOutputLocationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the medical specialty represented in your media.</p>
     */
    inline Specialty GetSpecialty() const { return m_specialty; }
    inline bool SpecialtyHasBeenSet() const { return m_specialtyHasBeenSet; }
    inline void SetSpecialty(Specialty value) { m_specialtyHasBeenSet = true; m_specialty = value; }
    inline MedicalTranscriptionJobSummary& WithSpecialty(Specialty value) { SetSpecialty(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Labels all personal health information (PHI) identified in your transcript.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/phi-id.html">Identifying
     * personal health information (PHI) in a transcription</a>.</p>
     */
    inline MedicalContentIdentificationType GetContentIdentificationType() const { return m_contentIdentificationType; }
    inline bool ContentIdentificationTypeHasBeenSet() const { return m_contentIdentificationTypeHasBeenSet; }
    inline void SetContentIdentificationType(MedicalContentIdentificationType value) { m_contentIdentificationTypeHasBeenSet = true; m_contentIdentificationType = value; }
    inline MedicalTranscriptionJobSummary& WithContentIdentificationType(MedicalContentIdentificationType value) { SetContentIdentificationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the input media is a dictation or a conversation, as
     * specified in the <code>StartMedicalTranscriptionJob</code> request.</p>
     */
    inline Type GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(Type value) { m_typeHasBeenSet = true; m_type = value; }
    inline MedicalTranscriptionJobSummary& WithType(Type value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_medicalTranscriptionJobName;
    bool m_medicalTranscriptionJobNameHasBeenSet = false;

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

    Specialty m_specialty{Specialty::NOT_SET};
    bool m_specialtyHasBeenSet = false;

    MedicalContentIdentificationType m_contentIdentificationType{MedicalContentIdentificationType::NOT_SET};
    bool m_contentIdentificationTypeHasBeenSet = false;

    Type m_type{Type::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
