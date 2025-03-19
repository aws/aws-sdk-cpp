/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/xray/model/Trace.h>
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
  class BatchGetTracesResult
  {
  public:
    AWS_XRAY_API BatchGetTracesResult() = default;
    AWS_XRAY_API BatchGetTracesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_XRAY_API BatchGetTracesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Full traces for the specified requests.</p>
     */
    inline const Aws::Vector<Trace>& GetTraces() const { return m_traces; }
    template<typename TracesT = Aws::Vector<Trace>>
    void SetTraces(TracesT&& value) { m_tracesHasBeenSet = true; m_traces = std::forward<TracesT>(value); }
    template<typename TracesT = Aws::Vector<Trace>>
    BatchGetTracesResult& WithTraces(TracesT&& value) { SetTraces(std::forward<TracesT>(value)); return *this;}
    template<typename TracesT = Trace>
    BatchGetTracesResult& AddTraces(TracesT&& value) { m_tracesHasBeenSet = true; m_traces.emplace_back(std::forward<TracesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Trace IDs of requests that haven't been processed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUnprocessedTraceIds() const { return m_unprocessedTraceIds; }
    template<typename UnprocessedTraceIdsT = Aws::Vector<Aws::String>>
    void SetUnprocessedTraceIds(UnprocessedTraceIdsT&& value) { m_unprocessedTraceIdsHasBeenSet = true; m_unprocessedTraceIds = std::forward<UnprocessedTraceIdsT>(value); }
    template<typename UnprocessedTraceIdsT = Aws::Vector<Aws::String>>
    BatchGetTracesResult& WithUnprocessedTraceIds(UnprocessedTraceIdsT&& value) { SetUnprocessedTraceIds(std::forward<UnprocessedTraceIdsT>(value)); return *this;}
    template<typename UnprocessedTraceIdsT = Aws::String>
    BatchGetTracesResult& AddUnprocessedTraceIds(UnprocessedTraceIdsT&& value) { m_unprocessedTraceIdsHasBeenSet = true; m_unprocessedTraceIds.emplace_back(std::forward<UnprocessedTraceIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    BatchGetTracesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchGetTracesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Trace> m_traces;
    bool m_tracesHasBeenSet = false;

    Aws::Vector<Aws::String> m_unprocessedTraceIds;
    bool m_unprocessedTraceIdsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
