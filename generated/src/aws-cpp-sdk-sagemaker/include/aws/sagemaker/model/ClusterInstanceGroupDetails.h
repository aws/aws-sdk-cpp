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
    AWS_SAGEMAKER_API ClusterInstanceGroupDetails();
    AWS_SAGEMAKER_API ClusterInstanceGroupDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ClusterInstanceGroupDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of instances that are currently in the instance group of a
     * SageMaker HyperPod cluster.</p>
     */
    inline int GetCurrentCount() const{ return m_currentCount; }
    inline bool CurrentCountHasBeenSet() const { return m_currentCountHasBeenSet; }
    inline void SetCurrentCount(int value) { m_currentCountHasBeenSet = true; m_currentCount = value; }
    inline ClusterInstanceGroupDetails& WithCurrentCount(int value) { SetCurrentCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances you specified to add to the instance group of a
     * SageMaker HyperPod cluster.</p>
     */
    inline int GetTargetCount() const{ return m_targetCount; }
    inline bool TargetCountHasBeenSet() const { return m_targetCountHasBeenSet; }
    inline void SetTargetCount(int value) { m_targetCountHasBeenSet = true; m_targetCount = value; }
    inline ClusterInstanceGroupDetails& WithTargetCount(int value) { SetTargetCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the instance group of a SageMaker HyperPod cluster.</p>
     */
    inline const Aws::String& GetInstanceGroupName() const{ return m_instanceGroupName; }
    inline bool InstanceGroupNameHasBeenSet() const { return m_instanceGroupNameHasBeenSet; }
    inline void SetInstanceGroupName(const Aws::String& value) { m_instanceGroupNameHasBeenSet = true; m_instanceGroupName = value; }
    inline void SetInstanceGroupName(Aws::String&& value) { m_instanceGroupNameHasBeenSet = true; m_instanceGroupName = std::move(value); }
    inline void SetInstanceGroupName(const char* value) { m_instanceGroupNameHasBeenSet = true; m_instanceGroupName.assign(value); }
    inline ClusterInstanceGroupDetails& WithInstanceGroupName(const Aws::String& value) { SetInstanceGroupName(value); return *this;}
    inline ClusterInstanceGroupDetails& WithInstanceGroupName(Aws::String&& value) { SetInstanceGroupName(std::move(value)); return *this;}
    inline ClusterInstanceGroupDetails& WithInstanceGroupName(const char* value) { SetInstanceGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type of the instance group of a SageMaker HyperPod cluster.</p>
     */
    inline const ClusterInstanceType& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const ClusterInstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(ClusterInstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline ClusterInstanceGroupDetails& WithInstanceType(const ClusterInstanceType& value) { SetInstanceType(value); return *this;}
    inline ClusterInstanceGroupDetails& WithInstanceType(ClusterInstanceType&& value) { SetInstanceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details of LifeCycle configuration for the instance group.</p>
     */
    inline const ClusterLifeCycleConfig& GetLifeCycleConfig() const{ return m_lifeCycleConfig; }
    inline bool LifeCycleConfigHasBeenSet() const { return m_lifeCycleConfigHasBeenSet; }
    inline void SetLifeCycleConfig(const ClusterLifeCycleConfig& value) { m_lifeCycleConfigHasBeenSet = true; m_lifeCycleConfig = value; }
    inline void SetLifeCycleConfig(ClusterLifeCycleConfig&& value) { m_lifeCycleConfigHasBeenSet = true; m_lifeCycleConfig = std::move(value); }
    inline ClusterInstanceGroupDetails& WithLifeCycleConfig(const ClusterLifeCycleConfig& value) { SetLifeCycleConfig(value); return *this;}
    inline ClusterInstanceGroupDetails& WithLifeCycleConfig(ClusterLifeCycleConfig&& value) { SetLifeCycleConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The execution role for the instance group to assume.</p>
     */
    inline const Aws::String& GetExecutionRole() const{ return m_executionRole; }
    inline bool ExecutionRoleHasBeenSet() const { return m_executionRoleHasBeenSet; }
    inline void SetExecutionRole(const Aws::String& value) { m_executionRoleHasBeenSet = true; m_executionRole = value; }
    inline void SetExecutionRole(Aws::String&& value) { m_executionRoleHasBeenSet = true; m_executionRole = std::move(value); }
    inline void SetExecutionRole(const char* value) { m_executionRoleHasBeenSet = true; m_executionRole.assign(value); }
    inline ClusterInstanceGroupDetails& WithExecutionRole(const Aws::String& value) { SetExecutionRole(value); return *this;}
    inline ClusterInstanceGroupDetails& WithExecutionRole(Aws::String&& value) { SetExecutionRole(std::move(value)); return *this;}
    inline ClusterInstanceGroupDetails& WithExecutionRole(const char* value) { SetExecutionRole(value); return *this;}
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
    inline int GetThreadsPerCore() const{ return m_threadsPerCore; }
    inline bool ThreadsPerCoreHasBeenSet() const { return m_threadsPerCoreHasBeenSet; }
    inline void SetThreadsPerCore(int value) { m_threadsPerCoreHasBeenSet = true; m_threadsPerCore = value; }
    inline ClusterInstanceGroupDetails& WithThreadsPerCore(int value) { SetThreadsPerCore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The additional storage configurations for the instances in the SageMaker
     * HyperPod cluster instance group.</p>
     */
    inline const Aws::Vector<ClusterInstanceStorageConfig>& GetInstanceStorageConfigs() const{ return m_instanceStorageConfigs; }
    inline bool InstanceStorageConfigsHasBeenSet() const { return m_instanceStorageConfigsHasBeenSet; }
    inline void SetInstanceStorageConfigs(const Aws::Vector<ClusterInstanceStorageConfig>& value) { m_instanceStorageConfigsHasBeenSet = true; m_instanceStorageConfigs = value; }
    inline void SetInstanceStorageConfigs(Aws::Vector<ClusterInstanceStorageConfig>&& value) { m_instanceStorageConfigsHasBeenSet = true; m_instanceStorageConfigs = std::move(value); }
    inline ClusterInstanceGroupDetails& WithInstanceStorageConfigs(const Aws::Vector<ClusterInstanceStorageConfig>& value) { SetInstanceStorageConfigs(value); return *this;}
    inline ClusterInstanceGroupDetails& WithInstanceStorageConfigs(Aws::Vector<ClusterInstanceStorageConfig>&& value) { SetInstanceStorageConfigs(std::move(value)); return *this;}
    inline ClusterInstanceGroupDetails& AddInstanceStorageConfigs(const ClusterInstanceStorageConfig& value) { m_instanceStorageConfigsHasBeenSet = true; m_instanceStorageConfigs.push_back(value); return *this; }
    inline ClusterInstanceGroupDetails& AddInstanceStorageConfigs(ClusterInstanceStorageConfig&& value) { m_instanceStorageConfigsHasBeenSet = true; m_instanceStorageConfigs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A flag indicating whether deep health checks should be performed when the
     * cluster instance group is created or updated.</p>
     */
    inline const Aws::Vector<DeepHealthCheckType>& GetOnStartDeepHealthChecks() const{ return m_onStartDeepHealthChecks; }
    inline bool OnStartDeepHealthChecksHasBeenSet() const { return m_onStartDeepHealthChecksHasBeenSet; }
    inline void SetOnStartDeepHealthChecks(const Aws::Vector<DeepHealthCheckType>& value) { m_onStartDeepHealthChecksHasBeenSet = true; m_onStartDeepHealthChecks = value; }
    inline void SetOnStartDeepHealthChecks(Aws::Vector<DeepHealthCheckType>&& value) { m_onStartDeepHealthChecksHasBeenSet = true; m_onStartDeepHealthChecks = std::move(value); }
    inline ClusterInstanceGroupDetails& WithOnStartDeepHealthChecks(const Aws::Vector<DeepHealthCheckType>& value) { SetOnStartDeepHealthChecks(value); return *this;}
    inline ClusterInstanceGroupDetails& WithOnStartDeepHealthChecks(Aws::Vector<DeepHealthCheckType>&& value) { SetOnStartDeepHealthChecks(std::move(value)); return *this;}
    inline ClusterInstanceGroupDetails& AddOnStartDeepHealthChecks(const DeepHealthCheckType& value) { m_onStartDeepHealthChecksHasBeenSet = true; m_onStartDeepHealthChecks.push_back(value); return *this; }
    inline ClusterInstanceGroupDetails& AddOnStartDeepHealthChecks(DeepHealthCheckType&& value) { m_onStartDeepHealthChecksHasBeenSet = true; m_onStartDeepHealthChecks.push_back(std::move(value)); return *this; }
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
    inline const InstanceGroupStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const InstanceGroupStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(InstanceGroupStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ClusterInstanceGroupDetails& WithStatus(const InstanceGroupStatus& value) { SetStatus(value); return *this;}
    inline ClusterInstanceGroupDetails& WithStatus(InstanceGroupStatus&& value) { SetStatus(std::move(value)); return *this;}
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
    inline const Aws::String& GetTrainingPlanArn() const{ return m_trainingPlanArn; }
    inline bool TrainingPlanArnHasBeenSet() const { return m_trainingPlanArnHasBeenSet; }
    inline void SetTrainingPlanArn(const Aws::String& value) { m_trainingPlanArnHasBeenSet = true; m_trainingPlanArn = value; }
    inline void SetTrainingPlanArn(Aws::String&& value) { m_trainingPlanArnHasBeenSet = true; m_trainingPlanArn = std::move(value); }
    inline void SetTrainingPlanArn(const char* value) { m_trainingPlanArnHasBeenSet = true; m_trainingPlanArn.assign(value); }
    inline ClusterInstanceGroupDetails& WithTrainingPlanArn(const Aws::String& value) { SetTrainingPlanArn(value); return *this;}
    inline ClusterInstanceGroupDetails& WithTrainingPlanArn(Aws::String&& value) { SetTrainingPlanArn(std::move(value)); return *this;}
    inline ClusterInstanceGroupDetails& WithTrainingPlanArn(const char* value) { SetTrainingPlanArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the training plan associated with this cluster instance
     * group.</p>
     */
    inline const Aws::String& GetTrainingPlanStatus() const{ return m_trainingPlanStatus; }
    inline bool TrainingPlanStatusHasBeenSet() const { return m_trainingPlanStatusHasBeenSet; }
    inline void SetTrainingPlanStatus(const Aws::String& value) { m_trainingPlanStatusHasBeenSet = true; m_trainingPlanStatus = value; }
    inline void SetTrainingPlanStatus(Aws::String&& value) { m_trainingPlanStatusHasBeenSet = true; m_trainingPlanStatus = std::move(value); }
    inline void SetTrainingPlanStatus(const char* value) { m_trainingPlanStatusHasBeenSet = true; m_trainingPlanStatus.assign(value); }
    inline ClusterInstanceGroupDetails& WithTrainingPlanStatus(const Aws::String& value) { SetTrainingPlanStatus(value); return *this;}
    inline ClusterInstanceGroupDetails& WithTrainingPlanStatus(Aws::String&& value) { SetTrainingPlanStatus(std::move(value)); return *this;}
    inline ClusterInstanceGroupDetails& WithTrainingPlanStatus(const char* value) { SetTrainingPlanStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const VpcConfig& GetOverrideVpcConfig() const{ return m_overrideVpcConfig; }
    inline bool OverrideVpcConfigHasBeenSet() const { return m_overrideVpcConfigHasBeenSet; }
    inline void SetOverrideVpcConfig(const VpcConfig& value) { m_overrideVpcConfigHasBeenSet = true; m_overrideVpcConfig = value; }
    inline void SetOverrideVpcConfig(VpcConfig&& value) { m_overrideVpcConfigHasBeenSet = true; m_overrideVpcConfig = std::move(value); }
    inline ClusterInstanceGroupDetails& WithOverrideVpcConfig(const VpcConfig& value) { SetOverrideVpcConfig(value); return *this;}
    inline ClusterInstanceGroupDetails& WithOverrideVpcConfig(VpcConfig&& value) { SetOverrideVpcConfig(std::move(value)); return *this;}
    ///@}
  private:

    int m_currentCount;
    bool m_currentCountHasBeenSet = false;

    int m_targetCount;
    bool m_targetCountHasBeenSet = false;

    Aws::String m_instanceGroupName;
    bool m_instanceGroupNameHasBeenSet = false;

    ClusterInstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    ClusterLifeCycleConfig m_lifeCycleConfig;
    bool m_lifeCycleConfigHasBeenSet = false;

    Aws::String m_executionRole;
    bool m_executionRoleHasBeenSet = false;

    int m_threadsPerCore;
    bool m_threadsPerCoreHasBeenSet = false;

    Aws::Vector<ClusterInstanceStorageConfig> m_instanceStorageConfigs;
    bool m_instanceStorageConfigsHasBeenSet = false;

    Aws::Vector<DeepHealthCheckType> m_onStartDeepHealthChecks;
    bool m_onStartDeepHealthChecksHasBeenSet = false;

    InstanceGroupStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_trainingPlanArn;
    bool m_trainingPlanArnHasBeenSet = false;

    Aws::String m_trainingPlanStatus;
    bool m_trainingPlanStatusHasBeenSet = false;

    VpcConfig m_overrideVpcConfig;
    bool m_overrideVpcConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
