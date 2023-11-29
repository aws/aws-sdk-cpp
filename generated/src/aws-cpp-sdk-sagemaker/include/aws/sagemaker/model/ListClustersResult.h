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
    AWS_SAGEMAKER_API ListClustersResult();
    AWS_SAGEMAKER_API ListClustersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListClustersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If the result of the previous <code>ListClusters</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of clusters, use the token in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the result of the previous <code>ListClusters</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of clusters, use the token in the next request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the result of the previous <code>ListClusters</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of clusters, use the token in the next request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the result of the previous <code>ListClusters</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of clusters, use the token in the next request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the result of the previous <code>ListClusters</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of clusters, use the token in the next request.</p>
     */
    inline ListClustersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the result of the previous <code>ListClusters</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of clusters, use the token in the next request.</p>
     */
    inline ListClustersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the result of the previous <code>ListClusters</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of clusters, use the token in the next request.</p>
     */
    inline ListClustersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The summaries of listed SageMaker HyperPod clusters.</p>
     */
    inline const Aws::Vector<ClusterSummary>& GetClusterSummaries() const{ return m_clusterSummaries; }

    /**
     * <p>The summaries of listed SageMaker HyperPod clusters.</p>
     */
    inline void SetClusterSummaries(const Aws::Vector<ClusterSummary>& value) { m_clusterSummaries = value; }

    /**
     * <p>The summaries of listed SageMaker HyperPod clusters.</p>
     */
    inline void SetClusterSummaries(Aws::Vector<ClusterSummary>&& value) { m_clusterSummaries = std::move(value); }

    /**
     * <p>The summaries of listed SageMaker HyperPod clusters.</p>
     */
    inline ListClustersResult& WithClusterSummaries(const Aws::Vector<ClusterSummary>& value) { SetClusterSummaries(value); return *this;}

    /**
     * <p>The summaries of listed SageMaker HyperPod clusters.</p>
     */
    inline ListClustersResult& WithClusterSummaries(Aws::Vector<ClusterSummary>&& value) { SetClusterSummaries(std::move(value)); return *this;}

    /**
     * <p>The summaries of listed SageMaker HyperPod clusters.</p>
     */
    inline ListClustersResult& AddClusterSummaries(const ClusterSummary& value) { m_clusterSummaries.push_back(value); return *this; }

    /**
     * <p>The summaries of listed SageMaker HyperPod clusters.</p>
     */
    inline ListClustersResult& AddClusterSummaries(ClusterSummary&& value) { m_clusterSummaries.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListClustersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListClustersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListClustersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<ClusterSummary> m_clusterSummaries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
