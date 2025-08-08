/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ClusterInstanceStatusDetails.h>
#include <aws/sagemaker/model/ClusterInstanceType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/ClusterLifeCycleConfig.h>
#include <aws/sagemaker/model/VpcConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/ClusterInstancePlacement.h>
#include <aws/sagemaker/model/UltraServerInfo.h>
#include <aws/sagemaker/model/ClusterInstanceStorageConfig.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Details of an instance (also called a <i>node</i> interchangeably) in a
   * SageMaker HyperPod cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ClusterNodeDetails">AWS
   * API Reference</a></p>
   */
  class ClusterNodeDetails
  {
  public:
    AWS_SAGEMAKER_API ClusterNodeDetails() = default;
    AWS_SAGEMAKER_API ClusterNodeDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ClusterNodeDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The instance group name in which the instance is.</p>
     */
    inline const Aws::String& GetInstanceGroupName() const { return m_instanceGroupName; }
    inline bool InstanceGroupNameHasBeenSet() const { return m_instanceGroupNameHasBeenSet; }
    template<typename InstanceGroupNameT = Aws::String>
    void SetInstanceGroupName(InstanceGroupNameT&& value) { m_instanceGroupNameHasBeenSet = true; m_instanceGroupName = std::forward<InstanceGroupNameT>(value); }
    template<typename InstanceGroupNameT = Aws::String>
    ClusterNodeDetails& WithInstanceGroupName(InstanceGroupNameT&& value) { SetInstanceGroupName(std::forward<InstanceGroupNameT>(value)); return *this;}
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
    ClusterNodeDetails& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the node that persists throughout its lifecycle, from
     * provisioning request to termination. This identifier can be used to track the
     * node even before it has an assigned <code>InstanceId</code>.</p>
     */
    inline const Aws::String& GetNodeLogicalId() const { return m_nodeLogicalId; }
    inline bool NodeLogicalIdHasBeenSet() const { return m_nodeLogicalIdHasBeenSet; }
    template<typename NodeLogicalIdT = Aws::String>
    void SetNodeLogicalId(NodeLogicalIdT&& value) { m_nodeLogicalIdHasBeenSet = true; m_nodeLogicalId = std::forward<NodeLogicalIdT>(value); }
    template<typename NodeLogicalIdT = Aws::String>
    ClusterNodeDetails& WithNodeLogicalId(NodeLogicalIdT&& value) { SetNodeLogicalId(std::forward<NodeLogicalIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the instance.</p>
     */
    inline const ClusterInstanceStatusDetails& GetInstanceStatus() const { return m_instanceStatus; }
    inline bool InstanceStatusHasBeenSet() const { return m_instanceStatusHasBeenSet; }
    template<typename InstanceStatusT = ClusterInstanceStatusDetails>
    void SetInstanceStatus(InstanceStatusT&& value) { m_instanceStatusHasBeenSet = true; m_instanceStatus = std::forward<InstanceStatusT>(value); }
    template<typename InstanceStatusT = ClusterInstanceStatusDetails>
    ClusterNodeDetails& WithInstanceStatus(InstanceStatusT&& value) { SetInstanceStatus(std::forward<InstanceStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the instance.</p>
     */
    inline ClusterInstanceType GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(ClusterInstanceType value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline ClusterNodeDetails& WithInstanceType(ClusterInstanceType value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the instance is launched.</p>
     */
    inline const Aws::Utils::DateTime& GetLaunchTime() const { return m_launchTime; }
    inline bool LaunchTimeHasBeenSet() const { return m_launchTimeHasBeenSet; }
    template<typename LaunchTimeT = Aws::Utils::DateTime>
    void SetLaunchTime(LaunchTimeT&& value) { m_launchTimeHasBeenSet = true; m_launchTime = std::forward<LaunchTimeT>(value); }
    template<typename LaunchTimeT = Aws::Utils::DateTime>
    ClusterNodeDetails& WithLaunchTime(LaunchTimeT&& value) { SetLaunchTime(std::forward<LaunchTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the cluster was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastSoftwareUpdateTime() const { return m_lastSoftwareUpdateTime; }
    inline bool LastSoftwareUpdateTimeHasBeenSet() const { return m_lastSoftwareUpdateTimeHasBeenSet; }
    template<typename LastSoftwareUpdateTimeT = Aws::Utils::DateTime>
    void SetLastSoftwareUpdateTime(LastSoftwareUpdateTimeT&& value) { m_lastSoftwareUpdateTimeHasBeenSet = true; m_lastSoftwareUpdateTime = std::forward<LastSoftwareUpdateTimeT>(value); }
    template<typename LastSoftwareUpdateTimeT = Aws::Utils::DateTime>
    ClusterNodeDetails& WithLastSoftwareUpdateTime(LastSoftwareUpdateTimeT&& value) { SetLastSoftwareUpdateTime(std::forward<LastSoftwareUpdateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The LifeCycle configuration applied to the instance.</p>
     */
    inline const ClusterLifeCycleConfig& GetLifeCycleConfig() const { return m_lifeCycleConfig; }
    inline bool LifeCycleConfigHasBeenSet() const { return m_lifeCycleConfigHasBeenSet; }
    template<typename LifeCycleConfigT = ClusterLifeCycleConfig>
    void SetLifeCycleConfig(LifeCycleConfigT&& value) { m_lifeCycleConfigHasBeenSet = true; m_lifeCycleConfig = std::forward<LifeCycleConfigT>(value); }
    template<typename LifeCycleConfigT = ClusterLifeCycleConfig>
    ClusterNodeDetails& WithLifeCycleConfig(LifeCycleConfigT&& value) { SetLifeCycleConfig(std::forward<LifeCycleConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customized Amazon VPC configuration at the instance group level that
     * overrides the default Amazon VPC configuration of the SageMaker HyperPod
     * cluster.</p>
     */
    inline const VpcConfig& GetOverrideVpcConfig() const { return m_overrideVpcConfig; }
    inline bool OverrideVpcConfigHasBeenSet() const { return m_overrideVpcConfigHasBeenSet; }
    template<typename OverrideVpcConfigT = VpcConfig>
    void SetOverrideVpcConfig(OverrideVpcConfigT&& value) { m_overrideVpcConfigHasBeenSet = true; m_overrideVpcConfig = std::forward<OverrideVpcConfigT>(value); }
    template<typename OverrideVpcConfigT = VpcConfig>
    ClusterNodeDetails& WithOverrideVpcConfig(OverrideVpcConfigT&& value) { SetOverrideVpcConfig(std::forward<OverrideVpcConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of threads per CPU core you specified under
     * <code>CreateCluster</code>.</p>
     */
    inline int GetThreadsPerCore() const { return m_threadsPerCore; }
    inline bool ThreadsPerCoreHasBeenSet() const { return m_threadsPerCoreHasBeenSet; }
    inline void SetThreadsPerCore(int value) { m_threadsPerCoreHasBeenSet = true; m_threadsPerCore = value; }
    inline ClusterNodeDetails& WithThreadsPerCore(int value) { SetThreadsPerCore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configurations of additional storage specified to the instance group
     * where the instance (node) is launched.</p>
     */
    inline const Aws::Vector<ClusterInstanceStorageConfig>& GetInstanceStorageConfigs() const { return m_instanceStorageConfigs; }
    inline bool InstanceStorageConfigsHasBeenSet() const { return m_instanceStorageConfigsHasBeenSet; }
    template<typename InstanceStorageConfigsT = Aws::Vector<ClusterInstanceStorageConfig>>
    void SetInstanceStorageConfigs(InstanceStorageConfigsT&& value) { m_instanceStorageConfigsHasBeenSet = true; m_instanceStorageConfigs = std::forward<InstanceStorageConfigsT>(value); }
    template<typename InstanceStorageConfigsT = Aws::Vector<ClusterInstanceStorageConfig>>
    ClusterNodeDetails& WithInstanceStorageConfigs(InstanceStorageConfigsT&& value) { SetInstanceStorageConfigs(std::forward<InstanceStorageConfigsT>(value)); return *this;}
    template<typename InstanceStorageConfigsT = ClusterInstanceStorageConfig>
    ClusterNodeDetails& AddInstanceStorageConfigs(InstanceStorageConfigsT&& value) { m_instanceStorageConfigsHasBeenSet = true; m_instanceStorageConfigs.emplace_back(std::forward<InstanceStorageConfigsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The private primary IP address of the SageMaker HyperPod cluster node.</p>
     */
    inline const Aws::String& GetPrivatePrimaryIp() const { return m_privatePrimaryIp; }
    inline bool PrivatePrimaryIpHasBeenSet() const { return m_privatePrimaryIpHasBeenSet; }
    template<typename PrivatePrimaryIpT = Aws::String>
    void SetPrivatePrimaryIp(PrivatePrimaryIpT&& value) { m_privatePrimaryIpHasBeenSet = true; m_privatePrimaryIp = std::forward<PrivatePrimaryIpT>(value); }
    template<typename PrivatePrimaryIpT = Aws::String>
    ClusterNodeDetails& WithPrivatePrimaryIp(PrivatePrimaryIpT&& value) { SetPrivatePrimaryIp(std::forward<PrivatePrimaryIpT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The private primary IPv6 address of the SageMaker HyperPod cluster node when
     * configured with an Amazon VPC that supports IPv6 and includes subnets with IPv6
     * addressing enabled in either the cluster Amazon VPC configuration or the
     * instance group Amazon VPC configuration.</p>
     */
    inline const Aws::String& GetPrivatePrimaryIpv6() const { return m_privatePrimaryIpv6; }
    inline bool PrivatePrimaryIpv6HasBeenSet() const { return m_privatePrimaryIpv6HasBeenSet; }
    template<typename PrivatePrimaryIpv6T = Aws::String>
    void SetPrivatePrimaryIpv6(PrivatePrimaryIpv6T&& value) { m_privatePrimaryIpv6HasBeenSet = true; m_privatePrimaryIpv6 = std::forward<PrivatePrimaryIpv6T>(value); }
    template<typename PrivatePrimaryIpv6T = Aws::String>
    ClusterNodeDetails& WithPrivatePrimaryIpv6(PrivatePrimaryIpv6T&& value) { SetPrivatePrimaryIpv6(std::forward<PrivatePrimaryIpv6T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The private DNS hostname of the SageMaker HyperPod cluster node.</p>
     */
    inline const Aws::String& GetPrivateDnsHostname() const { return m_privateDnsHostname; }
    inline bool PrivateDnsHostnameHasBeenSet() const { return m_privateDnsHostnameHasBeenSet; }
    template<typename PrivateDnsHostnameT = Aws::String>
    void SetPrivateDnsHostname(PrivateDnsHostnameT&& value) { m_privateDnsHostnameHasBeenSet = true; m_privateDnsHostname = std::forward<PrivateDnsHostnameT>(value); }
    template<typename PrivateDnsHostnameT = Aws::String>
    ClusterNodeDetails& WithPrivateDnsHostname(PrivateDnsHostnameT&& value) { SetPrivateDnsHostname(std::forward<PrivateDnsHostnameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The placement details of the SageMaker HyperPod cluster node.</p>
     */
    inline const ClusterInstancePlacement& GetPlacement() const { return m_placement; }
    inline bool PlacementHasBeenSet() const { return m_placementHasBeenSet; }
    template<typename PlacementT = ClusterInstancePlacement>
    void SetPlacement(PlacementT&& value) { m_placementHasBeenSet = true; m_placement = std::forward<PlacementT>(value); }
    template<typename PlacementT = ClusterInstancePlacement>
    ClusterNodeDetails& WithPlacement(PlacementT&& value) { SetPlacement(std::forward<PlacementT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Machine Image (AMI) currently in use by the node.</p>
     */
    inline const Aws::String& GetCurrentImageId() const { return m_currentImageId; }
    inline bool CurrentImageIdHasBeenSet() const { return m_currentImageIdHasBeenSet; }
    template<typename CurrentImageIdT = Aws::String>
    void SetCurrentImageId(CurrentImageIdT&& value) { m_currentImageIdHasBeenSet = true; m_currentImageId = std::forward<CurrentImageIdT>(value); }
    template<typename CurrentImageIdT = Aws::String>
    ClusterNodeDetails& WithCurrentImageId(CurrentImageIdT&& value) { SetCurrentImageId(std::forward<CurrentImageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Machine Image (AMI) desired for the node.</p>
     */
    inline const Aws::String& GetDesiredImageId() const { return m_desiredImageId; }
    inline bool DesiredImageIdHasBeenSet() const { return m_desiredImageIdHasBeenSet; }
    template<typename DesiredImageIdT = Aws::String>
    void SetDesiredImageId(DesiredImageIdT&& value) { m_desiredImageIdHasBeenSet = true; m_desiredImageId = std::forward<DesiredImageIdT>(value); }
    template<typename DesiredImageIdT = Aws::String>
    ClusterNodeDetails& WithDesiredImageId(DesiredImageIdT&& value) { SetDesiredImageId(std::forward<DesiredImageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the UltraServer.</p>
     */
    inline const UltraServerInfo& GetUltraServerInfo() const { return m_ultraServerInfo; }
    inline bool UltraServerInfoHasBeenSet() const { return m_ultraServerInfoHasBeenSet; }
    template<typename UltraServerInfoT = UltraServerInfo>
    void SetUltraServerInfo(UltraServerInfoT&& value) { m_ultraServerInfoHasBeenSet = true; m_ultraServerInfo = std::forward<UltraServerInfoT>(value); }
    template<typename UltraServerInfoT = UltraServerInfo>
    ClusterNodeDetails& WithUltraServerInfo(UltraServerInfoT&& value) { SetUltraServerInfo(std::forward<UltraServerInfoT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceGroupName;
    bool m_instanceGroupNameHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_nodeLogicalId;
    bool m_nodeLogicalIdHasBeenSet = false;

    ClusterInstanceStatusDetails m_instanceStatus;
    bool m_instanceStatusHasBeenSet = false;

    ClusterInstanceType m_instanceType{ClusterInstanceType::NOT_SET};
    bool m_instanceTypeHasBeenSet = false;

    Aws::Utils::DateTime m_launchTime{};
    bool m_launchTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastSoftwareUpdateTime{};
    bool m_lastSoftwareUpdateTimeHasBeenSet = false;

    ClusterLifeCycleConfig m_lifeCycleConfig;
    bool m_lifeCycleConfigHasBeenSet = false;

    VpcConfig m_overrideVpcConfig;
    bool m_overrideVpcConfigHasBeenSet = false;

    int m_threadsPerCore{0};
    bool m_threadsPerCoreHasBeenSet = false;

    Aws::Vector<ClusterInstanceStorageConfig> m_instanceStorageConfigs;
    bool m_instanceStorageConfigsHasBeenSet = false;

    Aws::String m_privatePrimaryIp;
    bool m_privatePrimaryIpHasBeenSet = false;

    Aws::String m_privatePrimaryIpv6;
    bool m_privatePrimaryIpv6HasBeenSet = false;

    Aws::String m_privateDnsHostname;
    bool m_privateDnsHostnameHasBeenSet = false;

    ClusterInstancePlacement m_placement;
    bool m_placementHasBeenSet = false;

    Aws::String m_currentImageId;
    bool m_currentImageIdHasBeenSet = false;

    Aws::String m_desiredImageId;
    bool m_desiredImageIdHasBeenSet = false;

    UltraServerInfo m_ultraServerInfo;
    bool m_ultraServerInfoHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
