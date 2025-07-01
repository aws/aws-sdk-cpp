/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/odb/model/CloudAutonomousVmClusterSummary.h>
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
  class ListCloudAutonomousVmClustersResult
  {
  public:
    AWS_ODB_API ListCloudAutonomousVmClustersResult() = default;
    AWS_ODB_API ListCloudAutonomousVmClustersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ODB_API ListCloudAutonomousVmClustersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The pagination token to continue listing from.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCloudAutonomousVmClustersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of Autonomous VM clusters in the specified Cloud Exadata
     * Infrastructure.</p>
     */
    inline const Aws::Vector<CloudAutonomousVmClusterSummary>& GetCloudAutonomousVmClusters() const { return m_cloudAutonomousVmClusters; }
    template<typename CloudAutonomousVmClustersT = Aws::Vector<CloudAutonomousVmClusterSummary>>
    void SetCloudAutonomousVmClusters(CloudAutonomousVmClustersT&& value) { m_cloudAutonomousVmClustersHasBeenSet = true; m_cloudAutonomousVmClusters = std::forward<CloudAutonomousVmClustersT>(value); }
    template<typename CloudAutonomousVmClustersT = Aws::Vector<CloudAutonomousVmClusterSummary>>
    ListCloudAutonomousVmClustersResult& WithCloudAutonomousVmClusters(CloudAutonomousVmClustersT&& value) { SetCloudAutonomousVmClusters(std::forward<CloudAutonomousVmClustersT>(value)); return *this;}
    template<typename CloudAutonomousVmClustersT = CloudAutonomousVmClusterSummary>
    ListCloudAutonomousVmClustersResult& AddCloudAutonomousVmClusters(CloudAutonomousVmClustersT&& value) { m_cloudAutonomousVmClustersHasBeenSet = true; m_cloudAutonomousVmClusters.emplace_back(std::forward<CloudAutonomousVmClustersT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCloudAutonomousVmClustersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<CloudAutonomousVmClusterSummary> m_cloudAutonomousVmClusters;
    bool m_cloudAutonomousVmClustersHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace odb
} // namespace Aws
