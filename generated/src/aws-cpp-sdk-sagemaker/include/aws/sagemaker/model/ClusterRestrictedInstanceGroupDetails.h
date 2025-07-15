/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ClusterInstanceType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/InstanceGroupStatus.h>
#include <aws/sagemaker/model/VpcConfig.h>
#include <aws/sagemaker/model/ScheduledUpdateConfig.h>
#include <aws/sagemaker/model/EnvironmentConfigDetails.h>
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
   * <p>The instance group details of the restricted instance group
   * (RIG).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ClusterRestrictedInstanceGroupDetails">AWS
   * API Reference</a></p>
   */
  class ClusterRestrictedInstanceGroupDetails
  {
  public:
    AWS_SAGEMAKER_API ClusterRestrictedInstanceGroupDetails() = default;
    AWS_SAGEMAKER_API ClusterRestrictedInstanceGroupDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ClusterRestrictedInstanceGroupDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of instances that are currently in the restricted instance group
     * of a SageMaker HyperPod cluster.</p>
     */
    inline int GetCurrentCount() const { return m_currentCount; }
    inline bool CurrentCountHasBeenSet() const { return m_currentCountHasBeenSet; }
    inline void SetCurrentCount(int value) { m_currentCountHasBeenSet = true; m_currentCount = value; }
    inline ClusterRestrictedInstanceGroupDetails& WithCurrentCount(int value) { SetCurrentCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances you specified to add to the restricted instance group
     * of a SageMaker HyperPod cluster.</p>
     */
    inline int GetTargetCount() const { return m_targetCount; }
    inline bool TargetCountHasBeenSet() const { return m_targetCountHasBeenSet; }
    inline void SetTargetCount(int value) { m_targetCountHasBeenSet = true; m_targetCount = value; }
    inline ClusterRestrictedInstanceGroupDetails& WithTargetCount(int value) { SetTargetCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the restricted instance group of a SageMaker HyperPod
     * cluster.</p>
     */
    inline const Aws::String& GetInstanceGroupName() const { return m_instanceGroupName; }
    inline bool InstanceGroupNameHasBeenSet() const { return m_instanceGroupNameHasBeenSet; }
    template<typename InstanceGroupNameT = Aws::String>
    void SetInstanceGroupName(InstanceGroupNameT&& value) { m_instanceGroupNameHasBeenSet = true; m_instanceGroupName = std::forward<InstanceGroupNameT>(value); }
    template<typename InstanceGroupNameT = Aws::String>
    ClusterRestrictedInstanceGroupDetails& WithInstanceGroupName(InstanceGroupNameT&& value) { SetInstanceGroupName(std::forward<InstanceGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type of the restricted instance group of a SageMaker HyperPod
     * cluster.</p>
     */
    inline ClusterInstanceType GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(ClusterInstanceType value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline ClusterRestrictedInstanceGroupDetails& WithInstanceType(ClusterInstanceType value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The execution role for the restricted instance group to assume.</p>
     */
    inline const Aws::String& GetExecutionRole() const { return m_executionRole; }
    inline bool ExecutionRoleHasBeenSet() const { return m_executionRoleHasBeenSet; }
    template<typename ExecutionRoleT = Aws::String>
    void SetExecutionRole(ExecutionRoleT&& value) { m_executionRoleHasBeenSet = true; m_executionRole = std::forward<ExecutionRoleT>(value); }
    template<typename ExecutionRoleT = Aws::String>
    ClusterRestrictedInstanceGroupDetails& WithExecutionRole(ExecutionRoleT&& value) { SetExecutionRole(std::forward<ExecutionRoleT>(value)); return *this;}
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
    inline ClusterRestrictedInstanceGroupDetails& WithThreadsPerCore(int value) { SetThreadsPerCore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The additional storage configurations for the instances in the SageMaker
     * HyperPod cluster restricted instance group.</p>
     */
    inline const Aws::Vector<ClusterInstanceStorageConfig>& GetInstanceStorageConfigs() const { return m_instanceStorageConfigs; }
    inline bool InstanceStorageConfigsHasBeenSet() const { return m_instanceStorageConfigsHasBeenSet; }
    template<typename InstanceStorageConfigsT = Aws::Vector<ClusterInstanceStorageConfig>>
    void SetInstanceStorageConfigs(InstanceStorageConfigsT&& value) { m_instanceStorageConfigsHasBeenSet = true; m_instanceStorageConfigs = std::forward<InstanceStorageConfigsT>(value); }
    template<typename InstanceStorageConfigsT = Aws::Vector<ClusterInstanceStorageConfig>>
    ClusterRestrictedInstanceGroupDetails& WithInstanceStorageConfigs(InstanceStorageConfigsT&& value) { SetInstanceStorageConfigs(std::forward<InstanceStorageConfigsT>(value)); return *this;}
    template<typename InstanceStorageConfigsT = ClusterInstanceStorageConfig>
    ClusterRestrictedInstanceGroupDetails& AddInstanceStorageConfigs(InstanceStorageConfigsT&& value) { m_instanceStorageConfigsHasBeenSet = true; m_instanceStorageConfigs.emplace_back(std::forward<InstanceStorageConfigsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A flag indicating whether deep health checks should be performed when the
     * cluster's restricted instance group is created or updated.</p>
     */
    inline const Aws::Vector<DeepHealthCheckType>& GetOnStartDeepHealthChecks() const { return m_onStartDeepHealthChecks; }
    inline bool OnStartDeepHealthChecksHasBeenSet() const { return m_onStartDeepHealthChecksHasBeenSet; }
    template<typename OnStartDeepHealthChecksT = Aws::Vector<DeepHealthCheckType>>
    void SetOnStartDeepHealthChecks(OnStartDeepHealthChecksT&& value) { m_onStartDeepHealthChecksHasBeenSet = true; m_onStartDeepHealthChecks = std::forward<OnStartDeepHealthChecksT>(value); }
    template<typename OnStartDeepHealthChecksT = Aws::Vector<DeepHealthCheckType>>
    ClusterRestrictedInstanceGroupDetails& WithOnStartDeepHealthChecks(OnStartDeepHealthChecksT&& value) { SetOnStartDeepHealthChecks(std::forward<OnStartDeepHealthChecksT>(value)); return *this;}
    inline ClusterRestrictedInstanceGroupDetails& AddOnStartDeepHealthChecks(DeepHealthCheckType value) { m_onStartDeepHealthChecksHasBeenSet = true; m_onStartDeepHealthChecks.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The current status of the cluster's restricted instance group.</p> <ul> <li>
     * <p> <code>InService</code>: The restricted instance group is active and
     * healthy.</p> </li> <li> <p> <code>Creating</code>: The restricted instance group
     * is being provisioned.</p> </li> <li> <p> <code>Updating</code>: The restricted
     * instance group is being updated.</p> </li> <li> <p> <code>Failed</code>: The
     * restricted instance group has failed to provision or is no longer healthy.</p>
     * </li> <li> <p> <code>Degraded</code>: The restricted instance group is degraded,
     * meaning that some instances have failed to provision or are no longer
     * healthy.</p> </li> <li> <p> <code>Deleting</code>: The restricted instance group
     * is being deleted.</p> </li> </ul>
     */
    inline InstanceGroupStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(InstanceGroupStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ClusterRestrictedInstanceGroupDetails& WithStatus(InstanceGroupStatus value) { SetStatus(value); return *this;}
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
    ClusterRestrictedInstanceGroupDetails& WithTrainingPlanArn(TrainingPlanArnT&& value) { SetTrainingPlanArn(std::forward<TrainingPlanArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the training plan associated with this cluster
     * restricted instance group.</p>
     */
    inline const Aws::String& GetTrainingPlanStatus() const { return m_trainingPlanStatus; }
    inline bool TrainingPlanStatusHasBeenSet() const { return m_trainingPlanStatusHasBeenSet; }
    template<typename TrainingPlanStatusT = Aws::String>
    void SetTrainingPlanStatus(TrainingPlanStatusT&& value) { m_trainingPlanStatusHasBeenSet = true; m_trainingPlanStatus = std::forward<TrainingPlanStatusT>(value); }
    template<typename TrainingPlanStatusT = Aws::String>
    ClusterRestrictedInstanceGroupDetails& WithTrainingPlanStatus(TrainingPlanStatusT&& value) { SetTrainingPlanStatus(std::forward<TrainingPlanStatusT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const VpcConfig& GetOverrideVpcConfig() const { return m_overrideVpcConfig; }
    inline bool OverrideVpcConfigHasBeenSet() const { return m_overrideVpcConfigHasBeenSet; }
    template<typename OverrideVpcConfigT = VpcConfig>
    void SetOverrideVpcConfig(OverrideVpcConfigT&& value) { m_overrideVpcConfigHasBeenSet = true; m_overrideVpcConfig = std::forward<OverrideVpcConfigT>(value); }
    template<typename OverrideVpcConfigT = VpcConfig>
    ClusterRestrictedInstanceGroupDetails& WithOverrideVpcConfig(OverrideVpcConfigT&& value) { SetOverrideVpcConfig(std::forward<OverrideVpcConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ScheduledUpdateConfig& GetScheduledUpdateConfig() const { return m_scheduledUpdateConfig; }
    inline bool ScheduledUpdateConfigHasBeenSet() const { return m_scheduledUpdateConfigHasBeenSet; }
    template<typename ScheduledUpdateConfigT = ScheduledUpdateConfig>
    void SetScheduledUpdateConfig(ScheduledUpdateConfigT&& value) { m_scheduledUpdateConfigHasBeenSet = true; m_scheduledUpdateConfig = std::forward<ScheduledUpdateConfigT>(value); }
    template<typename ScheduledUpdateConfigT = ScheduledUpdateConfig>
    ClusterRestrictedInstanceGroupDetails& WithScheduledUpdateConfig(ScheduledUpdateConfigT&& value) { SetScheduledUpdateConfig(std::forward<ScheduledUpdateConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for the restricted instance groups (RIG) environment.</p>
     */
    inline const EnvironmentConfigDetails& GetEnvironmentConfig() const { return m_environmentConfig; }
    inline bool EnvironmentConfigHasBeenSet() const { return m_environmentConfigHasBeenSet; }
    template<typename EnvironmentConfigT = EnvironmentConfigDetails>
    void SetEnvironmentConfig(EnvironmentConfigT&& value) { m_environmentConfigHasBeenSet = true; m_environmentConfig = std::forward<EnvironmentConfigT>(value); }
    template<typename EnvironmentConfigT = EnvironmentConfigDetails>
    ClusterRestrictedInstanceGroupDetails& WithEnvironmentConfig(EnvironmentConfigT&& value) { SetEnvironmentConfig(std::forward<EnvironmentConfigT>(value)); return *this;}
    ///@}
  private:

    int m_currentCount{0};
    bool m_currentCountHasBeenSet = false;

    int m_targetCount{0};
    bool m_targetCountHasBeenSet = false;

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

    InstanceGroupStatus m_status{InstanceGroupStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_trainingPlanArn;
    bool m_trainingPlanArnHasBeenSet = false;

    Aws::String m_trainingPlanStatus;
    bool m_trainingPlanStatusHasBeenSet = false;

    VpcConfig m_overrideVpcConfig;
    bool m_overrideVpcConfigHasBeenSet = false;

    ScheduledUpdateConfig m_scheduledUpdateConfig;
    bool m_scheduledUpdateConfigHasBeenSet = false;

    EnvironmentConfigDetails m_environmentConfig;
    bool m_environmentConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
