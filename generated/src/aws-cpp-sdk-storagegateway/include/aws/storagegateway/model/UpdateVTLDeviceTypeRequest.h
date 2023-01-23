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
    AWS_STORAGEGATEWAY_API UpdateVTLDeviceTypeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateVTLDeviceType"; }

    AWS_STORAGEGATEWAY_API Aws::String SerializePayload() const override;

    AWS_STORAGEGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the medium changer you want to select.</p>
     */
    inline const Aws::String& GetVTLDeviceARN() const{ return m_vTLDeviceARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the medium changer you want to select.</p>
     */
    inline bool VTLDeviceARNHasBeenSet() const { return m_vTLDeviceARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the medium changer you want to select.</p>
     */
    inline void SetVTLDeviceARN(const Aws::String& value) { m_vTLDeviceARNHasBeenSet = true; m_vTLDeviceARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the medium changer you want to select.</p>
     */
    inline void SetVTLDeviceARN(Aws::String&& value) { m_vTLDeviceARNHasBeenSet = true; m_vTLDeviceARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the medium changer you want to select.</p>
     */
    inline void SetVTLDeviceARN(const char* value) { m_vTLDeviceARNHasBeenSet = true; m_vTLDeviceARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the medium changer you want to select.</p>
     */
    inline UpdateVTLDeviceTypeRequest& WithVTLDeviceARN(const Aws::String& value) { SetVTLDeviceARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the medium changer you want to select.</p>
     */
    inline UpdateVTLDeviceTypeRequest& WithVTLDeviceARN(Aws::String&& value) { SetVTLDeviceARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the medium changer you want to select.</p>
     */
    inline UpdateVTLDeviceTypeRequest& WithVTLDeviceARN(const char* value) { SetVTLDeviceARN(value); return *this;}


    /**
     * <p>The type of medium changer you want to select.</p> <p>Valid Values:
     * <code>STK-L700</code> | <code>AWS-Gateway-VTL</code> |
     * <code>IBM-03584L32-0402</code> </p>
     */
    inline const Aws::String& GetDeviceType() const{ return m_deviceType; }

    /**
     * <p>The type of medium changer you want to select.</p> <p>Valid Values:
     * <code>STK-L700</code> | <code>AWS-Gateway-VTL</code> |
     * <code>IBM-03584L32-0402</code> </p>
     */
    inline bool DeviceTypeHasBeenSet() const { return m_deviceTypeHasBeenSet; }

    /**
     * <p>The type of medium changer you want to select.</p> <p>Valid Values:
     * <code>STK-L700</code> | <code>AWS-Gateway-VTL</code> |
     * <code>IBM-03584L32-0402</code> </p>
     */
    inline void SetDeviceType(const Aws::String& value) { m_deviceTypeHasBeenSet = true; m_deviceType = value; }

    /**
     * <p>The type of medium changer you want to select.</p> <p>Valid Values:
     * <code>STK-L700</code> | <code>AWS-Gateway-VTL</code> |
     * <code>IBM-03584L32-0402</code> </p>
     */
    inline void SetDeviceType(Aws::String&& value) { m_deviceTypeHasBeenSet = true; m_deviceType = std::move(value); }

    /**
     * <p>The type of medium changer you want to select.</p> <p>Valid Values:
     * <code>STK-L700</code> | <code>AWS-Gateway-VTL</code> |
     * <code>IBM-03584L32-0402</code> </p>
     */
    inline void SetDeviceType(const char* value) { m_deviceTypeHasBeenSet = true; m_deviceType.assign(value); }

    /**
     * <p>The type of medium changer you want to select.</p> <p>Valid Values:
     * <code>STK-L700</code> | <code>AWS-Gateway-VTL</code> |
     * <code>IBM-03584L32-0402</code> </p>
     */
    inline UpdateVTLDeviceTypeRequest& WithDeviceType(const Aws::String& value) { SetDeviceType(value); return *this;}

    /**
     * <p>The type of medium changer you want to select.</p> <p>Valid Values:
     * <code>STK-L700</code> | <code>AWS-Gateway-VTL</code> |
     * <code>IBM-03584L32-0402</code> </p>
     */
    inline UpdateVTLDeviceTypeRequest& WithDeviceType(Aws::String&& value) { SetDeviceType(std::move(value)); return *this;}

    /**
     * <p>The type of medium changer you want to select.</p> <p>Valid Values:
     * <code>STK-L700</code> | <code>AWS-Gateway-VTL</code> |
     * <code>IBM-03584L32-0402</code> </p>
     */
    inline UpdateVTLDeviceTypeRequest& WithDeviceType(const char* value) { SetDeviceType(value); return *this;}

  private:

    Aws::String m_vTLDeviceARN;
    bool m_vTLDeviceARNHasBeenSet = false;

    Aws::String m_deviceType;
    bool m_deviceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
