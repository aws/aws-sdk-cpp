/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ClusterInstanceType.h>
#include <aws/sagemaker/model/ClusterLifeCycleConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/VpcConfig.h>
#include <aws/sagemaker/model/ScheduledUpdateConfig.h>
#include <aws/sagemaker/model/ClusterInstanceStorageConfig.h>
#include <aws/sagemaker/model/DeepHealthCheckType.h>
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
   * <p>The specifications of an instance group that you need to
   * define.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ClusterInstanceGroupSpecification">AWS
   * API Reference</a></p>
   */
  class ClusterInstanceGroupSpecification
  {
  public:
    AWS_SAGEMAKER_API ClusterInstanceGroupSpecification() = default;
    AWS_SAGEMAKER_API ClusterInstanceGroupSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ClusterInstanceGroupSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the number of instances to add to the instance group of a SageMaker
     * HyperPod cluster.</p>
     */
    inline int GetInstanceCount() const { return m_instanceCount; }
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }
    inline ClusterInstanceGroupSpecification& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the name of the instance group.</p>
     */
    inline const Aws::String& GetInstanceGroupName() const { return m_instanceGroupName; }
    inline bool InstanceGroupNameHasBeenSet() const { return m_instanceGroupNameHasBeenSet; }
    template<typename InstanceGroupNameT = Aws::String>
    void SetInstanceGroupName(InstanceGroupNameT&& value) { m_instanceGroupNameHasBeenSet = true; m_instanceGroupName = std::forward<InstanceGroupNameT>(value); }
    template<typename InstanceGroupNameT = Aws::String>
    ClusterInstanceGroupSpecification& WithInstanceGroupName(InstanceGroupNameT&& value) { SetInstanceGroupName(std::forward<InstanceGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the instance type of the instance group.</p>
     */
    inline ClusterInstanceType GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(ClusterInstanceType value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline ClusterInstanceGroupSpecification& WithInstanceType(ClusterInstanceType value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the LifeCycle configuration for the instance group.</p>
     */
    inline const ClusterLifeCycleConfig& GetLifeCycleConfig() const { return m_lifeCycleConfig; }
    inline bool LifeCycleConfigHasBeenSet() const { return m_lifeCycleConfigHasBeenSet; }
    template<typename LifeCycleConfigT = ClusterLifeCycleConfig>
    void SetLifeCycleConfig(LifeCycleConfigT&& value) { m_lifeCycleConfigHasBeenSet = true; m_lifeCycleConfig = std::forward<LifeCycleConfigT>(value); }
    template<typename LifeCycleConfigT = ClusterLifeCycleConfig>
    ClusterInstanceGroupSpecification& WithLifeCycleConfig(LifeCycleConfigT&& value) { SetLifeCycleConfig(std::forward<LifeCycleConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies an IAM execution role to be assumed by the instance group.</p>
     */
    inline const Aws::String& GetExecutionRole() const { return m_executionRole; }
    inline bool ExecutionRoleHasBeenSet() const { return m_executionRoleHasBeenSet; }
    template<typename ExecutionRoleT = Aws::String>
    void SetExecutionRole(ExecutionRoleT&& value) { m_executionRoleHasBeenSet = true; m_executionRole = std::forward<ExecutionRoleT>(value); }
    template<typename ExecutionRoleT = Aws::String>
    ClusterInstanceGroupSpecification& WithExecutionRole(ExecutionRoleT&& value) { SetExecutionRole(std::forward<ExecutionRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the value for <b>Threads per core</b>. For instance types that
     * support multithreading, you can specify <code>1</code> for disabling
     * multithreading and <code>2</code> for enabling multithreading. For instance
     * types that doesn't support multithreading, specify <code>1</code>. For more
     * information, see the reference table of <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/cpu-options-supported-instances-values.html">CPU
     * cores and threads per CPU core per instance type</a> in the <i>Amazon Elastic
     * Compute Cloud User Guide</i>.</p>
     */
    inline int GetThreadsPerCore() const { return m_threadsPerCore; }
    inline bool ThreadsPerCoreHasBeenSet() const { return m_threadsPerCoreHasBeenSet; }
    inline void SetThreadsPerCore(int value) { m_threadsPerCoreHasBeenSet = true; m_threadsPerCore = value; }
    inline ClusterInstanceGroupSpecification& WithThreadsPerCore(int value) { SetThreadsPerCore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the additional storage configurations for the instances in the
     * SageMaker HyperPod cluster instance group.</p>
     */
    inline const Aws::Vector<ClusterInstanceStorageConfig>& GetInstanceStorageConfigs() const { return m_instanceStorageConfigs; }
    inline bool InstanceStorageConfigsHasBeenSet() const { return m_instanceStorageConfigsHasBeenSet; }
    template<typename InstanceStorageConfigsT = Aws::Vector<ClusterInstanceStorageConfig>>
    void SetInstanceStorageConfigs(InstanceStorageConfigsT&& value) { m_instanceStorageConfigsHasBeenSet = true; m_instanceStorageConfigs = std::forward<InstanceStorageConfigsT>(value); }
    template<typename InstanceStorageConfigsT = Aws::Vector<ClusterInstanceStorageConfig>>
    ClusterInstanceGroupSpecification& WithInstanceStorageConfigs(InstanceStorageConfigsT&& value) { SetInstanceStorageConfigs(std::forward<InstanceStorageConfigsT>(value)); return *this;}
    template<typename InstanceStorageConfigsT = ClusterInstanceStorageConfig>
    ClusterInstanceGroupSpecification& AddInstanceStorageConfigs(InstanceStorageConfigsT&& value) { m_instanceStorageConfigsHasBeenSet = true; m_instanceStorageConfigs.emplace_back(std::forward<InstanceStorageConfigsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A flag indicating whether deep health checks should be performed when the
     * cluster instance group is created or updated.</p>
     */
    inline const Aws::Vector<DeepHealthCheckType>& GetOnStartDeepHealthChecks() const { return m_onStartDeepHealthChecks; }
    inline bool OnStartDeepHealthChecksHasBeenSet() const { return m_onStartDeepHealthChecksHasBeenSet; }
    template<typename OnStartDeepHealthChecksT = Aws::Vector<DeepHealthCheckType>>
    void SetOnStartDeepHealthChecks(OnStartDeepHealthChecksT&& value) { m_onStartDeepHealthChecksHasBeenSet = true; m_onStartDeepHealthChecks = std::forward<OnStartDeepHealthChecksT>(value); }
    template<typename OnStartDeepHealthChecksT = Aws::Vector<DeepHealthCheckType>>
    ClusterInstanceGroupSpecification& WithOnStartDeepHealthChecks(OnStartDeepHealthChecksT&& value) { SetOnStartDeepHealthChecks(std::forward<OnStartDeepHealthChecksT>(value)); return *this;}
    inline ClusterInstanceGroupSpecification& AddOnStartDeepHealthChecks(DeepHealthCheckType value) { m_onStartDeepHealthChecksHasBeenSet = true; m_onStartDeepHealthChecks.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN); of the training plan to use for this cluster
     * instance group.</p> <p>For more information about how to reserve GPU capacity
     * for your SageMaker HyperPod clusters using Amazon SageMaker Training Plan, see
     * <code> <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateTrainingPlan.html">CreateTrainingPlan</a>
     * </code>.</p>
     */
    inline const Aws::String& GetTrainingPlanArn() const { return m_trainingPlanArn; }
    inline bool TrainingPlanArnHasBeenSet() const { return m_trainingPlanArnHasBeenSet; }
    template<typename TrainingPlanArnT = Aws::String>
    void SetTrainingPlanArn(TrainingPlanArnT&& value) { m_trainingPlanArnHasBeenSet = true; m_trainingPlanArn = std::forward<TrainingPlanArnT>(value); }
    template<typename TrainingPlanArnT = Aws::String>
    ClusterInstanceGroupSpecification& WithTrainingPlanArn(TrainingPlanArnT&& value) { SetTrainingPlanArn(std::forward<TrainingPlanArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>To configure multi-AZ deployments, customize the Amazon VPC configuration at
     * the instance group level. You can specify different subnets and security groups
     * across different AZs in the instance group specification to override a SageMaker
     * HyperPod cluster's default Amazon VPC configuration. For more information about
     * deploying a cluster in multiple AZs, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-hyperpod-prerequisites.html#sagemaker-hyperpod-prerequisites-multiple-availability-zones">Setting
     * up SageMaker HyperPod clusters across multiple AZs</a>.</p>  <p>When your
     * Amazon VPC and subnets support IPv6, network communications differ based on the
     * cluster orchestration platform:</p> <ul> <li> <p>Slurm-orchestrated clusters
     * automatically configure nodes with dual IPv6 and IPv4 addresses, allowing
     * immediate IPv6 network communications.</p> </li> <li> <p>In Amazon
     * EKS-orchestrated clusters, nodes receive dual-stack addressing, but pods can
     * only use IPv6 when the Amazon EKS cluster is explicitly IPv6-enabled. For
     * information about deploying an IPv6 Amazon EKS cluster, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/deploy-ipv6-cluster.html#_deploy_an_ipv6_cluster_with_eksctl">Amazon
     * EKS IPv6 Cluster Deployment</a>.</p> </li> </ul> <p>Additional resources for
     * IPv6 configuration:</p> <ul> <li> <p>For information about adding IPv6 support
     * to your VPC, see to <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/vpc-migrate-ipv6.html">IPv6
     * Support for VPC</a>.</p> </li> <li> <p>For information about creating a new
     * IPv6-compatible VPC, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/create-vpc.html">Amazon
     * VPC Creation Guide</a>.</p> </li> <li> <p>To configure SageMaker HyperPod with a
     * custom Amazon VPC, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-hyperpod-prerequisites.html#sagemaker-hyperpod-prerequisites-optional-vpc">Custom
     * Amazon VPC Setup for SageMaker HyperPod</a>.</p> </li> </ul> 
     */
    inline const VpcConfig& GetOverrideVpcConfig() const { return m_overrideVpcConfig; }
    inline bool OverrideVpcConfigHasBeenSet() const { return m_overrideVpcConfigHasBeenSet; }
    template<typename OverrideVpcConfigT = VpcConfig>
    void SetOverrideVpcConfig(OverrideVpcConfigT&& value) { m_overrideVpcConfigHasBeenSet = true; m_overrideVpcConfig = std::forward<OverrideVpcConfigT>(value); }
    template<typename OverrideVpcConfigT = VpcConfig>
    ClusterInstanceGroupSpecification& WithOverrideVpcConfig(OverrideVpcConfigT&& value) { SetOverrideVpcConfig(std::forward<OverrideVpcConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration object of the schedule that SageMaker uses to update the
     * AMI.</p>
     */
    inline const ScheduledUpdateConfig& GetScheduledUpdateConfig() const { return m_scheduledUpdateConfig; }
    inline bool ScheduledUpdateConfigHasBeenSet() const { return m_scheduledUpdateConfigHasBeenSet; }
    template<typename ScheduledUpdateConfigT = ScheduledUpdateConfig>
    void SetScheduledUpdateConfig(ScheduledUpdateConfigT&& value) { m_scheduledUpdateConfigHasBeenSet = true; m_scheduledUpdateConfig = std::forward<ScheduledUpdateConfigT>(value); }
    template<typename ScheduledUpdateConfigT = ScheduledUpdateConfig>
    ClusterInstanceGroupSpecification& WithScheduledUpdateConfig(ScheduledUpdateConfigT&& value) { SetScheduledUpdateConfig(std::forward<ScheduledUpdateConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When configuring your HyperPod cluster, you can specify an image ID using one
     * of the following options:</p> <ul> <li> <p> <code>HyperPodPublicAmiId</code>:
     * Use a HyperPod public AMI</p> </li> <li> <p> <code>CustomAmiId</code>: Use your
     * custom AMI</p> </li> <li> <p> <code>default</code>: Use the default latest
     * system image</p> </li> </ul> <p>If you choose to use a custom AMI
     * (<code>CustomAmiId</code>), ensure it meets the following requirements:</p> <ul>
     * <li> <p>Encryption: The custom AMI must be unencrypted.</p> </li> <li>
     * <p>Ownership: The custom AMI must be owned by the same Amazon Web Services
     * account that is creating the HyperPod cluster.</p> </li> <li> <p>Volume support:
     * Only the primary AMI snapshot volume is supported; additional AMI volumes are
     * not supported.</p> </li> </ul> <p>When updating the instance group's AMI through
     * the <code>UpdateClusterSoftware</code> operation, if an instance group uses a
     * custom AMI, you must provide an <code>ImageId</code> or use the default as
     * input. Note that if you don't specify an instance group in your
     * <code>UpdateClusterSoftware</code> request, then all of the instance groups are
     * patched with the specified image.</p>
     */
    inline const Aws::String& GetImageId() const { return m_imageId; }
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }
    template<typename ImageIdT = Aws::String>
    void SetImageId(ImageIdT&& value) { m_imageIdHasBeenSet = true; m_imageId = std::forward<ImageIdT>(value); }
    template<typename ImageIdT = Aws::String>
    ClusterInstanceGroupSpecification& WithImageId(ImageIdT&& value) { SetImageId(std::forward<ImageIdT>(value)); return *this;}
    ///@}
  private:

    int m_instanceCount{0};
    bool m_instanceCountHasBeenSet = false;

    Aws::String m_instanceGroupName;
    bool m_instanceGroupNameHasBeenSet = false;

    ClusterInstanceType m_instanceType{ClusterInstanceType::NOT_SET};
    bool m_instanceTypeHasBeenSet = false;

    ClusterLifeCycleConfig m_lifeCycleConfig;
    bool m_lifeCycleConfigHasBeenSet = false;

    Aws::String m_executionRole;
    bool m_executionRoleHasBeenSet = false;

    int m_threadsPerCore{0};
    bool m_threadsPerCoreHasBeenSet = false;

    Aws::Vector<ClusterInstanceStorageConfig> m_instanceStorageConfigs;
    bool m_instanceStorageConfigsHasBeenSet = false;

    Aws::Vector<DeepHealthCheckType> m_onStartDeepHealthChecks;
    bool m_onStartDeepHealthChecksHasBeenSet = false;

    Aws::String m_trainingPlanArn;
    bool m_trainingPlanArnHasBeenSet = false;

    VpcConfig m_overrideVpcConfig;
    bool m_overrideVpcConfigHasBeenSet = false;

    ScheduledUpdateConfig m_scheduledUpdateConfig;
    bool m_scheduledUpdateConfigHasBeenSet = false;

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
