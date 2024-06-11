﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ClusterInstanceType.h>
#include <aws/sagemaker/model/ClusterLifeCycleConfig.h>
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
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
