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
    AWS_XRAY_API ListRetrievedTracesResult();
    AWS_XRAY_API ListRetrievedTracesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_XRAY_API ListRetrievedTracesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> Status of the retrieval. </p>
     */
    inline const RetrievalStatus& GetRetrievalStatus() const{ return m_retrievalStatus; }
    inline void SetRetrievalStatus(const RetrievalStatus& value) { m_retrievalStatus = value; }
    inline void SetRetrievalStatus(RetrievalStatus&& value) { m_retrievalStatus = std::move(value); }
    inline ListRetrievedTracesResult& WithRetrievalStatus(const RetrievalStatus& value) { SetRetrievalStatus(value); return *this;}
    inline ListRetrievedTracesResult& WithRetrievalStatus(RetrievalStatus&& value) { SetRetrievalStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Format of the requested traces. </p>
     */
    inline const TraceFormatType& GetTraceFormat() const{ return m_traceFormat; }
    inline void SetTraceFormat(const TraceFormatType& value) { m_traceFormat = value; }
    inline void SetTraceFormat(TraceFormatType&& value) { m_traceFormat = std::move(value); }
    inline ListRetrievedTracesResult& WithTraceFormat(const TraceFormatType& value) { SetTraceFormat(value); return *this;}
    inline ListRetrievedTracesResult& WithTraceFormat(TraceFormatType&& value) { SetTraceFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Full traces for the specified requests. </p>
     */
    inline const Aws::Vector<RetrievedTrace>& GetTraces() const{ return m_traces; }
    inline void SetTraces(const Aws::Vector<RetrievedTrace>& value) { m_traces = value; }
    inline void SetTraces(Aws::Vector<RetrievedTrace>&& value) { m_traces = std::move(value); }
    inline ListRetrievedTracesResult& WithTraces(const Aws::Vector<RetrievedTrace>& value) { SetTraces(value); return *this;}
    inline ListRetrievedTracesResult& WithTraces(Aws::Vector<RetrievedTrace>&& value) { SetTraces(std::move(value)); return *this;}
    inline ListRetrievedTracesResult& AddTraces(const RetrievedTrace& value) { m_traces.push_back(value); return *this; }
    inline ListRetrievedTracesResult& AddTraces(RetrievedTrace&& value) { m_traces.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Specify the pagination token returned by a previous request to retrieve the
     * next page of indexes. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListRetrievedTracesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListRetrievedTracesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListRetrievedTracesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListRetrievedTracesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListRetrievedTracesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListRetrievedTracesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    RetrievalStatus m_retrievalStatus;

    TraceFormatType m_traceFormat;

    Aws::Vector<RetrievedTrace> m_traces;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
