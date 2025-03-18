/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/model/CallAnalyticsJobStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/transcribe/model/CallAnalyticsJobSummary.h>
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
  class ListCallAnalyticsJobsResult
  {
  public:
    AWS_TRANSCRIBESERVICE_API ListCallAnalyticsJobsResult() = default;
    AWS_TRANSCRIBESERVICE_API ListCallAnalyticsJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSCRIBESERVICE_API ListCallAnalyticsJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Lists all Call Analytics jobs that have the status specified in your request.
     * Jobs are ordered by creation date, with the newest job first.</p>
     */
    inline CallAnalyticsJobStatus GetStatus() const { return m_status; }
    inline void SetStatus(CallAnalyticsJobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ListCallAnalyticsJobsResult& WithStatus(CallAnalyticsJobStatus value) { SetStatus(value); return *this;}
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
    ListCallAnalyticsJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides a summary of information about each result.</p>
     */
    inline const Aws::Vector<CallAnalyticsJobSummary>& GetCallAnalyticsJobSummaries() const { return m_callAnalyticsJobSummaries; }
    template<typename CallAnalyticsJobSummariesT = Aws::Vector<CallAnalyticsJobSummary>>
    void SetCallAnalyticsJobSummaries(CallAnalyticsJobSummariesT&& value) { m_callAnalyticsJobSummariesHasBeenSet = true; m_callAnalyticsJobSummaries = std::forward<CallAnalyticsJobSummariesT>(value); }
    template<typename CallAnalyticsJobSummariesT = Aws::Vector<CallAnalyticsJobSummary>>
    ListCallAnalyticsJobsResult& WithCallAnalyticsJobSummaries(CallAnalyticsJobSummariesT&& value) { SetCallAnalyticsJobSummaries(std::forward<CallAnalyticsJobSummariesT>(value)); return *this;}
    template<typename CallAnalyticsJobSummariesT = CallAnalyticsJobSummary>
    ListCallAnalyticsJobsResult& AddCallAnalyticsJobSummaries(CallAnalyticsJobSummariesT&& value) { m_callAnalyticsJobSummariesHasBeenSet = true; m_callAnalyticsJobSummaries.emplace_back(std::forward<CallAnalyticsJobSummariesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCallAnalyticsJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    CallAnalyticsJobStatus m_status{CallAnalyticsJobStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<CallAnalyticsJobSummary> m_callAnalyticsJobSummaries;
    bool m_callAnalyticsJobSummariesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
