/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opsworks/model/EbsBlockDevice.h>
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
namespace OpsWorks
{
namespace Model
{

  /**
   * <p>Describes a block device mapping. This data type maps directly to the Amazon
   * EC2 <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_BlockDeviceMapping.html">BlockDeviceMapping</a>
   * data type. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/BlockDeviceMapping">AWS
   * API Reference</a></p>
   */
  class BlockDeviceMapping
  {
  public:
    AWS_OPSWORKS_API BlockDeviceMapping() = default;
    AWS_OPSWORKS_API BlockDeviceMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API BlockDeviceMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The device name that is exposed to the instance, such as
     * <code>/dev/sdh</code>. For the root device, you can use the explicit device name
     * or you can set this parameter to <code>ROOT_DEVICE</code> and OpsWorks Stacks
     * will provide the correct device name.</p>
     */
    inline const Aws::String& GetDeviceName() const { return m_deviceName; }
    inline bool DeviceNameHasBeenSet() const { return m_deviceNameHasBeenSet; }
    template<typename DeviceNameT = Aws::String>
    void SetDeviceName(DeviceNameT&& value) { m_deviceNameHasBeenSet = true; m_deviceName = std::forward<DeviceNameT>(value); }
    template<typename DeviceNameT = Aws::String>
    BlockDeviceMapping& WithDeviceName(DeviceNameT&& value) { SetDeviceName(std::forward<DeviceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Suppresses the specified device included in the AMI's block device
     * mapping.</p>
     */
    inline const Aws::String& GetNoDevice() const { return m_noDevice; }
    inline bool NoDeviceHasBeenSet() const { return m_noDeviceHasBeenSet; }
    template<typename NoDeviceT = Aws::String>
    void SetNoDevice(NoDeviceT&& value) { m_noDeviceHasBeenSet = true; m_noDevice = std::forward<NoDeviceT>(value); }
    template<typename NoDeviceT = Aws::String>
    BlockDeviceMapping& WithNoDevice(NoDeviceT&& value) { SetNoDevice(std::forward<NoDeviceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The virtual device name. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_BlockDeviceMapping.html">BlockDeviceMapping</a>.</p>
     */
    inline const Aws::String& GetVirtualName() const { return m_virtualName; }
    inline bool VirtualNameHasBeenSet() const { return m_virtualNameHasBeenSet; }
    template<typename VirtualNameT = Aws::String>
    void SetVirtualName(VirtualNameT&& value) { m_virtualNameHasBeenSet = true; m_virtualName = std::forward<VirtualNameT>(value); }
    template<typename VirtualNameT = Aws::String>
    BlockDeviceMapping& WithVirtualName(VirtualNameT&& value) { SetVirtualName(std::forward<VirtualNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An <code>EBSBlockDevice</code> that defines how to configure an Amazon EBS
     * volume when the instance is launched.</p>
     */
    inline const EbsBlockDevice& GetEbs() const { return m_ebs; }
    inline bool EbsHasBeenSet() const { return m_ebsHasBeenSet; }
    template<typename EbsT = EbsBlockDevice>
    void SetEbs(EbsT&& value) { m_ebsHasBeenSet = true; m_ebs = std::forward<EbsT>(value); }
    template<typename EbsT = EbsBlockDevice>
    BlockDeviceMapping& WithEbs(EbsT&& value) { SetEbs(std::forward<EbsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_deviceName;
    bool m_deviceNameHasBeenSet = false;

    Aws::String m_noDevice;
    bool m_noDeviceHasBeenSet = false;

    Aws::String m_virtualName;
    bool m_virtualNameHasBeenSet = false;

    EbsBlockDevice m_ebs;
    bool m_ebsHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
