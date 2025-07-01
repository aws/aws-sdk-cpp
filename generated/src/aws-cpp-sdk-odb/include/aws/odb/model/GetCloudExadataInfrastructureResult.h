/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/CloudExadataInfrastructure.h>
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
  class GetCloudExadataInfrastructureResult
  {
  public:
    AWS_ODB_API GetCloudExadataInfrastructureResult() = default;
    AWS_ODB_API GetCloudExadataInfrastructureResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ODB_API GetCloudExadataInfrastructureResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Exadata infrastructure.</p>
     */
    inline const CloudExadataInfrastructure& GetCloudExadataInfrastructure() const { return m_cloudExadataInfrastructure; }
    template<typename CloudExadataInfrastructureT = CloudExadataInfrastructure>
    void SetCloudExadataInfrastructure(CloudExadataInfrastructureT&& value) { m_cloudExadataInfrastructureHasBeenSet = true; m_cloudExadataInfrastructure = std::forward<CloudExadataInfrastructureT>(value); }
    template<typename CloudExadataInfrastructureT = CloudExadataInfrastructure>
    GetCloudExadataInfrastructureResult& WithCloudExadataInfrastructure(CloudExadataInfrastructureT&& value) { SetCloudExadataInfrastructure(std::forward<CloudExadataInfrastructureT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCloudExadataInfrastructureResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    CloudExadataInfrastructure m_cloudExadataInfrastructure;
    bool m_cloudExadataInfrastructureHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace odb
} // namespace Aws
