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
    AWS_TRANSCRIBESERVICE_API MedicalScribeOutput();
    AWS_TRANSCRIBESERVICE_API MedicalScribeOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API MedicalScribeOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Holds the Amazon S3 URI for the Transcript.</p>
     */
    inline const Aws::String& GetTranscriptFileUri() const{ return m_transcriptFileUri; }

    /**
     * <p>Holds the Amazon S3 URI for the Transcript.</p>
     */
    inline bool TranscriptFileUriHasBeenSet() const { return m_transcriptFileUriHasBeenSet; }

    /**
     * <p>Holds the Amazon S3 URI for the Transcript.</p>
     */
    inline void SetTranscriptFileUri(const Aws::String& value) { m_transcriptFileUriHasBeenSet = true; m_transcriptFileUri = value; }

    /**
     * <p>Holds the Amazon S3 URI for the Transcript.</p>
     */
    inline void SetTranscriptFileUri(Aws::String&& value) { m_transcriptFileUriHasBeenSet = true; m_transcriptFileUri = std::move(value); }

    /**
     * <p>Holds the Amazon S3 URI for the Transcript.</p>
     */
    inline void SetTranscriptFileUri(const char* value) { m_transcriptFileUriHasBeenSet = true; m_transcriptFileUri.assign(value); }

    /**
     * <p>Holds the Amazon S3 URI for the Transcript.</p>
     */
    inline MedicalScribeOutput& WithTranscriptFileUri(const Aws::String& value) { SetTranscriptFileUri(value); return *this;}

    /**
     * <p>Holds the Amazon S3 URI for the Transcript.</p>
     */
    inline MedicalScribeOutput& WithTranscriptFileUri(Aws::String&& value) { SetTranscriptFileUri(std::move(value)); return *this;}

    /**
     * <p>Holds the Amazon S3 URI for the Transcript.</p>
     */
    inline MedicalScribeOutput& WithTranscriptFileUri(const char* value) { SetTranscriptFileUri(value); return *this;}


    /**
     * <p>Holds the Amazon S3 URI for the Clinical Document.</p>
     */
    inline const Aws::String& GetClinicalDocumentUri() const{ return m_clinicalDocumentUri; }

    /**
     * <p>Holds the Amazon S3 URI for the Clinical Document.</p>
     */
    inline bool ClinicalDocumentUriHasBeenSet() const { return m_clinicalDocumentUriHasBeenSet; }

    /**
     * <p>Holds the Amazon S3 URI for the Clinical Document.</p>
     */
    inline void SetClinicalDocumentUri(const Aws::String& value) { m_clinicalDocumentUriHasBeenSet = true; m_clinicalDocumentUri = value; }

    /**
     * <p>Holds the Amazon S3 URI for the Clinical Document.</p>
     */
    inline void SetClinicalDocumentUri(Aws::String&& value) { m_clinicalDocumentUriHasBeenSet = true; m_clinicalDocumentUri = std::move(value); }

    /**
     * <p>Holds the Amazon S3 URI for the Clinical Document.</p>
     */
    inline void SetClinicalDocumentUri(const char* value) { m_clinicalDocumentUriHasBeenSet = true; m_clinicalDocumentUri.assign(value); }

    /**
     * <p>Holds the Amazon S3 URI for the Clinical Document.</p>
     */
    inline MedicalScribeOutput& WithClinicalDocumentUri(const Aws::String& value) { SetClinicalDocumentUri(value); return *this;}

    /**
     * <p>Holds the Amazon S3 URI for the Clinical Document.</p>
     */
    inline MedicalScribeOutput& WithClinicalDocumentUri(Aws::String&& value) { SetClinicalDocumentUri(std::move(value)); return *this;}

    /**
     * <p>Holds the Amazon S3 URI for the Clinical Document.</p>
     */
    inline MedicalScribeOutput& WithClinicalDocumentUri(const char* value) { SetClinicalDocumentUri(value); return *this;}

  private:

    Aws::String m_transcriptFileUri;
    bool m_transcriptFileUriHasBeenSet = false;

    Aws::String m_clinicalDocumentUri;
    bool m_clinicalDocumentUriHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
