/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/ClusterNodeSummary.h>
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
  class ListClusterNodesResult
  {
  public:
    AWS_SAGEMAKER_API ListClusterNodesResult() = default;
    AWS_SAGEMAKER_API ListClusterNodesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListClusterNodesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The next token specified for listing instances in a SageMaker HyperPod
     * cluster.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListClusterNodesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The summaries of listed instances in a SageMaker HyperPod cluster</p>
     */
    inline const Aws::Vector<ClusterNodeSummary>& GetClusterNodeSummaries() const { return m_clusterNodeSummaries; }
    template<typename ClusterNodeSummariesT = Aws::Vector<ClusterNodeSummary>>
    void SetClusterNodeSummaries(ClusterNodeSummariesT&& value) { m_clusterNodeSummariesHasBeenSet = true; m_clusterNodeSummaries = std::forward<ClusterNodeSummariesT>(value); }
    template<typename ClusterNodeSummariesT = Aws::Vector<ClusterNodeSummary>>
    ListClusterNodesResult& WithClusterNodeSummaries(ClusterNodeSummariesT&& value) { SetClusterNodeSummaries(std::forward<ClusterNodeSummariesT>(value)); return *this;}
    template<typename ClusterNodeSummariesT = ClusterNodeSummary>
    ListClusterNodesResult& AddClusterNodeSummaries(ClusterNodeSummariesT&& value) { m_clusterNodeSummariesHasBeenSet = true; m_clusterNodeSummaries.emplace_back(std::forward<ClusterNodeSummariesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListClusterNodesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ClusterNodeSummary> m_clusterNodeSummaries;
    bool m_clusterNodeSummariesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
