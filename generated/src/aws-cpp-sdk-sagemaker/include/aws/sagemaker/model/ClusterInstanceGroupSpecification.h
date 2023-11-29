/**
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
   * <p>The specifications of an instance group that you need to
   * define.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ClusterInstanceGroupSpecification">AWS
   * API Reference</a></p>
   */
  class ClusterInstanceGroupSpecification
  {
  public:
    AWS_SAGEMAKER_API ClusterInstanceGroupSpecification();
    AWS_SAGEMAKER_API ClusterInstanceGroupSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ClusterInstanceGroupSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the number of instances to add to the instance group of a SageMaker
     * HyperPod cluster.</p>
     */
    inline int GetInstanceCount() const{ return m_instanceCount; }

    /**
     * <p>Specifies the number of instances to add to the instance group of a SageMaker
     * HyperPod cluster.</p>
     */
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }

    /**
     * <p>Specifies the number of instances to add to the instance group of a SageMaker
     * HyperPod cluster.</p>
     */
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }

    /**
     * <p>Specifies the number of instances to add to the instance group of a SageMaker
     * HyperPod cluster.</p>
     */
    inline ClusterInstanceGroupSpecification& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}


    /**
     * <p>Specifies the name of the instance group.</p>
     */
    inline const Aws::String& GetInstanceGroupName() const{ return m_instanceGroupName; }

    /**
     * <p>Specifies the name of the instance group.</p>
     */
    inline bool InstanceGroupNameHasBeenSet() const { return m_instanceGroupNameHasBeenSet; }

    /**
     * <p>Specifies the name of the instance group.</p>
     */
    inline void SetInstanceGroupName(const Aws::String& value) { m_instanceGroupNameHasBeenSet = true; m_instanceGroupName = value; }

    /**
     * <p>Specifies the name of the instance group.</p>
     */
    inline void SetInstanceGroupName(Aws::String&& value) { m_instanceGroupNameHasBeenSet = true; m_instanceGroupName = std::move(value); }

    /**
     * <p>Specifies the name of the instance group.</p>
     */
    inline void SetInstanceGroupName(const char* value) { m_instanceGroupNameHasBeenSet = true; m_instanceGroupName.assign(value); }

    /**
     * <p>Specifies the name of the instance group.</p>
     */
    inline ClusterInstanceGroupSpecification& WithInstanceGroupName(const Aws::String& value) { SetInstanceGroupName(value); return *this;}

    /**
     * <p>Specifies the name of the instance group.</p>
     */
    inline ClusterInstanceGroupSpecification& WithInstanceGroupName(Aws::String&& value) { SetInstanceGroupName(std::move(value)); return *this;}

    /**
     * <p>Specifies the name of the instance group.</p>
     */
    inline ClusterInstanceGroupSpecification& WithInstanceGroupName(const char* value) { SetInstanceGroupName(value); return *this;}


    /**
     * <p>Specifies the instance type of the instance group.</p>
     */
    inline const ClusterInstanceType& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>Specifies the instance type of the instance group.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>Specifies the instance type of the instance group.</p>
     */
    inline void SetInstanceType(const ClusterInstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>Specifies the instance type of the instance group.</p>
     */
    inline void SetInstanceType(ClusterInstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>Specifies the instance type of the instance group.</p>
     */
    inline ClusterInstanceGroupSpecification& WithInstanceType(const ClusterInstanceType& value) { SetInstanceType(value); return *this;}

    /**
     * <p>Specifies the instance type of the instance group.</p>
     */
    inline ClusterInstanceGroupSpecification& WithInstanceType(ClusterInstanceType&& value) { SetInstanceType(std::move(value)); return *this;}


    /**
     * <p>Specifies the LifeCycle configuration for the instance group.</p>
     */
    inline const ClusterLifeCycleConfig& GetLifeCycleConfig() const{ return m_lifeCycleConfig; }

    /**
     * <p>Specifies the LifeCycle configuration for the instance group.</p>
     */
    inline bool LifeCycleConfigHasBeenSet() const { return m_lifeCycleConfigHasBeenSet; }

    /**
     * <p>Specifies the LifeCycle configuration for the instance group.</p>
     */
    inline void SetLifeCycleConfig(const ClusterLifeCycleConfig& value) { m_lifeCycleConfigHasBeenSet = true; m_lifeCycleConfig = value; }

    /**
     * <p>Specifies the LifeCycle configuration for the instance group.</p>
     */
    inline void SetLifeCycleConfig(ClusterLifeCycleConfig&& value) { m_lifeCycleConfigHasBeenSet = true; m_lifeCycleConfig = std::move(value); }

    /**
     * <p>Specifies the LifeCycle configuration for the instance group.</p>
     */
    inline ClusterInstanceGroupSpecification& WithLifeCycleConfig(const ClusterLifeCycleConfig& value) { SetLifeCycleConfig(value); return *this;}

    /**
     * <p>Specifies the LifeCycle configuration for the instance group.</p>
     */
    inline ClusterInstanceGroupSpecification& WithLifeCycleConfig(ClusterLifeCycleConfig&& value) { SetLifeCycleConfig(std::move(value)); return *this;}


    /**
     * <p>Specifies an IAM execution role to be assumed by the instance group.</p>
     */
    inline const Aws::String& GetExecutionRole() const{ return m_executionRole; }

    /**
     * <p>Specifies an IAM execution role to be assumed by the instance group.</p>
     */
    inline bool ExecutionRoleHasBeenSet() const { return m_executionRoleHasBeenSet; }

    /**
     * <p>Specifies an IAM execution role to be assumed by the instance group.</p>
     */
    inline void SetExecutionRole(const Aws::String& value) { m_executionRoleHasBeenSet = true; m_executionRole = value; }

    /**
     * <p>Specifies an IAM execution role to be assumed by the instance group.</p>
     */
    inline void SetExecutionRole(Aws::String&& value) { m_executionRoleHasBeenSet = true; m_executionRole = std::move(value); }

    /**
     * <p>Specifies an IAM execution role to be assumed by the instance group.</p>
     */
    inline void SetExecutionRole(const char* value) { m_executionRoleHasBeenSet = true; m_executionRole.assign(value); }

    /**
     * <p>Specifies an IAM execution role to be assumed by the instance group.</p>
     */
    inline ClusterInstanceGroupSpecification& WithExecutionRole(const Aws::String& value) { SetExecutionRole(value); return *this;}

    /**
     * <p>Specifies an IAM execution role to be assumed by the instance group.</p>
     */
    inline ClusterInstanceGroupSpecification& WithExecutionRole(Aws::String&& value) { SetExecutionRole(std::move(value)); return *this;}

    /**
     * <p>Specifies an IAM execution role to be assumed by the instance group.</p>
     */
    inline ClusterInstanceGroupSpecification& WithExecutionRole(const char* value) { SetExecutionRole(value); return *this;}


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
    inline int GetThreadsPerCore() const{ return m_threadsPerCore; }

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
    inline bool ThreadsPerCoreHasBeenSet() const { return m_threadsPerCoreHasBeenSet; }

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
    inline void SetThreadsPerCore(int value) { m_threadsPerCoreHasBeenSet = true; m_threadsPerCore = value; }

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
    inline ClusterInstanceGroupSpecification& WithThreadsPerCore(int value) { SetThreadsPerCore(value); return *this;}

  private:

    int m_instanceCount;
    bool m_instanceCountHasBeenSet = false;

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
