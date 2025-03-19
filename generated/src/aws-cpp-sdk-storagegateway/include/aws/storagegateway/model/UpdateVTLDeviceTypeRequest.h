/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/StorageGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

  /**
   */
  class UpdateVTLDeviceTypeRequest : public StorageGatewayRequest
  {
  public:
    AWS_STORAGEGATEWAY_API UpdateVTLDeviceTypeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateVTLDeviceType"; }

    AWS_STORAGEGATEWAY_API Aws::String SerializePayload() const override;

    AWS_STORAGEGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the medium changer you want to select.</p>
     */
    inline const Aws::String& GetVTLDeviceARN() const { return m_vTLDeviceARN; }
    inline bool VTLDeviceARNHasBeenSet() const { return m_vTLDeviceARNHasBeenSet; }
    template<typename VTLDeviceARNT = Aws::String>
    void SetVTLDeviceARN(VTLDeviceARNT&& value) { m_vTLDeviceARNHasBeenSet = true; m_vTLDeviceARN = std::forward<VTLDeviceARNT>(value); }
    template<typename VTLDeviceARNT = Aws::String>
    UpdateVTLDeviceTypeRequest& WithVTLDeviceARN(VTLDeviceARNT&& value) { SetVTLDeviceARN(std::forward<VTLDeviceARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of medium changer you want to select.</p> <p>Valid Values:
     * <code>STK-L700</code> | <code>AWS-Gateway-VTL</code> |
     * <code>IBM-03584L32-0402</code> </p>
     */
    inline const Aws::String& GetDeviceType() const { return m_deviceType; }
    inline bool DeviceTypeHasBeenSet() const { return m_deviceTypeHasBeenSet; }
    template<typename DeviceTypeT = Aws::String>
    void SetDeviceType(DeviceTypeT&& value) { m_deviceTypeHasBeenSet = true; m_deviceType = std::forward<DeviceTypeT>(value); }
    template<typename DeviceTypeT = Aws::String>
    UpdateVTLDeviceTypeRequest& WithDeviceType(DeviceTypeT&& value) { SetDeviceType(std::forward<DeviceTypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_vTLDeviceARN;
    bool m_vTLDeviceARNHasBeenSet = false;

    Aws::String m_deviceType;
    bool m_deviceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
