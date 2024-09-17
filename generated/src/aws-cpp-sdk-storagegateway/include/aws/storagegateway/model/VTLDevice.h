/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/storagegateway/model/DeviceiSCSIAttributes.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>Represents a device object associated with a tape gateway.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/VTLDevice">AWS
   * API Reference</a></p>
   */
  class VTLDevice
  {
  public:
    AWS_STORAGEGATEWAY_API VTLDevice();
    AWS_STORAGEGATEWAY_API VTLDevice(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API VTLDevice& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the unique Amazon Resource Name (ARN) of the device (tape drive or
     * media changer).</p>
     */
    inline const Aws::String& GetVTLDeviceARN() const{ return m_vTLDeviceARN; }
    inline bool VTLDeviceARNHasBeenSet() const { return m_vTLDeviceARNHasBeenSet; }
    inline void SetVTLDeviceARN(const Aws::String& value) { m_vTLDeviceARNHasBeenSet = true; m_vTLDeviceARN = value; }
    inline void SetVTLDeviceARN(Aws::String&& value) { m_vTLDeviceARNHasBeenSet = true; m_vTLDeviceARN = std::move(value); }
    inline void SetVTLDeviceARN(const char* value) { m_vTLDeviceARNHasBeenSet = true; m_vTLDeviceARN.assign(value); }
    inline VTLDevice& WithVTLDeviceARN(const Aws::String& value) { SetVTLDeviceARN(value); return *this;}
    inline VTLDevice& WithVTLDeviceARN(Aws::String&& value) { SetVTLDeviceARN(std::move(value)); return *this;}
    inline VTLDevice& WithVTLDeviceARN(const char* value) { SetVTLDeviceARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the type of device that the VTL device emulates.</p>
     */
    inline const Aws::String& GetVTLDeviceType() const{ return m_vTLDeviceType; }
    inline bool VTLDeviceTypeHasBeenSet() const { return m_vTLDeviceTypeHasBeenSet; }
    inline void SetVTLDeviceType(const Aws::String& value) { m_vTLDeviceTypeHasBeenSet = true; m_vTLDeviceType = value; }
    inline void SetVTLDeviceType(Aws::String&& value) { m_vTLDeviceTypeHasBeenSet = true; m_vTLDeviceType = std::move(value); }
    inline void SetVTLDeviceType(const char* value) { m_vTLDeviceTypeHasBeenSet = true; m_vTLDeviceType.assign(value); }
    inline VTLDevice& WithVTLDeviceType(const Aws::String& value) { SetVTLDeviceType(value); return *this;}
    inline VTLDevice& WithVTLDeviceType(Aws::String&& value) { SetVTLDeviceType(std::move(value)); return *this;}
    inline VTLDevice& WithVTLDeviceType(const char* value) { SetVTLDeviceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the vendor of the device that the VTL device object emulates.</p>
     */
    inline const Aws::String& GetVTLDeviceVendor() const{ return m_vTLDeviceVendor; }
    inline bool VTLDeviceVendorHasBeenSet() const { return m_vTLDeviceVendorHasBeenSet; }
    inline void SetVTLDeviceVendor(const Aws::String& value) { m_vTLDeviceVendorHasBeenSet = true; m_vTLDeviceVendor = value; }
    inline void SetVTLDeviceVendor(Aws::String&& value) { m_vTLDeviceVendorHasBeenSet = true; m_vTLDeviceVendor = std::move(value); }
    inline void SetVTLDeviceVendor(const char* value) { m_vTLDeviceVendorHasBeenSet = true; m_vTLDeviceVendor.assign(value); }
    inline VTLDevice& WithVTLDeviceVendor(const Aws::String& value) { SetVTLDeviceVendor(value); return *this;}
    inline VTLDevice& WithVTLDeviceVendor(Aws::String&& value) { SetVTLDeviceVendor(std::move(value)); return *this;}
    inline VTLDevice& WithVTLDeviceVendor(const char* value) { SetVTLDeviceVendor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the model number of device that the VTL device emulates.</p>
     */
    inline const Aws::String& GetVTLDeviceProductIdentifier() const{ return m_vTLDeviceProductIdentifier; }
    inline bool VTLDeviceProductIdentifierHasBeenSet() const { return m_vTLDeviceProductIdentifierHasBeenSet; }
    inline void SetVTLDeviceProductIdentifier(const Aws::String& value) { m_vTLDeviceProductIdentifierHasBeenSet = true; m_vTLDeviceProductIdentifier = value; }
    inline void SetVTLDeviceProductIdentifier(Aws::String&& value) { m_vTLDeviceProductIdentifierHasBeenSet = true; m_vTLDeviceProductIdentifier = std::move(value); }
    inline void SetVTLDeviceProductIdentifier(const char* value) { m_vTLDeviceProductIdentifierHasBeenSet = true; m_vTLDeviceProductIdentifier.assign(value); }
    inline VTLDevice& WithVTLDeviceProductIdentifier(const Aws::String& value) { SetVTLDeviceProductIdentifier(value); return *this;}
    inline VTLDevice& WithVTLDeviceProductIdentifier(Aws::String&& value) { SetVTLDeviceProductIdentifier(std::move(value)); return *this;}
    inline VTLDevice& WithVTLDeviceProductIdentifier(const char* value) { SetVTLDeviceProductIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of iSCSI information about a VTL device.</p>
     */
    inline const DeviceiSCSIAttributes& GetDeviceiSCSIAttributes() const{ return m_deviceiSCSIAttributes; }
    inline bool DeviceiSCSIAttributesHasBeenSet() const { return m_deviceiSCSIAttributesHasBeenSet; }
    inline void SetDeviceiSCSIAttributes(const DeviceiSCSIAttributes& value) { m_deviceiSCSIAttributesHasBeenSet = true; m_deviceiSCSIAttributes = value; }
    inline void SetDeviceiSCSIAttributes(DeviceiSCSIAttributes&& value) { m_deviceiSCSIAttributesHasBeenSet = true; m_deviceiSCSIAttributes = std::move(value); }
    inline VTLDevice& WithDeviceiSCSIAttributes(const DeviceiSCSIAttributes& value) { SetDeviceiSCSIAttributes(value); return *this;}
    inline VTLDevice& WithDeviceiSCSIAttributes(DeviceiSCSIAttributes&& value) { SetDeviceiSCSIAttributes(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_vTLDeviceARN;
    bool m_vTLDeviceARNHasBeenSet = false;

    Aws::String m_vTLDeviceType;
    bool m_vTLDeviceTypeHasBeenSet = false;

    Aws::String m_vTLDeviceVendor;
    bool m_vTLDeviceVendorHasBeenSet = false;

    Aws::String m_vTLDeviceProductIdentifier;
    bool m_vTLDeviceProductIdentifierHasBeenSet = false;

    DeviceiSCSIAttributes m_deviceiSCSIAttributes;
    bool m_deviceiSCSIAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
