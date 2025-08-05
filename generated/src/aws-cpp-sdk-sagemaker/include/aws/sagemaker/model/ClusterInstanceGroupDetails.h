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
#include <aws/sagemaker/model/InstanceGroupStatus.h>
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
   * <p>Details of an instance group in a SageMaker HyperPod cluster.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ClusterInstanceGroupDetails">AWS
   * API Reference</a></p>
   */
  class ClusterInstanceGroupDetails
  {
  public:
    AWS_SAGEMAKER_API ClusterInstanceGroupDetails() = default;
    AWS_SAGEMAKER_API ClusterInstanceGroupDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ClusterInstanceGroupDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of instances that are currently in the instance group of a
     * SageMaker HyperPod cluster.</p>
     */
    inline int GetCurrentCount() const { return m_currentCount; }
    inline bool CurrentCountHasBeenSet() const { return m_currentCountHasBeenSet; }
    inline void SetCurrentCount(int value) { m_currentCountHasBeenSet = true; m_currentCount = value; }
    inline ClusterInstanceGroupDetails& WithCurrentCount(int value) { SetCurrentCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances you specified to add to the instance group of a
     * SageMaker HyperPod cluster.</p>
     */
    inline int GetTargetCount() const { return m_targetCount; }
    inline bool TargetCountHasBeenSet() const { return m_targetCountHasBeenSet; }
    inline void SetTargetCount(int value) { m_targetCountHasBeenSet = true; m_targetCount = value; }
    inline ClusterInstanceGroupDetails& WithTargetCount(int value) { SetTargetCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the instance group of a SageMaker HyperPod cluster.</p>
     */
    inline const Aws::String& GetInstanceGroupName() const { return m_instanceGroupName; }
    inline bool InstanceGroupNameHasBeenSet() const { return m_instanceGroupNameHasBeenSet; }
    template<typename InstanceGroupNameT = Aws::String>
    void SetInstanceGroupName(InstanceGroupNameT&& value) { m_instanceGroupNameHasBeenSet = true; m_instanceGroupName = std::forward<InstanceGroupNameT>(value); }
    template<typename InstanceGroupNameT = Aws::String>
    ClusterInstanceGroupDetails& WithInstanceGroupName(InstanceGroupNameT&& value) { SetInstanceGroupName(std::forward<InstanceGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type of the instance group of a SageMaker HyperPod cluster.</p>
     */
    inline ClusterInstanceType GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(ClusterInstanceType value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline ClusterInstanceGroupDetails& WithInstanceType(ClusterInstanceType value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details of LifeCycle configuration for the instance group.</p>
     */
    inline const ClusterLifeCycleConfig& GetLifeCycleConfig() const { return m_lifeCycleConfig; }
    inline bool LifeCycleConfigHasBeenSet() const { return m_lifeCycleConfigHasBeenSet; }
    template<typename LifeCycleConfigT = ClusterLifeCycleConfig>
    void SetLifeCycleConfig(LifeCycleConfigT&& value) { m_lifeCycleConfigHasBeenSet = true; m_lifeCycleConfig = std::forward<LifeCycleConfigT>(value); }
    template<typename LifeCycleConfigT = ClusterLifeCycleConfig>
    ClusterInstanceGroupDetails& WithLifeCycleConfig(LifeCycleConfigT&& value) { SetLifeCycleConfig(std::forward<LifeCycleConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The execution role for the instance group to assume.</p>
     */
    inline const Aws::String& GetExecutionRole() const { return m_executionRole; }
    inline bool ExecutionRoleHasBeenSet() const { return m_executionRoleHasBeenSet; }
    template<typename ExecutionRoleT = Aws::String>
    void SetExecutionRole(ExecutionRoleT&& value) { m_executionRoleHasBeenSet = true; m_executionRole = std::forward<ExecutionRoleT>(value); }
    template<typename ExecutionRoleT = Aws::String>
    ClusterInstanceGroupDetails& WithExecutionRole(ExecutionRoleT&& value) { SetExecutionRole(std::forward<ExecutionRoleT>(value)); return *this;}
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
    inline ClusterInstanceGroupDetails& WithThreadsPerCore(int value) { SetThreadsPerCore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The additional storage configurations for the instances in the SageMaker
     * HyperPod cluster instance group.</p>
     */
    inline const Aws::Vector<ClusterInstanceStorageConfig>& GetInstanceStorageConfigs() const { return m_instanceStorageConfigs; }
    inline bool InstanceStorageConfigsHasBeenSet() const { return m_instanceStorageConfigsHasBeenSet; }
    template<typename InstanceStorageConfigsT = Aws::Vector<ClusterInstanceStorageConfig>>
    void SetInstanceStorageConfigs(InstanceStorageConfigsT&& value) { m_instanceStorageConfigsHasBeenSet = true; m_instanceStorageConfigs = std::forward<InstanceStorageConfigsT>(value); }
    template<typename InstanceStorageConfigsT = Aws::Vector<ClusterInstanceStorageConfig>>
    ClusterInstanceGroupDetails& WithInstanceStorageConfigs(InstanceStorageConfigsT&& value) { SetInstanceStorageConfigs(std::forward<InstanceStorageConfigsT>(value)); return *this;}
    template<typename InstanceStorageConfigsT = ClusterInstanceStorageConfig>
    ClusterInstanceGroupDetails& AddInstanceStorageConfigs(InstanceStorageConfigsT&& value) { m_instanceStorageConfigsHasBeenSet = true; m_instanceStorageConfigs.emplace_back(std::forward<InstanceStorageConfigsT>(value)); return *this; }
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
    ClusterInstanceGroupDetails& WithOnStartDeepHealthChecks(OnStartDeepHealthChecksT&& value) { SetOnStartDeepHealthChecks(std::forward<OnStartDeepHealthChecksT>(value)); return *this;}
    inline ClusterInstanceGroupDetails& AddOnStartDeepHealthChecks(DeepHealthCheckType value) { m_onStartDeepHealthChecksHasBeenSet = true; m_onStartDeepHealthChecks.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The current status of the cluster instance group.</p> <ul> <li> <p>
     * <code>InService</code>: The instance group is active and healthy.</p> </li> <li>
     * <p> <code>Creating</code>: The instance group is being provisioned.</p> </li>
     * <li> <p> <code>Updating</code>: The instance group is being updated.</p> </li>
     * <li> <p> <code>Failed</code>: The instance group has failed to provision or is
     * no longer healthy.</p> </li> <li> <p> <code>Degraded</code>: The instance group
     * is degraded, meaning that some instances have failed to provision or are no
     * longer healthy.</p> </li> <li> <p> <code>Deleting</code>: The instance group is
     * being deleted.</p> </li> </ul>
     */
    inline InstanceGroupStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(InstanceGroupStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ClusterInstanceGroupDetails& WithStatus(InstanceGroupStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN); of the training plan associated with this
     * cluster instance group.</p> <p>For more information about how to reserve GPU
     * capacity for your SageMaker HyperPod clusters using Amazon SageMaker Training
     * Plan, see <code> <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateTrainingPlan.html">CreateTrainingPlan</a>
     * </code>.</p>
     */
    inline const Aws::String& GetTrainingPlanArn() const { return m_trainingPlanArn; }
    inline bool TrainingPlanArnHasBeenSet() const { return m_trainingPlanArnHasBeenSet; }
    template<typename TrainingPlanArnT = Aws::String>
    void SetTrainingPlanArn(TrainingPlanArnT&& value) { m_trainingPlanArnHasBeenSet = true; m_trainingPlanArn = std::forward<TrainingPlanArnT>(value); }
    template<typename TrainingPlanArnT = Aws::String>
    ClusterInstanceGroupDetails& WithTrainingPlanArn(TrainingPlanArnT&& value) { SetTrainingPlanArn(std::forward<TrainingPlanArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the training plan associated with this cluster instance
     * group.</p>
     */
    inline const Aws::String& GetTrainingPlanStatus() const { return m_trainingPlanStatus; }
    inline bool TrainingPlanStatusHasBeenSet() const { return m_trainingPlanStatusHasBeenSet; }
    template<typename TrainingPlanStatusT = Aws::String>
    void SetTrainingPlanStatus(TrainingPlanStatusT&& value) { m_trainingPlanStatusHasBeenSet = true; m_trainingPlanStatus = std::forward<TrainingPlanStatusT>(value); }
    template<typename TrainingPlanStatusT = Aws::String>
    ClusterInstanceGroupDetails& WithTrainingPlanStatus(TrainingPlanStatusT&& value) { SetTrainingPlanStatus(std::forward<TrainingPlanStatusT>(value)); return *this;}
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
    ClusterInstanceGroupDetails& WithOverrideVpcConfig(OverrideVpcConfigT&& value) { SetOverrideVpcConfig(std::forward<OverrideVpcConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration object of the schedule that SageMaker follows when updating
     * the AMI.</p>
     */
    inline const ScheduledUpdateConfig& GetScheduledUpdateConfig() const { return m_scheduledUpdateConfig; }
    inline bool ScheduledUpdateConfigHasBeenSet() const { return m_scheduledUpdateConfigHasBeenSet; }
    template<typename ScheduledUpdateConfigT = ScheduledUpdateConfig>
    void SetScheduledUpdateConfig(ScheduledUpdateConfigT&& value) { m_scheduledUpdateConfigHasBeenSet = true; m_scheduledUpdateConfig = std::forward<ScheduledUpdateConfigT>(value); }
    template<typename ScheduledUpdateConfigT = ScheduledUpdateConfig>
    ClusterInstanceGroupDetails& WithScheduledUpdateConfig(ScheduledUpdateConfigT&& value) { SetScheduledUpdateConfig(std::forward<ScheduledUpdateConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Machine Image (AMI) currently in use by the instance
     * group.</p>
     */
    inline const Aws::String& GetCurrentImageId() const { return m_currentImageId; }
    inline bool CurrentImageIdHasBeenSet() const { return m_currentImageIdHasBeenSet; }
    template<typename CurrentImageIdT = Aws::String>
    void SetCurrentImageId(CurrentImageIdT&& value) { m_currentImageIdHasBeenSet = true; m_currentImageId = std::forward<CurrentImageIdT>(value); }
    template<typename CurrentImageIdT = Aws::String>
    ClusterInstanceGroupDetails& WithCurrentImageId(CurrentImageIdT&& value) { SetCurrentImageId(std::forward<CurrentImageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Machine Image (AMI) desired for the instance group.</p>
     */
    inline const Aws::String& GetDesiredImageId() const { return m_desiredImageId; }
    inline bool DesiredImageIdHasBeenSet() const { return m_desiredImageIdHasBeenSet; }
    template<typename DesiredImageIdT = Aws::String>
    void SetDesiredImageId(DesiredImageIdT&& value) { m_desiredImageIdHasBeenSet = true; m_desiredImageId = std::forward<DesiredImageIdT>(value); }
    template<typename DesiredImageIdT = Aws::String>
    ClusterInstanceGroupDetails& WithDesiredImageId(DesiredImageIdT&& value) { SetDesiredImageId(std::forward<DesiredImageIdT>(value)); return *this;}
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

    Aws::String m_currentImageId;
    bool m_currentImageIdHasBeenSet = false;

    Aws::String m_desiredImageId;
    bool m_desiredImageIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
