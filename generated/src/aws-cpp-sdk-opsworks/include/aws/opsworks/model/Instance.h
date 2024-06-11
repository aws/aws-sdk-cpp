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
    AWS_OPSWORKS_API Instance();
    AWS_OPSWORKS_API Instance(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API Instance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The agent version. This parameter is set to <code>INHERIT</code> if the
     * instance inherits the default stack setting or to a a version number for a fixed
     * agent version.</p>
     */
    inline const Aws::String& GetAgentVersion() const{ return m_agentVersion; }
    inline bool AgentVersionHasBeenSet() const { return m_agentVersionHasBeenSet; }
    inline void SetAgentVersion(const Aws::String& value) { m_agentVersionHasBeenSet = true; m_agentVersion = value; }
    inline void SetAgentVersion(Aws::String&& value) { m_agentVersionHasBeenSet = true; m_agentVersion = std::move(value); }
    inline void SetAgentVersion(const char* value) { m_agentVersionHasBeenSet = true; m_agentVersion.assign(value); }
    inline Instance& WithAgentVersion(const Aws::String& value) { SetAgentVersion(value); return *this;}
    inline Instance& WithAgentVersion(Aws::String&& value) { SetAgentVersion(std::move(value)); return *this;}
    inline Instance& WithAgentVersion(const char* value) { SetAgentVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A custom AMI ID to be used to create the instance. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-custom-ami.html">Instances</a>
     * </p>
     */
    inline const Aws::String& GetAmiId() const{ return m_amiId; }
    inline bool AmiIdHasBeenSet() const { return m_amiIdHasBeenSet; }
    inline void SetAmiId(const Aws::String& value) { m_amiIdHasBeenSet = true; m_amiId = value; }
    inline void SetAmiId(Aws::String&& value) { m_amiIdHasBeenSet = true; m_amiId = std::move(value); }
    inline void SetAmiId(const char* value) { m_amiIdHasBeenSet = true; m_amiId.assign(value); }
    inline Instance& WithAmiId(const Aws::String& value) { SetAmiId(value); return *this;}
    inline Instance& WithAmiId(Aws::String&& value) { SetAmiId(std::move(value)); return *this;}
    inline Instance& WithAmiId(const char* value) { SetAmiId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance architecture: "i386" or "x86_64".</p>
     */
    inline const Architecture& GetArchitecture() const{ return m_architecture; }
    inline bool ArchitectureHasBeenSet() const { return m_architectureHasBeenSet; }
    inline void SetArchitecture(const Architecture& value) { m_architectureHasBeenSet = true; m_architecture = value; }
    inline void SetArchitecture(Architecture&& value) { m_architectureHasBeenSet = true; m_architecture = std::move(value); }
    inline Instance& WithArchitecture(const Architecture& value) { SetArchitecture(value); return *this;}
    inline Instance& WithArchitecture(Architecture&& value) { SetArchitecture(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance's Amazon Resource Number (ARN).</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline Instance& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline Instance& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline Instance& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For load-based or time-based instances, the type.</p>
     */
    inline const AutoScalingType& GetAutoScalingType() const{ return m_autoScalingType; }
    inline bool AutoScalingTypeHasBeenSet() const { return m_autoScalingTypeHasBeenSet; }
    inline void SetAutoScalingType(const AutoScalingType& value) { m_autoScalingTypeHasBeenSet = true; m_autoScalingType = value; }
    inline void SetAutoScalingType(AutoScalingType&& value) { m_autoScalingTypeHasBeenSet = true; m_autoScalingType = std::move(value); }
    inline Instance& WithAutoScalingType(const AutoScalingType& value) { SetAutoScalingType(value); return *this;}
    inline Instance& WithAutoScalingType(AutoScalingType&& value) { SetAutoScalingType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance Availability Zone. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }
    inline Instance& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline Instance& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline Instance& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>BlockDeviceMapping</code> objects that specify the
     * instance's block device mappings.</p>
     */
    inline const Aws::Vector<BlockDeviceMapping>& GetBlockDeviceMappings() const{ return m_blockDeviceMappings; }
    inline bool BlockDeviceMappingsHasBeenSet() const { return m_blockDeviceMappingsHasBeenSet; }
    inline void SetBlockDeviceMappings(const Aws::Vector<BlockDeviceMapping>& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = value; }
    inline void SetBlockDeviceMappings(Aws::Vector<BlockDeviceMapping>&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = std::move(value); }
    inline Instance& WithBlockDeviceMappings(const Aws::Vector<BlockDeviceMapping>& value) { SetBlockDeviceMappings(value); return *this;}
    inline Instance& WithBlockDeviceMappings(Aws::Vector<BlockDeviceMapping>&& value) { SetBlockDeviceMappings(std::move(value)); return *this;}
    inline Instance& AddBlockDeviceMappings(const BlockDeviceMapping& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.push_back(value); return *this; }
    inline Instance& AddBlockDeviceMappings(BlockDeviceMapping&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time that the instance was created.</p>
     */
    inline const Aws::String& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::String& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::String&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline void SetCreatedAt(const char* value) { m_createdAtHasBeenSet = true; m_createdAt.assign(value); }
    inline Instance& WithCreatedAt(const Aws::String& value) { SetCreatedAt(value); return *this;}
    inline Instance& WithCreatedAt(Aws::String&& value) { SetCreatedAt(std::move(value)); return *this;}
    inline Instance& WithCreatedAt(const char* value) { SetCreatedAt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether this is an Amazon EBS-optimized instance.</p>
     */
    inline bool GetEbsOptimized() const{ return m_ebsOptimized; }
    inline bool EbsOptimizedHasBeenSet() const { return m_ebsOptimizedHasBeenSet; }
    inline void SetEbsOptimized(bool value) { m_ebsOptimizedHasBeenSet = true; m_ebsOptimized = value; }
    inline Instance& WithEbsOptimized(bool value) { SetEbsOptimized(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the associated Amazon EC2 instance.</p>
     */
    inline const Aws::String& GetEc2InstanceId() const{ return m_ec2InstanceId; }
    inline bool Ec2InstanceIdHasBeenSet() const { return m_ec2InstanceIdHasBeenSet; }
    inline void SetEc2InstanceId(const Aws::String& value) { m_ec2InstanceIdHasBeenSet = true; m_ec2InstanceId = value; }
    inline void SetEc2InstanceId(Aws::String&& value) { m_ec2InstanceIdHasBeenSet = true; m_ec2InstanceId = std::move(value); }
    inline void SetEc2InstanceId(const char* value) { m_ec2InstanceIdHasBeenSet = true; m_ec2InstanceId.assign(value); }
    inline Instance& WithEc2InstanceId(const Aws::String& value) { SetEc2InstanceId(value); return *this;}
    inline Instance& WithEc2InstanceId(Aws::String&& value) { SetEc2InstanceId(std::move(value)); return *this;}
    inline Instance& WithEc2InstanceId(const char* value) { SetEc2InstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For container instances, the Amazon ECS cluster's ARN.</p>
     */
    inline const Aws::String& GetEcsClusterArn() const{ return m_ecsClusterArn; }
    inline bool EcsClusterArnHasBeenSet() const { return m_ecsClusterArnHasBeenSet; }
    inline void SetEcsClusterArn(const Aws::String& value) { m_ecsClusterArnHasBeenSet = true; m_ecsClusterArn = value; }
    inline void SetEcsClusterArn(Aws::String&& value) { m_ecsClusterArnHasBeenSet = true; m_ecsClusterArn = std::move(value); }
    inline void SetEcsClusterArn(const char* value) { m_ecsClusterArnHasBeenSet = true; m_ecsClusterArn.assign(value); }
    inline Instance& WithEcsClusterArn(const Aws::String& value) { SetEcsClusterArn(value); return *this;}
    inline Instance& WithEcsClusterArn(Aws::String&& value) { SetEcsClusterArn(std::move(value)); return *this;}
    inline Instance& WithEcsClusterArn(const char* value) { SetEcsClusterArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For container instances, the instance's ARN.</p>
     */
    inline const Aws::String& GetEcsContainerInstanceArn() const{ return m_ecsContainerInstanceArn; }
    inline bool EcsContainerInstanceArnHasBeenSet() const { return m_ecsContainerInstanceArnHasBeenSet; }
    inline void SetEcsContainerInstanceArn(const Aws::String& value) { m_ecsContainerInstanceArnHasBeenSet = true; m_ecsContainerInstanceArn = value; }
    inline void SetEcsContainerInstanceArn(Aws::String&& value) { m_ecsContainerInstanceArnHasBeenSet = true; m_ecsContainerInstanceArn = std::move(value); }
    inline void SetEcsContainerInstanceArn(const char* value) { m_ecsContainerInstanceArnHasBeenSet = true; m_ecsContainerInstanceArn.assign(value); }
    inline Instance& WithEcsContainerInstanceArn(const Aws::String& value) { SetEcsContainerInstanceArn(value); return *this;}
    inline Instance& WithEcsContainerInstanceArn(Aws::String&& value) { SetEcsContainerInstanceArn(std::move(value)); return *this;}
    inline Instance& WithEcsContainerInstanceArn(const char* value) { SetEcsContainerInstanceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/elastic-ip-addresses-eip.html">Elastic
     * IP address</a>.</p>
     */
    inline const Aws::String& GetElasticIp() const{ return m_elasticIp; }
    inline bool ElasticIpHasBeenSet() const { return m_elasticIpHasBeenSet; }
    inline void SetElasticIp(const Aws::String& value) { m_elasticIpHasBeenSet = true; m_elasticIp = value; }
    inline void SetElasticIp(Aws::String&& value) { m_elasticIpHasBeenSet = true; m_elasticIp = std::move(value); }
    inline void SetElasticIp(const char* value) { m_elasticIpHasBeenSet = true; m_elasticIp.assign(value); }
    inline Instance& WithElasticIp(const Aws::String& value) { SetElasticIp(value); return *this;}
    inline Instance& WithElasticIp(Aws::String&& value) { SetElasticIp(std::move(value)); return *this;}
    inline Instance& WithElasticIp(const char* value) { SetElasticIp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance host name. The following are character limits for instance host
     * names.</p> <ul> <li> <p>Linux-based instances: 63 characters</p> </li> <li>
     * <p>Windows-based instances: 15 characters</p> </li> </ul>
     */
    inline const Aws::String& GetHostname() const{ return m_hostname; }
    inline bool HostnameHasBeenSet() const { return m_hostnameHasBeenSet; }
    inline void SetHostname(const Aws::String& value) { m_hostnameHasBeenSet = true; m_hostname = value; }
    inline void SetHostname(Aws::String&& value) { m_hostnameHasBeenSet = true; m_hostname = std::move(value); }
    inline void SetHostname(const char* value) { m_hostnameHasBeenSet = true; m_hostname.assign(value); }
    inline Instance& WithHostname(const Aws::String& value) { SetHostname(value); return *this;}
    inline Instance& WithHostname(Aws::String&& value) { SetHostname(std::move(value)); return *this;}
    inline Instance& WithHostname(const char* value) { SetHostname(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For registered instances, the infrastructure class: <code>ec2</code> or
     * <code>on-premises</code>.</p>
     */
    inline const Aws::String& GetInfrastructureClass() const{ return m_infrastructureClass; }
    inline bool InfrastructureClassHasBeenSet() const { return m_infrastructureClassHasBeenSet; }
    inline void SetInfrastructureClass(const Aws::String& value) { m_infrastructureClassHasBeenSet = true; m_infrastructureClass = value; }
    inline void SetInfrastructureClass(Aws::String&& value) { m_infrastructureClassHasBeenSet = true; m_infrastructureClass = std::move(value); }
    inline void SetInfrastructureClass(const char* value) { m_infrastructureClassHasBeenSet = true; m_infrastructureClass.assign(value); }
    inline Instance& WithInfrastructureClass(const Aws::String& value) { SetInfrastructureClass(value); return *this;}
    inline Instance& WithInfrastructureClass(Aws::String&& value) { SetInfrastructureClass(std::move(value)); return *this;}
    inline Instance& WithInfrastructureClass(const char* value) { SetInfrastructureClass(value); return *this;}
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
    inline bool GetInstallUpdatesOnBoot() const{ return m_installUpdatesOnBoot; }
    inline bool InstallUpdatesOnBootHasBeenSet() const { return m_installUpdatesOnBootHasBeenSet; }
    inline void SetInstallUpdatesOnBoot(bool value) { m_installUpdatesOnBootHasBeenSet = true; m_installUpdatesOnBoot = value; }
    inline Instance& WithInstallUpdatesOnBoot(bool value) { SetInstallUpdatesOnBoot(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance ID.</p>
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
     * <p>The ARN of the instance's IAM profile. For more information about IAM ARNs,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p>
     */
    inline const Aws::String& GetInstanceProfileArn() const{ return m_instanceProfileArn; }
    inline bool InstanceProfileArnHasBeenSet() const { return m_instanceProfileArnHasBeenSet; }
    inline void SetInstanceProfileArn(const Aws::String& value) { m_instanceProfileArnHasBeenSet = true; m_instanceProfileArn = value; }
    inline void SetInstanceProfileArn(Aws::String&& value) { m_instanceProfileArnHasBeenSet = true; m_instanceProfileArn = std::move(value); }
    inline void SetInstanceProfileArn(const char* value) { m_instanceProfileArnHasBeenSet = true; m_instanceProfileArn.assign(value); }
    inline Instance& WithInstanceProfileArn(const Aws::String& value) { SetInstanceProfileArn(value); return *this;}
    inline Instance& WithInstanceProfileArn(Aws::String&& value) { SetInstanceProfileArn(std::move(value)); return *this;}
    inline Instance& WithInstanceProfileArn(const char* value) { SetInstanceProfileArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type, such as <code>t2.micro</code>.</p>
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
     * <p>The ID of the last service error. For more information, call
     * <a>DescribeServiceErrors</a>.</p>
     */
    inline const Aws::String& GetLastServiceErrorId() const{ return m_lastServiceErrorId; }
    inline bool LastServiceErrorIdHasBeenSet() const { return m_lastServiceErrorIdHasBeenSet; }
    inline void SetLastServiceErrorId(const Aws::String& value) { m_lastServiceErrorIdHasBeenSet = true; m_lastServiceErrorId = value; }
    inline void SetLastServiceErrorId(Aws::String&& value) { m_lastServiceErrorIdHasBeenSet = true; m_lastServiceErrorId = std::move(value); }
    inline void SetLastServiceErrorId(const char* value) { m_lastServiceErrorIdHasBeenSet = true; m_lastServiceErrorId.assign(value); }
    inline Instance& WithLastServiceErrorId(const Aws::String& value) { SetLastServiceErrorId(value); return *this;}
    inline Instance& WithLastServiceErrorId(Aws::String&& value) { SetLastServiceErrorId(std::move(value)); return *this;}
    inline Instance& WithLastServiceErrorId(const char* value) { SetLastServiceErrorId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array containing the instance layer IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLayerIds() const{ return m_layerIds; }
    inline bool LayerIdsHasBeenSet() const { return m_layerIdsHasBeenSet; }
    inline void SetLayerIds(const Aws::Vector<Aws::String>& value) { m_layerIdsHasBeenSet = true; m_layerIds = value; }
    inline void SetLayerIds(Aws::Vector<Aws::String>&& value) { m_layerIdsHasBeenSet = true; m_layerIds = std::move(value); }
    inline Instance& WithLayerIds(const Aws::Vector<Aws::String>& value) { SetLayerIds(value); return *this;}
    inline Instance& WithLayerIds(Aws::Vector<Aws::String>&& value) { SetLayerIds(std::move(value)); return *this;}
    inline Instance& AddLayerIds(const Aws::String& value) { m_layerIdsHasBeenSet = true; m_layerIds.push_back(value); return *this; }
    inline Instance& AddLayerIds(Aws::String&& value) { m_layerIdsHasBeenSet = true; m_layerIds.push_back(std::move(value)); return *this; }
    inline Instance& AddLayerIds(const char* value) { m_layerIdsHasBeenSet = true; m_layerIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The instance's operating system.</p>
     */
    inline const Aws::String& GetOs() const{ return m_os; }
    inline bool OsHasBeenSet() const { return m_osHasBeenSet; }
    inline void SetOs(const Aws::String& value) { m_osHasBeenSet = true; m_os = value; }
    inline void SetOs(Aws::String&& value) { m_osHasBeenSet = true; m_os = std::move(value); }
    inline void SetOs(const char* value) { m_osHasBeenSet = true; m_os.assign(value); }
    inline Instance& WithOs(const Aws::String& value) { SetOs(value); return *this;}
    inline Instance& WithOs(Aws::String&& value) { SetOs(std::move(value)); return *this;}
    inline Instance& WithOs(const char* value) { SetOs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance's platform.</p>
     */
    inline const Aws::String& GetPlatform() const{ return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    inline void SetPlatform(const Aws::String& value) { m_platformHasBeenSet = true; m_platform = value; }
    inline void SetPlatform(Aws::String&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }
    inline void SetPlatform(const char* value) { m_platformHasBeenSet = true; m_platform.assign(value); }
    inline Instance& WithPlatform(const Aws::String& value) { SetPlatform(value); return *this;}
    inline Instance& WithPlatform(Aws::String&& value) { SetPlatform(std::move(value)); return *this;}
    inline Instance& WithPlatform(const char* value) { SetPlatform(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance's private DNS name.</p>
     */
    inline const Aws::String& GetPrivateDns() const{ return m_privateDns; }
    inline bool PrivateDnsHasBeenSet() const { return m_privateDnsHasBeenSet; }
    inline void SetPrivateDns(const Aws::String& value) { m_privateDnsHasBeenSet = true; m_privateDns = value; }
    inline void SetPrivateDns(Aws::String&& value) { m_privateDnsHasBeenSet = true; m_privateDns = std::move(value); }
    inline void SetPrivateDns(const char* value) { m_privateDnsHasBeenSet = true; m_privateDns.assign(value); }
    inline Instance& WithPrivateDns(const Aws::String& value) { SetPrivateDns(value); return *this;}
    inline Instance& WithPrivateDns(Aws::String&& value) { SetPrivateDns(std::move(value)); return *this;}
    inline Instance& WithPrivateDns(const char* value) { SetPrivateDns(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance's private IP address.</p>
     */
    inline const Aws::String& GetPrivateIp() const{ return m_privateIp; }
    inline bool PrivateIpHasBeenSet() const { return m_privateIpHasBeenSet; }
    inline void SetPrivateIp(const Aws::String& value) { m_privateIpHasBeenSet = true; m_privateIp = value; }
    inline void SetPrivateIp(Aws::String&& value) { m_privateIpHasBeenSet = true; m_privateIp = std::move(value); }
    inline void SetPrivateIp(const char* value) { m_privateIpHasBeenSet = true; m_privateIp.assign(value); }
    inline Instance& WithPrivateIp(const Aws::String& value) { SetPrivateIp(value); return *this;}
    inline Instance& WithPrivateIp(Aws::String&& value) { SetPrivateIp(std::move(value)); return *this;}
    inline Instance& WithPrivateIp(const char* value) { SetPrivateIp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance public DNS name.</p>
     */
    inline const Aws::String& GetPublicDns() const{ return m_publicDns; }
    inline bool PublicDnsHasBeenSet() const { return m_publicDnsHasBeenSet; }
    inline void SetPublicDns(const Aws::String& value) { m_publicDnsHasBeenSet = true; m_publicDns = value; }
    inline void SetPublicDns(Aws::String&& value) { m_publicDnsHasBeenSet = true; m_publicDns = std::move(value); }
    inline void SetPublicDns(const char* value) { m_publicDnsHasBeenSet = true; m_publicDns.assign(value); }
    inline Instance& WithPublicDns(const Aws::String& value) { SetPublicDns(value); return *this;}
    inline Instance& WithPublicDns(Aws::String&& value) { SetPublicDns(std::move(value)); return *this;}
    inline Instance& WithPublicDns(const char* value) { SetPublicDns(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance public IP address.</p>
     */
    inline const Aws::String& GetPublicIp() const{ return m_publicIp; }
    inline bool PublicIpHasBeenSet() const { return m_publicIpHasBeenSet; }
    inline void SetPublicIp(const Aws::String& value) { m_publicIpHasBeenSet = true; m_publicIp = value; }
    inline void SetPublicIp(Aws::String&& value) { m_publicIpHasBeenSet = true; m_publicIp = std::move(value); }
    inline void SetPublicIp(const char* value) { m_publicIpHasBeenSet = true; m_publicIp.assign(value); }
    inline Instance& WithPublicIp(const Aws::String& value) { SetPublicIp(value); return *this;}
    inline Instance& WithPublicIp(Aws::String&& value) { SetPublicIp(std::move(value)); return *this;}
    inline Instance& WithPublicIp(const char* value) { SetPublicIp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For registered instances, who performed the registration.</p>
     */
    inline const Aws::String& GetRegisteredBy() const{ return m_registeredBy; }
    inline bool RegisteredByHasBeenSet() const { return m_registeredByHasBeenSet; }
    inline void SetRegisteredBy(const Aws::String& value) { m_registeredByHasBeenSet = true; m_registeredBy = value; }
    inline void SetRegisteredBy(Aws::String&& value) { m_registeredByHasBeenSet = true; m_registeredBy = std::move(value); }
    inline void SetRegisteredBy(const char* value) { m_registeredByHasBeenSet = true; m_registeredBy.assign(value); }
    inline Instance& WithRegisteredBy(const Aws::String& value) { SetRegisteredBy(value); return *this;}
    inline Instance& WithRegisteredBy(Aws::String&& value) { SetRegisteredBy(std::move(value)); return *this;}
    inline Instance& WithRegisteredBy(const char* value) { SetRegisteredBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance's reported OpsWorks Stacks agent version.</p>
     */
    inline const Aws::String& GetReportedAgentVersion() const{ return m_reportedAgentVersion; }
    inline bool ReportedAgentVersionHasBeenSet() const { return m_reportedAgentVersionHasBeenSet; }
    inline void SetReportedAgentVersion(const Aws::String& value) { m_reportedAgentVersionHasBeenSet = true; m_reportedAgentVersion = value; }
    inline void SetReportedAgentVersion(Aws::String&& value) { m_reportedAgentVersionHasBeenSet = true; m_reportedAgentVersion = std::move(value); }
    inline void SetReportedAgentVersion(const char* value) { m_reportedAgentVersionHasBeenSet = true; m_reportedAgentVersion.assign(value); }
    inline Instance& WithReportedAgentVersion(const Aws::String& value) { SetReportedAgentVersion(value); return *this;}
    inline Instance& WithReportedAgentVersion(Aws::String&& value) { SetReportedAgentVersion(std::move(value)); return *this;}
    inline Instance& WithReportedAgentVersion(const char* value) { SetReportedAgentVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For registered instances, the reported operating system.</p>
     */
    inline const ReportedOs& GetReportedOs() const{ return m_reportedOs; }
    inline bool ReportedOsHasBeenSet() const { return m_reportedOsHasBeenSet; }
    inline void SetReportedOs(const ReportedOs& value) { m_reportedOsHasBeenSet = true; m_reportedOs = value; }
    inline void SetReportedOs(ReportedOs&& value) { m_reportedOsHasBeenSet = true; m_reportedOs = std::move(value); }
    inline Instance& WithReportedOs(const ReportedOs& value) { SetReportedOs(value); return *this;}
    inline Instance& WithReportedOs(ReportedOs&& value) { SetReportedOs(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance's root device type. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ComponentsAMIs.html#storage-for-the-root-device">Storage
     * for the Root Device</a>.</p>
     */
    inline const RootDeviceType& GetRootDeviceType() const{ return m_rootDeviceType; }
    inline bool RootDeviceTypeHasBeenSet() const { return m_rootDeviceTypeHasBeenSet; }
    inline void SetRootDeviceType(const RootDeviceType& value) { m_rootDeviceTypeHasBeenSet = true; m_rootDeviceType = value; }
    inline void SetRootDeviceType(RootDeviceType&& value) { m_rootDeviceTypeHasBeenSet = true; m_rootDeviceType = std::move(value); }
    inline Instance& WithRootDeviceType(const RootDeviceType& value) { SetRootDeviceType(value); return *this;}
    inline Instance& WithRootDeviceType(RootDeviceType&& value) { SetRootDeviceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The root device volume ID.</p>
     */
    inline const Aws::String& GetRootDeviceVolumeId() const{ return m_rootDeviceVolumeId; }
    inline bool RootDeviceVolumeIdHasBeenSet() const { return m_rootDeviceVolumeIdHasBeenSet; }
    inline void SetRootDeviceVolumeId(const Aws::String& value) { m_rootDeviceVolumeIdHasBeenSet = true; m_rootDeviceVolumeId = value; }
    inline void SetRootDeviceVolumeId(Aws::String&& value) { m_rootDeviceVolumeIdHasBeenSet = true; m_rootDeviceVolumeId = std::move(value); }
    inline void SetRootDeviceVolumeId(const char* value) { m_rootDeviceVolumeIdHasBeenSet = true; m_rootDeviceVolumeId.assign(value); }
    inline Instance& WithRootDeviceVolumeId(const Aws::String& value) { SetRootDeviceVolumeId(value); return *this;}
    inline Instance& WithRootDeviceVolumeId(Aws::String&& value) { SetRootDeviceVolumeId(std::move(value)); return *this;}
    inline Instance& WithRootDeviceVolumeId(const char* value) { SetRootDeviceVolumeId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array containing the instance security group IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }
    inline Instance& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}
    inline Instance& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}
    inline Instance& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }
    inline Instance& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }
    inline Instance& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The SSH key's Deep Security Agent (DSA) fingerprint.</p>
     */
    inline const Aws::String& GetSshHostDsaKeyFingerprint() const{ return m_sshHostDsaKeyFingerprint; }
    inline bool SshHostDsaKeyFingerprintHasBeenSet() const { return m_sshHostDsaKeyFingerprintHasBeenSet; }
    inline void SetSshHostDsaKeyFingerprint(const Aws::String& value) { m_sshHostDsaKeyFingerprintHasBeenSet = true; m_sshHostDsaKeyFingerprint = value; }
    inline void SetSshHostDsaKeyFingerprint(Aws::String&& value) { m_sshHostDsaKeyFingerprintHasBeenSet = true; m_sshHostDsaKeyFingerprint = std::move(value); }
    inline void SetSshHostDsaKeyFingerprint(const char* value) { m_sshHostDsaKeyFingerprintHasBeenSet = true; m_sshHostDsaKeyFingerprint.assign(value); }
    inline Instance& WithSshHostDsaKeyFingerprint(const Aws::String& value) { SetSshHostDsaKeyFingerprint(value); return *this;}
    inline Instance& WithSshHostDsaKeyFingerprint(Aws::String&& value) { SetSshHostDsaKeyFingerprint(std::move(value)); return *this;}
    inline Instance& WithSshHostDsaKeyFingerprint(const char* value) { SetSshHostDsaKeyFingerprint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SSH key's RSA fingerprint.</p>
     */
    inline const Aws::String& GetSshHostRsaKeyFingerprint() const{ return m_sshHostRsaKeyFingerprint; }
    inline bool SshHostRsaKeyFingerprintHasBeenSet() const { return m_sshHostRsaKeyFingerprintHasBeenSet; }
    inline void SetSshHostRsaKeyFingerprint(const Aws::String& value) { m_sshHostRsaKeyFingerprintHasBeenSet = true; m_sshHostRsaKeyFingerprint = value; }
    inline void SetSshHostRsaKeyFingerprint(Aws::String&& value) { m_sshHostRsaKeyFingerprintHasBeenSet = true; m_sshHostRsaKeyFingerprint = std::move(value); }
    inline void SetSshHostRsaKeyFingerprint(const char* value) { m_sshHostRsaKeyFingerprintHasBeenSet = true; m_sshHostRsaKeyFingerprint.assign(value); }
    inline Instance& WithSshHostRsaKeyFingerprint(const Aws::String& value) { SetSshHostRsaKeyFingerprint(value); return *this;}
    inline Instance& WithSshHostRsaKeyFingerprint(Aws::String&& value) { SetSshHostRsaKeyFingerprint(std::move(value)); return *this;}
    inline Instance& WithSshHostRsaKeyFingerprint(const char* value) { SetSshHostRsaKeyFingerprint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance's Amazon EC2 key-pair name.</p>
     */
    inline const Aws::String& GetSshKeyName() const{ return m_sshKeyName; }
    inline bool SshKeyNameHasBeenSet() const { return m_sshKeyNameHasBeenSet; }
    inline void SetSshKeyName(const Aws::String& value) { m_sshKeyNameHasBeenSet = true; m_sshKeyName = value; }
    inline void SetSshKeyName(Aws::String&& value) { m_sshKeyNameHasBeenSet = true; m_sshKeyName = std::move(value); }
    inline void SetSshKeyName(const char* value) { m_sshKeyNameHasBeenSet = true; m_sshKeyName.assign(value); }
    inline Instance& WithSshKeyName(const Aws::String& value) { SetSshKeyName(value); return *this;}
    inline Instance& WithSshKeyName(Aws::String&& value) { SetSshKeyName(std::move(value)); return *this;}
    inline Instance& WithSshKeyName(const char* value) { SetSshKeyName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stack ID.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }
    inline void SetStackId(const Aws::String& value) { m_stackIdHasBeenSet = true; m_stackId = value; }
    inline void SetStackId(Aws::String&& value) { m_stackIdHasBeenSet = true; m_stackId = std::move(value); }
    inline void SetStackId(const char* value) { m_stackIdHasBeenSet = true; m_stackId.assign(value); }
    inline Instance& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}
    inline Instance& WithStackId(Aws::String&& value) { SetStackId(std::move(value)); return *this;}
    inline Instance& WithStackId(const char* value) { SetStackId(value); return *this;}
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
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline Instance& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline Instance& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline Instance& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance's subnet ID; applicable only if the stack is running in a
     * VPC.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }
    inline Instance& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}
    inline Instance& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}
    inline Instance& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance's tenancy option, such as <code>dedicated</code> or
     * <code>host</code>.</p>
     */
    inline const Aws::String& GetTenancy() const{ return m_tenancy; }
    inline bool TenancyHasBeenSet() const { return m_tenancyHasBeenSet; }
    inline void SetTenancy(const Aws::String& value) { m_tenancyHasBeenSet = true; m_tenancy = value; }
    inline void SetTenancy(Aws::String&& value) { m_tenancyHasBeenSet = true; m_tenancy = std::move(value); }
    inline void SetTenancy(const char* value) { m_tenancyHasBeenSet = true; m_tenancy.assign(value); }
    inline Instance& WithTenancy(const Aws::String& value) { SetTenancy(value); return *this;}
    inline Instance& WithTenancy(Aws::String&& value) { SetTenancy(std::move(value)); return *this;}
    inline Instance& WithTenancy(const char* value) { SetTenancy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance's virtualization type: <code>paravirtual</code> or
     * <code>hvm</code>.</p>
     */
    inline const VirtualizationType& GetVirtualizationType() const{ return m_virtualizationType; }
    inline bool VirtualizationTypeHasBeenSet() const { return m_virtualizationTypeHasBeenSet; }
    inline void SetVirtualizationType(const VirtualizationType& value) { m_virtualizationTypeHasBeenSet = true; m_virtualizationType = value; }
    inline void SetVirtualizationType(VirtualizationType&& value) { m_virtualizationTypeHasBeenSet = true; m_virtualizationType = std::move(value); }
    inline Instance& WithVirtualizationType(const VirtualizationType& value) { SetVirtualizationType(value); return *this;}
    inline Instance& WithVirtualizationType(VirtualizationType&& value) { SetVirtualizationType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_agentVersion;
    bool m_agentVersionHasBeenSet = false;

    Aws::String m_amiId;
    bool m_amiIdHasBeenSet = false;

    Architecture m_architecture;
    bool m_architectureHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    AutoScalingType m_autoScalingType;
    bool m_autoScalingTypeHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::Vector<BlockDeviceMapping> m_blockDeviceMappings;
    bool m_blockDeviceMappingsHasBeenSet = false;

    Aws::String m_createdAt;
    bool m_createdAtHasBeenSet = false;

    bool m_ebsOptimized;
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

    bool m_installUpdatesOnBoot;
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

    RootDeviceType m_rootDeviceType;
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

    VirtualizationType m_virtualizationType;
    bool m_virtualizationTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
