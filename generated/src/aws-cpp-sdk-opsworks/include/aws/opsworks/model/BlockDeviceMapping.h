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
    AWS_OPSWORKS_API BlockDeviceMapping();
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
    inline const Aws::String& GetDeviceName() const{ return m_deviceName; }
    inline bool DeviceNameHasBeenSet() const { return m_deviceNameHasBeenSet; }
    inline void SetDeviceName(const Aws::String& value) { m_deviceNameHasBeenSet = true; m_deviceName = value; }
    inline void SetDeviceName(Aws::String&& value) { m_deviceNameHasBeenSet = true; m_deviceName = std::move(value); }
    inline void SetDeviceName(const char* value) { m_deviceNameHasBeenSet = true; m_deviceName.assign(value); }
    inline BlockDeviceMapping& WithDeviceName(const Aws::String& value) { SetDeviceName(value); return *this;}
    inline BlockDeviceMapping& WithDeviceName(Aws::String&& value) { SetDeviceName(std::move(value)); return *this;}
    inline BlockDeviceMapping& WithDeviceName(const char* value) { SetDeviceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Suppresses the specified device included in the AMI's block device
     * mapping.</p>
     */
    inline const Aws::String& GetNoDevice() const{ return m_noDevice; }
    inline bool NoDeviceHasBeenSet() const { return m_noDeviceHasBeenSet; }
    inline void SetNoDevice(const Aws::String& value) { m_noDeviceHasBeenSet = true; m_noDevice = value; }
    inline void SetNoDevice(Aws::String&& value) { m_noDeviceHasBeenSet = true; m_noDevice = std::move(value); }
    inline void SetNoDevice(const char* value) { m_noDeviceHasBeenSet = true; m_noDevice.assign(value); }
    inline BlockDeviceMapping& WithNoDevice(const Aws::String& value) { SetNoDevice(value); return *this;}
    inline BlockDeviceMapping& WithNoDevice(Aws::String&& value) { SetNoDevice(std::move(value)); return *this;}
    inline BlockDeviceMapping& WithNoDevice(const char* value) { SetNoDevice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The virtual device name. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_BlockDeviceMapping.html">BlockDeviceMapping</a>.</p>
     */
    inline const Aws::String& GetVirtualName() const{ return m_virtualName; }
    inline bool VirtualNameHasBeenSet() const { return m_virtualNameHasBeenSet; }
    inline void SetVirtualName(const Aws::String& value) { m_virtualNameHasBeenSet = true; m_virtualName = value; }
    inline void SetVirtualName(Aws::String&& value) { m_virtualNameHasBeenSet = true; m_virtualName = std::move(value); }
    inline void SetVirtualName(const char* value) { m_virtualNameHasBeenSet = true; m_virtualName.assign(value); }
    inline BlockDeviceMapping& WithVirtualName(const Aws::String& value) { SetVirtualName(value); return *this;}
    inline BlockDeviceMapping& WithVirtualName(Aws::String&& value) { SetVirtualName(std::move(value)); return *this;}
    inline BlockDeviceMapping& WithVirtualName(const char* value) { SetVirtualName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An <code>EBSBlockDevice</code> that defines how to configure an Amazon EBS
     * volume when the instance is launched.</p>
     */
    inline const EbsBlockDevice& GetEbs() const{ return m_ebs; }
    inline bool EbsHasBeenSet() const { return m_ebsHasBeenSet; }
    inline void SetEbs(const EbsBlockDevice& value) { m_ebsHasBeenSet = true; m_ebs = value; }
    inline void SetEbs(EbsBlockDevice&& value) { m_ebsHasBeenSet = true; m_ebs = std::move(value); }
    inline BlockDeviceMapping& WithEbs(const EbsBlockDevice& value) { SetEbs(value); return *this;}
    inline BlockDeviceMapping& WithEbs(EbsBlockDevice&& value) { SetEbs(std::move(value)); return *this;}
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
