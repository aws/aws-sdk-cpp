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
    AWS_TRANSCRIBESTREAMINGSERVICE_API GetMedicalScribeStreamResult() = default;
    AWS_TRANSCRIBESTREAMINGSERVICE_API GetMedicalScribeStreamResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSCRIBESTREAMINGSERVICE_API GetMedicalScribeStreamResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Provides details about a HealthScribe streaming session.</p>
     */
    inline const MedicalScribeStreamDetails& GetMedicalScribeStreamDetails() const { return m_medicalScribeStreamDetails; }
    template<typename MedicalScribeStreamDetailsT = MedicalScribeStreamDetails>
    void SetMedicalScribeStreamDetails(MedicalScribeStreamDetailsT&& value) { m_medicalScribeStreamDetailsHasBeenSet = true; m_medicalScribeStreamDetails = std::forward<MedicalScribeStreamDetailsT>(value); }
    template<typename MedicalScribeStreamDetailsT = MedicalScribeStreamDetails>
    GetMedicalScribeStreamResult& WithMedicalScribeStreamDetails(MedicalScribeStreamDetailsT&& value) { SetMedicalScribeStreamDetails(std::forward<MedicalScribeStreamDetailsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetMedicalScribeStreamResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    MedicalScribeStreamDetails m_medicalScribeStreamDetails;
    bool m_medicalScribeStreamDetailsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
