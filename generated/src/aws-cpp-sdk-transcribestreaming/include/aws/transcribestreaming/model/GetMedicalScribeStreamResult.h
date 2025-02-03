/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/transcribestreaming/model/MedicalScribeStreamDetails.h>
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
namespace TranscribeStreamingService
{
namespace Model
{
  class GetMedicalScribeStreamResult
  {
  public:
    AWS_TRANSCRIBESTREAMINGSERVICE_API GetMedicalScribeStreamResult();
    AWS_TRANSCRIBESTREAMINGSERVICE_API GetMedicalScribeStreamResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSCRIBESTREAMINGSERVICE_API GetMedicalScribeStreamResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Provides details about a HealthScribe streaming session.</p>
     */
    inline const MedicalScribeStreamDetails& GetMedicalScribeStreamDetails() const{ return m_medicalScribeStreamDetails; }
    inline void SetMedicalScribeStreamDetails(const MedicalScribeStreamDetails& value) { m_medicalScribeStreamDetails = value; }
    inline void SetMedicalScribeStreamDetails(MedicalScribeStreamDetails&& value) { m_medicalScribeStreamDetails = std::move(value); }
    inline GetMedicalScribeStreamResult& WithMedicalScribeStreamDetails(const MedicalScribeStreamDetails& value) { SetMedicalScribeStreamDetails(value); return *this;}
    inline GetMedicalScribeStreamResult& WithMedicalScribeStreamDetails(MedicalScribeStreamDetails&& value) { SetMedicalScribeStreamDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetMedicalScribeStreamResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetMedicalScribeStreamResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetMedicalScribeStreamResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    MedicalScribeStreamDetails m_medicalScribeStreamDetails;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
