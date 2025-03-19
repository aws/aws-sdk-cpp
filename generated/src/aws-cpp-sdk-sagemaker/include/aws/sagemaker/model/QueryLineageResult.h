/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/Vertex.h>
#include <aws/sagemaker/model/Edge.h>
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
namespace SageMaker
{
namespace Model
{
  class QueryLineageResult
  {
  public:
    AWS_SAGEMAKER_API QueryLineageResult() = default;
    AWS_SAGEMAKER_API QueryLineageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API QueryLineageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of vertices connected to the start entity(ies) in the lineage
     * graph.</p>
     */
    inline const Aws::Vector<Vertex>& GetVertices() const { return m_vertices; }
    template<typename VerticesT = Aws::Vector<Vertex>>
    void SetVertices(VerticesT&& value) { m_verticesHasBeenSet = true; m_vertices = std::forward<VerticesT>(value); }
    template<typename VerticesT = Aws::Vector<Vertex>>
    QueryLineageResult& WithVertices(VerticesT&& value) { SetVertices(std::forward<VerticesT>(value)); return *this;}
    template<typename VerticesT = Vertex>
    QueryLineageResult& AddVertices(VerticesT&& value) { m_verticesHasBeenSet = true; m_vertices.emplace_back(std::forward<VerticesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of edges that connect vertices in the response.</p>
     */
    inline const Aws::Vector<Edge>& GetEdges() const { return m_edges; }
    template<typename EdgesT = Aws::Vector<Edge>>
    void SetEdges(EdgesT&& value) { m_edgesHasBeenSet = true; m_edges = std::forward<EdgesT>(value); }
    template<typename EdgesT = Aws::Vector<Edge>>
    QueryLineageResult& WithEdges(EdgesT&& value) { SetEdges(std::forward<EdgesT>(value)); return *this;}
    template<typename EdgesT = Edge>
    QueryLineageResult& AddEdges(EdgesT&& value) { m_edgesHasBeenSet = true; m_edges.emplace_back(std::forward<EdgesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Limits the number of vertices in the response. Use the <code>NextToken</code>
     * in a response to to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    QueryLineageResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    QueryLineageResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Vertex> m_vertices;
    bool m_verticesHasBeenSet = false;

    Aws::Vector<Edge> m_edges;
    bool m_edgesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
