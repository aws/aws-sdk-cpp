﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/model/TranscriptionJobStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/transcribe/model/TranscriptionJobSummary.h>
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
  class ListTranscriptionJobsResult
  {
  public:
    AWS_TRANSCRIBESERVICE_API ListTranscriptionJobsResult();
    AWS_TRANSCRIBESERVICE_API ListTranscriptionJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSCRIBESERVICE_API ListTranscriptionJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Lists all transcription jobs that have the status specified in your request.
     * Jobs are ordered by creation date, with the newest job first.</p>
     */
    inline const TranscriptionJobStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const TranscriptionJobStatus& value) { m_status = value; }
    inline void SetStatus(TranscriptionJobStatus&& value) { m_status = std::move(value); }
    inline ListTranscriptionJobsResult& WithStatus(const TranscriptionJobStatus& value) { SetStatus(value); return *this;}
    inline ListTranscriptionJobsResult& WithStatus(TranscriptionJobStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>NextToken</code> is present in your response, it indicates that not
     * all results are displayed. To view the next set of results, copy the string
     * associated with the <code>NextToken</code> parameter in your results output,
     * then run your request again including <code>NextToken</code> with the value of
     * the copied string. Repeat as needed to view all your results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListTranscriptionJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListTranscriptionJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListTranscriptionJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides a summary of information about each result.</p>
     */
    inline const Aws::Vector<TranscriptionJobSummary>& GetTranscriptionJobSummaries() const{ return m_transcriptionJobSummaries; }
    inline void SetTranscriptionJobSummaries(const Aws::Vector<TranscriptionJobSummary>& value) { m_transcriptionJobSummaries = value; }
    inline void SetTranscriptionJobSummaries(Aws::Vector<TranscriptionJobSummary>&& value) { m_transcriptionJobSummaries = std::move(value); }
    inline ListTranscriptionJobsResult& WithTranscriptionJobSummaries(const Aws::Vector<TranscriptionJobSummary>& value) { SetTranscriptionJobSummaries(value); return *this;}
    inline ListTranscriptionJobsResult& WithTranscriptionJobSummaries(Aws::Vector<TranscriptionJobSummary>&& value) { SetTranscriptionJobSummaries(std::move(value)); return *this;}
    inline ListTranscriptionJobsResult& AddTranscriptionJobSummaries(const TranscriptionJobSummary& value) { m_transcriptionJobSummaries.push_back(value); return *this; }
    inline ListTranscriptionJobsResult& AddTranscriptionJobSummaries(TranscriptionJobSummary&& value) { m_transcriptionJobSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListTranscriptionJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListTranscriptionJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListTranscriptionJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    TranscriptionJobStatus m_status;

    Aws::String m_nextToken;

    Aws::Vector<TranscriptionJobSummary> m_transcriptionJobSummaries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
