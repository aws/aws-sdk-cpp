/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/odb/model/CloudVmClusterSummary.h>
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
namespace odb
{
namespace Model
{
  class ListCloudVmClustersResult
  {
  public:
    AWS_ODB_API ListCloudVmClustersResult() = default;
    AWS_ODB_API ListCloudVmClustersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ODB_API ListCloudVmClustersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCloudVmClustersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of VM clusters along with their properties.</p>
     */
    inline const Aws::Vector<CloudVmClusterSummary>& GetCloudVmClusters() const { return m_cloudVmClusters; }
    template<typename CloudVmClustersT = Aws::Vector<CloudVmClusterSummary>>
    void SetCloudVmClusters(CloudVmClustersT&& value) { m_cloudVmClustersHasBeenSet = true; m_cloudVmClusters = std::forward<CloudVmClustersT>(value); }
    template<typename CloudVmClustersT = Aws::Vector<CloudVmClusterSummary>>
    ListCloudVmClustersResult& WithCloudVmClusters(CloudVmClustersT&& value) { SetCloudVmClusters(std::forward<CloudVmClustersT>(value)); return *this;}
    template<typename CloudVmClustersT = CloudVmClusterSummary>
    ListCloudVmClustersResult& AddCloudVmClusters(CloudVmClustersT&& value) { m_cloudVmClustersHasBeenSet = true; m_cloudVmClusters.emplace_back(std::forward<CloudVmClustersT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCloudVmClustersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<CloudVmClusterSummary> m_cloudVmClusters;
    bool m_cloudVmClustersHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace odb
} // namespace Aws
