/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/ClusterSummary.h>
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
  class ListClustersResult
  {
  public:
    AWS_SAGEMAKER_API ListClustersResult() = default;
    AWS_SAGEMAKER_API ListClustersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListClustersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If the result of the previous <code>ListClusters</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of clusters, use the token in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListClustersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The summaries of listed SageMaker HyperPod clusters.</p>
     */
    inline const Aws::Vector<ClusterSummary>& GetClusterSummaries() const { return m_clusterSummaries; }
    template<typename ClusterSummariesT = Aws::Vector<ClusterSummary>>
    void SetClusterSummaries(ClusterSummariesT&& value) { m_clusterSummariesHasBeenSet = true; m_clusterSummaries = std::forward<ClusterSummariesT>(value); }
    template<typename ClusterSummariesT = Aws::Vector<ClusterSummary>>
    ListClustersResult& WithClusterSummaries(ClusterSummariesT&& value) { SetClusterSummaries(std::forward<ClusterSummariesT>(value)); return *this;}
    template<typename ClusterSummariesT = ClusterSummary>
    ListClustersResult& AddClusterSummaries(ClusterSummariesT&& value) { m_clusterSummariesHasBeenSet = true; m_clusterSummaries.emplace_back(std::forward<ClusterSummariesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListClustersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ClusterSummary> m_clusterSummaries;
    bool m_clusterSummariesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
