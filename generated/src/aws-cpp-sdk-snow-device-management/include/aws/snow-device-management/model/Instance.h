/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snow-device-management/SnowDeviceManagement_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/snow-device-management/model/CpuOptions.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/snow-device-management/model/InstanceState.h>
#include <aws/snow-device-management/model/InstanceBlockDeviceMapping.h>
#include <aws/snow-device-management/model/SecurityGroupIdentifier.h>
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
namespace SnowDeviceManagement
{
namespace Model
{

  /**
   * <p>The description of an instance. Currently, Amazon EC2 instances are the only
   * supported instance type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/snow-device-management-2021-08-04/Instance">AWS
   * API Reference</a></p>
   */
  class Instance
  {
  public:
    AWS_SNOWDEVICEMANAGEMENT_API Instance();
    AWS_SNOWDEVICEMANAGEMENT_API Instance(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWDEVICEMANAGEMENT_API Instance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWDEVICEMANAGEMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Machine Image (AMI) launch index, which you can use to find this
     * instance in the launch group. </p>
     */
    inline int GetAmiLaunchIndex() const{ return m_amiLaunchIndex; }
    inline bool AmiLaunchIndexHasBeenSet() const { return m_amiLaunchIndexHasBeenSet; }
    inline void SetAmiLaunchIndex(int value) { m_amiLaunchIndexHasBeenSet = true; m_amiLaunchIndex = value; }
    inline Instance& WithAmiLaunchIndex(int value) { SetAmiLaunchIndex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any block device mapping entries for the instance.</p>
     */
    inline const Aws::Vector<InstanceBlockDeviceMapping>& GetBlockDeviceMappings() const{ return m_blockDeviceMappings; }
    inline bool BlockDeviceMappingsHasBeenSet() const { return m_blockDeviceMappingsHasBeenSet; }
    inline void SetBlockDeviceMappings(const Aws::Vector<InstanceBlockDeviceMapping>& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = value; }
    inline void SetBlockDeviceMappings(Aws::Vector<InstanceBlockDeviceMapping>&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = std::move(value); }
    inline Instance& WithBlockDeviceMappings(const Aws::Vector<InstanceBlockDeviceMapping>& value) { SetBlockDeviceMappings(value); return *this;}
    inline Instance& WithBlockDeviceMappings(Aws::Vector<InstanceBlockDeviceMapping>&& value) { SetBlockDeviceMappings(std::move(value)); return *this;}
    inline Instance& AddBlockDeviceMappings(const InstanceBlockDeviceMapping& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.push_back(value); return *this; }
    inline Instance& AddBlockDeviceMappings(InstanceBlockDeviceMapping&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The CPU options for the instance.</p>
     */
    inline const CpuOptions& GetCpuOptions() const{ return m_cpuOptions; }
    inline bool CpuOptionsHasBeenSet() const { return m_cpuOptionsHasBeenSet; }
    inline void SetCpuOptions(const CpuOptions& value) { m_cpuOptionsHasBeenSet = true; m_cpuOptions = value; }
    inline void SetCpuOptions(CpuOptions&& value) { m_cpuOptionsHasBeenSet = true; m_cpuOptions = std::move(value); }
    inline Instance& WithCpuOptions(const CpuOptions& value) { SetCpuOptions(value); return *this;}
    inline Instance& WithCpuOptions(CpuOptions&& value) { SetCpuOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the instance was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline Instance& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline Instance& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the AMI used to launch the instance.</p>
     */
    inline const Aws::String& GetImageId() const{ return m_imageId; }
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }
    inline void SetImageId(const Aws::String& value) { m_imageIdHasBeenSet = true; m_imageId = value; }
    inline void SetImageId(Aws::String&& value) { m_imageIdHasBeenSet = true; m_imageId = std::move(value); }
    inline void SetImageId(const char* value) { m_imageIdHasBeenSet = true; m_imageId.assign(value); }
    inline Instance& WithImageId(const Aws::String& value) { SetImageId(value); return *this;}
    inline Instance& WithImageId(Aws::String&& value) { SetImageId(std::move(value)); return *this;}
    inline Instance& WithImageId(const char* value) { SetImageId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline Instance& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline Instance& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline Instance& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }
    inline Instance& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}
    inline Instance& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}
    inline Instance& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The private IPv4 address assigned to the instance.</p>
     */
    inline const Aws::String& GetPrivateIpAddress() const{ return m_privateIpAddress; }
    inline bool PrivateIpAddressHasBeenSet() const { return m_privateIpAddressHasBeenSet; }
    inline void SetPrivateIpAddress(const Aws::String& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = value; }
    inline void SetPrivateIpAddress(Aws::String&& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = std::move(value); }
    inline void SetPrivateIpAddress(const char* value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress.assign(value); }
    inline Instance& WithPrivateIpAddress(const Aws::String& value) { SetPrivateIpAddress(value); return *this;}
    inline Instance& WithPrivateIpAddress(Aws::String&& value) { SetPrivateIpAddress(std::move(value)); return *this;}
    inline Instance& WithPrivateIpAddress(const char* value) { SetPrivateIpAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The public IPv4 address assigned to the instance.</p>
     */
    inline const Aws::String& GetPublicIpAddress() const{ return m_publicIpAddress; }
    inline bool PublicIpAddressHasBeenSet() const { return m_publicIpAddressHasBeenSet; }
    inline void SetPublicIpAddress(const Aws::String& value) { m_publicIpAddressHasBeenSet = true; m_publicIpAddress = value; }
    inline void SetPublicIpAddress(Aws::String&& value) { m_publicIpAddressHasBeenSet = true; m_publicIpAddress = std::move(value); }
    inline void SetPublicIpAddress(const char* value) { m_publicIpAddressHasBeenSet = true; m_publicIpAddress.assign(value); }
    inline Instance& WithPublicIpAddress(const Aws::String& value) { SetPublicIpAddress(value); return *this;}
    inline Instance& WithPublicIpAddress(Aws::String&& value) { SetPublicIpAddress(std::move(value)); return *this;}
    inline Instance& WithPublicIpAddress(const char* value) { SetPublicIpAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device name of the root device volume (for example,
     * <code>/dev/sda1</code>). </p>
     */
    inline const Aws::String& GetRootDeviceName() const{ return m_rootDeviceName; }
    inline bool RootDeviceNameHasBeenSet() const { return m_rootDeviceNameHasBeenSet; }
    inline void SetRootDeviceName(const Aws::String& value) { m_rootDeviceNameHasBeenSet = true; m_rootDeviceName = value; }
    inline void SetRootDeviceName(Aws::String&& value) { m_rootDeviceNameHasBeenSet = true; m_rootDeviceName = std::move(value); }
    inline void SetRootDeviceName(const char* value) { m_rootDeviceNameHasBeenSet = true; m_rootDeviceName.assign(value); }
    inline Instance& WithRootDeviceName(const Aws::String& value) { SetRootDeviceName(value); return *this;}
    inline Instance& WithRootDeviceName(Aws::String&& value) { SetRootDeviceName(std::move(value)); return *this;}
    inline Instance& WithRootDeviceName(const char* value) { SetRootDeviceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The security groups for the instance.</p>
     */
    inline const Aws::Vector<SecurityGroupIdentifier>& GetSecurityGroups() const{ return m_securityGroups; }
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }
    inline void SetSecurityGroups(const Aws::Vector<SecurityGroupIdentifier>& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }
    inline void SetSecurityGroups(Aws::Vector<SecurityGroupIdentifier>&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::move(value); }
    inline Instance& WithSecurityGroups(const Aws::Vector<SecurityGroupIdentifier>& value) { SetSecurityGroups(value); return *this;}
    inline Instance& WithSecurityGroups(Aws::Vector<SecurityGroupIdentifier>&& value) { SetSecurityGroups(std::move(value)); return *this;}
    inline Instance& AddSecurityGroups(const SecurityGroupIdentifier& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }
    inline Instance& AddSecurityGroups(SecurityGroupIdentifier&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const InstanceState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const InstanceState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(InstanceState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline Instance& WithState(const InstanceState& value) { SetState(value); return *this;}
    inline Instance& WithState(InstanceState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the instance was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline Instance& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline Instance& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}
  private:

    int m_amiLaunchIndex;
    bool m_amiLaunchIndexHasBeenSet = false;

    Aws::Vector<InstanceBlockDeviceMapping> m_blockDeviceMappings;
    bool m_blockDeviceMappingsHasBeenSet = false;

    CpuOptions m_cpuOptions;
    bool m_cpuOptionsHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_privateIpAddress;
    bool m_privateIpAddressHasBeenSet = false;

    Aws::String m_publicIpAddress;
    bool m_publicIpAddressHasBeenSet = false;

    Aws::String m_rootDeviceName;
    bool m_rootDeviceNameHasBeenSet = false;

    Aws::Vector<SecurityGroupIdentifier> m_securityGroups;
    bool m_securityGroupsHasBeenSet = false;

    InstanceState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace SnowDeviceManagement
} // namespace Aws
