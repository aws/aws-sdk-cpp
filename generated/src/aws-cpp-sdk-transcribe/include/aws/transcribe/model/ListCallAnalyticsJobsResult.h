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
    AWS_TRANSCRIBESERVICE_API ListCallAnalyticsJobsResult();
    AWS_TRANSCRIBESERVICE_API ListCallAnalyticsJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSCRIBESERVICE_API ListCallAnalyticsJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Lists all Call Analytics jobs that have the status specified in your request.
     * Jobs are ordered by creation date, with the newest job first.</p>
     */
    inline const CallAnalyticsJobStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const CallAnalyticsJobStatus& value) { m_status = value; }
    inline void SetStatus(CallAnalyticsJobStatus&& value) { m_status = std::move(value); }
    inline ListCallAnalyticsJobsResult& WithStatus(const CallAnalyticsJobStatus& value) { SetStatus(value); return *this;}
    inline ListCallAnalyticsJobsResult& WithStatus(CallAnalyticsJobStatus&& value) { SetStatus(std::move(value)); return *this;}
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
    inline ListCallAnalyticsJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListCallAnalyticsJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListCallAnalyticsJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides a summary of information about each result.</p>
     */
    inline const Aws::Vector<CallAnalyticsJobSummary>& GetCallAnalyticsJobSummaries() const{ return m_callAnalyticsJobSummaries; }
    inline void SetCallAnalyticsJobSummaries(const Aws::Vector<CallAnalyticsJobSummary>& value) { m_callAnalyticsJobSummaries = value; }
    inline void SetCallAnalyticsJobSummaries(Aws::Vector<CallAnalyticsJobSummary>&& value) { m_callAnalyticsJobSummaries = std::move(value); }
    inline ListCallAnalyticsJobsResult& WithCallAnalyticsJobSummaries(const Aws::Vector<CallAnalyticsJobSummary>& value) { SetCallAnalyticsJobSummaries(value); return *this;}
    inline ListCallAnalyticsJobsResult& WithCallAnalyticsJobSummaries(Aws::Vector<CallAnalyticsJobSummary>&& value) { SetCallAnalyticsJobSummaries(std::move(value)); return *this;}
    inline ListCallAnalyticsJobsResult& AddCallAnalyticsJobSummaries(const CallAnalyticsJobSummary& value) { m_callAnalyticsJobSummaries.push_back(value); return *this; }
    inline ListCallAnalyticsJobsResult& AddCallAnalyticsJobSummaries(CallAnalyticsJobSummary&& value) { m_callAnalyticsJobSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListCallAnalyticsJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListCallAnalyticsJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListCallAnalyticsJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    CallAnalyticsJobStatus m_status;

    Aws::String m_nextToken;

    Aws::Vector<CallAnalyticsJobSummary> m_callAnalyticsJobSummaries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
