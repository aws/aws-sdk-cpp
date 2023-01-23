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
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataBlockDeviceMappingSetDetails();
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataBlockDeviceMappingSetDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataBlockDeviceMappingSetDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The device name. </p>
     */
    inline const Aws::String& GetDeviceName() const{ return m_deviceName; }

    /**
     * <p> The device name. </p>
     */
    inline bool DeviceNameHasBeenSet() const { return m_deviceNameHasBeenSet; }

    /**
     * <p> The device name. </p>
     */
    inline void SetDeviceName(const Aws::String& value) { m_deviceNameHasBeenSet = true; m_deviceName = value; }

    /**
     * <p> The device name. </p>
     */
    inline void SetDeviceName(Aws::String&& value) { m_deviceNameHasBeenSet = true; m_deviceName = std::move(value); }

    /**
     * <p> The device name. </p>
     */
    inline void SetDeviceName(const char* value) { m_deviceNameHasBeenSet = true; m_deviceName.assign(value); }

    /**
     * <p> The device name. </p>
     */
    inline AwsEc2LaunchTemplateDataBlockDeviceMappingSetDetails& WithDeviceName(const Aws::String& value) { SetDeviceName(value); return *this;}

    /**
     * <p> The device name. </p>
     */
    inline AwsEc2LaunchTemplateDataBlockDeviceMappingSetDetails& WithDeviceName(Aws::String&& value) { SetDeviceName(std::move(value)); return *this;}

    /**
     * <p> The device name. </p>
     */
    inline AwsEc2LaunchTemplateDataBlockDeviceMappingSetDetails& WithDeviceName(const char* value) { SetDeviceName(value); return *this;}


    /**
     * <p> Parameters used to automatically set up Amazon EBS volumes when the instance
     * is launched. </p>
     */
    inline const AwsEc2LaunchTemplateDataBlockDeviceMappingSetEbsDetails& GetEbs() const{ return m_ebs; }

    /**
     * <p> Parameters used to automatically set up Amazon EBS volumes when the instance
     * is launched. </p>
     */
    inline bool EbsHasBeenSet() const { return m_ebsHasBeenSet; }

    /**
     * <p> Parameters used to automatically set up Amazon EBS volumes when the instance
     * is launched. </p>
     */
    inline void SetEbs(const AwsEc2LaunchTemplateDataBlockDeviceMappingSetEbsDetails& value) { m_ebsHasBeenSet = true; m_ebs = value; }

    /**
     * <p> Parameters used to automatically set up Amazon EBS volumes when the instance
     * is launched. </p>
     */
    inline void SetEbs(AwsEc2LaunchTemplateDataBlockDeviceMappingSetEbsDetails&& value) { m_ebsHasBeenSet = true; m_ebs = std::move(value); }

    /**
     * <p> Parameters used to automatically set up Amazon EBS volumes when the instance
     * is launched. </p>
     */
    inline AwsEc2LaunchTemplateDataBlockDeviceMappingSetDetails& WithEbs(const AwsEc2LaunchTemplateDataBlockDeviceMappingSetEbsDetails& value) { SetEbs(value); return *this;}

    /**
     * <p> Parameters used to automatically set up Amazon EBS volumes when the instance
     * is launched. </p>
     */
    inline AwsEc2LaunchTemplateDataBlockDeviceMappingSetDetails& WithEbs(AwsEc2LaunchTemplateDataBlockDeviceMappingSetEbsDetails&& value) { SetEbs(std::move(value)); return *this;}


    /**
     * <p> Omits the device from the block device mapping when an empty string is
     * specified. </p>
     */
    inline const Aws::String& GetNoDevice() const{ return m_noDevice; }

    /**
     * <p> Omits the device from the block device mapping when an empty string is
     * specified. </p>
     */
    inline bool NoDeviceHasBeenSet() const { return m_noDeviceHasBeenSet; }

    /**
     * <p> Omits the device from the block device mapping when an empty string is
     * specified. </p>
     */
    inline void SetNoDevice(const Aws::String& value) { m_noDeviceHasBeenSet = true; m_noDevice = value; }

    /**
     * <p> Omits the device from the block device mapping when an empty string is
     * specified. </p>
     */
    inline void SetNoDevice(Aws::String&& value) { m_noDeviceHasBeenSet = true; m_noDevice = std::move(value); }

    /**
     * <p> Omits the device from the block device mapping when an empty string is
     * specified. </p>
     */
    inline void SetNoDevice(const char* value) { m_noDeviceHasBeenSet = true; m_noDevice.assign(value); }

    /**
     * <p> Omits the device from the block device mapping when an empty string is
     * specified. </p>
     */
    inline AwsEc2LaunchTemplateDataBlockDeviceMappingSetDetails& WithNoDevice(const Aws::String& value) { SetNoDevice(value); return *this;}

    /**
     * <p> Omits the device from the block device mapping when an empty string is
     * specified. </p>
     */
    inline AwsEc2LaunchTemplateDataBlockDeviceMappingSetDetails& WithNoDevice(Aws::String&& value) { SetNoDevice(std::move(value)); return *this;}

    /**
     * <p> Omits the device from the block device mapping when an empty string is
     * specified. </p>
     */
    inline AwsEc2LaunchTemplateDataBlockDeviceMappingSetDetails& WithNoDevice(const char* value) { SetNoDevice(value); return *this;}


    /**
     * <p> The virtual device name (ephemeralN). Instance store volumes are numbered
     * starting from 0. An instance type with 2 available instance store volumes can
     * specify mappings for <code>ephemeral0</code> and <code>ephemeral1</code>. The
     * number of available instance store volumes depends on the instance type. </p>
     */
    inline const Aws::String& GetVirtualName() const{ return m_virtualName; }

    /**
     * <p> The virtual device name (ephemeralN). Instance store volumes are numbered
     * starting from 0. An instance type with 2 available instance store volumes can
     * specify mappings for <code>ephemeral0</code> and <code>ephemeral1</code>. The
     * number of available instance store volumes depends on the instance type. </p>
     */
    inline bool VirtualNameHasBeenSet() const { return m_virtualNameHasBeenSet; }

    /**
     * <p> The virtual device name (ephemeralN). Instance store volumes are numbered
     * starting from 0. An instance type with 2 available instance store volumes can
     * specify mappings for <code>ephemeral0</code> and <code>ephemeral1</code>. The
     * number of available instance store volumes depends on the instance type. </p>
     */
    inline void SetVirtualName(const Aws::String& value) { m_virtualNameHasBeenSet = true; m_virtualName = value; }

    /**
     * <p> The virtual device name (ephemeralN). Instance store volumes are numbered
     * starting from 0. An instance type with 2 available instance store volumes can
     * specify mappings for <code>ephemeral0</code> and <code>ephemeral1</code>. The
     * number of available instance store volumes depends on the instance type. </p>
     */
    inline void SetVirtualName(Aws::String&& value) { m_virtualNameHasBeenSet = true; m_virtualName = std::move(value); }

    /**
     * <p> The virtual device name (ephemeralN). Instance store volumes are numbered
     * starting from 0. An instance type with 2 available instance store volumes can
     * specify mappings for <code>ephemeral0</code> and <code>ephemeral1</code>. The
     * number of available instance store volumes depends on the instance type. </p>
     */
    inline void SetVirtualName(const char* value) { m_virtualNameHasBeenSet = true; m_virtualName.assign(value); }

    /**
     * <p> The virtual device name (ephemeralN). Instance store volumes are numbered
     * starting from 0. An instance type with 2 available instance store volumes can
     * specify mappings for <code>ephemeral0</code> and <code>ephemeral1</code>. The
     * number of available instance store volumes depends on the instance type. </p>
     */
    inline AwsEc2LaunchTemplateDataBlockDeviceMappingSetDetails& WithVirtualName(const Aws::String& value) { SetVirtualName(value); return *this;}

    /**
     * <p> The virtual device name (ephemeralN). Instance store volumes are numbered
     * starting from 0. An instance type with 2 available instance store volumes can
     * specify mappings for <code>ephemeral0</code> and <code>ephemeral1</code>. The
     * number of available instance store volumes depends on the instance type. </p>
     */
    inline AwsEc2LaunchTemplateDataBlockDeviceMappingSetDetails& WithVirtualName(Aws::String&& value) { SetVirtualName(std::move(value)); return *this;}

    /**
     * <p> The virtual device name (ephemeralN). Instance store volumes are numbered
     * starting from 0. An instance type with 2 available instance store volumes can
     * specify mappings for <code>ephemeral0</code> and <code>ephemeral1</code>. The
     * number of available instance store volumes depends on the instance type. </p>
     */
    inline AwsEc2LaunchTemplateDataBlockDeviceMappingSetDetails& WithVirtualName(const char* value) { SetVirtualName(value); return *this;}

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
