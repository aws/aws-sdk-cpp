/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsEcsTaskDefinitionProxyConfigurationDetails.h>
#include <aws/securityhub/model/AwsEcsTaskDefinitionContainerDefinitionsDetails.h>
#include <aws/securityhub/model/AwsEcsTaskDefinitionInferenceAcceleratorsDetails.h>
#include <aws/securityhub/model/AwsEcsTaskDefinitionPlacementConstraintsDetails.h>
#include <aws/securityhub/model/AwsEcsTaskDefinitionVolumesDetails.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Details about a task definition. A task definition describes the container
   * and volume definitions of an Amazon Elastic Container Service
   * task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEcsTaskDefinitionDetails">AWS
   * API Reference</a></p>
   */
  class AwsEcsTaskDefinitionDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionDetails() = default;
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The container definitions that describe the containers that make up the
     * task.</p>
     */
    inline const Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsDetails>& GetContainerDefinitions() const { return m_containerDefinitions; }
    inline bool ContainerDefinitionsHasBeenSet() const { return m_containerDefinitionsHasBeenSet; }
    template<typename ContainerDefinitionsT = Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsDetails>>
    void SetContainerDefinitions(ContainerDefinitionsT&& value) { m_containerDefinitionsHasBeenSet = true; m_containerDefinitions = std::forward<ContainerDefinitionsT>(value); }
    template<typename ContainerDefinitionsT = Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsDetails>>
    AwsEcsTaskDefinitionDetails& WithContainerDefinitions(ContainerDefinitionsT&& value) { SetContainerDefinitions(std::forward<ContainerDefinitionsT>(value)); return *this;}
    template<typename ContainerDefinitionsT = AwsEcsTaskDefinitionContainerDefinitionsDetails>
    AwsEcsTaskDefinitionDetails& AddContainerDefinitions(ContainerDefinitionsT&& value) { m_containerDefinitionsHasBeenSet = true; m_containerDefinitions.emplace_back(std::forward<ContainerDefinitionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of CPU units used by the task.Valid values are as follows:</p>
     * <ul> <li> <p> <code>256 (.25 vCPU)</code> </p> </li> <li> <p> <code>512 (.5
     * vCPU)</code> </p> </li> <li> <p> <code>1024 (1 vCPU)</code> </p> </li> <li> <p>
     * <code>2048 (2 vCPU)</code> </p> </li> <li> <p> <code>4096 (4 vCPU)</code> </p>
     * </li> </ul>
     */
    inline const Aws::String& GetCpu() const { return m_cpu; }
    inline bool CpuHasBeenSet() const { return m_cpuHasBeenSet; }
    template<typename CpuT = Aws::String>
    void SetCpu(CpuT&& value) { m_cpuHasBeenSet = true; m_cpu = std::forward<CpuT>(value); }
    template<typename CpuT = Aws::String>
    AwsEcsTaskDefinitionDetails& WithCpu(CpuT&& value) { SetCpu(std::forward<CpuT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the task execution role that grants the container agent permission
     * to make API calls on behalf of the container user.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const { return m_executionRoleArn; }
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }
    template<typename ExecutionRoleArnT = Aws::String>
    void SetExecutionRoleArn(ExecutionRoleArnT&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::forward<ExecutionRoleArnT>(value); }
    template<typename ExecutionRoleArnT = Aws::String>
    AwsEcsTaskDefinitionDetails& WithExecutionRoleArn(ExecutionRoleArnT&& value) { SetExecutionRoleArn(std::forward<ExecutionRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a family that this task definition is registered to.</p>
     */
    inline const Aws::String& GetFamily() const { return m_family; }
    inline bool FamilyHasBeenSet() const { return m_familyHasBeenSet; }
    template<typename FamilyT = Aws::String>
    void SetFamily(FamilyT&& value) { m_familyHasBeenSet = true; m_family = std::forward<FamilyT>(value); }
    template<typename FamilyT = Aws::String>
    AwsEcsTaskDefinitionDetails& WithFamily(FamilyT&& value) { SetFamily(std::forward<FamilyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Elastic Inference accelerators to use for the containers in the task.</p>
     */
    inline const Aws::Vector<AwsEcsTaskDefinitionInferenceAcceleratorsDetails>& GetInferenceAccelerators() const { return m_inferenceAccelerators; }
    inline bool InferenceAcceleratorsHasBeenSet() const { return m_inferenceAcceleratorsHasBeenSet; }
    template<typename InferenceAcceleratorsT = Aws::Vector<AwsEcsTaskDefinitionInferenceAcceleratorsDetails>>
    void SetInferenceAccelerators(InferenceAcceleratorsT&& value) { m_inferenceAcceleratorsHasBeenSet = true; m_inferenceAccelerators = std::forward<InferenceAcceleratorsT>(value); }
    template<typename InferenceAcceleratorsT = Aws::Vector<AwsEcsTaskDefinitionInferenceAcceleratorsDetails>>
    AwsEcsTaskDefinitionDetails& WithInferenceAccelerators(InferenceAcceleratorsT&& value) { SetInferenceAccelerators(std::forward<InferenceAcceleratorsT>(value)); return *this;}
    template<typename InferenceAcceleratorsT = AwsEcsTaskDefinitionInferenceAcceleratorsDetails>
    AwsEcsTaskDefinitionDetails& AddInferenceAccelerators(InferenceAcceleratorsT&& value) { m_inferenceAcceleratorsHasBeenSet = true; m_inferenceAccelerators.emplace_back(std::forward<InferenceAcceleratorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The inter-process communication (IPC) resource namespace to use for the
     * containers in the task. Valid values are as follows:</p> <ul> <li> <p>
     * <code>host</code> </p> </li> <li> <p> <code>none</code> </p> </li> <li> <p>
     * <code>task</code> </p> </li> </ul>
     */
    inline const Aws::String& GetIpcMode() const { return m_ipcMode; }
    inline bool IpcModeHasBeenSet() const { return m_ipcModeHasBeenSet; }
    template<typename IpcModeT = Aws::String>
    void SetIpcMode(IpcModeT&& value) { m_ipcModeHasBeenSet = true; m_ipcMode = std::forward<IpcModeT>(value); }
    template<typename IpcModeT = Aws::String>
    AwsEcsTaskDefinitionDetails& WithIpcMode(IpcModeT&& value) { SetIpcMode(std::forward<IpcModeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount (in MiB) of memory used by the task. </p> <p>For tasks that are
     * hosted on Amazon EC2, you can provide a task-level memory value or a
     * container-level memory value. For tasks that are hosted on Fargate, you must use
     * one of the <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_definition_parameters.html#task_size">specified
     * values</a> in the <i> <i>Amazon Elastic Container Service Developer Guide</i>
     * </i>, which determines your range of supported values for the <code>Cpu</code>
     * and <code>Memory</code> parameters.</p>
     */
    inline const Aws::String& GetMemory() const { return m_memory; }
    inline bool MemoryHasBeenSet() const { return m_memoryHasBeenSet; }
    template<typename MemoryT = Aws::String>
    void SetMemory(MemoryT&& value) { m_memoryHasBeenSet = true; m_memory = std::forward<MemoryT>(value); }
    template<typename MemoryT = Aws::String>
    AwsEcsTaskDefinitionDetails& WithMemory(MemoryT&& value) { SetMemory(std::forward<MemoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Docker networking mode to use for the containers in the task. Valid
     * values are as follows:</p> <ul> <li> <p> <code>awsvpc</code> </p> </li> <li> <p>
     * <code>bridge</code> </p> </li> <li> <p> <code>host</code> </p> </li> <li> <p>
     * <code>none</code> </p> </li> </ul>
     */
    inline const Aws::String& GetNetworkMode() const { return m_networkMode; }
    inline bool NetworkModeHasBeenSet() const { return m_networkModeHasBeenSet; }
    template<typename NetworkModeT = Aws::String>
    void SetNetworkMode(NetworkModeT&& value) { m_networkModeHasBeenSet = true; m_networkMode = std::forward<NetworkModeT>(value); }
    template<typename NetworkModeT = Aws::String>
    AwsEcsTaskDefinitionDetails& WithNetworkMode(NetworkModeT&& value) { SetNetworkMode(std::forward<NetworkModeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The process namespace to use for the containers in the task. Valid values are
     * <code>host</code> or <code>task</code>.</p>
     */
    inline const Aws::String& GetPidMode() const { return m_pidMode; }
    inline bool PidModeHasBeenSet() const { return m_pidModeHasBeenSet; }
    template<typename PidModeT = Aws::String>
    void SetPidMode(PidModeT&& value) { m_pidModeHasBeenSet = true; m_pidMode = std::forward<PidModeT>(value); }
    template<typename PidModeT = Aws::String>
    AwsEcsTaskDefinitionDetails& WithPidMode(PidModeT&& value) { SetPidMode(std::forward<PidModeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The placement constraint objects to use for tasks.</p>
     */
    inline const Aws::Vector<AwsEcsTaskDefinitionPlacementConstraintsDetails>& GetPlacementConstraints() const { return m_placementConstraints; }
    inline bool PlacementConstraintsHasBeenSet() const { return m_placementConstraintsHasBeenSet; }
    template<typename PlacementConstraintsT = Aws::Vector<AwsEcsTaskDefinitionPlacementConstraintsDetails>>
    void SetPlacementConstraints(PlacementConstraintsT&& value) { m_placementConstraintsHasBeenSet = true; m_placementConstraints = std::forward<PlacementConstraintsT>(value); }
    template<typename PlacementConstraintsT = Aws::Vector<AwsEcsTaskDefinitionPlacementConstraintsDetails>>
    AwsEcsTaskDefinitionDetails& WithPlacementConstraints(PlacementConstraintsT&& value) { SetPlacementConstraints(std::forward<PlacementConstraintsT>(value)); return *this;}
    template<typename PlacementConstraintsT = AwsEcsTaskDefinitionPlacementConstraintsDetails>
    AwsEcsTaskDefinitionDetails& AddPlacementConstraints(PlacementConstraintsT&& value) { m_placementConstraintsHasBeenSet = true; m_placementConstraints.emplace_back(std::forward<PlacementConstraintsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration details for the App Mesh proxy.</p>
     */
    inline const AwsEcsTaskDefinitionProxyConfigurationDetails& GetProxyConfiguration() const { return m_proxyConfiguration; }
    inline bool ProxyConfigurationHasBeenSet() const { return m_proxyConfigurationHasBeenSet; }
    template<typename ProxyConfigurationT = AwsEcsTaskDefinitionProxyConfigurationDetails>
    void SetProxyConfiguration(ProxyConfigurationT&& value) { m_proxyConfigurationHasBeenSet = true; m_proxyConfiguration = std::forward<ProxyConfigurationT>(value); }
    template<typename ProxyConfigurationT = AwsEcsTaskDefinitionProxyConfigurationDetails>
    AwsEcsTaskDefinitionDetails& WithProxyConfiguration(ProxyConfigurationT&& value) { SetProxyConfiguration(std::forward<ProxyConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task launch types that the task definition was validated against.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRequiresCompatibilities() const { return m_requiresCompatibilities; }
    inline bool RequiresCompatibilitiesHasBeenSet() const { return m_requiresCompatibilitiesHasBeenSet; }
    template<typename RequiresCompatibilitiesT = Aws::Vector<Aws::String>>
    void SetRequiresCompatibilities(RequiresCompatibilitiesT&& value) { m_requiresCompatibilitiesHasBeenSet = true; m_requiresCompatibilities = std::forward<RequiresCompatibilitiesT>(value); }
    template<typename RequiresCompatibilitiesT = Aws::Vector<Aws::String>>
    AwsEcsTaskDefinitionDetails& WithRequiresCompatibilities(RequiresCompatibilitiesT&& value) { SetRequiresCompatibilities(std::forward<RequiresCompatibilitiesT>(value)); return *this;}
    template<typename RequiresCompatibilitiesT = Aws::String>
    AwsEcsTaskDefinitionDetails& AddRequiresCompatibilities(RequiresCompatibilitiesT&& value) { m_requiresCompatibilitiesHasBeenSet = true; m_requiresCompatibilities.emplace_back(std::forward<RequiresCompatibilitiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The short name or ARN of the IAM role that grants containers in the task
     * permission to call Amazon Web Services API operations on your behalf.</p>
     */
    inline const Aws::String& GetTaskRoleArn() const { return m_taskRoleArn; }
    inline bool TaskRoleArnHasBeenSet() const { return m_taskRoleArnHasBeenSet; }
    template<typename TaskRoleArnT = Aws::String>
    void SetTaskRoleArn(TaskRoleArnT&& value) { m_taskRoleArnHasBeenSet = true; m_taskRoleArn = std::forward<TaskRoleArnT>(value); }
    template<typename TaskRoleArnT = Aws::String>
    AwsEcsTaskDefinitionDetails& WithTaskRoleArn(TaskRoleArnT&& value) { SetTaskRoleArn(std::forward<TaskRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data volume definitions for the task.</p>
     */
    inline const Aws::Vector<AwsEcsTaskDefinitionVolumesDetails>& GetVolumes() const { return m_volumes; }
    inline bool VolumesHasBeenSet() const { return m_volumesHasBeenSet; }
    template<typename VolumesT = Aws::Vector<AwsEcsTaskDefinitionVolumesDetails>>
    void SetVolumes(VolumesT&& value) { m_volumesHasBeenSet = true; m_volumes = std::forward<VolumesT>(value); }
    template<typename VolumesT = Aws::Vector<AwsEcsTaskDefinitionVolumesDetails>>
    AwsEcsTaskDefinitionDetails& WithVolumes(VolumesT&& value) { SetVolumes(std::forward<VolumesT>(value)); return *this;}
    template<typename VolumesT = AwsEcsTaskDefinitionVolumesDetails>
    AwsEcsTaskDefinitionDetails& AddVolumes(VolumesT&& value) { m_volumesHasBeenSet = true; m_volumes.emplace_back(std::forward<VolumesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The status of the task definition. </p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    AwsEcsTaskDefinitionDetails& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsDetails> m_containerDefinitions;
    bool m_containerDefinitionsHasBeenSet = false;

    Aws::String m_cpu;
    bool m_cpuHasBeenSet = false;

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet = false;

    Aws::String m_family;
    bool m_familyHasBeenSet = false;

    Aws::Vector<AwsEcsTaskDefinitionInferenceAcceleratorsDetails> m_inferenceAccelerators;
    bool m_inferenceAcceleratorsHasBeenSet = false;

    Aws::String m_ipcMode;
    bool m_ipcModeHasBeenSet = false;

    Aws::String m_memory;
    bool m_memoryHasBeenSet = false;

    Aws::String m_networkMode;
    bool m_networkModeHasBeenSet = false;

    Aws::String m_pidMode;
    bool m_pidModeHasBeenSet = false;

    Aws::Vector<AwsEcsTaskDefinitionPlacementConstraintsDetails> m_placementConstraints;
    bool m_placementConstraintsHasBeenSet = false;

    AwsEcsTaskDefinitionProxyConfigurationDetails m_proxyConfiguration;
    bool m_proxyConfigurationHasBeenSet = false;

    Aws::Vector<Aws::String> m_requiresCompatibilities;
    bool m_requiresCompatibilitiesHasBeenSet = false;

    Aws::String m_taskRoleArn;
    bool m_taskRoleArnHasBeenSet = false;

    Aws::Vector<AwsEcsTaskDefinitionVolumesDetails> m_volumes;
    bool m_volumesHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
