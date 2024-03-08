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
    AWS_SAGEMAKER_API ListClusterNodesResult();
    AWS_SAGEMAKER_API ListClusterNodesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListClusterNodesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The next token specified for listing instances in a SageMaker HyperPod
     * cluster.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The next token specified for listing instances in a SageMaker HyperPod
     * cluster.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The next token specified for listing instances in a SageMaker HyperPod
     * cluster.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The next token specified for listing instances in a SageMaker HyperPod
     * cluster.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The next token specified for listing instances in a SageMaker HyperPod
     * cluster.</p>
     */
    inline ListClusterNodesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The next token specified for listing instances in a SageMaker HyperPod
     * cluster.</p>
     */
    inline ListClusterNodesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The next token specified for listing instances in a SageMaker HyperPod
     * cluster.</p>
     */
    inline ListClusterNodesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The summaries of listed instances in a SageMaker HyperPod cluster</p>
     */
    inline const Aws::Vector<ClusterNodeSummary>& GetClusterNodeSummaries() const{ return m_clusterNodeSummaries; }

    /**
     * <p>The summaries of listed instances in a SageMaker HyperPod cluster</p>
     */
    inline void SetClusterNodeSummaries(const Aws::Vector<ClusterNodeSummary>& value) { m_clusterNodeSummaries = value; }

    /**
     * <p>The summaries of listed instances in a SageMaker HyperPod cluster</p>
     */
    inline void SetClusterNodeSummaries(Aws::Vector<ClusterNodeSummary>&& value) { m_clusterNodeSummaries = std::move(value); }

    /**
     * <p>The summaries of listed instances in a SageMaker HyperPod cluster</p>
     */
    inline ListClusterNodesResult& WithClusterNodeSummaries(const Aws::Vector<ClusterNodeSummary>& value) { SetClusterNodeSummaries(value); return *this;}

    /**
     * <p>The summaries of listed instances in a SageMaker HyperPod cluster</p>
     */
    inline ListClusterNodesResult& WithClusterNodeSummaries(Aws::Vector<ClusterNodeSummary>&& value) { SetClusterNodeSummaries(std::move(value)); return *this;}

    /**
     * <p>The summaries of listed instances in a SageMaker HyperPod cluster</p>
     */
    inline ListClusterNodesResult& AddClusterNodeSummaries(const ClusterNodeSummary& value) { m_clusterNodeSummaries.push_back(value); return *this; }

    /**
     * <p>The summaries of listed instances in a SageMaker HyperPod cluster</p>
     */
    inline ListClusterNodesResult& AddClusterNodeSummaries(ClusterNodeSummary&& value) { m_clusterNodeSummaries.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListClusterNodesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListClusterNodesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListClusterNodesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<ClusterNodeSummary> m_clusterNodeSummaries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
