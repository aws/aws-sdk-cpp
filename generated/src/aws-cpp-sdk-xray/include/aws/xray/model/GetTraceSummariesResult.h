/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/xray/model/TraceSummary.h>
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
namespace XRay
{
namespace Model
{
  class GetTraceSummariesResult
  {
  public:
    AWS_XRAY_API GetTraceSummariesResult() = default;
    AWS_XRAY_API GetTraceSummariesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_XRAY_API GetTraceSummariesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Trace IDs and annotations for traces that were found in the specified time
     * frame.</p>
     */
    inline const Aws::Vector<TraceSummary>& GetTraceSummaries() const { return m_traceSummaries; }
    template<typename TraceSummariesT = Aws::Vector<TraceSummary>>
    void SetTraceSummaries(TraceSummariesT&& value) { m_traceSummariesHasBeenSet = true; m_traceSummaries = std::forward<TraceSummariesT>(value); }
    template<typename TraceSummariesT = Aws::Vector<TraceSummary>>
    GetTraceSummariesResult& WithTraceSummaries(TraceSummariesT&& value) { SetTraceSummaries(std::forward<TraceSummariesT>(value)); return *this;}
    template<typename TraceSummariesT = TraceSummary>
    GetTraceSummariesResult& AddTraceSummaries(TraceSummariesT&& value) { m_traceSummariesHasBeenSet = true; m_traceSummaries.emplace_back(std::forward<TraceSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The start time of this page of results.</p>
     */
    inline const Aws::Utils::DateTime& GetApproximateTime() const { return m_approximateTime; }
    template<typename ApproximateTimeT = Aws::Utils::DateTime>
    void SetApproximateTime(ApproximateTimeT&& value) { m_approximateTimeHasBeenSet = true; m_approximateTime = std::forward<ApproximateTimeT>(value); }
    template<typename ApproximateTimeT = Aws::Utils::DateTime>
    GetTraceSummariesResult& WithApproximateTime(ApproximateTimeT&& value) { SetApproximateTime(std::forward<ApproximateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of traces processed, including traces that did not match the
     * specified filter expression.</p>
     */
    inline long long GetTracesProcessedCount() const { return m_tracesProcessedCount; }
    inline void SetTracesProcessedCount(long long value) { m_tracesProcessedCountHasBeenSet = true; m_tracesProcessedCount = value; }
    inline GetTraceSummariesResult& WithTracesProcessedCount(long long value) { SetTracesProcessedCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the requested time frame contained more than one page of results, you can
     * use this token to retrieve the next page. The first page contains the most
     * recent results, closest to the end of the time frame.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetTraceSummariesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetTraceSummariesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TraceSummary> m_traceSummaries;
    bool m_traceSummariesHasBeenSet = false;

    Aws::Utils::DateTime m_approximateTime{};
    bool m_approximateTimeHasBeenSet = false;

    long long m_tracesProcessedCount{0};
    bool m_tracesProcessedCountHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
