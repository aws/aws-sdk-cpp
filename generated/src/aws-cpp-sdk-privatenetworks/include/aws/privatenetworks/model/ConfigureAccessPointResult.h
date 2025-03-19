/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
#include <aws/privatenetworks/model/NetworkResource.h>
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
namespace PrivateNetworks
{
namespace Model
{
  class ConfigureAccessPointResult
  {
  public:
    AWS_PRIVATENETWORKS_API ConfigureAccessPointResult() = default;
    AWS_PRIVATENETWORKS_API ConfigureAccessPointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PRIVATENETWORKS_API ConfigureAccessPointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the network resource.</p>
     */
    inline const NetworkResource& GetAccessPoint() const { return m_accessPoint; }
    template<typename AccessPointT = NetworkResource>
    void SetAccessPoint(AccessPointT&& value) { m_accessPointHasBeenSet = true; m_accessPoint = std::forward<AccessPointT>(value); }
    template<typename AccessPointT = NetworkResource>
    ConfigureAccessPointResult& WithAccessPoint(AccessPointT&& value) { SetAccessPoint(std::forward<AccessPointT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ConfigureAccessPointResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    NetworkResource m_accessPoint;
    bool m_accessPointHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
