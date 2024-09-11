/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/DescribeClusterSummary.h>
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
   * Placeholder documentation for ListClustersResponse<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListClustersResponse">AWS
   * API Reference</a></p>
   */
  class ListClustersSdkResult
  {
  public:
    AWS_MEDIALIVE_API ListClustersSdkResult();
    AWS_MEDIALIVE_API ListClustersSdkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API ListClustersSdkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * A list of the Clusters that exist in your AWS account.
     */
    inline const Aws::Vector<DescribeClusterSummary>& GetClusters() const{ return m_clusters; }
    inline void SetClusters(const Aws::Vector<DescribeClusterSummary>& value) { m_clusters = value; }
    inline void SetClusters(Aws::Vector<DescribeClusterSummary>&& value) { m_clusters = std::move(value); }
    inline ListClustersSdkResult& WithClusters(const Aws::Vector<DescribeClusterSummary>& value) { SetClusters(value); return *this;}
    inline ListClustersSdkResult& WithClusters(Aws::Vector<DescribeClusterSummary>&& value) { SetClusters(std::move(value)); return *this;}
    inline ListClustersSdkResult& AddClusters(const DescribeClusterSummary& value) { m_clusters.push_back(value); return *this; }
    inline ListClustersSdkResult& AddClusters(DescribeClusterSummary&& value) { m_clusters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * Token for the next result.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListClustersSdkResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListClustersSdkResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListClustersSdkResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListClustersSdkResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListClustersSdkResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListClustersSdkResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<DescribeClusterSummary> m_clusters;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
