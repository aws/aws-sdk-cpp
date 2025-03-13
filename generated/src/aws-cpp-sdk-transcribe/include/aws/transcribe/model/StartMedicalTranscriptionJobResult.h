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
  class StartMedicalTranscriptionJobResult
  {
  public:
    AWS_TRANSCRIBESERVICE_API StartMedicalTranscriptionJobResult() = default;
    AWS_TRANSCRIBESERVICE_API StartMedicalTranscriptionJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSCRIBESERVICE_API StartMedicalTranscriptionJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Provides detailed information about the current medical transcription job,
     * including job status and, if applicable, failure reason.</p>
     */
    inline const MedicalTranscriptionJob& GetMedicalTranscriptionJob() const { return m_medicalTranscriptionJob; }
    template<typename MedicalTranscriptionJobT = MedicalTranscriptionJob>
    void SetMedicalTranscriptionJob(MedicalTranscriptionJobT&& value) { m_medicalTranscriptionJobHasBeenSet = true; m_medicalTranscriptionJob = std::forward<MedicalTranscriptionJobT>(value); }
    template<typename MedicalTranscriptionJobT = MedicalTranscriptionJob>
    StartMedicalTranscriptionJobResult& WithMedicalTranscriptionJob(MedicalTranscriptionJobT&& value) { SetMedicalTranscriptionJob(std::forward<MedicalTranscriptionJobT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartMedicalTranscriptionJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    MedicalTranscriptionJob m_medicalTranscriptionJob;
    bool m_medicalTranscriptionJobHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
