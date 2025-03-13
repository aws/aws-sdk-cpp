/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/model/TranscriptionJob.h>
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
  class GetTranscriptionJobResult
  {
  public:
    AWS_TRANSCRIBESERVICE_API GetTranscriptionJobResult() = default;
    AWS_TRANSCRIBESERVICE_API GetTranscriptionJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSCRIBESERVICE_API GetTranscriptionJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Provides detailed information about the specified transcription job,
     * including job status and, if applicable, failure reason.</p>
     */
    inline const TranscriptionJob& GetTranscriptionJob() const { return m_transcriptionJob; }
    template<typename TranscriptionJobT = TranscriptionJob>
    void SetTranscriptionJob(TranscriptionJobT&& value) { m_transcriptionJobHasBeenSet = true; m_transcriptionJob = std::forward<TranscriptionJobT>(value); }
    template<typename TranscriptionJobT = TranscriptionJob>
    GetTranscriptionJobResult& WithTranscriptionJob(TranscriptionJobT&& value) { SetTranscriptionJob(std::forward<TranscriptionJobT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetTranscriptionJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    TranscriptionJob m_transcriptionJob;
    bool m_transcriptionJobHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
