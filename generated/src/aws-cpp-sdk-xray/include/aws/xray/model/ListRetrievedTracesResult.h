/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/xray/model/RetrievalStatus.h>
#include <aws/xray/model/TraceFormatType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/xray/model/RetrievedTrace.h>
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
  class ListRetrievedTracesResult
  {
  public:
    AWS_XRAY_API ListRetrievedTracesResult() = default;
    AWS_XRAY_API ListRetrievedTracesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_XRAY_API ListRetrievedTracesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> Status of the retrieval. </p>
     */
    inline RetrievalStatus GetRetrievalStatus() const { return m_retrievalStatus; }
    inline void SetRetrievalStatus(RetrievalStatus value) { m_retrievalStatusHasBeenSet = true; m_retrievalStatus = value; }
    inline ListRetrievedTracesResult& WithRetrievalStatus(RetrievalStatus value) { SetRetrievalStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Format of the requested traces. </p>
     */
    inline TraceFormatType GetTraceFormat() const { return m_traceFormat; }
    inline void SetTraceFormat(TraceFormatType value) { m_traceFormatHasBeenSet = true; m_traceFormat = value; }
    inline ListRetrievedTracesResult& WithTraceFormat(TraceFormatType value) { SetTraceFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Full traces for the specified requests. </p>
     */
    inline const Aws::Vector<RetrievedTrace>& GetTraces() const { return m_traces; }
    template<typename TracesT = Aws::Vector<RetrievedTrace>>
    void SetTraces(TracesT&& value) { m_tracesHasBeenSet = true; m_traces = std::forward<TracesT>(value); }
    template<typename TracesT = Aws::Vector<RetrievedTrace>>
    ListRetrievedTracesResult& WithTraces(TracesT&& value) { SetTraces(std::forward<TracesT>(value)); return *this;}
    template<typename TracesT = RetrievedTrace>
    ListRetrievedTracesResult& AddTraces(TracesT&& value) { m_tracesHasBeenSet = true; m_traces.emplace_back(std::forward<TracesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Specify the pagination token returned by a previous request to retrieve the
     * next page of indexes. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRetrievedTracesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListRetrievedTracesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    RetrievalStatus m_retrievalStatus{RetrievalStatus::NOT_SET};
    bool m_retrievalStatusHasBeenSet = false;

    TraceFormatType m_traceFormat{TraceFormatType::NOT_SET};
    bool m_traceFormatHasBeenSet = false;

    Aws::Vector<RetrievedTrace> m_traces;
    bool m_tracesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
