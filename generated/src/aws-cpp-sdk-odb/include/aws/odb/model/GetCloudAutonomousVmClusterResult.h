/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/CloudAutonomousVmCluster.h>
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
namespace odb
{
namespace Model
{
  class GetCloudAutonomousVmClusterResult
  {
  public:
    AWS_ODB_API GetCloudAutonomousVmClusterResult() = default;
    AWS_ODB_API GetCloudAutonomousVmClusterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ODB_API GetCloudAutonomousVmClusterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The details of the requested Autonomous VM cluster.</p>
     */
    inline const CloudAutonomousVmCluster& GetCloudAutonomousVmCluster() const { return m_cloudAutonomousVmCluster; }
    template<typename CloudAutonomousVmClusterT = CloudAutonomousVmCluster>
    void SetCloudAutonomousVmCluster(CloudAutonomousVmClusterT&& value) { m_cloudAutonomousVmClusterHasBeenSet = true; m_cloudAutonomousVmCluster = std::forward<CloudAutonomousVmClusterT>(value); }
    template<typename CloudAutonomousVmClusterT = CloudAutonomousVmCluster>
    GetCloudAutonomousVmClusterResult& WithCloudAutonomousVmCluster(CloudAutonomousVmClusterT&& value) { SetCloudAutonomousVmCluster(std::forward<CloudAutonomousVmClusterT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCloudAutonomousVmClusterResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    CloudAutonomousVmCluster m_cloudAutonomousVmCluster;
    bool m_cloudAutonomousVmClusterHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace odb
} // namespace Aws
