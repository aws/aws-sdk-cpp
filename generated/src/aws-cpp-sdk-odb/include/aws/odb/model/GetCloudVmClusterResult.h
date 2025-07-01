/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/CloudVmCluster.h>
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
  class GetCloudVmClusterResult
  {
  public:
    AWS_ODB_API GetCloudVmClusterResult() = default;
    AWS_ODB_API GetCloudVmClusterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ODB_API GetCloudVmClusterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The VM cluster.</p>
     */
    inline const CloudVmCluster& GetCloudVmCluster() const { return m_cloudVmCluster; }
    template<typename CloudVmClusterT = CloudVmCluster>
    void SetCloudVmCluster(CloudVmClusterT&& value) { m_cloudVmClusterHasBeenSet = true; m_cloudVmCluster = std::forward<CloudVmClusterT>(value); }
    template<typename CloudVmClusterT = CloudVmCluster>
    GetCloudVmClusterResult& WithCloudVmCluster(CloudVmClusterT&& value) { SetCloudVmCluster(std::forward<CloudVmClusterT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCloudVmClusterResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    CloudVmCluster m_cloudVmCluster;
    bool m_cloudVmClusterHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace odb
} // namespace Aws
