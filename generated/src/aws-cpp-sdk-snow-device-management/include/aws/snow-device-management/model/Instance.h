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
    AWS_SNOWDEVICEMANAGEMENT_API Instance() = default;
    AWS_SNOWDEVICEMANAGEMENT_API Instance(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWDEVICEMANAGEMENT_API Instance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWDEVICEMANAGEMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Machine Image (AMI) launch index, which you can use to find this
     * instance in the launch group. </p>
     */
    inline int GetAmiLaunchIndex() const { return m_amiLaunchIndex; }
    inline bool AmiLaunchIndexHasBeenSet() const { return m_amiLaunchIndexHasBeenSet; }
    inline void SetAmiLaunchIndex(int value) { m_amiLaunchIndexHasBeenSet = true; m_amiLaunchIndex = value; }
    inline Instance& WithAmiLaunchIndex(int value) { SetAmiLaunchIndex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any block device mapping entries for the instance.</p>
     */
    inline const Aws::Vector<InstanceBlockDeviceMapping>& GetBlockDeviceMappings() const { return m_blockDeviceMappings; }
    inline bool BlockDeviceMappingsHasBeenSet() const { return m_blockDeviceMappingsHasBeenSet; }
    template<typename BlockDeviceMappingsT = Aws::Vector<InstanceBlockDeviceMapping>>
    void SetBlockDeviceMappings(BlockDeviceMappingsT&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = std::forward<BlockDeviceMappingsT>(value); }
    template<typename BlockDeviceMappingsT = Aws::Vector<InstanceBlockDeviceMapping>>
    Instance& WithBlockDeviceMappings(BlockDeviceMappingsT&& value) { SetBlockDeviceMappings(std::forward<BlockDeviceMappingsT>(value)); return *this;}
    template<typename BlockDeviceMappingsT = InstanceBlockDeviceMapping>
    Instance& AddBlockDeviceMappings(BlockDeviceMappingsT&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.emplace_back(std::forward<BlockDeviceMappingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The CPU options for the instance.</p>
     */
    inline const CpuOptions& GetCpuOptions() const { return m_cpuOptions; }
    inline bool CpuOptionsHasBeenSet() const { return m_cpuOptionsHasBeenSet; }
    template<typename CpuOptionsT = CpuOptions>
    void SetCpuOptions(CpuOptionsT&& value) { m_cpuOptionsHasBeenSet = true; m_cpuOptions = std::forward<CpuOptionsT>(value); }
    template<typename CpuOptionsT = CpuOptions>
    Instance& WithCpuOptions(CpuOptionsT&& value) { SetCpuOptions(std::forward<CpuOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the instance was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    Instance& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the AMI used to launch the instance.</p>
     */
    inline const Aws::String& GetImageId() const { return m_imageId; }
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }
    template<typename ImageIdT = Aws::String>
    void SetImageId(ImageIdT&& value) { m_imageIdHasBeenSet = true; m_imageId = std::forward<ImageIdT>(value); }
    template<typename ImageIdT = Aws::String>
    Instance& WithImageId(ImageIdT&& value) { SetImageId(std::forward<ImageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    Instance& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type.</p>
     */
    inline const Aws::String& GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    template<typename InstanceTypeT = Aws::String>
    void SetInstanceType(InstanceTypeT&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::forward<InstanceTypeT>(value); }
    template<typename InstanceTypeT = Aws::String>
    Instance& WithInstanceType(InstanceTypeT&& value) { SetInstanceType(std::forward<InstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The private IPv4 address assigned to the instance.</p>
     */
    inline const Aws::String& GetPrivateIpAddress() const { return m_privateIpAddress; }
    inline bool PrivateIpAddressHasBeenSet() const { return m_privateIpAddressHasBeenSet; }
    template<typename PrivateIpAddressT = Aws::String>
    void SetPrivateIpAddress(PrivateIpAddressT&& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = std::forward<PrivateIpAddressT>(value); }
    template<typename PrivateIpAddressT = Aws::String>
    Instance& WithPrivateIpAddress(PrivateIpAddressT&& value) { SetPrivateIpAddress(std::forward<PrivateIpAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The public IPv4 address assigned to the instance.</p>
     */
    inline const Aws::String& GetPublicIpAddress() const { return m_publicIpAddress; }
    inline bool PublicIpAddressHasBeenSet() const { return m_publicIpAddressHasBeenSet; }
    template<typename PublicIpAddressT = Aws::String>
    void SetPublicIpAddress(PublicIpAddressT&& value) { m_publicIpAddressHasBeenSet = true; m_publicIpAddress = std::forward<PublicIpAddressT>(value); }
    template<typename PublicIpAddressT = Aws::String>
    Instance& WithPublicIpAddress(PublicIpAddressT&& value) { SetPublicIpAddress(std::forward<PublicIpAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device name of the root device volume (for example,
     * <code>/dev/sda1</code>). </p>
     */
    inline const Aws::String& GetRootDeviceName() const { return m_rootDeviceName; }
    inline bool RootDeviceNameHasBeenSet() const { return m_rootDeviceNameHasBeenSet; }
    template<typename RootDeviceNameT = Aws::String>
    void SetRootDeviceName(RootDeviceNameT&& value) { m_rootDeviceNameHasBeenSet = true; m_rootDeviceName = std::forward<RootDeviceNameT>(value); }
    template<typename RootDeviceNameT = Aws::String>
    Instance& WithRootDeviceName(RootDeviceNameT&& value) { SetRootDeviceName(std::forward<RootDeviceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The security groups for the instance.</p>
     */
    inline const Aws::Vector<SecurityGroupIdentifier>& GetSecurityGroups() const { return m_securityGroups; }
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }
    template<typename SecurityGroupsT = Aws::Vector<SecurityGroupIdentifier>>
    void SetSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::forward<SecurityGroupsT>(value); }
    template<typename SecurityGroupsT = Aws::Vector<SecurityGroupIdentifier>>
    Instance& WithSecurityGroups(SecurityGroupsT&& value) { SetSecurityGroups(std::forward<SecurityGroupsT>(value)); return *this;}
    template<typename SecurityGroupsT = SecurityGroupIdentifier>
    Instance& AddSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.emplace_back(std::forward<SecurityGroupsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const InstanceState& GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    template<typename StateT = InstanceState>
    void SetState(StateT&& value) { m_stateHasBeenSet = true; m_state = std::forward<StateT>(value); }
    template<typename StateT = InstanceState>
    Instance& WithState(StateT&& value) { SetState(std::forward<StateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the instance was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    Instance& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}
  private:

    int m_amiLaunchIndex{0};
    bool m_amiLaunchIndexHasBeenSet = false;

    Aws::Vector<InstanceBlockDeviceMapping> m_blockDeviceMappings;
    bool m_blockDeviceMappingsHasBeenSet = false;

    CpuOptions m_cpuOptions;
    bool m_cpuOptionsHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
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

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace SnowDeviceManagement
} // namespace Aws
