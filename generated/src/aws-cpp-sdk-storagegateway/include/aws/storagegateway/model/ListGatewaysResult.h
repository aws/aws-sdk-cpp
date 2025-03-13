/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/storagegateway/model/GatewayInfo.h>
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
namespace StorageGateway
{
namespace Model
{
  class ListGatewaysResult
  {
  public:
    AWS_STORAGEGATEWAY_API ListGatewaysResult() = default;
    AWS_STORAGEGATEWAY_API ListGatewaysResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API ListGatewaysResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <a>GatewayInfo</a> objects.</p>
     */
    inline const Aws::Vector<GatewayInfo>& GetGateways() const { return m_gateways; }
    template<typename GatewaysT = Aws::Vector<GatewayInfo>>
    void SetGateways(GatewaysT&& value) { m_gatewaysHasBeenSet = true; m_gateways = std::forward<GatewaysT>(value); }
    template<typename GatewaysT = Aws::Vector<GatewayInfo>>
    ListGatewaysResult& WithGateways(GatewaysT&& value) { SetGateways(std::forward<GatewaysT>(value)); return *this;}
    template<typename GatewaysT = GatewayInfo>
    ListGatewaysResult& AddGateways(GatewaysT&& value) { m_gatewaysHasBeenSet = true; m_gateways.emplace_back(std::forward<GatewaysT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Use the marker in your next request to fetch the next set of gateways in the
     * list. If there are no more gateways to list, this field does not appear in the
     * response.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    ListGatewaysResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListGatewaysResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<GatewayInfo> m_gateways;
    bool m_gatewaysHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
