/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/StorageGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>DescribeVTLDevicesInput</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DescribeVTLDevicesInput">AWS
   * API Reference</a></p>
   */
  class DescribeVTLDevicesRequest : public StorageGatewayRequest
  {
  public:
    AWS_STORAGEGATEWAY_API DescribeVTLDevicesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeVTLDevices"; }

    AWS_STORAGEGATEWAY_API Aws::String SerializePayload() const override;

    AWS_STORAGEGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    
    inline const Aws::String& GetGatewayARN() const { return m_gatewayARN; }
    inline bool GatewayARNHasBeenSet() const { return m_gatewayARNHasBeenSet; }
    template<typename GatewayARNT = Aws::String>
    void SetGatewayARN(GatewayARNT&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::forward<GatewayARNT>(value); }
    template<typename GatewayARNT = Aws::String>
    DescribeVTLDevicesRequest& WithGatewayARN(GatewayARNT&& value) { SetGatewayARN(std::forward<GatewayARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of strings, where each string represents the Amazon Resource Name
     * (ARN) of a VTL device.</p>  <p>All of the specified VTL devices must be
     * from the same gateway. If no VTL devices are specified, the result will contain
     * all devices on the specified gateway.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetVTLDeviceARNs() const { return m_vTLDeviceARNs; }
    inline bool VTLDeviceARNsHasBeenSet() const { return m_vTLDeviceARNsHasBeenSet; }
    template<typename VTLDeviceARNsT = Aws::Vector<Aws::String>>
    void SetVTLDeviceARNs(VTLDeviceARNsT&& value) { m_vTLDeviceARNsHasBeenSet = true; m_vTLDeviceARNs = std::forward<VTLDeviceARNsT>(value); }
    template<typename VTLDeviceARNsT = Aws::Vector<Aws::String>>
    DescribeVTLDevicesRequest& WithVTLDeviceARNs(VTLDeviceARNsT&& value) { SetVTLDeviceARNs(std::forward<VTLDeviceARNsT>(value)); return *this;}
    template<typename VTLDeviceARNsT = Aws::String>
    DescribeVTLDevicesRequest& AddVTLDeviceARNs(VTLDeviceARNsT&& value) { m_vTLDeviceARNsHasBeenSet = true; m_vTLDeviceARNs.emplace_back(std::forward<VTLDeviceARNsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An opaque string that indicates the position at which to begin describing the
     * VTL devices.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeVTLDevicesRequest& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies that the number of VTL devices described be limited to the
     * specified number.</p>
     */
    inline int GetLimit() const { return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline DescribeVTLDevicesRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}
  private:

    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet = false;

    Aws::Vector<Aws::String> m_vTLDeviceARNs;
    bool m_vTLDeviceARNsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    int m_limit{0};
    bool m_limitHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
