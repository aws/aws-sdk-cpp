/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/model/MedicalScribeJob.h>
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
  class GetMedicalScribeJobResult
  {
  public:
    AWS_TRANSCRIBESERVICE_API GetMedicalScribeJobResult();
    AWS_TRANSCRIBESERVICE_API GetMedicalScribeJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSCRIBESERVICE_API GetMedicalScribeJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Provides detailed information about the specified Medical Scribe job,
     * including job status and, if applicable, failure reason</p>
     */
    inline const MedicalScribeJob& GetMedicalScribeJob() const{ return m_medicalScribeJob; }

    /**
     * <p>Provides detailed information about the specified Medical Scribe job,
     * including job status and, if applicable, failure reason</p>
     */
    inline void SetMedicalScribeJob(const MedicalScribeJob& value) { m_medicalScribeJob = value; }

    /**
     * <p>Provides detailed information about the specified Medical Scribe job,
     * including job status and, if applicable, failure reason</p>
     */
    inline void SetMedicalScribeJob(MedicalScribeJob&& value) { m_medicalScribeJob = std::move(value); }

    /**
     * <p>Provides detailed information about the specified Medical Scribe job,
     * including job status and, if applicable, failure reason</p>
     */
    inline GetMedicalScribeJobResult& WithMedicalScribeJob(const MedicalScribeJob& value) { SetMedicalScribeJob(value); return *this;}

    /**
     * <p>Provides detailed information about the specified Medical Scribe job,
     * including job status and, if applicable, failure reason</p>
     */
    inline GetMedicalScribeJobResult& WithMedicalScribeJob(MedicalScribeJob&& value) { SetMedicalScribeJob(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetMedicalScribeJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetMedicalScribeJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetMedicalScribeJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    MedicalScribeJob m_medicalScribeJob;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
