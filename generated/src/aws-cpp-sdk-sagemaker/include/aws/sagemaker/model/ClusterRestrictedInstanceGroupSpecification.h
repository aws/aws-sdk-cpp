/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ClusterInstanceType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/VpcConfig.h>
#include <aws/sagemaker/model/ScheduledUpdateConfig.h>
#include <aws/sagemaker/model/EnvironmentConfig.h>
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
   * <p>The specifications of a restricted instance group that you need to
   * define.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ClusterRestrictedInstanceGroupSpecification">AWS
   * API Reference</a></p>
   */
  class ClusterRestrictedInstanceGroupSpecification
  {
  public:
    AWS_SAGEMAKER_API ClusterRestrictedInstanceGroupSpecification() = default;
    AWS_SAGEMAKER_API ClusterRestrictedInstanceGroupSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ClusterRestrictedInstanceGroupSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the number of instances to add to the restricted instance group of
     * a SageMaker HyperPod cluster.</p>
     */
    inline int GetInstanceCount() const { return m_instanceCount; }
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }
    inline ClusterRestrictedInstanceGroupSpecification& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the name of the restricted instance group.</p>
     */
    inline const Aws::String& GetInstanceGroupName() const { return m_instanceGroupName; }
    inline bool InstanceGroupNameHasBeenSet() const { return m_instanceGroupNameHasBeenSet; }
    template<typename InstanceGroupNameT = Aws::String>
    void SetInstanceGroupName(InstanceGroupNameT&& value) { m_instanceGroupNameHasBeenSet = true; m_instanceGroupName = std::forward<InstanceGroupNameT>(value); }
    template<typename InstanceGroupNameT = Aws::String>
    ClusterRestrictedInstanceGroupSpecification& WithInstanceGroupName(InstanceGroupNameT&& value) { SetInstanceGroupName(std::forward<InstanceGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the instance type of the restricted instance group.</p>
     */
    inline ClusterInstanceType GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(ClusterInstanceType value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline ClusterRestrictedInstanceGroupSpecification& WithInstanceType(ClusterInstanceType value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies an IAM execution role to be assumed by the restricted instance
     * group.</p>
     */
    inline const Aws::String& GetExecutionRole() const { return m_executionRole; }
    inline bool ExecutionRoleHasBeenSet() const { return m_executionRoleHasBeenSet; }
    template<typename ExecutionRoleT = Aws::String>
    void SetExecutionRole(ExecutionRoleT&& value) { m_executionRoleHasBeenSet = true; m_executionRole = std::forward<ExecutionRoleT>(value); }
    template<typename ExecutionRoleT = Aws::String>
    ClusterRestrictedInstanceGroupSpecification& WithExecutionRole(ExecutionRoleT&& value) { SetExecutionRole(std::forward<ExecutionRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number you specified to <code>TreadsPerCore</code> in
     * <code>CreateCluster</code> for enabling or disabling multithreading. For
     * instance types that support multithreading, you can specify 1 for disabling
     * multithreading and 2 for enabling multithreading. For more information, see the
     * reference table of <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/cpu-options-supported-instances-values.html">CPU
     * cores and threads per CPU core per instance type</a> in the <i>Amazon Elastic
     * Compute Cloud User Guide</i>.</p>
     */
    inline int GetThreadsPerCore() const { return m_threadsPerCore; }
    inline bool ThreadsPerCoreHasBeenSet() const { return m_threadsPerCoreHasBeenSet; }
    inline void SetThreadsPerCore(int value) { m_threadsPerCoreHasBeenSet = true; m_threadsPerCore = value; }
    inline ClusterRestrictedInstanceGroupSpecification& WithThreadsPerCore(int value) { SetThreadsPerCore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the additional storage configurations for the instances in the
     * SageMaker HyperPod cluster restricted instance group.</p>
     */
    inline const Aws::Vector<ClusterInstanceStorageConfig>& GetInstanceStorageConfigs() const { return m_instanceStorageConfigs; }
    inline bool InstanceStorageConfigsHasBeenSet() const { return m_instanceStorageConfigsHasBeenSet; }
    template<typename InstanceStorageConfigsT = Aws::Vector<ClusterInstanceStorageConfig>>
    void SetInstanceStorageConfigs(InstanceStorageConfigsT&& value) { m_instanceStorageConfigsHasBeenSet = true; m_instanceStorageConfigs = std::forward<InstanceStorageConfigsT>(value); }
    template<typename InstanceStorageConfigsT = Aws::Vector<ClusterInstanceStorageConfig>>
    ClusterRestrictedInstanceGroupSpecification& WithInstanceStorageConfigs(InstanceStorageConfigsT&& value) { SetInstanceStorageConfigs(std::forward<InstanceStorageConfigsT>(value)); return *this;}
    template<typename InstanceStorageConfigsT = ClusterInstanceStorageConfig>
    ClusterRestrictedInstanceGroupSpecification& AddInstanceStorageConfigs(InstanceStorageConfigsT&& value) { m_instanceStorageConfigsHasBeenSet = true; m_instanceStorageConfigs.emplace_back(std::forward<InstanceStorageConfigsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A flag indicating whether deep health checks should be performed when the
     * cluster restricted instance group is created or updated.</p>
     */
    inline const Aws::Vector<DeepHealthCheckType>& GetOnStartDeepHealthChecks() const { return m_onStartDeepHealthChecks; }
    inline bool OnStartDeepHealthChecksHasBeenSet() const { return m_onStartDeepHealthChecksHasBeenSet; }
    template<typename OnStartDeepHealthChecksT = Aws::Vector<DeepHealthCheckType>>
    void SetOnStartDeepHealthChecks(OnStartDeepHealthChecksT&& value) { m_onStartDeepHealthChecksHasBeenSet = true; m_onStartDeepHealthChecks = std::forward<OnStartDeepHealthChecksT>(value); }
    template<typename OnStartDeepHealthChecksT = Aws::Vector<DeepHealthCheckType>>
    ClusterRestrictedInstanceGroupSpecification& WithOnStartDeepHealthChecks(OnStartDeepHealthChecksT&& value) { SetOnStartDeepHealthChecks(std::forward<OnStartDeepHealthChecksT>(value)); return *this;}
    inline ClusterRestrictedInstanceGroupSpecification& AddOnStartDeepHealthChecks(DeepHealthCheckType value) { m_onStartDeepHealthChecksHasBeenSet = true; m_onStartDeepHealthChecks.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the training plan to filter clusters by.
     * For more information about reserving GPU capacity for your SageMaker HyperPod
     * clusters using Amazon SageMaker Training Plan, see <code> <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateTrainingPlan.html">CreateTrainingPlan</a>
     * </code>.</p>
     */
    inline const Aws::String& GetTrainingPlanArn() const { return m_trainingPlanArn; }
    inline bool TrainingPlanArnHasBeenSet() const { return m_trainingPlanArnHasBeenSet; }
    template<typename TrainingPlanArnT = Aws::String>
    void SetTrainingPlanArn(TrainingPlanArnT&& value) { m_trainingPlanArnHasBeenSet = true; m_trainingPlanArn = std::forward<TrainingPlanArnT>(value); }
    template<typename TrainingPlanArnT = Aws::String>
    ClusterRestrictedInstanceGroupSpecification& WithTrainingPlanArn(TrainingPlanArnT&& value) { SetTrainingPlanArn(std::forward<TrainingPlanArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const VpcConfig& GetOverrideVpcConfig() const { return m_overrideVpcConfig; }
    inline bool OverrideVpcConfigHasBeenSet() const { return m_overrideVpcConfigHasBeenSet; }
    template<typename OverrideVpcConfigT = VpcConfig>
    void SetOverrideVpcConfig(OverrideVpcConfigT&& value) { m_overrideVpcConfigHasBeenSet = true; m_overrideVpcConfig = std::forward<OverrideVpcConfigT>(value); }
    template<typename OverrideVpcConfigT = VpcConfig>
    ClusterRestrictedInstanceGroupSpecification& WithOverrideVpcConfig(OverrideVpcConfigT&& value) { SetOverrideVpcConfig(std::forward<OverrideVpcConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ScheduledUpdateConfig& GetScheduledUpdateConfig() const { return m_scheduledUpdateConfig; }
    inline bool ScheduledUpdateConfigHasBeenSet() const { return m_scheduledUpdateConfigHasBeenSet; }
    template<typename ScheduledUpdateConfigT = ScheduledUpdateConfig>
    void SetScheduledUpdateConfig(ScheduledUpdateConfigT&& value) { m_scheduledUpdateConfigHasBeenSet = true; m_scheduledUpdateConfig = std::forward<ScheduledUpdateConfigT>(value); }
    template<typename ScheduledUpdateConfigT = ScheduledUpdateConfig>
    ClusterRestrictedInstanceGroupSpecification& WithScheduledUpdateConfig(ScheduledUpdateConfigT&& value) { SetScheduledUpdateConfig(std::forward<ScheduledUpdateConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for the restricted instance groups (RIG) environment.</p>
     */
    inline const EnvironmentConfig& GetEnvironmentConfig() const { return m_environmentConfig; }
    inline bool EnvironmentConfigHasBeenSet() const { return m_environmentConfigHasBeenSet; }
    template<typename EnvironmentConfigT = EnvironmentConfig>
    void SetEnvironmentConfig(EnvironmentConfigT&& value) { m_environmentConfigHasBeenSet = true; m_environmentConfig = std::forward<EnvironmentConfigT>(value); }
    template<typename EnvironmentConfigT = EnvironmentConfig>
    ClusterRestrictedInstanceGroupSpecification& WithEnvironmentConfig(EnvironmentConfigT&& value) { SetEnvironmentConfig(std::forward<EnvironmentConfigT>(value)); return *this;}
    ///@}
  private:

    int m_instanceCount{0};
    bool m_instanceCountHasBeenSet = false;

    Aws::String m_instanceGroupName;
    bool m_instanceGroupNameHasBeenSet = false;

    ClusterInstanceType m_instanceType{ClusterInstanceType::NOT_SET};
    bool m_instanceTypeHasBeenSet = false;

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

    EnvironmentConfig m_environmentConfig;
    bool m_environmentConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
