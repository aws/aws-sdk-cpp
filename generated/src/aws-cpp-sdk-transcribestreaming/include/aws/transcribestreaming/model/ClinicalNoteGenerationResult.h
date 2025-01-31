﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/transcribestreaming/model/ClinicalNoteGenerationStatus.h>
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
namespace TranscribeStreamingService
{
namespace Model
{

  /**
   * <p>The details for clinical note generation, including status, and output
   * locations for clinical note and aggregated transcript if the analytics
   * completed, or failure reason if the analytics failed. </p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-streaming-2017-10-26/ClinicalNoteGenerationResult">AWS
   * API Reference</a></p>
   */
  class ClinicalNoteGenerationResult
  {
  public:
    AWS_TRANSCRIBESTREAMINGSERVICE_API ClinicalNoteGenerationResult();
    AWS_TRANSCRIBESTREAMINGSERVICE_API ClinicalNoteGenerationResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API ClinicalNoteGenerationResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Holds the Amazon S3 URI for the output Clinical Note. </p>
     */
    inline const Aws::String& GetClinicalNoteOutputLocation() const{ return m_clinicalNoteOutputLocation; }
    inline bool ClinicalNoteOutputLocationHasBeenSet() const { return m_clinicalNoteOutputLocationHasBeenSet; }
    inline void SetClinicalNoteOutputLocation(const Aws::String& value) { m_clinicalNoteOutputLocationHasBeenSet = true; m_clinicalNoteOutputLocation = value; }
    inline void SetClinicalNoteOutputLocation(Aws::String&& value) { m_clinicalNoteOutputLocationHasBeenSet = true; m_clinicalNoteOutputLocation = std::move(value); }
    inline void SetClinicalNoteOutputLocation(const char* value) { m_clinicalNoteOutputLocationHasBeenSet = true; m_clinicalNoteOutputLocation.assign(value); }
    inline ClinicalNoteGenerationResult& WithClinicalNoteOutputLocation(const Aws::String& value) { SetClinicalNoteOutputLocation(value); return *this;}
    inline ClinicalNoteGenerationResult& WithClinicalNoteOutputLocation(Aws::String&& value) { SetClinicalNoteOutputLocation(std::move(value)); return *this;}
    inline ClinicalNoteGenerationResult& WithClinicalNoteOutputLocation(const char* value) { SetClinicalNoteOutputLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Holds the Amazon S3 URI for the output Transcript. </p>
     */
    inline const Aws::String& GetTranscriptOutputLocation() const{ return m_transcriptOutputLocation; }
    inline bool TranscriptOutputLocationHasBeenSet() const { return m_transcriptOutputLocationHasBeenSet; }
    inline void SetTranscriptOutputLocation(const Aws::String& value) { m_transcriptOutputLocationHasBeenSet = true; m_transcriptOutputLocation = value; }
    inline void SetTranscriptOutputLocation(Aws::String&& value) { m_transcriptOutputLocationHasBeenSet = true; m_transcriptOutputLocation = std::move(value); }
    inline void SetTranscriptOutputLocation(const char* value) { m_transcriptOutputLocationHasBeenSet = true; m_transcriptOutputLocation.assign(value); }
    inline ClinicalNoteGenerationResult& WithTranscriptOutputLocation(const Aws::String& value) { SetTranscriptOutputLocation(value); return *this;}
    inline ClinicalNoteGenerationResult& WithTranscriptOutputLocation(Aws::String&& value) { SetTranscriptOutputLocation(std::move(value)); return *this;}
    inline ClinicalNoteGenerationResult& WithTranscriptOutputLocation(const char* value) { SetTranscriptOutputLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the clinical note generation.</p> <p>Possible Values:</p> <ul>
     * <li> <p> <code>IN_PROGRESS</code> </p> </li> <li> <p> <code>FAILED</code> </p>
     * </li> <li> <p> <code>COMPLETED</code> </p> </li> </ul> <p> After audio streaming
     * finishes, and you send a <code>MedicalScribeSessionControlEvent</code> event
     * (with END_OF_SESSION as the Type), the status is set to
     * <code>IN_PROGRESS</code>. If the status is <code>COMPLETED</code>, the analytics
     * completed successfully, and you can find the results at the locations specified
     * in <code>ClinicalNoteOutputLocation</code> and
     * <code>TranscriptOutputLocation</code>. If the status is <code>FAILED</code>,
     * <code>FailureReason</code> provides details about the failure. </p>
     */
    inline const ClinicalNoteGenerationStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ClinicalNoteGenerationStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ClinicalNoteGenerationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ClinicalNoteGenerationResult& WithStatus(const ClinicalNoteGenerationStatus& value) { SetStatus(value); return *this;}
    inline ClinicalNoteGenerationResult& WithStatus(ClinicalNoteGenerationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>ClinicalNoteGenerationResult</code> is <code>FAILED</code>,
     * information about why it failed. </p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }
    inline ClinicalNoteGenerationResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline ClinicalNoteGenerationResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline ClinicalNoteGenerationResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}
  private:

    Aws::String m_clinicalNoteOutputLocation;
    bool m_clinicalNoteOutputLocationHasBeenSet = false;

    Aws::String m_transcriptOutputLocation;
    bool m_transcriptOutputLocationHasBeenSet = false;

    ClinicalNoteGenerationStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
