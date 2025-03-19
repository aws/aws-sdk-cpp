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
    AWS_SNOWBALL_API DescribeClusterResult() = default;
    AWS_SNOWBALL_API DescribeClusterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SNOWBALL_API DescribeClusterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about a specific cluster, including shipping information, cluster
     * status, and other important metadata.</p>
     */
    inline const ClusterMetadata& GetClusterMetadata() const { return m_clusterMetadata; }
    template<typename ClusterMetadataT = ClusterMetadata>
    void SetClusterMetadata(ClusterMetadataT&& value) { m_clusterMetadataHasBeenSet = true; m_clusterMetadata = std::forward<ClusterMetadataT>(value); }
    template<typename ClusterMetadataT = ClusterMetadata>
    DescribeClusterResult& WithClusterMetadata(ClusterMetadataT&& value) { SetClusterMetadata(std::forward<ClusterMetadataT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeClusterResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ClusterMetadata m_clusterMetadata;
    bool m_clusterMetadataHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
