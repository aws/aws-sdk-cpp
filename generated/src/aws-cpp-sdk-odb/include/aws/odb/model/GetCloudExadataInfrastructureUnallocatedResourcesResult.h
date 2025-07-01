/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/CloudExadataInfrastructureUnallocatedResources.h>
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
  class GetCloudExadataInfrastructureUnallocatedResourcesResult
  {
  public:
    AWS_ODB_API GetCloudExadataInfrastructureUnallocatedResourcesResult() = default;
    AWS_ODB_API GetCloudExadataInfrastructureUnallocatedResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ODB_API GetCloudExadataInfrastructureUnallocatedResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Details about the unallocated resources in the specified Cloud Exadata
     * infrastructure.</p>
     */
    inline const CloudExadataInfrastructureUnallocatedResources& GetCloudExadataInfrastructureUnallocatedResources() const { return m_cloudExadataInfrastructureUnallocatedResources; }
    template<typename CloudExadataInfrastructureUnallocatedResourcesT = CloudExadataInfrastructureUnallocatedResources>
    void SetCloudExadataInfrastructureUnallocatedResources(CloudExadataInfrastructureUnallocatedResourcesT&& value) { m_cloudExadataInfrastructureUnallocatedResourcesHasBeenSet = true; m_cloudExadataInfrastructureUnallocatedResources = std::forward<CloudExadataInfrastructureUnallocatedResourcesT>(value); }
    template<typename CloudExadataInfrastructureUnallocatedResourcesT = CloudExadataInfrastructureUnallocatedResources>
    GetCloudExadataInfrastructureUnallocatedResourcesResult& WithCloudExadataInfrastructureUnallocatedResources(CloudExadataInfrastructureUnallocatedResourcesT&& value) { SetCloudExadataInfrastructureUnallocatedResources(std::forward<CloudExadataInfrastructureUnallocatedResourcesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCloudExadataInfrastructureUnallocatedResourcesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    CloudExadataInfrastructureUnallocatedResources m_cloudExadataInfrastructureUnallocatedResources;
    bool m_cloudExadataInfrastructureUnallocatedResourcesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace odb
} // namespace Aws
