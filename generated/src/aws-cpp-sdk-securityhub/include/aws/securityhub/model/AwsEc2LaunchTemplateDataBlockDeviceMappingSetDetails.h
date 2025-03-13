/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsEc2LaunchTemplateDataBlockDeviceMappingSetEbsDetails.h>
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
   * <p> Information about a block device mapping for an Amazon Elastic Compute Cloud
   * (Amazon EC2) launch template. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2LaunchTemplateDataBlockDeviceMappingSetDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2LaunchTemplateDataBlockDeviceMappingSetDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataBlockDeviceMappingSetDetails() = default;
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataBlockDeviceMappingSetDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataBlockDeviceMappingSetDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The device name. </p>
     */
    inline const Aws::String& GetDeviceName() const { return m_deviceName; }
    inline bool DeviceNameHasBeenSet() const { return m_deviceNameHasBeenSet; }
    template<typename DeviceNameT = Aws::String>
    void SetDeviceName(DeviceNameT&& value) { m_deviceNameHasBeenSet = true; m_deviceName = std::forward<DeviceNameT>(value); }
    template<typename DeviceNameT = Aws::String>
    AwsEc2LaunchTemplateDataBlockDeviceMappingSetDetails& WithDeviceName(DeviceNameT&& value) { SetDeviceName(std::forward<DeviceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Parameters used to automatically set up Amazon EBS volumes when the instance
     * is launched. </p>
     */
    inline const AwsEc2LaunchTemplateDataBlockDeviceMappingSetEbsDetails& GetEbs() const { return m_ebs; }
    inline bool EbsHasBeenSet() const { return m_ebsHasBeenSet; }
    template<typename EbsT = AwsEc2LaunchTemplateDataBlockDeviceMappingSetEbsDetails>
    void SetEbs(EbsT&& value) { m_ebsHasBeenSet = true; m_ebs = std::forward<EbsT>(value); }
    template<typename EbsT = AwsEc2LaunchTemplateDataBlockDeviceMappingSetEbsDetails>
    AwsEc2LaunchTemplateDataBlockDeviceMappingSetDetails& WithEbs(EbsT&& value) { SetEbs(std::forward<EbsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Omits the device from the block device mapping when an empty string is
     * specified. </p>
     */
    inline const Aws::String& GetNoDevice() const { return m_noDevice; }
    inline bool NoDeviceHasBeenSet() const { return m_noDeviceHasBeenSet; }
    template<typename NoDeviceT = Aws::String>
    void SetNoDevice(NoDeviceT&& value) { m_noDeviceHasBeenSet = true; m_noDevice = std::forward<NoDeviceT>(value); }
    template<typename NoDeviceT = Aws::String>
    AwsEc2LaunchTemplateDataBlockDeviceMappingSetDetails& WithNoDevice(NoDeviceT&& value) { SetNoDevice(std::forward<NoDeviceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The virtual device name (ephemeralN). Instance store volumes are numbered
     * starting from 0. An instance type with 2 available instance store volumes can
     * specify mappings for <code>ephemeral0</code> and <code>ephemeral1</code>. The
     * number of available instance store volumes depends on the instance type. </p>
     */
    inline const Aws::String& GetVirtualName() const { return m_virtualName; }
    inline bool VirtualNameHasBeenSet() const { return m_virtualNameHasBeenSet; }
    template<typename VirtualNameT = Aws::String>
    void SetVirtualName(VirtualNameT&& value) { m_virtualNameHasBeenSet = true; m_virtualName = std::forward<VirtualNameT>(value); }
    template<typename VirtualNameT = Aws::String>
    AwsEc2LaunchTemplateDataBlockDeviceMappingSetDetails& WithVirtualName(VirtualNameT&& value) { SetVirtualName(std::forward<VirtualNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_deviceName;
    bool m_deviceNameHasBeenSet = false;

    AwsEc2LaunchTemplateDataBlockDeviceMappingSetEbsDetails m_ebs;
    bool m_ebsHasBeenSet = false;

    Aws::String m_noDevice;
    bool m_noDeviceHasBeenSet = false;

    Aws::String m_virtualName;
    bool m_virtualNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
