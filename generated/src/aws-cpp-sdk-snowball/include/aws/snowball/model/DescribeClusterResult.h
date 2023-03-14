/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/snowball/model/ClusterMetadata.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Snowball
{
namespace Model
{
  class DescribeClusterResult
  {
  public:
    AWS_SNOWBALL_API DescribeClusterResult();
    AWS_SNOWBALL_API DescribeClusterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SNOWBALL_API DescribeClusterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about a specific cluster, including shipping information, cluster
     * status, and other important metadata.</p>
     */
    inline const ClusterMetadata& GetClusterMetadata() const{ return m_clusterMetadata; }

    /**
     * <p>Information about a specific cluster, including shipping information, cluster
     * status, and other important metadata.</p>
     */
    inline void SetClusterMetadata(const ClusterMetadata& value) { m_clusterMetadata = value; }

    /**
     * <p>Information about a specific cluster, including shipping information, cluster
     * status, and other important metadata.</p>
     */
    inline void SetClusterMetadata(ClusterMetadata&& value) { m_clusterMetadata = std::move(value); }

    /**
     * <p>Information about a specific cluster, including shipping information, cluster
     * status, and other important metadata.</p>
     */
    inline DescribeClusterResult& WithClusterMetadata(const ClusterMetadata& value) { SetClusterMetadata(value); return *this;}

    /**
     * <p>Information about a specific cluster, including shipping information, cluster
     * status, and other important metadata.</p>
     */
    inline DescribeClusterResult& WithClusterMetadata(ClusterMetadata&& value) { SetClusterMetadata(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeClusterResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeClusterResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeClusterResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ClusterMetadata m_clusterMetadata;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
