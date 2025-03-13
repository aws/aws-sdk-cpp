/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/OpsWorksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opsworks/model/AutoScalingType.h>
#include <aws/opsworks/model/Architecture.h>
#include <aws/opsworks/model/RootDeviceType.h>
#include <aws/opsworks/model/BlockDeviceMapping.h>
#include <utility>

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

  /**
   */
  class CreateInstanceRequest : public OpsWorksRequest
  {
  public:
    AWS_OPSWORKS_API CreateInstanceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateInstance"; }

    AWS_OPSWORKS_API Aws::String SerializePayload() const override;

    AWS_OPSWORKS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The stack ID.</p>
     */
    inline const Aws::String& GetStackId() const { return m_stackId; }
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }
    template<typename StackIdT = Aws::String>
    void SetStackId(StackIdT&& value) { m_stackIdHasBeenSet = true; m_stackId = std::forward<StackIdT>(value); }
    template<typename StackIdT = Aws::String>
    CreateInstanceRequest& WithStackId(StackIdT&& value) { SetStackId(std::forward<StackIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array that contains the instance's layer IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLayerIds() const { return m_layerIds; }
    inline bool LayerIdsHasBeenSet() const { return m_layerIdsHasBeenSet; }
    template<typename LayerIdsT = Aws::Vector<Aws::String>>
    void SetLayerIds(LayerIdsT&& value) { m_layerIdsHasBeenSet = true; m_layerIds = std::forward<LayerIdsT>(value); }
    template<typename LayerIdsT = Aws::Vector<Aws::String>>
    CreateInstanceRequest& WithLayerIds(LayerIdsT&& value) { SetLayerIds(std::forward<LayerIdsT>(value)); return *this;}
    template<typename LayerIdsT = Aws::String>
    CreateInstanceRequest& AddLayerIds(LayerIdsT&& value) { m_layerIdsHasBeenSet = true; m_layerIds.emplace_back(std::forward<LayerIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The instance type, such as <code>t2.micro</code>. For a list of supported
     * instance types, open the stack in the console, choose <b>Instances</b>, and
     * choose <b>+ Instance</b>. The <b>Size</b> list contains the currently supported
     * types. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * Families and Types</a>. The parameter values that you use to specify the various
     * types are in the <b>API Name</b> column of the <b>Available Instance Types</b>
     * table.</p>
     */
    inline const Aws::String& GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    template<typename InstanceTypeT = Aws::String>
    void SetInstanceType(InstanceTypeT&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::forward<InstanceTypeT>(value); }
    template<typename InstanceTypeT = Aws::String>
    CreateInstanceRequest& WithInstanceType(InstanceTypeT&& value) { SetInstanceType(std::forward<InstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For load-based or time-based instances, the type. Windows stacks can use only
     * time-based instances.</p>
     */
    inline AutoScalingType GetAutoScalingType() const { return m_autoScalingType; }
    inline bool AutoScalingTypeHasBeenSet() const { return m_autoScalingTypeHasBeenSet; }
    inline void SetAutoScalingType(AutoScalingType value) { m_autoScalingTypeHasBeenSet = true; m_autoScalingType = value; }
    inline CreateInstanceRequest& WithAutoScalingType(AutoScalingType value) { SetAutoScalingType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance host name. The following are character limits for instance host
     * names.</p> <ul> <li> <p>Linux-based instances: 63 characters</p> </li> <li>
     * <p>Windows-based instances: 15 characters</p> </li> </ul>
     */
    inline const Aws::String& GetHostname() const { return m_hostname; }
    inline bool HostnameHasBeenSet() const { return m_hostnameHasBeenSet; }
    template<typename HostnameT = Aws::String>
    void SetHostname(HostnameT&& value) { m_hostnameHasBeenSet = true; m_hostname = std::forward<HostnameT>(value); }
    template<typename HostnameT = Aws::String>
    CreateInstanceRequest& WithHostname(HostnameT&& value) { SetHostname(std::forward<HostnameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance's operating system, which must be set to one of the
     * following.</p> <ul> <li> <p>A supported Linux operating system: An Amazon Linux
     * version, such as <code>Amazon Linux 2</code>, <code>Amazon Linux 2018.03</code>,
     * <code>Amazon Linux 2017.09</code>, <code>Amazon Linux 2017.03</code>,
     * <code>Amazon Linux 2016.09</code>, <code>Amazon Linux 2016.03</code>,
     * <code>Amazon Linux 2015.09</code>, or <code>Amazon Linux 2015.03</code>.</p>
     * </li> <li> <p>A supported Ubuntu operating system, such as <code>Ubuntu 18.04
     * LTS</code>, <code>Ubuntu 16.04 LTS</code>, <code>Ubuntu 14.04 LTS</code>, or
     * <code>Ubuntu 12.04 LTS</code>.</p> </li> <li> <p> <code>CentOS Linux 7</code>
     * </p> </li> <li> <p> <code>Red Hat Enterprise Linux 7</code> </p> </li> <li> <p>A
     * supported Windows operating system, such as <code>Microsoft Windows Server 2012
     * R2 Base</code>, <code>Microsoft Windows Server 2012 R2 with SQL Server
     * Express</code>, <code>Microsoft Windows Server 2012 R2 with SQL Server
     * Standard</code>, or <code>Microsoft Windows Server 2012 R2 with SQL Server
     * Web</code>.</p> </li> <li> <p>A custom AMI: <code>Custom</code>.</p> </li> </ul>
     * <p>Not all operating systems are supported with all versions of Chef. For more
     * information about the supported operating systems, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-os.html">OpsWorks
     * Stacks Operating Systems</a>.</p> <p>The default option is the current Amazon
     * Linux version. If you set this parameter to <code>Custom</code>, you must use
     * the <a>CreateInstance</a> action's AmiId parameter to specify the custom AMI
     * that you want to use. Block device mappings are not supported if the value is
     * <code>Custom</code>. For more information about how to use custom AMIs with
     * OpsWorks Stacks, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-custom-ami.html">Using
     * Custom AMIs</a>.</p>
     */
    inline const Aws::String& GetOs() const { return m_os; }
    inline bool OsHasBeenSet() const { return m_osHasBeenSet; }
    template<typename OsT = Aws::String>
    void SetOs(OsT&& value) { m_osHasBeenSet = true; m_os = std::forward<OsT>(value); }
    template<typename OsT = Aws::String>
    CreateInstanceRequest& WithOs(OsT&& value) { SetOs(std::forward<OsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A custom AMI ID to be used to create the instance. The AMI should be based on
     * one of the supported operating systems. For more information, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-custom-ami.html">Using
     * Custom AMIs</a>.</p>  <p>If you specify a custom AMI, you must set
     * <code>Os</code> to <code>Custom</code>.</p> 
     */
    inline const Aws::String& GetAmiId() const { return m_amiId; }
    inline bool AmiIdHasBeenSet() const { return m_amiIdHasBeenSet; }
    template<typename AmiIdT = Aws::String>
    void SetAmiId(AmiIdT&& value) { m_amiIdHasBeenSet = true; m_amiId = std::forward<AmiIdT>(value); }
    template<typename AmiIdT = Aws::String>
    CreateInstanceRequest& WithAmiId(AmiIdT&& value) { SetAmiId(std::forward<AmiIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance's Amazon EC2 key-pair name.</p>
     */
    inline const Aws::String& GetSshKeyName() const { return m_sshKeyName; }
    inline bool SshKeyNameHasBeenSet() const { return m_sshKeyNameHasBeenSet; }
    template<typename SshKeyNameT = Aws::String>
    void SetSshKeyName(SshKeyNameT&& value) { m_sshKeyNameHasBeenSet = true; m_sshKeyName = std::forward<SshKeyNameT>(value); }
    template<typename SshKeyNameT = Aws::String>
    CreateInstanceRequest& WithSshKeyName(SshKeyNameT&& value) { SetSshKeyName(std::forward<SshKeyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance Availability Zone. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    CreateInstanceRequest& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance's virtualization type, <code>paravirtual</code> or
     * <code>hvm</code>.</p>
     */
    inline const Aws::String& GetVirtualizationType() const { return m_virtualizationType; }
    inline bool VirtualizationTypeHasBeenSet() const { return m_virtualizationTypeHasBeenSet; }
    template<typename VirtualizationTypeT = Aws::String>
    void SetVirtualizationType(VirtualizationTypeT&& value) { m_virtualizationTypeHasBeenSet = true; m_virtualizationType = std::forward<VirtualizationTypeT>(value); }
    template<typename VirtualizationTypeT = Aws::String>
    CreateInstanceRequest& WithVirtualizationType(VirtualizationTypeT&& value) { SetVirtualizationType(std::forward<VirtualizationTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the instance's subnet. If the stack is running in a VPC, you can
     * use this parameter to override the stack's default subnet ID value and direct
     * OpsWorks Stacks to launch the instance in a different subnet.</p>
     */
    inline const Aws::String& GetSubnetId() const { return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    template<typename SubnetIdT = Aws::String>
    void SetSubnetId(SubnetIdT&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::forward<SubnetIdT>(value); }
    template<typename SubnetIdT = Aws::String>
    CreateInstanceRequest& WithSubnetId(SubnetIdT&& value) { SetSubnetId(std::forward<SubnetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance architecture. The default option is <code>x86_64</code>.
     * Instance types do not necessarily support both architectures. For a list of the
     * architectures that are supported by the different instance types, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * Families and Types</a>.</p>
     */
    inline Architecture GetArchitecture() const { return m_architecture; }
    inline bool ArchitectureHasBeenSet() const { return m_architectureHasBeenSet; }
    inline void SetArchitecture(Architecture value) { m_architectureHasBeenSet = true; m_architecture = value; }
    inline CreateInstanceRequest& WithArchitecture(Architecture value) { SetArchitecture(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance root device type. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ComponentsAMIs.html#storage-for-the-root-device">Storage
     * for the Root Device</a>.</p>
     */
    inline RootDeviceType GetRootDeviceType() const { return m_rootDeviceType; }
    inline bool RootDeviceTypeHasBeenSet() const { return m_rootDeviceTypeHasBeenSet; }
    inline void SetRootDeviceType(RootDeviceType value) { m_rootDeviceTypeHasBeenSet = true; m_rootDeviceType = value; }
    inline CreateInstanceRequest& WithRootDeviceType(RootDeviceType value) { SetRootDeviceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>BlockDeviceMapping</code> objects that specify the
     * instance's block devices. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/block-device-mapping-concepts.html">Block
     * Device Mapping</a>. Note that block device mappings are not supported for custom
     * AMIs.</p>
     */
    inline const Aws::Vector<BlockDeviceMapping>& GetBlockDeviceMappings() const { return m_blockDeviceMappings; }
    inline bool BlockDeviceMappingsHasBeenSet() const { return m_blockDeviceMappingsHasBeenSet; }
    template<typename BlockDeviceMappingsT = Aws::Vector<BlockDeviceMapping>>
    void SetBlockDeviceMappings(BlockDeviceMappingsT&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = std::forward<BlockDeviceMappingsT>(value); }
    template<typename BlockDeviceMappingsT = Aws::Vector<BlockDeviceMapping>>
    CreateInstanceRequest& WithBlockDeviceMappings(BlockDeviceMappingsT&& value) { SetBlockDeviceMappings(std::forward<BlockDeviceMappingsT>(value)); return *this;}
    template<typename BlockDeviceMappingsT = BlockDeviceMapping>
    CreateInstanceRequest& AddBlockDeviceMappings(BlockDeviceMappingsT&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.emplace_back(std::forward<BlockDeviceMappingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Whether to install operating system and package updates when the instance
     * boots. The default value is <code>true</code>. To control when updates are
     * installed, set this value to <code>false</code>. You must then update your
     * instances manually by using <a>CreateDeployment</a> to run the
     * <code>update_dependencies</code> stack command or by manually running
     * <code>yum</code> (Amazon Linux) or <code>apt-get</code> (Ubuntu) on the
     * instances. </p>  <p>We strongly recommend using the default value of
     * <code>true</code> to ensure that your instances have the latest security
     * updates.</p> 
     */
    inline bool GetInstallUpdatesOnBoot() const { return m_installUpdatesOnBoot; }
    inline bool InstallUpdatesOnBootHasBeenSet() const { return m_installUpdatesOnBootHasBeenSet; }
    inline void SetInstallUpdatesOnBoot(bool value) { m_installUpdatesOnBootHasBeenSet = true; m_installUpdatesOnBoot = value; }
    inline CreateInstanceRequest& WithInstallUpdatesOnBoot(bool value) { SetInstallUpdatesOnBoot(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to create an Amazon EBS-optimized instance.</p>
     */
    inline bool GetEbsOptimized() const { return m_ebsOptimized; }
    inline bool EbsOptimizedHasBeenSet() const { return m_ebsOptimizedHasBeenSet; }
    inline void SetEbsOptimized(bool value) { m_ebsOptimizedHasBeenSet = true; m_ebsOptimized = value; }
    inline CreateInstanceRequest& WithEbsOptimized(bool value) { SetEbsOptimized(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default OpsWorks Stacks agent version. You have the following
     * options:</p> <ul> <li> <p> <code>INHERIT</code> - Use the stack's default agent
     * version setting.</p> </li> <li> <p> <i>version_number</i> - Use the specified
     * agent version. This value overrides the stack's default setting. To update the
     * agent version, edit the instance configuration and specify a new version.
     * OpsWorks Stacks installs that version on the instance.</p> </li> </ul> <p>The
     * default setting is <code>INHERIT</code>. To specify an agent version, you must
     * use the complete version number, not the abbreviated number shown on the
     * console. For a list of available agent version numbers, call
     * <a>DescribeAgentVersions</a>. AgentVersion cannot be set to Chef 12.2.</p>
     */
    inline const Aws::String& GetAgentVersion() const { return m_agentVersion; }
    inline bool AgentVersionHasBeenSet() const { return m_agentVersionHasBeenSet; }
    template<typename AgentVersionT = Aws::String>
    void SetAgentVersion(AgentVersionT&& value) { m_agentVersionHasBeenSet = true; m_agentVersion = std::forward<AgentVersionT>(value); }
    template<typename AgentVersionT = Aws::String>
    CreateInstanceRequest& WithAgentVersion(AgentVersionT&& value) { SetAgentVersion(std::forward<AgentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance's tenancy option. The default option is no tenancy, or if the
     * instance is running in a VPC, inherit tenancy settings from the VPC. The
     * following are valid values for this parameter: <code>dedicated</code>,
     * <code>default</code>, or <code>host</code>. Because there are costs associated
     * with changes in tenancy options, we recommend that you research tenancy options
     * before choosing them for your instances. For more information about dedicated
     * hosts, see <a href="http://aws.amazon.com/ec2/dedicated-hosts/">Dedicated Hosts
     * Overview</a> and <a href="http://aws.amazon.com/ec2/dedicated-hosts/">Amazon EC2
     * Dedicated Hosts</a>. For more information about dedicated instances, see <a
     * href="https://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/dedicated-instance.html">Dedicated
     * Instances</a> and <a
     * href="http://aws.amazon.com/ec2/purchasing-options/dedicated-instances/">Amazon
     * EC2 Dedicated Instances</a>.</p>
     */
    inline const Aws::String& GetTenancy() const { return m_tenancy; }
    inline bool TenancyHasBeenSet() const { return m_tenancyHasBeenSet; }
    template<typename TenancyT = Aws::String>
    void SetTenancy(TenancyT&& value) { m_tenancyHasBeenSet = true; m_tenancy = std::forward<TenancyT>(value); }
    template<typename TenancyT = Aws::String>
    CreateInstanceRequest& WithTenancy(TenancyT&& value) { SetTenancy(std::forward<TenancyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_layerIds;
    bool m_layerIdsHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    AutoScalingType m_autoScalingType{AutoScalingType::NOT_SET};
    bool m_autoScalingTypeHasBeenSet = false;

    Aws::String m_hostname;
    bool m_hostnameHasBeenSet = false;

    Aws::String m_os;
    bool m_osHasBeenSet = false;

    Aws::String m_amiId;
    bool m_amiIdHasBeenSet = false;

    Aws::String m_sshKeyName;
    bool m_sshKeyNameHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_virtualizationType;
    bool m_virtualizationTypeHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    Architecture m_architecture{Architecture::NOT_SET};
    bool m_architectureHasBeenSet = false;

    RootDeviceType m_rootDeviceType{RootDeviceType::NOT_SET};
    bool m_rootDeviceTypeHasBeenSet = false;

    Aws::Vector<BlockDeviceMapping> m_blockDeviceMappings;
    bool m_blockDeviceMappingsHasBeenSet = false;

    bool m_installUpdatesOnBoot{false};
    bool m_installUpdatesOnBootHasBeenSet = false;

    bool m_ebsOptimized{false};
    bool m_ebsOptimizedHasBeenSet = false;

    Aws::String m_agentVersion;
    bool m_agentVersionHasBeenSet = false;

    Aws::String m_tenancy;
    bool m_tenancyHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
