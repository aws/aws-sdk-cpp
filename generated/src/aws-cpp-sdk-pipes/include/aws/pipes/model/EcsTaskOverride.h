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
    AWS_PIPES_API EcsTaskOverride() = default;
    AWS_PIPES_API EcsTaskOverride(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API EcsTaskOverride& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>One or more container overrides that are sent to a task.</p>
     */
    inline const Aws::Vector<EcsContainerOverride>& GetContainerOverrides() const { return m_containerOverrides; }
    inline bool ContainerOverridesHasBeenSet() const { return m_containerOverridesHasBeenSet; }
    template<typename ContainerOverridesT = Aws::Vector<EcsContainerOverride>>
    void SetContainerOverrides(ContainerOverridesT&& value) { m_containerOverridesHasBeenSet = true; m_containerOverrides = std::forward<ContainerOverridesT>(value); }
    template<typename ContainerOverridesT = Aws::Vector<EcsContainerOverride>>
    EcsTaskOverride& WithContainerOverrides(ContainerOverridesT&& value) { SetContainerOverrides(std::forward<ContainerOverridesT>(value)); return *this;}
    template<typename ContainerOverridesT = EcsContainerOverride>
    EcsTaskOverride& AddContainerOverrides(ContainerOverridesT&& value) { m_containerOverridesHasBeenSet = true; m_containerOverrides.emplace_back(std::forward<ContainerOverridesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The cpu override for the task.</p>
     */
    inline const Aws::String& GetCpu() const { return m_cpu; }
    inline bool CpuHasBeenSet() const { return m_cpuHasBeenSet; }
    template<typename CpuT = Aws::String>
    void SetCpu(CpuT&& value) { m_cpuHasBeenSet = true; m_cpu = std::forward<CpuT>(value); }
    template<typename CpuT = Aws::String>
    EcsTaskOverride& WithCpu(CpuT&& value) { SetCpu(std::forward<CpuT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ephemeral storage setting override for the task.</p>  <p>This
     * parameter is only supported for tasks hosted on Fargate that use the following
     * platform versions:</p> <ul> <li> <p>Linux platform version <code>1.4.0</code> or
     * later.</p> </li> <li> <p>Windows platform version <code>1.0.0</code> or
     * later.</p> </li> </ul> 
     */
    inline const EcsEphemeralStorage& GetEphemeralStorage() const { return m_ephemeralStorage; }
    inline bool EphemeralStorageHasBeenSet() const { return m_ephemeralStorageHasBeenSet; }
    template<typename EphemeralStorageT = EcsEphemeralStorage>
    void SetEphemeralStorage(EphemeralStorageT&& value) { m_ephemeralStorageHasBeenSet = true; m_ephemeralStorage = std::forward<EphemeralStorageT>(value); }
    template<typename EphemeralStorageT = EcsEphemeralStorage>
    EcsTaskOverride& WithEphemeralStorage(EphemeralStorageT&& value) { SetEphemeralStorage(std::forward<EphemeralStorageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the task execution IAM role override for
     * the task. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_execution_IAM_role.html">Amazon
     * ECS task execution IAM role</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const { return m_executionRoleArn; }
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }
    template<typename ExecutionRoleArnT = Aws::String>
    void SetExecutionRoleArn(ExecutionRoleArnT&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::forward<ExecutionRoleArnT>(value); }
    template<typename ExecutionRoleArnT = Aws::String>
    EcsTaskOverride& WithExecutionRoleArn(ExecutionRoleArnT&& value) { SetExecutionRoleArn(std::forward<ExecutionRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Elastic Inference accelerator override for the task.</p>
     */
    inline const Aws::Vector<EcsInferenceAcceleratorOverride>& GetInferenceAcceleratorOverrides() const { return m_inferenceAcceleratorOverrides; }
    inline bool InferenceAcceleratorOverridesHasBeenSet() const { return m_inferenceAcceleratorOverridesHasBeenSet; }
    template<typename InferenceAcceleratorOverridesT = Aws::Vector<EcsInferenceAcceleratorOverride>>
    void SetInferenceAcceleratorOverrides(InferenceAcceleratorOverridesT&& value) { m_inferenceAcceleratorOverridesHasBeenSet = true; m_inferenceAcceleratorOverrides = std::forward<InferenceAcceleratorOverridesT>(value); }
    template<typename InferenceAcceleratorOverridesT = Aws::Vector<EcsInferenceAcceleratorOverride>>
    EcsTaskOverride& WithInferenceAcceleratorOverrides(InferenceAcceleratorOverridesT&& value) { SetInferenceAcceleratorOverrides(std::forward<InferenceAcceleratorOverridesT>(value)); return *this;}
    template<typename InferenceAcceleratorOverridesT = EcsInferenceAcceleratorOverride>
    EcsTaskOverride& AddInferenceAcceleratorOverrides(InferenceAcceleratorOverridesT&& value) { m_inferenceAcceleratorOverridesHasBeenSet = true; m_inferenceAcceleratorOverrides.emplace_back(std::forward<InferenceAcceleratorOverridesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The memory override for the task.</p>
     */
    inline const Aws::String& GetMemory() const { return m_memory; }
    inline bool MemoryHasBeenSet() const { return m_memoryHasBeenSet; }
    template<typename MemoryT = Aws::String>
    void SetMemory(MemoryT&& value) { m_memoryHasBeenSet = true; m_memory = std::forward<MemoryT>(value); }
    template<typename MemoryT = Aws::String>
    EcsTaskOverride& WithMemory(MemoryT&& value) { SetMemory(std::forward<MemoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that containers in this task
     * can assume. All containers in this task are granted the permissions that are
     * specified in this role. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-iam-roles.html">IAM
     * Role for Tasks</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline const Aws::String& GetTaskRoleArn() const { return m_taskRoleArn; }
    inline bool TaskRoleArnHasBeenSet() const { return m_taskRoleArnHasBeenSet; }
    template<typename TaskRoleArnT = Aws::String>
    void SetTaskRoleArn(TaskRoleArnT&& value) { m_taskRoleArnHasBeenSet = true; m_taskRoleArn = std::forward<TaskRoleArnT>(value); }
    template<typename TaskRoleArnT = Aws::String>
    EcsTaskOverride& WithTaskRoleArn(TaskRoleArnT&& value) { SetTaskRoleArn(std::forward<TaskRoleArnT>(value)); return *this;}
    ///@}
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
