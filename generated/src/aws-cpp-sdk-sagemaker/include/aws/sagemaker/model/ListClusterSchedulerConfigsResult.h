/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ClusterSchedulerConfigSummary.h>
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
  class ListClusterSchedulerConfigsResult
  {
  public:
    AWS_SAGEMAKER_API ListClusterSchedulerConfigsResult() = default;
    AWS_SAGEMAKER_API ListClusterSchedulerConfigsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListClusterSchedulerConfigsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Summaries of the cluster policies.</p>
     */
    inline const Aws::Vector<ClusterSchedulerConfigSummary>& GetClusterSchedulerConfigSummaries() const { return m_clusterSchedulerConfigSummaries; }
    template<typename ClusterSchedulerConfigSummariesT = Aws::Vector<ClusterSchedulerConfigSummary>>
    void SetClusterSchedulerConfigSummaries(ClusterSchedulerConfigSummariesT&& value) { m_clusterSchedulerConfigSummariesHasBeenSet = true; m_clusterSchedulerConfigSummaries = std::forward<ClusterSchedulerConfigSummariesT>(value); }
    template<typename ClusterSchedulerConfigSummariesT = Aws::Vector<ClusterSchedulerConfigSummary>>
    ListClusterSchedulerConfigsResult& WithClusterSchedulerConfigSummaries(ClusterSchedulerConfigSummariesT&& value) { SetClusterSchedulerConfigSummaries(std::forward<ClusterSchedulerConfigSummariesT>(value)); return *this;}
    template<typename ClusterSchedulerConfigSummariesT = ClusterSchedulerConfigSummary>
    ListClusterSchedulerConfigsResult& AddClusterSchedulerConfigSummaries(ClusterSchedulerConfigSummariesT&& value) { m_clusterSchedulerConfigSummariesHasBeenSet = true; m_clusterSchedulerConfigSummaries.emplace_back(std::forward<ClusterSchedulerConfigSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the previous response was truncated, you will receive this token. Use it
     * in your next request to receive the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListClusterSchedulerConfigsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListClusterSchedulerConfigsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ClusterSchedulerConfigSummary> m_clusterSchedulerConfigSummaries;
    bool m_clusterSchedulerConfigSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
