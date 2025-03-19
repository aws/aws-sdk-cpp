/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/DescribeNodeSummary.h>
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
namespace MediaLive
{
namespace Model
{
  /**
   * Placeholder documentation for ListNodesResponse<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListNodesResponse">AWS
   * API Reference</a></p>
   */
  class ListNodesSdkResult
  {
  public:
    AWS_MEDIALIVE_API ListNodesSdkResult() = default;
    AWS_MEDIALIVE_API ListNodesSdkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API ListNodesSdkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * Token for the next result.
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListNodesSdkResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * An array of Nodes that exist in the Cluster.
     */
    inline const Aws::Vector<DescribeNodeSummary>& GetNodes() const { return m_nodes; }
    template<typename NodesT = Aws::Vector<DescribeNodeSummary>>
    void SetNodes(NodesT&& value) { m_nodesHasBeenSet = true; m_nodes = std::forward<NodesT>(value); }
    template<typename NodesT = Aws::Vector<DescribeNodeSummary>>
    ListNodesSdkResult& WithNodes(NodesT&& value) { SetNodes(std::forward<NodesT>(value)); return *this;}
    template<typename NodesT = DescribeNodeSummary>
    ListNodesSdkResult& AddNodes(NodesT&& value) { m_nodesHasBeenSet = true; m_nodes.emplace_back(std::forward<NodesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListNodesSdkResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<DescribeNodeSummary> m_nodes;
    bool m_nodesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
