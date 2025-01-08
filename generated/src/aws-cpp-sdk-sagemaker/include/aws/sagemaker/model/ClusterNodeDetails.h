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
    AWS_SAGEMAKER_API ClusterNodeDetails();
    AWS_SAGEMAKER_API ClusterNodeDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ClusterNodeDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The instance group name in which the instance is.</p>
     */
    inline const Aws::String& GetInstanceGroupName() const{ return m_instanceGroupName; }
    inline bool InstanceGroupNameHasBeenSet() const { return m_instanceGroupNameHasBeenSet; }
    inline void SetInstanceGroupName(const Aws::String& value) { m_instanceGroupNameHasBeenSet = true; m_instanceGroupName = value; }
    inline void SetInstanceGroupName(Aws::String&& value) { m_instanceGroupNameHasBeenSet = true; m_instanceGroupName = std::move(value); }
    inline void SetInstanceGroupName(const char* value) { m_instanceGroupNameHasBeenSet = true; m_instanceGroupName.assign(value); }
    inline ClusterNodeDetails& WithInstanceGroupName(const Aws::String& value) { SetInstanceGroupName(value); return *this;}
    inline ClusterNodeDetails& WithInstanceGroupName(Aws::String&& value) { SetInstanceGroupName(std::move(value)); return *this;}
    inline ClusterNodeDetails& WithInstanceGroupName(const char* value) { SetInstanceGroupName(value); return *this;}
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
    inline ClusterNodeDetails& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline ClusterNodeDetails& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline ClusterNodeDetails& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the instance.</p>
     */
    inline const ClusterInstanceStatusDetails& GetInstanceStatus() const{ return m_instanceStatus; }
    inline bool InstanceStatusHasBeenSet() const { return m_instanceStatusHasBeenSet; }
    inline void SetInstanceStatus(const ClusterInstanceStatusDetails& value) { m_instanceStatusHasBeenSet = true; m_instanceStatus = value; }
    inline void SetInstanceStatus(ClusterInstanceStatusDetails&& value) { m_instanceStatusHasBeenSet = true; m_instanceStatus = std::move(value); }
    inline ClusterNodeDetails& WithInstanceStatus(const ClusterInstanceStatusDetails& value) { SetInstanceStatus(value); return *this;}
    inline ClusterNodeDetails& WithInstanceStatus(ClusterInstanceStatusDetails&& value) { SetInstanceStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the instance.</p>
     */
    inline const ClusterInstanceType& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const ClusterInstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(ClusterInstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline ClusterNodeDetails& WithInstanceType(const ClusterInstanceType& value) { SetInstanceType(value); return *this;}
    inline ClusterNodeDetails& WithInstanceType(ClusterInstanceType&& value) { SetInstanceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the instance is launched.</p>
     */
    inline const Aws::Utils::DateTime& GetLaunchTime() const{ return m_launchTime; }
    inline bool LaunchTimeHasBeenSet() const { return m_launchTimeHasBeenSet; }
    inline void SetLaunchTime(const Aws::Utils::DateTime& value) { m_launchTimeHasBeenSet = true; m_launchTime = value; }
    inline void SetLaunchTime(Aws::Utils::DateTime&& value) { m_launchTimeHasBeenSet = true; m_launchTime = std::move(value); }
    inline ClusterNodeDetails& WithLaunchTime(const Aws::Utils::DateTime& value) { SetLaunchTime(value); return *this;}
    inline ClusterNodeDetails& WithLaunchTime(Aws::Utils::DateTime&& value) { SetLaunchTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The LifeCycle configuration applied to the instance.</p>
     */
    inline const ClusterLifeCycleConfig& GetLifeCycleConfig() const{ return m_lifeCycleConfig; }
    inline bool LifeCycleConfigHasBeenSet() const { return m_lifeCycleConfigHasBeenSet; }
    inline void SetLifeCycleConfig(const ClusterLifeCycleConfig& value) { m_lifeCycleConfigHasBeenSet = true; m_lifeCycleConfig = value; }
    inline void SetLifeCycleConfig(ClusterLifeCycleConfig&& value) { m_lifeCycleConfigHasBeenSet = true; m_lifeCycleConfig = std::move(value); }
    inline ClusterNodeDetails& WithLifeCycleConfig(const ClusterLifeCycleConfig& value) { SetLifeCycleConfig(value); return *this;}
    inline ClusterNodeDetails& WithLifeCycleConfig(ClusterLifeCycleConfig&& value) { SetLifeCycleConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const VpcConfig& GetOverrideVpcConfig() const{ return m_overrideVpcConfig; }
    inline bool OverrideVpcConfigHasBeenSet() const { return m_overrideVpcConfigHasBeenSet; }
    inline void SetOverrideVpcConfig(const VpcConfig& value) { m_overrideVpcConfigHasBeenSet = true; m_overrideVpcConfig = value; }
    inline void SetOverrideVpcConfig(VpcConfig&& value) { m_overrideVpcConfigHasBeenSet = true; m_overrideVpcConfig = std::move(value); }
    inline ClusterNodeDetails& WithOverrideVpcConfig(const VpcConfig& value) { SetOverrideVpcConfig(value); return *this;}
    inline ClusterNodeDetails& WithOverrideVpcConfig(VpcConfig&& value) { SetOverrideVpcConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of threads per CPU core you specified under
     * <code>CreateCluster</code>.</p>
     */
    inline int GetThreadsPerCore() const{ return m_threadsPerCore; }
    inline bool ThreadsPerCoreHasBeenSet() const { return m_threadsPerCoreHasBeenSet; }
    inline void SetThreadsPerCore(int value) { m_threadsPerCoreHasBeenSet = true; m_threadsPerCore = value; }
    inline ClusterNodeDetails& WithThreadsPerCore(int value) { SetThreadsPerCore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configurations of additional storage specified to the instance group
     * where the instance (node) is launched.</p>
     */
    inline const Aws::Vector<ClusterInstanceStorageConfig>& GetInstanceStorageConfigs() const{ return m_instanceStorageConfigs; }
    inline bool InstanceStorageConfigsHasBeenSet() const { return m_instanceStorageConfigsHasBeenSet; }
    inline void SetInstanceStorageConfigs(const Aws::Vector<ClusterInstanceStorageConfig>& value) { m_instanceStorageConfigsHasBeenSet = true; m_instanceStorageConfigs = value; }
    inline void SetInstanceStorageConfigs(Aws::Vector<ClusterInstanceStorageConfig>&& value) { m_instanceStorageConfigsHasBeenSet = true; m_instanceStorageConfigs = std::move(value); }
    inline ClusterNodeDetails& WithInstanceStorageConfigs(const Aws::Vector<ClusterInstanceStorageConfig>& value) { SetInstanceStorageConfigs(value); return *this;}
    inline ClusterNodeDetails& WithInstanceStorageConfigs(Aws::Vector<ClusterInstanceStorageConfig>&& value) { SetInstanceStorageConfigs(std::move(value)); return *this;}
    inline ClusterNodeDetails& AddInstanceStorageConfigs(const ClusterInstanceStorageConfig& value) { m_instanceStorageConfigsHasBeenSet = true; m_instanceStorageConfigs.push_back(value); return *this; }
    inline ClusterNodeDetails& AddInstanceStorageConfigs(ClusterInstanceStorageConfig&& value) { m_instanceStorageConfigsHasBeenSet = true; m_instanceStorageConfigs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The private primary IP address of the SageMaker HyperPod cluster node.</p>
     */
    inline const Aws::String& GetPrivatePrimaryIp() const{ return m_privatePrimaryIp; }
    inline bool PrivatePrimaryIpHasBeenSet() const { return m_privatePrimaryIpHasBeenSet; }
    inline void SetPrivatePrimaryIp(const Aws::String& value) { m_privatePrimaryIpHasBeenSet = true; m_privatePrimaryIp = value; }
    inline void SetPrivatePrimaryIp(Aws::String&& value) { m_privatePrimaryIpHasBeenSet = true; m_privatePrimaryIp = std::move(value); }
    inline void SetPrivatePrimaryIp(const char* value) { m_privatePrimaryIpHasBeenSet = true; m_privatePrimaryIp.assign(value); }
    inline ClusterNodeDetails& WithPrivatePrimaryIp(const Aws::String& value) { SetPrivatePrimaryIp(value); return *this;}
    inline ClusterNodeDetails& WithPrivatePrimaryIp(Aws::String&& value) { SetPrivatePrimaryIp(std::move(value)); return *this;}
    inline ClusterNodeDetails& WithPrivatePrimaryIp(const char* value) { SetPrivatePrimaryIp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The private primary IPv6 address of the SageMaker HyperPod cluster node.</p>
     */
    inline const Aws::String& GetPrivatePrimaryIpv6() const{ return m_privatePrimaryIpv6; }
    inline bool PrivatePrimaryIpv6HasBeenSet() const { return m_privatePrimaryIpv6HasBeenSet; }
    inline void SetPrivatePrimaryIpv6(const Aws::String& value) { m_privatePrimaryIpv6HasBeenSet = true; m_privatePrimaryIpv6 = value; }
    inline void SetPrivatePrimaryIpv6(Aws::String&& value) { m_privatePrimaryIpv6HasBeenSet = true; m_privatePrimaryIpv6 = std::move(value); }
    inline void SetPrivatePrimaryIpv6(const char* value) { m_privatePrimaryIpv6HasBeenSet = true; m_privatePrimaryIpv6.assign(value); }
    inline ClusterNodeDetails& WithPrivatePrimaryIpv6(const Aws::String& value) { SetPrivatePrimaryIpv6(value); return *this;}
    inline ClusterNodeDetails& WithPrivatePrimaryIpv6(Aws::String&& value) { SetPrivatePrimaryIpv6(std::move(value)); return *this;}
    inline ClusterNodeDetails& WithPrivatePrimaryIpv6(const char* value) { SetPrivatePrimaryIpv6(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The private DNS hostname of the SageMaker HyperPod cluster node.</p>
     */
    inline const Aws::String& GetPrivateDnsHostname() const{ return m_privateDnsHostname; }
    inline bool PrivateDnsHostnameHasBeenSet() const { return m_privateDnsHostnameHasBeenSet; }
    inline void SetPrivateDnsHostname(const Aws::String& value) { m_privateDnsHostnameHasBeenSet = true; m_privateDnsHostname = value; }
    inline void SetPrivateDnsHostname(Aws::String&& value) { m_privateDnsHostnameHasBeenSet = true; m_privateDnsHostname = std::move(value); }
    inline void SetPrivateDnsHostname(const char* value) { m_privateDnsHostnameHasBeenSet = true; m_privateDnsHostname.assign(value); }
    inline ClusterNodeDetails& WithPrivateDnsHostname(const Aws::String& value) { SetPrivateDnsHostname(value); return *this;}
    inline ClusterNodeDetails& WithPrivateDnsHostname(Aws::String&& value) { SetPrivateDnsHostname(std::move(value)); return *this;}
    inline ClusterNodeDetails& WithPrivateDnsHostname(const char* value) { SetPrivateDnsHostname(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The placement details of the SageMaker HyperPod cluster node.</p>
     */
    inline const ClusterInstancePlacement& GetPlacement() const{ return m_placement; }
    inline bool PlacementHasBeenSet() const { return m_placementHasBeenSet; }
    inline void SetPlacement(const ClusterInstancePlacement& value) { m_placementHasBeenSet = true; m_placement = value; }
    inline void SetPlacement(ClusterInstancePlacement&& value) { m_placementHasBeenSet = true; m_placement = std::move(value); }
    inline ClusterNodeDetails& WithPlacement(const ClusterInstancePlacement& value) { SetPlacement(value); return *this;}
    inline ClusterNodeDetails& WithPlacement(ClusterInstancePlacement&& value) { SetPlacement(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceGroupName;
    bool m_instanceGroupNameHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    ClusterInstanceStatusDetails m_instanceStatus;
    bool m_instanceStatusHasBeenSet = false;

    ClusterInstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::Utils::DateTime m_launchTime;
    bool m_launchTimeHasBeenSet = false;

    ClusterLifeCycleConfig m_lifeCycleConfig;
    bool m_lifeCycleConfigHasBeenSet = false;

    VpcConfig m_overrideVpcConfig;
    bool m_overrideVpcConfigHasBeenSet = false;

    int m_threadsPerCore;
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
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
