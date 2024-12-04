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
    AWS_SAGEMAKER_API ListClusterSchedulerConfigsResult();
    AWS_SAGEMAKER_API ListClusterSchedulerConfigsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListClusterSchedulerConfigsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Summaries of the cluster policies.</p>
     */
    inline const Aws::Vector<ClusterSchedulerConfigSummary>& GetClusterSchedulerConfigSummaries() const{ return m_clusterSchedulerConfigSummaries; }
    inline void SetClusterSchedulerConfigSummaries(const Aws::Vector<ClusterSchedulerConfigSummary>& value) { m_clusterSchedulerConfigSummaries = value; }
    inline void SetClusterSchedulerConfigSummaries(Aws::Vector<ClusterSchedulerConfigSummary>&& value) { m_clusterSchedulerConfigSummaries = std::move(value); }
    inline ListClusterSchedulerConfigsResult& WithClusterSchedulerConfigSummaries(const Aws::Vector<ClusterSchedulerConfigSummary>& value) { SetClusterSchedulerConfigSummaries(value); return *this;}
    inline ListClusterSchedulerConfigsResult& WithClusterSchedulerConfigSummaries(Aws::Vector<ClusterSchedulerConfigSummary>&& value) { SetClusterSchedulerConfigSummaries(std::move(value)); return *this;}
    inline ListClusterSchedulerConfigsResult& AddClusterSchedulerConfigSummaries(const ClusterSchedulerConfigSummary& value) { m_clusterSchedulerConfigSummaries.push_back(value); return *this; }
    inline ListClusterSchedulerConfigsResult& AddClusterSchedulerConfigSummaries(ClusterSchedulerConfigSummary&& value) { m_clusterSchedulerConfigSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the previous response was truncated, you will receive this token. Use it
     * in your next request to receive the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListClusterSchedulerConfigsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListClusterSchedulerConfigsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListClusterSchedulerConfigsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListClusterSchedulerConfigsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListClusterSchedulerConfigsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListClusterSchedulerConfigsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ClusterSchedulerConfigSummary> m_clusterSchedulerConfigSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
