/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/model/TranscriptionJob.h>
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
    AWS_TRANSCRIBESERVICE_API GetTranscriptionJobResult();
    AWS_TRANSCRIBESERVICE_API GetTranscriptionJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSCRIBESERVICE_API GetTranscriptionJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Provides detailed information about the specified transcription job,
     * including job status and, if applicable, failure reason.</p>
     */
    inline const TranscriptionJob& GetTranscriptionJob() const{ return m_transcriptionJob; }

    /**
     * <p>Provides detailed information about the specified transcription job,
     * including job status and, if applicable, failure reason.</p>
     */
    inline void SetTranscriptionJob(const TranscriptionJob& value) { m_transcriptionJob = value; }

    /**
     * <p>Provides detailed information about the specified transcription job,
     * including job status and, if applicable, failure reason.</p>
     */
    inline void SetTranscriptionJob(TranscriptionJob&& value) { m_transcriptionJob = std::move(value); }

    /**
     * <p>Provides detailed information about the specified transcription job,
     * including job status and, if applicable, failure reason.</p>
     */
    inline GetTranscriptionJobResult& WithTranscriptionJob(const TranscriptionJob& value) { SetTranscriptionJob(value); return *this;}

    /**
     * <p>Provides detailed information about the specified transcription job,
     * including job status and, if applicable, failure reason.</p>
     */
    inline GetTranscriptionJobResult& WithTranscriptionJob(TranscriptionJob&& value) { SetTranscriptionJob(std::move(value)); return *this;}

  private:

    TranscriptionJob m_transcriptionJob;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
