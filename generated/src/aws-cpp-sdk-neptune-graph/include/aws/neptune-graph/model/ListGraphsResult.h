/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune-graph/NeptuneGraph_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/neptune-graph/model/GraphSummary.h>
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
namespace NeptuneGraph
{
namespace Model
{
  class ListGraphsResult
  {
  public:
    AWS_NEPTUNEGRAPH_API ListGraphsResult();
    AWS_NEPTUNEGRAPH_API ListGraphsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NEPTUNEGRAPH_API ListGraphsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of the graphs.</p>
     */
    inline const Aws::Vector<GraphSummary>& GetGraphs() const{ return m_graphs; }

    /**
     * <p>A list of the graphs.</p>
     */
    inline void SetGraphs(const Aws::Vector<GraphSummary>& value) { m_graphs = value; }

    /**
     * <p>A list of the graphs.</p>
     */
    inline void SetGraphs(Aws::Vector<GraphSummary>&& value) { m_graphs = std::move(value); }

    /**
     * <p>A list of the graphs.</p>
     */
    inline ListGraphsResult& WithGraphs(const Aws::Vector<GraphSummary>& value) { SetGraphs(value); return *this;}

    /**
     * <p>A list of the graphs.</p>
     */
    inline ListGraphsResult& WithGraphs(Aws::Vector<GraphSummary>&& value) { SetGraphs(std::move(value)); return *this;}

    /**
     * <p>A list of the graphs.</p>
     */
    inline ListGraphsResult& AddGraphs(const GraphSummary& value) { m_graphs.push_back(value); return *this; }

    /**
     * <p>A list of the graphs.</p>
     */
    inline ListGraphsResult& AddGraphs(GraphSummary&& value) { m_graphs.push_back(std::move(value)); return *this; }


    /**
     * <p>Pagination token used to paginate output.</p> <p>When this value is provided
     * as input, the service returns results from where the previous response left off.
     * When this value is present in output, it indicates that there are more results
     * to retrieve.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Pagination token used to paginate output.</p> <p>When this value is provided
     * as input, the service returns results from where the previous response left off.
     * When this value is present in output, it indicates that there are more results
     * to retrieve.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Pagination token used to paginate output.</p> <p>When this value is provided
     * as input, the service returns results from where the previous response left off.
     * When this value is present in output, it indicates that there are more results
     * to retrieve.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Pagination token used to paginate output.</p> <p>When this value is provided
     * as input, the service returns results from where the previous response left off.
     * When this value is present in output, it indicates that there are more results
     * to retrieve.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Pagination token used to paginate output.</p> <p>When this value is provided
     * as input, the service returns results from where the previous response left off.
     * When this value is present in output, it indicates that there are more results
     * to retrieve.</p>
     */
    inline ListGraphsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Pagination token used to paginate output.</p> <p>When this value is provided
     * as input, the service returns results from where the previous response left off.
     * When this value is present in output, it indicates that there are more results
     * to retrieve.</p>
     */
    inline ListGraphsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Pagination token used to paginate output.</p> <p>When this value is provided
     * as input, the service returns results from where the previous response left off.
     * When this value is present in output, it indicates that there are more results
     * to retrieve.</p>
     */
    inline ListGraphsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListGraphsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListGraphsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListGraphsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<GraphSummary> m_graphs;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
