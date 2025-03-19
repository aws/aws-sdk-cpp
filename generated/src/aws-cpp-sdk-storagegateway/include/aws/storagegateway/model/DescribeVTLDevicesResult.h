/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/storagegateway/model/VTLDevice.h>
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
  /**
   * <p>DescribeVTLDevicesOutput</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DescribeVTLDevicesOutput">AWS
   * API Reference</a></p>
   */
  class DescribeVTLDevicesResult
  {
  public:
    AWS_STORAGEGATEWAY_API DescribeVTLDevicesResult() = default;
    AWS_STORAGEGATEWAY_API DescribeVTLDevicesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API DescribeVTLDevicesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetGatewayARN() const { return m_gatewayARN; }
    template<typename GatewayARNT = Aws::String>
    void SetGatewayARN(GatewayARNT&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::forward<GatewayARNT>(value); }
    template<typename GatewayARNT = Aws::String>
    DescribeVTLDevicesResult& WithGatewayARN(GatewayARNT&& value) { SetGatewayARN(std::forward<GatewayARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of VTL device objects composed of the Amazon Resource Name (ARN) of
     * the VTL devices.</p>
     */
    inline const Aws::Vector<VTLDevice>& GetVTLDevices() const { return m_vTLDevices; }
    template<typename VTLDevicesT = Aws::Vector<VTLDevice>>
    void SetVTLDevices(VTLDevicesT&& value) { m_vTLDevicesHasBeenSet = true; m_vTLDevices = std::forward<VTLDevicesT>(value); }
    template<typename VTLDevicesT = Aws::Vector<VTLDevice>>
    DescribeVTLDevicesResult& WithVTLDevices(VTLDevicesT&& value) { SetVTLDevices(std::forward<VTLDevicesT>(value)); return *this;}
    template<typename VTLDevicesT = VTLDevice>
    DescribeVTLDevicesResult& AddVTLDevices(VTLDevicesT&& value) { m_vTLDevicesHasBeenSet = true; m_vTLDevices.emplace_back(std::forward<VTLDevicesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An opaque string that indicates the position at which the VTL devices that
     * were fetched for description ended. Use the marker in your next request to fetch
     * the next set of VTL devices in the list. If there are no more VTL devices to
     * describe, this field does not appear in the response.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeVTLDevicesResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeVTLDevicesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet = false;

    Aws::Vector<VTLDevice> m_vTLDevices;
    bool m_vTLDevicesHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
