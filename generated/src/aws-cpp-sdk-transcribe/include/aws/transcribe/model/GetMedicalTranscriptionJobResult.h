/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/model/MedicalTranscriptionJob.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetMedicalTranscriptionJobResult
  {
  public:
    AWS_TRANSCRIBESERVICE_API GetMedicalTranscriptionJobResult();
    AWS_TRANSCRIBESERVICE_API GetMedicalTranscriptionJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSCRIBESERVICE_API GetMedicalTranscriptionJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Provides detailed information about the specified medical transcription job,
     * including job status and, if applicable, failure reason.</p>
     */
    inline const MedicalTranscriptionJob& GetMedicalTranscriptionJob() const{ return m_medicalTranscriptionJob; }

    /**
     * <p>Provides detailed information about the specified medical transcription job,
     * including job status and, if applicable, failure reason.</p>
     */
    inline void SetMedicalTranscriptionJob(const MedicalTranscriptionJob& value) { m_medicalTranscriptionJob = value; }

    /**
     * <p>Provides detailed information about the specified medical transcription job,
     * including job status and, if applicable, failure reason.</p>
     */
    inline void SetMedicalTranscriptionJob(MedicalTranscriptionJob&& value) { m_medicalTranscriptionJob = std::move(value); }

    /**
     * <p>Provides detailed information about the specified medical transcription job,
     * including job status and, if applicable, failure reason.</p>
     */
    inline GetMedicalTranscriptionJobResult& WithMedicalTranscriptionJob(const MedicalTranscriptionJob& value) { SetMedicalTranscriptionJob(value); return *this;}

    /**
     * <p>Provides detailed information about the specified medical transcription job,
     * including job status and, if applicable, failure reason.</p>
     */
    inline GetMedicalTranscriptionJobResult& WithMedicalTranscriptionJob(MedicalTranscriptionJob&& value) { SetMedicalTranscriptionJob(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetMedicalTranscriptionJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetMedicalTranscriptionJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetMedicalTranscriptionJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    MedicalTranscriptionJob m_medicalTranscriptionJob;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
