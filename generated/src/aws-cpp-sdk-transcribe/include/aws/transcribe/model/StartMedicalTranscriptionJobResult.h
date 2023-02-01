/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/model/MedicalTranscriptionJob.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace TranscribeService
{
namespace Model
{
  class StartMedicalTranscriptionJobResult
  {
  public:
    AWS_TRANSCRIBESERVICE_API StartMedicalTranscriptionJobResult();
    AWS_TRANSCRIBESERVICE_API StartMedicalTranscriptionJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSCRIBESERVICE_API StartMedicalTranscriptionJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Provides detailed information about the current medical transcription job,
     * including job status and, if applicable, failure reason.</p>
     */
    inline const MedicalTranscriptionJob& GetMedicalTranscriptionJob() const{ return m_medicalTranscriptionJob; }

    /**
     * <p>Provides detailed information about the current medical transcription job,
     * including job status and, if applicable, failure reason.</p>
     */
    inline void SetMedicalTranscriptionJob(const MedicalTranscriptionJob& value) { m_medicalTranscriptionJob = value; }

    /**
     * <p>Provides detailed information about the current medical transcription job,
     * including job status and, if applicable, failure reason.</p>
     */
    inline void SetMedicalTranscriptionJob(MedicalTranscriptionJob&& value) { m_medicalTranscriptionJob = std::move(value); }

    /**
     * <p>Provides detailed information about the current medical transcription job,
     * including job status and, if applicable, failure reason.</p>
     */
    inline StartMedicalTranscriptionJobResult& WithMedicalTranscriptionJob(const MedicalTranscriptionJob& value) { SetMedicalTranscriptionJob(value); return *this;}

    /**
     * <p>Provides detailed information about the current medical transcription job,
     * including job status and, if applicable, failure reason.</p>
     */
    inline StartMedicalTranscriptionJobResult& WithMedicalTranscriptionJob(MedicalTranscriptionJob&& value) { SetMedicalTranscriptionJob(std::move(value)); return *this;}

  private:

    MedicalTranscriptionJob m_medicalTranscriptionJob;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
