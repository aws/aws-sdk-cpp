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
    AWS_STORAGEGATEWAY_API VTLDevice() = default;
    AWS_STORAGEGATEWAY_API VTLDevice(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API VTLDevice& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the unique Amazon Resource Name (ARN) of the device (tape drive or
     * media changer).</p>
     */
    inline const Aws::String& GetVTLDeviceARN() const { return m_vTLDeviceARN; }
    inline bool VTLDeviceARNHasBeenSet() const { return m_vTLDeviceARNHasBeenSet; }
    template<typename VTLDeviceARNT = Aws::String>
    void SetVTLDeviceARN(VTLDeviceARNT&& value) { m_vTLDeviceARNHasBeenSet = true; m_vTLDeviceARN = std::forward<VTLDeviceARNT>(value); }
    template<typename VTLDeviceARNT = Aws::String>
    VTLDevice& WithVTLDeviceARN(VTLDeviceARNT&& value) { SetVTLDeviceARN(std::forward<VTLDeviceARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the type of device that the VTL device emulates.</p>
     */
    inline const Aws::String& GetVTLDeviceType() const { return m_vTLDeviceType; }
    inline bool VTLDeviceTypeHasBeenSet() const { return m_vTLDeviceTypeHasBeenSet; }
    template<typename VTLDeviceTypeT = Aws::String>
    void SetVTLDeviceType(VTLDeviceTypeT&& value) { m_vTLDeviceTypeHasBeenSet = true; m_vTLDeviceType = std::forward<VTLDeviceTypeT>(value); }
    template<typename VTLDeviceTypeT = Aws::String>
    VTLDevice& WithVTLDeviceType(VTLDeviceTypeT&& value) { SetVTLDeviceType(std::forward<VTLDeviceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the vendor of the device that the VTL device object emulates.</p>
     */
    inline const Aws::String& GetVTLDeviceVendor() const { return m_vTLDeviceVendor; }
    inline bool VTLDeviceVendorHasBeenSet() const { return m_vTLDeviceVendorHasBeenSet; }
    template<typename VTLDeviceVendorT = Aws::String>
    void SetVTLDeviceVendor(VTLDeviceVendorT&& value) { m_vTLDeviceVendorHasBeenSet = true; m_vTLDeviceVendor = std::forward<VTLDeviceVendorT>(value); }
    template<typename VTLDeviceVendorT = Aws::String>
    VTLDevice& WithVTLDeviceVendor(VTLDeviceVendorT&& value) { SetVTLDeviceVendor(std::forward<VTLDeviceVendorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the model number of device that the VTL device emulates.</p>
     */
    inline const Aws::String& GetVTLDeviceProductIdentifier() const { return m_vTLDeviceProductIdentifier; }
    inline bool VTLDeviceProductIdentifierHasBeenSet() const { return m_vTLDeviceProductIdentifierHasBeenSet; }
    template<typename VTLDeviceProductIdentifierT = Aws::String>
    void SetVTLDeviceProductIdentifier(VTLDeviceProductIdentifierT&& value) { m_vTLDeviceProductIdentifierHasBeenSet = true; m_vTLDeviceProductIdentifier = std::forward<VTLDeviceProductIdentifierT>(value); }
    template<typename VTLDeviceProductIdentifierT = Aws::String>
    VTLDevice& WithVTLDeviceProductIdentifier(VTLDeviceProductIdentifierT&& value) { SetVTLDeviceProductIdentifier(std::forward<VTLDeviceProductIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of iSCSI information about a VTL device.</p>
     */
    inline const DeviceiSCSIAttributes& GetDeviceiSCSIAttributes() const { return m_deviceiSCSIAttributes; }
    inline bool DeviceiSCSIAttributesHasBeenSet() const { return m_deviceiSCSIAttributesHasBeenSet; }
    template<typename DeviceiSCSIAttributesT = DeviceiSCSIAttributes>
    void SetDeviceiSCSIAttributes(DeviceiSCSIAttributesT&& value) { m_deviceiSCSIAttributesHasBeenSet = true; m_deviceiSCSIAttributes = std::forward<DeviceiSCSIAttributesT>(value); }
    template<typename DeviceiSCSIAttributesT = DeviceiSCSIAttributes>
    VTLDevice& WithDeviceiSCSIAttributes(DeviceiSCSIAttributesT&& value) { SetDeviceiSCSIAttributes(std::forward<DeviceiSCSIAttributesT>(value)); return *this;}
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
