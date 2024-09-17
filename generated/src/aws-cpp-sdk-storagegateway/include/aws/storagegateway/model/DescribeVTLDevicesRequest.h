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
    AWS_STORAGEGATEWAY_API DescribeVTLDevicesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeVTLDevices"; }

    AWS_STORAGEGATEWAY_API Aws::String SerializePayload() const override;

    AWS_STORAGEGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }
    inline bool GatewayARNHasBeenSet() const { return m_gatewayARNHasBeenSet; }
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::move(value); }
    inline void SetGatewayARN(const char* value) { m_gatewayARNHasBeenSet = true; m_gatewayARN.assign(value); }
    inline DescribeVTLDevicesRequest& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}
    inline DescribeVTLDevicesRequest& WithGatewayARN(Aws::String&& value) { SetGatewayARN(std::move(value)); return *this;}
    inline DescribeVTLDevicesRequest& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of strings, where each string represents the Amazon Resource Name
     * (ARN) of a VTL device.</p>  <p>All of the specified VTL devices must be
     * from the same gateway. If no VTL devices are specified, the result will contain
     * all devices on the specified gateway.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetVTLDeviceARNs() const{ return m_vTLDeviceARNs; }
    inline bool VTLDeviceARNsHasBeenSet() const { return m_vTLDeviceARNsHasBeenSet; }
    inline void SetVTLDeviceARNs(const Aws::Vector<Aws::String>& value) { m_vTLDeviceARNsHasBeenSet = true; m_vTLDeviceARNs = value; }
    inline void SetVTLDeviceARNs(Aws::Vector<Aws::String>&& value) { m_vTLDeviceARNsHasBeenSet = true; m_vTLDeviceARNs = std::move(value); }
    inline DescribeVTLDevicesRequest& WithVTLDeviceARNs(const Aws::Vector<Aws::String>& value) { SetVTLDeviceARNs(value); return *this;}
    inline DescribeVTLDevicesRequest& WithVTLDeviceARNs(Aws::Vector<Aws::String>&& value) { SetVTLDeviceARNs(std::move(value)); return *this;}
    inline DescribeVTLDevicesRequest& AddVTLDeviceARNs(const Aws::String& value) { m_vTLDeviceARNsHasBeenSet = true; m_vTLDeviceARNs.push_back(value); return *this; }
    inline DescribeVTLDevicesRequest& AddVTLDeviceARNs(Aws::String&& value) { m_vTLDeviceARNsHasBeenSet = true; m_vTLDeviceARNs.push_back(std::move(value)); return *this; }
    inline DescribeVTLDevicesRequest& AddVTLDeviceARNs(const char* value) { m_vTLDeviceARNsHasBeenSet = true; m_vTLDeviceARNs.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An opaque string that indicates the position at which to begin describing the
     * VTL devices.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }
    inline DescribeVTLDevicesRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline DescribeVTLDevicesRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline DescribeVTLDevicesRequest& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies that the number of VTL devices described be limited to the
     * specified number.</p>
     */
    inline int GetLimit() const{ return m_limit; }
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

    int m_limit;
    bool m_limitHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
