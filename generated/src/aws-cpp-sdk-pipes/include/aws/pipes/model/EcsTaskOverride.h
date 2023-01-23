/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pipes/model/EcsEphemeralStorage.h>
#include <aws/pipes/model/EcsContainerOverride.h>
#include <aws/pipes/model/EcsInferenceAcceleratorOverride.h>
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
namespace Pipes
{
namespace Model
{

  /**
   * <p>The overrides that are associated with a task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/EcsTaskOverride">AWS
   * API Reference</a></p>
   */
  class EcsTaskOverride
  {
  public:
    AWS_PIPES_API EcsTaskOverride();
    AWS_PIPES_API EcsTaskOverride(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API EcsTaskOverride& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>One or more container overrides that are sent to a task.</p>
     */
    inline const Aws::Vector<EcsContainerOverride>& GetContainerOverrides() const{ return m_containerOverrides; }

    /**
     * <p>One or more container overrides that are sent to a task.</p>
     */
    inline bool ContainerOverridesHasBeenSet() const { return m_containerOverridesHasBeenSet; }

    /**
     * <p>One or more container overrides that are sent to a task.</p>
     */
    inline void SetContainerOverrides(const Aws::Vector<EcsContainerOverride>& value) { m_containerOverridesHasBeenSet = true; m_containerOverrides = value; }

    /**
     * <p>One or more container overrides that are sent to a task.</p>
     */
    inline void SetContainerOverrides(Aws::Vector<EcsContainerOverride>&& value) { m_containerOverridesHasBeenSet = true; m_containerOverrides = std::move(value); }

    /**
     * <p>One or more container overrides that are sent to a task.</p>
     */
    inline EcsTaskOverride& WithContainerOverrides(const Aws::Vector<EcsContainerOverride>& value) { SetContainerOverrides(value); return *this;}

    /**
     * <p>One or more container overrides that are sent to a task.</p>
     */
    inline EcsTaskOverride& WithContainerOverrides(Aws::Vector<EcsContainerOverride>&& value) { SetContainerOverrides(std::move(value)); return *this;}

    /**
     * <p>One or more container overrides that are sent to a task.</p>
     */
    inline EcsTaskOverride& AddContainerOverrides(const EcsContainerOverride& value) { m_containerOverridesHasBeenSet = true; m_containerOverrides.push_back(value); return *this; }

    /**
     * <p>One or more container overrides that are sent to a task.</p>
     */
    inline EcsTaskOverride& AddContainerOverrides(EcsContainerOverride&& value) { m_containerOverridesHasBeenSet = true; m_containerOverrides.push_back(std::move(value)); return *this; }


    /**
     * <p>The cpu override for the task.</p>
     */
    inline const Aws::String& GetCpu() const{ return m_cpu; }

    /**
     * <p>The cpu override for the task.</p>
     */
    inline bool CpuHasBeenSet() const { return m_cpuHasBeenSet; }

    /**
     * <p>The cpu override for the task.</p>
     */
    inline void SetCpu(const Aws::String& value) { m_cpuHasBeenSet = true; m_cpu = value; }

    /**
     * <p>The cpu override for the task.</p>
     */
    inline void SetCpu(Aws::String&& value) { m_cpuHasBeenSet = true; m_cpu = std::move(value); }

    /**
     * <p>The cpu override for the task.</p>
     */
    inline void SetCpu(const char* value) { m_cpuHasBeenSet = true; m_cpu.assign(value); }

    /**
     * <p>The cpu override for the task.</p>
     */
    inline EcsTaskOverride& WithCpu(const Aws::String& value) { SetCpu(value); return *this;}

    /**
     * <p>The cpu override for the task.</p>
     */
    inline EcsTaskOverride& WithCpu(Aws::String&& value) { SetCpu(std::move(value)); return *this;}

    /**
     * <p>The cpu override for the task.</p>
     */
    inline EcsTaskOverride& WithCpu(const char* value) { SetCpu(value); return *this;}


    /**
     * <p>The ephemeral storage setting override for the task.</p>  <p>This
     * parameter is only supported for tasks hosted on Fargate that use the following
     * platform versions:</p> <ul> <li> <p>Linux platform version <code>1.4.0</code> or
     * later.</p> </li> <li> <p>Windows platform version <code>1.0.0</code> or
     * later.</p> </li> </ul> 
     */
    inline const EcsEphemeralStorage& GetEphemeralStorage() const{ return m_ephemeralStorage; }

    /**
     * <p>The ephemeral storage setting override for the task.</p>  <p>This
     * parameter is only supported for tasks hosted on Fargate that use the following
     * platform versions:</p> <ul> <li> <p>Linux platform version <code>1.4.0</code> or
     * later.</p> </li> <li> <p>Windows platform version <code>1.0.0</code> or
     * later.</p> </li> </ul> 
     */
    inline bool EphemeralStorageHasBeenSet() const { return m_ephemeralStorageHasBeenSet; }

    /**
     * <p>The ephemeral storage setting override for the task.</p>  <p>This
     * parameter is only supported for tasks hosted on Fargate that use the following
     * platform versions:</p> <ul> <li> <p>Linux platform version <code>1.4.0</code> or
     * later.</p> </li> <li> <p>Windows platform version <code>1.0.0</code> or
     * later.</p> </li> </ul> 
     */
    inline void SetEphemeralStorage(const EcsEphemeralStorage& value) { m_ephemeralStorageHasBeenSet = true; m_ephemeralStorage = value; }

    /**
     * <p>The ephemeral storage setting override for the task.</p>  <p>This
     * parameter is only supported for tasks hosted on Fargate that use the following
     * platform versions:</p> <ul> <li> <p>Linux platform version <code>1.4.0</code> or
     * later.</p> </li> <li> <p>Windows platform version <code>1.0.0</code> or
     * later.</p> </li> </ul> 
     */
    inline void SetEphemeralStorage(EcsEphemeralStorage&& value) { m_ephemeralStorageHasBeenSet = true; m_ephemeralStorage = std::move(value); }

    /**
     * <p>The ephemeral storage setting override for the task.</p>  <p>This
     * parameter is only supported for tasks hosted on Fargate that use the following
     * platform versions:</p> <ul> <li> <p>Linux platform version <code>1.4.0</code> or
     * later.</p> </li> <li> <p>Windows platform version <code>1.0.0</code> or
     * later.</p> </li> </ul> 
     */
    inline EcsTaskOverride& WithEphemeralStorage(const EcsEphemeralStorage& value) { SetEphemeralStorage(value); return *this;}

    /**
     * <p>The ephemeral storage setting override for the task.</p>  <p>This
     * parameter is only supported for tasks hosted on Fargate that use the following
     * platform versions:</p> <ul> <li> <p>Linux platform version <code>1.4.0</code> or
     * later.</p> </li> <li> <p>Windows platform version <code>1.0.0</code> or
     * later.</p> </li> </ul> 
     */
    inline EcsTaskOverride& WithEphemeralStorage(EcsEphemeralStorage&& value) { SetEphemeralStorage(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the task execution IAM role override for
     * the task. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_execution_IAM_role.html">Amazon
     * ECS task execution IAM role</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const{ return m_executionRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution IAM role override for
     * the task. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_execution_IAM_role.html">Amazon
     * ECS task execution IAM role</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>
     */
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution IAM role override for
     * the task. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_execution_IAM_role.html">Amazon
     * ECS task execution IAM role</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>
     */
    inline void SetExecutionRoleArn(const Aws::String& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution IAM role override for
     * the task. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_execution_IAM_role.html">Amazon
     * ECS task execution IAM role</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>
     */
    inline void SetExecutionRoleArn(Aws::String&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution IAM role override for
     * the task. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_execution_IAM_role.html">Amazon
     * ECS task execution IAM role</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>
     */
    inline void SetExecutionRoleArn(const char* value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution IAM role override for
     * the task. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_execution_IAM_role.html">Amazon
     * ECS task execution IAM role</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>
     */
    inline EcsTaskOverride& WithExecutionRoleArn(const Aws::String& value) { SetExecutionRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution IAM role override for
     * the task. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_execution_IAM_role.html">Amazon
     * ECS task execution IAM role</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>
     */
    inline EcsTaskOverride& WithExecutionRoleArn(Aws::String&& value) { SetExecutionRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution IAM role override for
     * the task. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_execution_IAM_role.html">Amazon
     * ECS task execution IAM role</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>
     */
    inline EcsTaskOverride& WithExecutionRoleArn(const char* value) { SetExecutionRoleArn(value); return *this;}


    /**
     * <p>The Elastic Inference accelerator override for the task.</p>
     */
    inline const Aws::Vector<EcsInferenceAcceleratorOverride>& GetInferenceAcceleratorOverrides() const{ return m_inferenceAcceleratorOverrides; }

    /**
     * <p>The Elastic Inference accelerator override for the task.</p>
     */
    inline bool InferenceAcceleratorOverridesHasBeenSet() const { return m_inferenceAcceleratorOverridesHasBeenSet; }

    /**
     * <p>The Elastic Inference accelerator override for the task.</p>
     */
    inline void SetInferenceAcceleratorOverrides(const Aws::Vector<EcsInferenceAcceleratorOverride>& value) { m_inferenceAcceleratorOverridesHasBeenSet = true; m_inferenceAcceleratorOverrides = value; }

    /**
     * <p>The Elastic Inference accelerator override for the task.</p>
     */
    inline void SetInferenceAcceleratorOverrides(Aws::Vector<EcsInferenceAcceleratorOverride>&& value) { m_inferenceAcceleratorOverridesHasBeenSet = true; m_inferenceAcceleratorOverrides = std::move(value); }

    /**
     * <p>The Elastic Inference accelerator override for the task.</p>
     */
    inline EcsTaskOverride& WithInferenceAcceleratorOverrides(const Aws::Vector<EcsInferenceAcceleratorOverride>& value) { SetInferenceAcceleratorOverrides(value); return *this;}

    /**
     * <p>The Elastic Inference accelerator override for the task.</p>
     */
    inline EcsTaskOverride& WithInferenceAcceleratorOverrides(Aws::Vector<EcsInferenceAcceleratorOverride>&& value) { SetInferenceAcceleratorOverrides(std::move(value)); return *this;}

    /**
     * <p>The Elastic Inference accelerator override for the task.</p>
     */
    inline EcsTaskOverride& AddInferenceAcceleratorOverrides(const EcsInferenceAcceleratorOverride& value) { m_inferenceAcceleratorOverridesHasBeenSet = true; m_inferenceAcceleratorOverrides.push_back(value); return *this; }

    /**
     * <p>The Elastic Inference accelerator override for the task.</p>
     */
    inline EcsTaskOverride& AddInferenceAcceleratorOverrides(EcsInferenceAcceleratorOverride&& value) { m_inferenceAcceleratorOverridesHasBeenSet = true; m_inferenceAcceleratorOverrides.push_back(std::move(value)); return *this; }


    /**
     * <p>The memory override for the task.</p>
     */
    inline const Aws::String& GetMemory() const{ return m_memory; }

    /**
     * <p>The memory override for the task.</p>
     */
    inline bool MemoryHasBeenSet() const { return m_memoryHasBeenSet; }

    /**
     * <p>The memory override for the task.</p>
     */
    inline void SetMemory(const Aws::String& value) { m_memoryHasBeenSet = true; m_memory = value; }

    /**
     * <p>The memory override for the task.</p>
     */
    inline void SetMemory(Aws::String&& value) { m_memoryHasBeenSet = true; m_memory = std::move(value); }

    /**
     * <p>The memory override for the task.</p>
     */
    inline void SetMemory(const char* value) { m_memoryHasBeenSet = true; m_memory.assign(value); }

    /**
     * <p>The memory override for the task.</p>
     */
    inline EcsTaskOverride& WithMemory(const Aws::String& value) { SetMemory(value); return *this;}

    /**
     * <p>The memory override for the task.</p>
     */
    inline EcsTaskOverride& WithMemory(Aws::String&& value) { SetMemory(std::move(value)); return *this;}

    /**
     * <p>The memory override for the task.</p>
     */
    inline EcsTaskOverride& WithMemory(const char* value) { SetMemory(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that containers in this task
     * can assume. All containers in this task are granted the permissions that are
     * specified in this role. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-iam-roles.html">IAM
     * Role for Tasks</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline const Aws::String& GetTaskRoleArn() const{ return m_taskRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that containers in this task
     * can assume. All containers in this task are granted the permissions that are
     * specified in this role. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-iam-roles.html">IAM
     * Role for Tasks</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline bool TaskRoleArnHasBeenSet() const { return m_taskRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that containers in this task
     * can assume. All containers in this task are granted the permissions that are
     * specified in this role. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-iam-roles.html">IAM
     * Role for Tasks</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetTaskRoleArn(const Aws::String& value) { m_taskRoleArnHasBeenSet = true; m_taskRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that containers in this task
     * can assume. All containers in this task are granted the permissions that are
     * specified in this role. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-iam-roles.html">IAM
     * Role for Tasks</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetTaskRoleArn(Aws::String&& value) { m_taskRoleArnHasBeenSet = true; m_taskRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that containers in this task
     * can assume. All containers in this task are granted the permissions that are
     * specified in this role. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-iam-roles.html">IAM
     * Role for Tasks</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetTaskRoleArn(const char* value) { m_taskRoleArnHasBeenSet = true; m_taskRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that containers in this task
     * can assume. All containers in this task are granted the permissions that are
     * specified in this role. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-iam-roles.html">IAM
     * Role for Tasks</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline EcsTaskOverride& WithTaskRoleArn(const Aws::String& value) { SetTaskRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that containers in this task
     * can assume. All containers in this task are granted the permissions that are
     * specified in this role. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-iam-roles.html">IAM
     * Role for Tasks</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline EcsTaskOverride& WithTaskRoleArn(Aws::String&& value) { SetTaskRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that containers in this task
     * can assume. All containers in this task are granted the permissions that are
     * specified in this role. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-iam-roles.html">IAM
     * Role for Tasks</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline EcsTaskOverride& WithTaskRoleArn(const char* value) { SetTaskRoleArn(value); return *this;}

  private:

    Aws::Vector<EcsContainerOverride> m_containerOverrides;
    bool m_containerOverridesHasBeenSet = false;

    Aws::String m_cpu;
    bool m_cpuHasBeenSet = false;

    EcsEphemeralStorage m_ephemeralStorage;
    bool m_ephemeralStorageHasBeenSet = false;

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet = false;

    Aws::Vector<EcsInferenceAcceleratorOverride> m_inferenceAcceleratorOverrides;
    bool m_inferenceAcceleratorOverridesHasBeenSet = false;

    Aws::String m_memory;
    bool m_memoryHasBeenSet = false;

    Aws::String m_taskRoleArn;
    bool m_taskRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws
