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
  class StartTranscriptionJobResult
  {
  public:
    AWS_TRANSCRIBESERVICE_API StartTranscriptionJobResult();
    AWS_TRANSCRIBESERVICE_API StartTranscriptionJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSCRIBESERVICE_API StartTranscriptionJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Provides detailed information about the current transcription job, including
     * job status and, if applicable, failure reason.</p>
     */
    inline const TranscriptionJob& GetTranscriptionJob() const{ return m_transcriptionJob; }

    /**
     * <p>Provides detailed information about the current transcription job, including
     * job status and, if applicable, failure reason.</p>
     */
    inline void SetTranscriptionJob(const TranscriptionJob& value) { m_transcriptionJob = value; }

    /**
     * <p>Provides detailed information about the current transcription job, including
     * job status and, if applicable, failure reason.</p>
     */
    inline void SetTranscriptionJob(TranscriptionJob&& value) { m_transcriptionJob = std::move(value); }

    /**
     * <p>Provides detailed information about the current transcription job, including
     * job status and, if applicable, failure reason.</p>
     */
    inline StartTranscriptionJobResult& WithTranscriptionJob(const TranscriptionJob& value) { SetTranscriptionJob(value); return *this;}

    /**
     * <p>Provides detailed information about the current transcription job, including
     * job status and, if applicable, failure reason.</p>
     */
    inline StartTranscriptionJobResult& WithTranscriptionJob(TranscriptionJob&& value) { SetTranscriptionJob(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StartTranscriptionJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StartTranscriptionJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StartTranscriptionJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    TranscriptionJob m_transcriptionJob;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
