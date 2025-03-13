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
  class StartMedicalScribeJobResult
  {
  public:
    AWS_TRANSCRIBESERVICE_API StartMedicalScribeJobResult() = default;
    AWS_TRANSCRIBESERVICE_API StartMedicalScribeJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSCRIBESERVICE_API StartMedicalScribeJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Provides detailed information about the current Medical Scribe job, including
     * job status and, if applicable, failure reason.</p>
     */
    inline const MedicalScribeJob& GetMedicalScribeJob() const { return m_medicalScribeJob; }
    template<typename MedicalScribeJobT = MedicalScribeJob>
    void SetMedicalScribeJob(MedicalScribeJobT&& value) { m_medicalScribeJobHasBeenSet = true; m_medicalScribeJob = std::forward<MedicalScribeJobT>(value); }
    template<typename MedicalScribeJobT = MedicalScribeJob>
    StartMedicalScribeJobResult& WithMedicalScribeJob(MedicalScribeJobT&& value) { SetMedicalScribeJob(std::forward<MedicalScribeJobT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartMedicalScribeJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    MedicalScribeJob m_medicalScribeJob;
    bool m_medicalScribeJobHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
