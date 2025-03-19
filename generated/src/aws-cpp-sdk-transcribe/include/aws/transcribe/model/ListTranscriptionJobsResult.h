/**
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
    AWS_TRANSCRIBESERVICE_API ListTranscriptionJobsResult() = default;
    AWS_TRANSCRIBESERVICE_API ListTranscriptionJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSCRIBESERVICE_API ListTranscriptionJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Lists all transcription jobs that have the status specified in your request.
     * Jobs are ordered by creation date, with the newest job first.</p>
     */
    inline TranscriptionJobStatus GetStatus() const { return m_status; }
    inline void SetStatus(TranscriptionJobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ListTranscriptionJobsResult& WithStatus(TranscriptionJobStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>NextToken</code> is present in your response, it indicates that not
     * all results are displayed. To view the next set of results, copy the string
     * associated with the <code>NextToken</code> parameter in your results output,
     * then run your request again including <code>NextToken</code> with the value of
     * the copied string. Repeat as needed to view all your results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTranscriptionJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides a summary of information about each result.</p>
     */
    inline const Aws::Vector<TranscriptionJobSummary>& GetTranscriptionJobSummaries() const { return m_transcriptionJobSummaries; }
    template<typename TranscriptionJobSummariesT = Aws::Vector<TranscriptionJobSummary>>
    void SetTranscriptionJobSummaries(TranscriptionJobSummariesT&& value) { m_transcriptionJobSummariesHasBeenSet = true; m_transcriptionJobSummaries = std::forward<TranscriptionJobSummariesT>(value); }
    template<typename TranscriptionJobSummariesT = Aws::Vector<TranscriptionJobSummary>>
    ListTranscriptionJobsResult& WithTranscriptionJobSummaries(TranscriptionJobSummariesT&& value) { SetTranscriptionJobSummaries(std::forward<TranscriptionJobSummariesT>(value)); return *this;}
    template<typename TranscriptionJobSummariesT = TranscriptionJobSummary>
    ListTranscriptionJobsResult& AddTranscriptionJobSummaries(TranscriptionJobSummariesT&& value) { m_transcriptionJobSummariesHasBeenSet = true; m_transcriptionJobSummaries.emplace_back(std::forward<TranscriptionJobSummariesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTranscriptionJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    TranscriptionJobStatus m_status{TranscriptionJobStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<TranscriptionJobSummary> m_transcriptionJobSummaries;
    bool m_transcriptionJobSummariesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
