/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The location of the output of your Medical Scribe job.
   * <code>ClinicalDocumentUri</code> holds the Amazon S3 URI for the Clinical
   * Document and <code>TranscriptFileUri</code> holds the Amazon S3 URI for the
   * Transcript.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/MedicalScribeOutput">AWS
   * API Reference</a></p>
   */
  class MedicalScribeOutput
  {
  public:
    AWS_TRANSCRIBESERVICE_API MedicalScribeOutput() = default;
    AWS_TRANSCRIBESERVICE_API MedicalScribeOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API MedicalScribeOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Holds the Amazon S3 URI for the Transcript.</p>
     */
    inline const Aws::String& GetTranscriptFileUri() const { return m_transcriptFileUri; }
    inline bool TranscriptFileUriHasBeenSet() const { return m_transcriptFileUriHasBeenSet; }
    template<typename TranscriptFileUriT = Aws::String>
    void SetTranscriptFileUri(TranscriptFileUriT&& value) { m_transcriptFileUriHasBeenSet = true; m_transcriptFileUri = std::forward<TranscriptFileUriT>(value); }
    template<typename TranscriptFileUriT = Aws::String>
    MedicalScribeOutput& WithTranscriptFileUri(TranscriptFileUriT&& value) { SetTranscriptFileUri(std::forward<TranscriptFileUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Holds the Amazon S3 URI for the Clinical Document.</p>
     */
    inline const Aws::String& GetClinicalDocumentUri() const { return m_clinicalDocumentUri; }
    inline bool ClinicalDocumentUriHasBeenSet() const { return m_clinicalDocumentUriHasBeenSet; }
    template<typename ClinicalDocumentUriT = Aws::String>
    void SetClinicalDocumentUri(ClinicalDocumentUriT&& value) { m_clinicalDocumentUriHasBeenSet = true; m_clinicalDocumentUri = std::forward<ClinicalDocumentUriT>(value); }
    template<typename ClinicalDocumentUriT = Aws::String>
    MedicalScribeOutput& WithClinicalDocumentUri(ClinicalDocumentUriT&& value) { SetClinicalDocumentUri(std::forward<ClinicalDocumentUriT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_transcriptFileUri;
    bool m_transcriptFileUriHasBeenSet = false;

    Aws::String m_clinicalDocumentUri;
    bool m_clinicalDocumentUriHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
