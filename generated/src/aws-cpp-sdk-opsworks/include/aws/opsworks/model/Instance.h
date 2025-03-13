/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opsworks/model/Architecture.h>
#include <aws/opsworks/model/AutoScalingType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opsworks/model/ReportedOs.h>
#include <aws/opsworks/model/RootDeviceType.h>
#include <aws/opsworks/model/VirtualizationType.h>
#include <aws/opsworks/model/BlockDeviceMapping.h>
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
   * <p>Describes an instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/Instance">AWS
   * API Reference</a></p>
   */
  class Instance
  {
  public:
    AWS_OPSWORKS_API Instance() = default;
    AWS_OPSWORKS_API Instance(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API Instance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The agent version. This parameter is set to <code>INHERIT</code> if the
     * instance inherits the default stack setting or to a a version number for a fixed
     * agent version.</p>
     */
    inline const Aws::String& GetAgentVersion() const { return m_agentVersion; }
    inline bool AgentVersionHasBeenSet() const { return m_agentVersionHasBeenSet; }
    template<typename AgentVersionT = Aws::String>
    void SetAgentVersion(AgentVersionT&& value) { m_agentVersionHasBeenSet = true; m_agentVersion = std::forward<AgentVersionT>(value); }
    template<typename AgentVersionT = Aws::String>
    Instance& WithAgentVersion(AgentVersionT&& value) { SetAgentVersion(std::forward<AgentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A custom AMI ID to be used to create the instance. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-custom-ami.html">Instances</a>
     * </p>
     */
    inline const Aws::String& GetAmiId() const { return m_amiId; }
    inline bool AmiIdHasBeenSet() const { return m_amiIdHasBeenSet; }
    template<typename AmiIdT = Aws::String>
    void SetAmiId(AmiIdT&& value) { m_amiIdHasBeenSet = true; m_amiId = std::forward<AmiIdT>(value); }
    template<typename AmiIdT = Aws::String>
    Instance& WithAmiId(AmiIdT&& value) { SetAmiId(std::forward<AmiIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance architecture: "i386" or "x86_64".</p>
     */
    inline Architecture GetArchitecture() const { return m_architecture; }
    inline bool ArchitectureHasBeenSet() const { return m_architectureHasBeenSet; }
    inline void SetArchitecture(Architecture value) { m_architectureHasBeenSet = true; m_architecture = value; }
    inline Instance& WithArchitecture(Architecture value) { SetArchitecture(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance's Amazon Resource Number (ARN).</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Instance& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For load-based or time-based instances, the type.</p>
     */
    inline AutoScalingType GetAutoScalingType() const { return m_autoScalingType; }
    inline bool AutoScalingTypeHasBeenSet() const { return m_autoScalingTypeHasBeenSet; }
    inline void SetAutoScalingType(AutoScalingType value) { m_autoScalingTypeHasBeenSet = true; m_autoScalingType = value; }
    inline Instance& WithAutoScalingType(AutoScalingType value) { SetAutoScalingType(value); return *this;}
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
    Instance& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>BlockDeviceMapping</code> objects that specify the
     * instance's block device mappings.</p>
     */
    inline const Aws::Vector<BlockDeviceMapping>& GetBlockDeviceMappings() const { return m_blockDeviceMappings; }
    inline bool BlockDeviceMappingsHasBeenSet() const { return m_blockDeviceMappingsHasBeenSet; }
    template<typename BlockDeviceMappingsT = Aws::Vector<BlockDeviceMapping>>
    void SetBlockDeviceMappings(BlockDeviceMappingsT&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = std::forward<BlockDeviceMappingsT>(value); }
    template<typename BlockDeviceMappingsT = Aws::Vector<BlockDeviceMapping>>
    Instance& WithBlockDeviceMappings(BlockDeviceMappingsT&& value) { SetBlockDeviceMappings(std::forward<BlockDeviceMappingsT>(value)); return *this;}
    template<typename BlockDeviceMappingsT = BlockDeviceMapping>
    Instance& AddBlockDeviceMappings(BlockDeviceMappingsT&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.emplace_back(std::forward<BlockDeviceMappingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time that the instance was created.</p>
     */
    inline const Aws::String& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::String>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::String>
    Instance& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether this is an Amazon EBS-optimized instance.</p>
     */
    inline bool GetEbsOptimized() const { return m_ebsOptimized; }
    inline bool EbsOptimizedHasBeenSet() const { return m_ebsOptimizedHasBeenSet; }
    inline void SetEbsOptimized(bool value) { m_ebsOptimizedHasBeenSet = true; m_ebsOptimized = value; }
    inline Instance& WithEbsOptimized(bool value) { SetEbsOptimized(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the associated Amazon EC2 instance.</p>
     */
    inline const Aws::String& GetEc2InstanceId() const { return m_ec2InstanceId; }
    inline bool Ec2InstanceIdHasBeenSet() const { return m_ec2InstanceIdHasBeenSet; }
    template<typename Ec2InstanceIdT = Aws::String>
    void SetEc2InstanceId(Ec2InstanceIdT&& value) { m_ec2InstanceIdHasBeenSet = true; m_ec2InstanceId = std::forward<Ec2InstanceIdT>(value); }
    template<typename Ec2InstanceIdT = Aws::String>
    Instance& WithEc2InstanceId(Ec2InstanceIdT&& value) { SetEc2InstanceId(std::forward<Ec2InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For container instances, the Amazon ECS cluster's ARN.</p>
     */
    inline const Aws::String& GetEcsClusterArn() const { return m_ecsClusterArn; }
    inline bool EcsClusterArnHasBeenSet() const { return m_ecsClusterArnHasBeenSet; }
    template<typename EcsClusterArnT = Aws::String>
    void SetEcsClusterArn(EcsClusterArnT&& value) { m_ecsClusterArnHasBeenSet = true; m_ecsClusterArn = std::forward<EcsClusterArnT>(value); }
    template<typename EcsClusterArnT = Aws::String>
    Instance& WithEcsClusterArn(EcsClusterArnT&& value) { SetEcsClusterArn(std::forward<EcsClusterArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For container instances, the instance's ARN.</p>
     */
    inline const Aws::String& GetEcsContainerInstanceArn() const { return m_ecsContainerInstanceArn; }
    inline bool EcsContainerInstanceArnHasBeenSet() const { return m_ecsContainerInstanceArnHasBeenSet; }
    template<typename EcsContainerInstanceArnT = Aws::String>
    void SetEcsContainerInstanceArn(EcsContainerInstanceArnT&& value) { m_ecsContainerInstanceArnHasBeenSet = true; m_ecsContainerInstanceArn = std::forward<EcsContainerInstanceArnT>(value); }
    template<typename EcsContainerInstanceArnT = Aws::String>
    Instance& WithEcsContainerInstanceArn(EcsContainerInstanceArnT&& value) { SetEcsContainerInstanceArn(std::forward<EcsContainerInstanceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/elastic-ip-addresses-eip.html">Elastic
     * IP address</a>.</p>
     */
    inline const Aws::String& GetElasticIp() const { return m_elasticIp; }
    inline bool ElasticIpHasBeenSet() const { return m_elasticIpHasBeenSet; }
    template<typename ElasticIpT = Aws::String>
    void SetElasticIp(ElasticIpT&& value) { m_elasticIpHasBeenSet = true; m_elasticIp = std::forward<ElasticIpT>(value); }
    template<typename ElasticIpT = Aws::String>
    Instance& WithElasticIp(ElasticIpT&& value) { SetElasticIp(std::forward<ElasticIpT>(value)); return *this;}
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
    Instance& WithHostname(HostnameT&& value) { SetHostname(std::forward<HostnameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For registered instances, the infrastructure class: <code>ec2</code> or
     * <code>on-premises</code>.</p>
     */
    inline const Aws::String& GetInfrastructureClass() const { return m_infrastructureClass; }
    inline bool InfrastructureClassHasBeenSet() const { return m_infrastructureClassHasBeenSet; }
    template<typename InfrastructureClassT = Aws::String>
    void SetInfrastructureClass(InfrastructureClassT&& value) { m_infrastructureClassHasBeenSet = true; m_infrastructureClass = std::forward<InfrastructureClassT>(value); }
    template<typename InfrastructureClassT = Aws::String>
    Instance& WithInfrastructureClass(InfrastructureClassT&& value) { SetInfrastructureClass(std::forward<InfrastructureClassT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to install operating system and package updates when the instance
     * boots. The default value is <code>true</code>. If this value is set to
     * <code>false</code>, you must update instances manually by using
     * <a>CreateDeployment</a> to run the <code>update_dependencies</code> stack
     * command or by manually running <code>yum</code> (Amazon Linux) or
     * <code>apt-get</code> (Ubuntu) on the instances. </p>  <p>We strongly
     * recommend using the default value of <code>true</code> to ensure that your
     * instances have the latest security updates.</p> 
     */
    inline bool GetInstallUpdatesOnBoot() const { return m_installUpdatesOnBoot; }
    inline bool InstallUpdatesOnBootHasBeenSet() const { return m_installUpdatesOnBootHasBeenSet; }
    inline void SetInstallUpdatesOnBoot(bool value) { m_installUpdatesOnBootHasBeenSet = true; m_installUpdatesOnBoot = value; }
    inline Instance& WithInstallUpdatesOnBoot(bool value) { SetInstallUpdatesOnBoot(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance ID.</p>
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
     * <p>The ARN of the instance's IAM profile. For more information about IAM ARNs,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p>
     */
    inline const Aws::String& GetInstanceProfileArn() const { return m_instanceProfileArn; }
    inline bool InstanceProfileArnHasBeenSet() const { return m_instanceProfileArnHasBeenSet; }
    template<typename InstanceProfileArnT = Aws::String>
    void SetInstanceProfileArn(InstanceProfileArnT&& value) { m_instanceProfileArnHasBeenSet = true; m_instanceProfileArn = std::forward<InstanceProfileArnT>(value); }
    template<typename InstanceProfileArnT = Aws::String>
    Instance& WithInstanceProfileArn(InstanceProfileArnT&& value) { SetInstanceProfileArn(std::forward<InstanceProfileArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type, such as <code>t2.micro</code>.</p>
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
     * <p>The ID of the last service error. For more information, call
     * <a>DescribeServiceErrors</a>.</p>
     */
    inline const Aws::String& GetLastServiceErrorId() const { return m_lastServiceErrorId; }
    inline bool LastServiceErrorIdHasBeenSet() const { return m_lastServiceErrorIdHasBeenSet; }
    template<typename LastServiceErrorIdT = Aws::String>
    void SetLastServiceErrorId(LastServiceErrorIdT&& value) { m_lastServiceErrorIdHasBeenSet = true; m_lastServiceErrorId = std::forward<LastServiceErrorIdT>(value); }
    template<typename LastServiceErrorIdT = Aws::String>
    Instance& WithLastServiceErrorId(LastServiceErrorIdT&& value) { SetLastServiceErrorId(std::forward<LastServiceErrorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array containing the instance layer IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLayerIds() const { return m_layerIds; }
    inline bool LayerIdsHasBeenSet() const { return m_layerIdsHasBeenSet; }
    template<typename LayerIdsT = Aws::Vector<Aws::String>>
    void SetLayerIds(LayerIdsT&& value) { m_layerIdsHasBeenSet = true; m_layerIds = std::forward<LayerIdsT>(value); }
    template<typename LayerIdsT = Aws::Vector<Aws::String>>
    Instance& WithLayerIds(LayerIdsT&& value) { SetLayerIds(std::forward<LayerIdsT>(value)); return *this;}
    template<typename LayerIdsT = Aws::String>
    Instance& AddLayerIds(LayerIdsT&& value) { m_layerIdsHasBeenSet = true; m_layerIds.emplace_back(std::forward<LayerIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The instance's operating system.</p>
     */
    inline const Aws::String& GetOs() const { return m_os; }
    inline bool OsHasBeenSet() const { return m_osHasBeenSet; }
    template<typename OsT = Aws::String>
    void SetOs(OsT&& value) { m_osHasBeenSet = true; m_os = std::forward<OsT>(value); }
    template<typename OsT = Aws::String>
    Instance& WithOs(OsT&& value) { SetOs(std::forward<OsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance's platform.</p>
     */
    inline const Aws::String& GetPlatform() const { return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    template<typename PlatformT = Aws::String>
    void SetPlatform(PlatformT&& value) { m_platformHasBeenSet = true; m_platform = std::forward<PlatformT>(value); }
    template<typename PlatformT = Aws::String>
    Instance& WithPlatform(PlatformT&& value) { SetPlatform(std::forward<PlatformT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance's private DNS name.</p>
     */
    inline const Aws::String& GetPrivateDns() const { return m_privateDns; }
    inline bool PrivateDnsHasBeenSet() const { return m_privateDnsHasBeenSet; }
    template<typename PrivateDnsT = Aws::String>
    void SetPrivateDns(PrivateDnsT&& value) { m_privateDnsHasBeenSet = true; m_privateDns = std::forward<PrivateDnsT>(value); }
    template<typename PrivateDnsT = Aws::String>
    Instance& WithPrivateDns(PrivateDnsT&& value) { SetPrivateDns(std::forward<PrivateDnsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance's private IP address.</p>
     */
    inline const Aws::String& GetPrivateIp() const { return m_privateIp; }
    inline bool PrivateIpHasBeenSet() const { return m_privateIpHasBeenSet; }
    template<typename PrivateIpT = Aws::String>
    void SetPrivateIp(PrivateIpT&& value) { m_privateIpHasBeenSet = true; m_privateIp = std::forward<PrivateIpT>(value); }
    template<typename PrivateIpT = Aws::String>
    Instance& WithPrivateIp(PrivateIpT&& value) { SetPrivateIp(std::forward<PrivateIpT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance public DNS name.</p>
     */
    inline const Aws::String& GetPublicDns() const { return m_publicDns; }
    inline bool PublicDnsHasBeenSet() const { return m_publicDnsHasBeenSet; }
    template<typename PublicDnsT = Aws::String>
    void SetPublicDns(PublicDnsT&& value) { m_publicDnsHasBeenSet = true; m_publicDns = std::forward<PublicDnsT>(value); }
    template<typename PublicDnsT = Aws::String>
    Instance& WithPublicDns(PublicDnsT&& value) { SetPublicDns(std::forward<PublicDnsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance public IP address.</p>
     */
    inline const Aws::String& GetPublicIp() const { return m_publicIp; }
    inline bool PublicIpHasBeenSet() const { return m_publicIpHasBeenSet; }
    template<typename PublicIpT = Aws::String>
    void SetPublicIp(PublicIpT&& value) { m_publicIpHasBeenSet = true; m_publicIp = std::forward<PublicIpT>(value); }
    template<typename PublicIpT = Aws::String>
    Instance& WithPublicIp(PublicIpT&& value) { SetPublicIp(std::forward<PublicIpT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For registered instances, who performed the registration.</p>
     */
    inline const Aws::String& GetRegisteredBy() const { return m_registeredBy; }
    inline bool RegisteredByHasBeenSet() const { return m_registeredByHasBeenSet; }
    template<typename RegisteredByT = Aws::String>
    void SetRegisteredBy(RegisteredByT&& value) { m_registeredByHasBeenSet = true; m_registeredBy = std::forward<RegisteredByT>(value); }
    template<typename RegisteredByT = Aws::String>
    Instance& WithRegisteredBy(RegisteredByT&& value) { SetRegisteredBy(std::forward<RegisteredByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance's reported OpsWorks Stacks agent version.</p>
     */
    inline const Aws::String& GetReportedAgentVersion() const { return m_reportedAgentVersion; }
    inline bool ReportedAgentVersionHasBeenSet() const { return m_reportedAgentVersionHasBeenSet; }
    template<typename ReportedAgentVersionT = Aws::String>
    void SetReportedAgentVersion(ReportedAgentVersionT&& value) { m_reportedAgentVersionHasBeenSet = true; m_reportedAgentVersion = std::forward<ReportedAgentVersionT>(value); }
    template<typename ReportedAgentVersionT = Aws::String>
    Instance& WithReportedAgentVersion(ReportedAgentVersionT&& value) { SetReportedAgentVersion(std::forward<ReportedAgentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For registered instances, the reported operating system.</p>
     */
    inline const ReportedOs& GetReportedOs() const { return m_reportedOs; }
    inline bool ReportedOsHasBeenSet() const { return m_reportedOsHasBeenSet; }
    template<typename ReportedOsT = ReportedOs>
    void SetReportedOs(ReportedOsT&& value) { m_reportedOsHasBeenSet = true; m_reportedOs = std::forward<ReportedOsT>(value); }
    template<typename ReportedOsT = ReportedOs>
    Instance& WithReportedOs(ReportedOsT&& value) { SetReportedOs(std::forward<ReportedOsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance's root device type. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ComponentsAMIs.html#storage-for-the-root-device">Storage
     * for the Root Device</a>.</p>
     */
    inline RootDeviceType GetRootDeviceType() const { return m_rootDeviceType; }
    inline bool RootDeviceTypeHasBeenSet() const { return m_rootDeviceTypeHasBeenSet; }
    inline void SetRootDeviceType(RootDeviceType value) { m_rootDeviceTypeHasBeenSet = true; m_rootDeviceType = value; }
    inline Instance& WithRootDeviceType(RootDeviceType value) { SetRootDeviceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The root device volume ID.</p>
     */
    inline const Aws::String& GetRootDeviceVolumeId() const { return m_rootDeviceVolumeId; }
    inline bool RootDeviceVolumeIdHasBeenSet() const { return m_rootDeviceVolumeIdHasBeenSet; }
    template<typename RootDeviceVolumeIdT = Aws::String>
    void SetRootDeviceVolumeId(RootDeviceVolumeIdT&& value) { m_rootDeviceVolumeIdHasBeenSet = true; m_rootDeviceVolumeId = std::forward<RootDeviceVolumeIdT>(value); }
    template<typename RootDeviceVolumeIdT = Aws::String>
    Instance& WithRootDeviceVolumeId(RootDeviceVolumeIdT&& value) { SetRootDeviceVolumeId(std::forward<RootDeviceVolumeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array containing the instance security group IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const { return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::forward<SecurityGroupIdsT>(value); }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    Instance& WithSecurityGroupIds(SecurityGroupIdsT&& value) { SetSecurityGroupIds(std::forward<SecurityGroupIdsT>(value)); return *this;}
    template<typename SecurityGroupIdsT = Aws::String>
    Instance& AddSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.emplace_back(std::forward<SecurityGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The SSH key's Deep Security Agent (DSA) fingerprint.</p>
     */
    inline const Aws::String& GetSshHostDsaKeyFingerprint() const { return m_sshHostDsaKeyFingerprint; }
    inline bool SshHostDsaKeyFingerprintHasBeenSet() const { return m_sshHostDsaKeyFingerprintHasBeenSet; }
    template<typename SshHostDsaKeyFingerprintT = Aws::String>
    void SetSshHostDsaKeyFingerprint(SshHostDsaKeyFingerprintT&& value) { m_sshHostDsaKeyFingerprintHasBeenSet = true; m_sshHostDsaKeyFingerprint = std::forward<SshHostDsaKeyFingerprintT>(value); }
    template<typename SshHostDsaKeyFingerprintT = Aws::String>
    Instance& WithSshHostDsaKeyFingerprint(SshHostDsaKeyFingerprintT&& value) { SetSshHostDsaKeyFingerprint(std::forward<SshHostDsaKeyFingerprintT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SSH key's RSA fingerprint.</p>
     */
    inline const Aws::String& GetSshHostRsaKeyFingerprint() const { return m_sshHostRsaKeyFingerprint; }
    inline bool SshHostRsaKeyFingerprintHasBeenSet() const { return m_sshHostRsaKeyFingerprintHasBeenSet; }
    template<typename SshHostRsaKeyFingerprintT = Aws::String>
    void SetSshHostRsaKeyFingerprint(SshHostRsaKeyFingerprintT&& value) { m_sshHostRsaKeyFingerprintHasBeenSet = true; m_sshHostRsaKeyFingerprint = std::forward<SshHostRsaKeyFingerprintT>(value); }
    template<typename SshHostRsaKeyFingerprintT = Aws::String>
    Instance& WithSshHostRsaKeyFingerprint(SshHostRsaKeyFingerprintT&& value) { SetSshHostRsaKeyFingerprint(std::forward<SshHostRsaKeyFingerprintT>(value)); return *this;}
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
    Instance& WithSshKeyName(SshKeyNameT&& value) { SetSshKeyName(std::forward<SshKeyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stack ID.</p>
     */
    inline const Aws::String& GetStackId() const { return m_stackId; }
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }
    template<typename StackIdT = Aws::String>
    void SetStackId(StackIdT&& value) { m_stackIdHasBeenSet = true; m_stackId = std::forward<StackIdT>(value); }
    template<typename StackIdT = Aws::String>
    Instance& WithStackId(StackIdT&& value) { SetStackId(std::forward<StackIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance status:</p> <ul> <li> <p> <code>booting</code> </p> </li> <li>
     * <p> <code>connection_lost</code> </p> </li> <li> <p> <code>online</code> </p>
     * </li> <li> <p> <code>pending</code> </p> </li> <li> <p> <code>rebooting</code>
     * </p> </li> <li> <p> <code>requested</code> </p> </li> <li> <p>
     * <code>running_setup</code> </p> </li> <li> <p> <code>setup_failed</code> </p>
     * </li> <li> <p> <code>shutting_down</code> </p> </li> <li> <p>
     * <code>start_failed</code> </p> </li> <li> <p> <code>stop_failed</code> </p>
     * </li> <li> <p> <code>stopped</code> </p> </li> <li> <p> <code>stopping</code>
     * </p> </li> <li> <p> <code>terminated</code> </p> </li> <li> <p>
     * <code>terminating</code> </p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    Instance& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance's subnet ID; applicable only if the stack is running in a
     * VPC.</p>
     */
    inline const Aws::String& GetSubnetId() const { return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    template<typename SubnetIdT = Aws::String>
    void SetSubnetId(SubnetIdT&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::forward<SubnetIdT>(value); }
    template<typename SubnetIdT = Aws::String>
    Instance& WithSubnetId(SubnetIdT&& value) { SetSubnetId(std::forward<SubnetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance's tenancy option, such as <code>dedicated</code> or
     * <code>host</code>.</p>
     */
    inline const Aws::String& GetTenancy() const { return m_tenancy; }
    inline bool TenancyHasBeenSet() const { return m_tenancyHasBeenSet; }
    template<typename TenancyT = Aws::String>
    void SetTenancy(TenancyT&& value) { m_tenancyHasBeenSet = true; m_tenancy = std::forward<TenancyT>(value); }
    template<typename TenancyT = Aws::String>
    Instance& WithTenancy(TenancyT&& value) { SetTenancy(std::forward<TenancyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance's virtualization type: <code>paravirtual</code> or
     * <code>hvm</code>.</p>
     */
    inline VirtualizationType GetVirtualizationType() const { return m_virtualizationType; }
    inline bool VirtualizationTypeHasBeenSet() const { return m_virtualizationTypeHasBeenSet; }
    inline void SetVirtualizationType(VirtualizationType value) { m_virtualizationTypeHasBeenSet = true; m_virtualizationType = value; }
    inline Instance& WithVirtualizationType(VirtualizationType value) { SetVirtualizationType(value); return *this;}
    ///@}
  private:

    Aws::String m_agentVersion;
    bool m_agentVersionHasBeenSet = false;

    Aws::String m_amiId;
    bool m_amiIdHasBeenSet = false;

    Architecture m_architecture{Architecture::NOT_SET};
    bool m_architectureHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    AutoScalingType m_autoScalingType{AutoScalingType::NOT_SET};
    bool m_autoScalingTypeHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::Vector<BlockDeviceMapping> m_blockDeviceMappings;
    bool m_blockDeviceMappingsHasBeenSet = false;

    Aws::String m_createdAt;
    bool m_createdAtHasBeenSet = false;

    bool m_ebsOptimized{false};
    bool m_ebsOptimizedHasBeenSet = false;

    Aws::String m_ec2InstanceId;
    bool m_ec2InstanceIdHasBeenSet = false;

    Aws::String m_ecsClusterArn;
    bool m_ecsClusterArnHasBeenSet = false;

    Aws::String m_ecsContainerInstanceArn;
    bool m_ecsContainerInstanceArnHasBeenSet = false;

    Aws::String m_elasticIp;
    bool m_elasticIpHasBeenSet = false;

    Aws::String m_hostname;
    bool m_hostnameHasBeenSet = false;

    Aws::String m_infrastructureClass;
    bool m_infrastructureClassHasBeenSet = false;

    bool m_installUpdatesOnBoot{false};
    bool m_installUpdatesOnBootHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_instanceProfileArn;
    bool m_instanceProfileArnHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_lastServiceErrorId;
    bool m_lastServiceErrorIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_layerIds;
    bool m_layerIdsHasBeenSet = false;

    Aws::String m_os;
    bool m_osHasBeenSet = false;

    Aws::String m_platform;
    bool m_platformHasBeenSet = false;

    Aws::String m_privateDns;
    bool m_privateDnsHasBeenSet = false;

    Aws::String m_privateIp;
    bool m_privateIpHasBeenSet = false;

    Aws::String m_publicDns;
    bool m_publicDnsHasBeenSet = false;

    Aws::String m_publicIp;
    bool m_publicIpHasBeenSet = false;

    Aws::String m_registeredBy;
    bool m_registeredByHasBeenSet = false;

    Aws::String m_reportedAgentVersion;
    bool m_reportedAgentVersionHasBeenSet = false;

    ReportedOs m_reportedOs;
    bool m_reportedOsHasBeenSet = false;

    RootDeviceType m_rootDeviceType{RootDeviceType::NOT_SET};
    bool m_rootDeviceTypeHasBeenSet = false;

    Aws::String m_rootDeviceVolumeId;
    bool m_rootDeviceVolumeIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    Aws::String m_sshHostDsaKeyFingerprint;
    bool m_sshHostDsaKeyFingerprintHasBeenSet = false;

    Aws::String m_sshHostRsaKeyFingerprint;
    bool m_sshHostRsaKeyFingerprintHasBeenSet = false;

    Aws::String m_sshKeyName;
    bool m_sshKeyNameHasBeenSet = false;

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    Aws::String m_tenancy;
    bool m_tenancyHasBeenSet = false;

    VirtualizationType m_virtualizationType{VirtualizationType::NOT_SET};
    bool m_virtualizationTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
