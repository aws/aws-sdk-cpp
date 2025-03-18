/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsAutoScalingLaunchConfigurationBlockDeviceMappingsEbsDetails.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>A block device for the instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsAutoScalingLaunchConfigurationBlockDeviceMappingsDetails">AWS
   * API Reference</a></p>
   */
  class AwsAutoScalingLaunchConfigurationBlockDeviceMappingsDetails
  {
  public:
    AWS_SECURITYHUB_API AwsAutoScalingLaunchConfigurationBlockDeviceMappingsDetails() = default;
    AWS_SECURITYHUB_API AwsAutoScalingLaunchConfigurationBlockDeviceMappingsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsAutoScalingLaunchConfigurationBlockDeviceMappingsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The device name that is exposed to the EC2 instance. For example,
     * <code>/dev/sdh</code> or <code>xvdh</code>.</p>
     */
    inline const Aws::String& GetDeviceName() const { return m_deviceName; }
    inline bool DeviceNameHasBeenSet() const { return m_deviceNameHasBeenSet; }
    template<typename DeviceNameT = Aws::String>
    void SetDeviceName(DeviceNameT&& value) { m_deviceNameHasBeenSet = true; m_deviceName = std::forward<DeviceNameT>(value); }
    template<typename DeviceNameT = Aws::String>
    AwsAutoScalingLaunchConfigurationBlockDeviceMappingsDetails& WithDeviceName(DeviceNameT&& value) { SetDeviceName(std::forward<DeviceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameters that are used to automatically set up Amazon EBS volumes when an
     * instance is launched.</p>
     */
    inline const AwsAutoScalingLaunchConfigurationBlockDeviceMappingsEbsDetails& GetEbs() const { return m_ebs; }
    inline bool EbsHasBeenSet() const { return m_ebsHasBeenSet; }
    template<typename EbsT = AwsAutoScalingLaunchConfigurationBlockDeviceMappingsEbsDetails>
    void SetEbs(EbsT&& value) { m_ebsHasBeenSet = true; m_ebs = std::forward<EbsT>(value); }
    template<typename EbsT = AwsAutoScalingLaunchConfigurationBlockDeviceMappingsEbsDetails>
    AwsAutoScalingLaunchConfigurationBlockDeviceMappingsDetails& WithEbs(EbsT&& value) { SetEbs(std::forward<EbsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to suppress the device that is included in the block device mapping
     * of the Amazon Machine Image (AMI).</p> <p>If <code>NoDevice</code> is
     * <code>true</code>, then you cannot specify <code>Ebs</code>.&gt;</p>
     */
    inline bool GetNoDevice() const { return m_noDevice; }
    inline bool NoDeviceHasBeenSet() const { return m_noDeviceHasBeenSet; }
    inline void SetNoDevice(bool value) { m_noDeviceHasBeenSet = true; m_noDevice = value; }
    inline AwsAutoScalingLaunchConfigurationBlockDeviceMappingsDetails& WithNoDevice(bool value) { SetNoDevice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the virtual device (for example, <code>ephemeral0</code>).</p>
     * <p>You can provide either <code>VirtualName</code> or <code>Ebs</code>, but not
     * both.</p>
     */
    inline const Aws::String& GetVirtualName() const { return m_virtualName; }
    inline bool VirtualNameHasBeenSet() const { return m_virtualNameHasBeenSet; }
    template<typename VirtualNameT = Aws::String>
    void SetVirtualName(VirtualNameT&& value) { m_virtualNameHasBeenSet = true; m_virtualName = std::forward<VirtualNameT>(value); }
    template<typename VirtualNameT = Aws::String>
    AwsAutoScalingLaunchConfigurationBlockDeviceMappingsDetails& WithVirtualName(VirtualNameT&& value) { SetVirtualName(std::forward<VirtualNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_deviceName;
    bool m_deviceNameHasBeenSet = false;

    AwsAutoScalingLaunchConfigurationBlockDeviceMappingsEbsDetails m_ebs;
    bool m_ebsHasBeenSet = false;

    bool m_noDevice{false};
    bool m_noDeviceHasBeenSet = false;

    Aws::String m_virtualName;
    bool m_virtualNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
