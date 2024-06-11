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
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionDetails();
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The container definitions that describe the containers that make up the
     * task.</p>
     */
    inline const Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsDetails>& GetContainerDefinitions() const{ return m_containerDefinitions; }
    inline bool ContainerDefinitionsHasBeenSet() const { return m_containerDefinitionsHasBeenSet; }
    inline void SetContainerDefinitions(const Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsDetails>& value) { m_containerDefinitionsHasBeenSet = true; m_containerDefinitions = value; }
    inline void SetContainerDefinitions(Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsDetails>&& value) { m_containerDefinitionsHasBeenSet = true; m_containerDefinitions = std::move(value); }
    inline AwsEcsTaskDefinitionDetails& WithContainerDefinitions(const Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsDetails>& value) { SetContainerDefinitions(value); return *this;}
    inline AwsEcsTaskDefinitionDetails& WithContainerDefinitions(Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsDetails>&& value) { SetContainerDefinitions(std::move(value)); return *this;}
    inline AwsEcsTaskDefinitionDetails& AddContainerDefinitions(const AwsEcsTaskDefinitionContainerDefinitionsDetails& value) { m_containerDefinitionsHasBeenSet = true; m_containerDefinitions.push_back(value); return *this; }
    inline AwsEcsTaskDefinitionDetails& AddContainerDefinitions(AwsEcsTaskDefinitionContainerDefinitionsDetails&& value) { m_containerDefinitionsHasBeenSet = true; m_containerDefinitions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of CPU units used by the task.Valid values are as follows:</p>
     * <ul> <li> <p> <code>256 (.25 vCPU)</code> </p> </li> <li> <p> <code>512 (.5
     * vCPU)</code> </p> </li> <li> <p> <code>1024 (1 vCPU)</code> </p> </li> <li> <p>
     * <code>2048 (2 vCPU)</code> </p> </li> <li> <p> <code>4096 (4 vCPU)</code> </p>
     * </li> </ul>
     */
    inline const Aws::String& GetCpu() const{ return m_cpu; }
    inline bool CpuHasBeenSet() const { return m_cpuHasBeenSet; }
    inline void SetCpu(const Aws::String& value) { m_cpuHasBeenSet = true; m_cpu = value; }
    inline void SetCpu(Aws::String&& value) { m_cpuHasBeenSet = true; m_cpu = std::move(value); }
    inline void SetCpu(const char* value) { m_cpuHasBeenSet = true; m_cpu.assign(value); }
    inline AwsEcsTaskDefinitionDetails& WithCpu(const Aws::String& value) { SetCpu(value); return *this;}
    inline AwsEcsTaskDefinitionDetails& WithCpu(Aws::String&& value) { SetCpu(std::move(value)); return *this;}
    inline AwsEcsTaskDefinitionDetails& WithCpu(const char* value) { SetCpu(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the task execution role that grants the container agent permission
     * to make API calls on behalf of the container user.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const{ return m_executionRoleArn; }
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }
    inline void SetExecutionRoleArn(const Aws::String& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = value; }
    inline void SetExecutionRoleArn(Aws::String&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::move(value); }
    inline void SetExecutionRoleArn(const char* value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn.assign(value); }
    inline AwsEcsTaskDefinitionDetails& WithExecutionRoleArn(const Aws::String& value) { SetExecutionRoleArn(value); return *this;}
    inline AwsEcsTaskDefinitionDetails& WithExecutionRoleArn(Aws::String&& value) { SetExecutionRoleArn(std::move(value)); return *this;}
    inline AwsEcsTaskDefinitionDetails& WithExecutionRoleArn(const char* value) { SetExecutionRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a family that this task definition is registered to.</p>
     */
    inline const Aws::String& GetFamily() const{ return m_family; }
    inline bool FamilyHasBeenSet() const { return m_familyHasBeenSet; }
    inline void SetFamily(const Aws::String& value) { m_familyHasBeenSet = true; m_family = value; }
    inline void SetFamily(Aws::String&& value) { m_familyHasBeenSet = true; m_family = std::move(value); }
    inline void SetFamily(const char* value) { m_familyHasBeenSet = true; m_family.assign(value); }
    inline AwsEcsTaskDefinitionDetails& WithFamily(const Aws::String& value) { SetFamily(value); return *this;}
    inline AwsEcsTaskDefinitionDetails& WithFamily(Aws::String&& value) { SetFamily(std::move(value)); return *this;}
    inline AwsEcsTaskDefinitionDetails& WithFamily(const char* value) { SetFamily(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Elastic Inference accelerators to use for the containers in the task.</p>
     */
    inline const Aws::Vector<AwsEcsTaskDefinitionInferenceAcceleratorsDetails>& GetInferenceAccelerators() const{ return m_inferenceAccelerators; }
    inline bool InferenceAcceleratorsHasBeenSet() const { return m_inferenceAcceleratorsHasBeenSet; }
    inline void SetInferenceAccelerators(const Aws::Vector<AwsEcsTaskDefinitionInferenceAcceleratorsDetails>& value) { m_inferenceAcceleratorsHasBeenSet = true; m_inferenceAccelerators = value; }
    inline void SetInferenceAccelerators(Aws::Vector<AwsEcsTaskDefinitionInferenceAcceleratorsDetails>&& value) { m_inferenceAcceleratorsHasBeenSet = true; m_inferenceAccelerators = std::move(value); }
    inline AwsEcsTaskDefinitionDetails& WithInferenceAccelerators(const Aws::Vector<AwsEcsTaskDefinitionInferenceAcceleratorsDetails>& value) { SetInferenceAccelerators(value); return *this;}
    inline AwsEcsTaskDefinitionDetails& WithInferenceAccelerators(Aws::Vector<AwsEcsTaskDefinitionInferenceAcceleratorsDetails>&& value) { SetInferenceAccelerators(std::move(value)); return *this;}
    inline AwsEcsTaskDefinitionDetails& AddInferenceAccelerators(const AwsEcsTaskDefinitionInferenceAcceleratorsDetails& value) { m_inferenceAcceleratorsHasBeenSet = true; m_inferenceAccelerators.push_back(value); return *this; }
    inline AwsEcsTaskDefinitionDetails& AddInferenceAccelerators(AwsEcsTaskDefinitionInferenceAcceleratorsDetails&& value) { m_inferenceAcceleratorsHasBeenSet = true; m_inferenceAccelerators.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The inter-process communication (IPC) resource namespace to use for the
     * containers in the task. Valid values are as follows:</p> <ul> <li> <p>
     * <code>host</code> </p> </li> <li> <p> <code>none</code> </p> </li> <li> <p>
     * <code>task</code> </p> </li> </ul>
     */
    inline const Aws::String& GetIpcMode() const{ return m_ipcMode; }
    inline bool IpcModeHasBeenSet() const { return m_ipcModeHasBeenSet; }
    inline void SetIpcMode(const Aws::String& value) { m_ipcModeHasBeenSet = true; m_ipcMode = value; }
    inline void SetIpcMode(Aws::String&& value) { m_ipcModeHasBeenSet = true; m_ipcMode = std::move(value); }
    inline void SetIpcMode(const char* value) { m_ipcModeHasBeenSet = true; m_ipcMode.assign(value); }
    inline AwsEcsTaskDefinitionDetails& WithIpcMode(const Aws::String& value) { SetIpcMode(value); return *this;}
    inline AwsEcsTaskDefinitionDetails& WithIpcMode(Aws::String&& value) { SetIpcMode(std::move(value)); return *this;}
    inline AwsEcsTaskDefinitionDetails& WithIpcMode(const char* value) { SetIpcMode(value); return *this;}
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
    inline const Aws::String& GetMemory() const{ return m_memory; }
    inline bool MemoryHasBeenSet() const { return m_memoryHasBeenSet; }
    inline void SetMemory(const Aws::String& value) { m_memoryHasBeenSet = true; m_memory = value; }
    inline void SetMemory(Aws::String&& value) { m_memoryHasBeenSet = true; m_memory = std::move(value); }
    inline void SetMemory(const char* value) { m_memoryHasBeenSet = true; m_memory.assign(value); }
    inline AwsEcsTaskDefinitionDetails& WithMemory(const Aws::String& value) { SetMemory(value); return *this;}
    inline AwsEcsTaskDefinitionDetails& WithMemory(Aws::String&& value) { SetMemory(std::move(value)); return *this;}
    inline AwsEcsTaskDefinitionDetails& WithMemory(const char* value) { SetMemory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Docker networking mode to use for the containers in the task. Valid
     * values are as follows:</p> <ul> <li> <p> <code>awsvpc</code> </p> </li> <li> <p>
     * <code>bridge</code> </p> </li> <li> <p> <code>host</code> </p> </li> <li> <p>
     * <code>none</code> </p> </li> </ul>
     */
    inline const Aws::String& GetNetworkMode() const{ return m_networkMode; }
    inline bool NetworkModeHasBeenSet() const { return m_networkModeHasBeenSet; }
    inline void SetNetworkMode(const Aws::String& value) { m_networkModeHasBeenSet = true; m_networkMode = value; }
    inline void SetNetworkMode(Aws::String&& value) { m_networkModeHasBeenSet = true; m_networkMode = std::move(value); }
    inline void SetNetworkMode(const char* value) { m_networkModeHasBeenSet = true; m_networkMode.assign(value); }
    inline AwsEcsTaskDefinitionDetails& WithNetworkMode(const Aws::String& value) { SetNetworkMode(value); return *this;}
    inline AwsEcsTaskDefinitionDetails& WithNetworkMode(Aws::String&& value) { SetNetworkMode(std::move(value)); return *this;}
    inline AwsEcsTaskDefinitionDetails& WithNetworkMode(const char* value) { SetNetworkMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The process namespace to use for the containers in the task. Valid values are
     * <code>host</code> or <code>task</code>.</p>
     */
    inline const Aws::String& GetPidMode() const{ return m_pidMode; }
    inline bool PidModeHasBeenSet() const { return m_pidModeHasBeenSet; }
    inline void SetPidMode(const Aws::String& value) { m_pidModeHasBeenSet = true; m_pidMode = value; }
    inline void SetPidMode(Aws::String&& value) { m_pidModeHasBeenSet = true; m_pidMode = std::move(value); }
    inline void SetPidMode(const char* value) { m_pidModeHasBeenSet = true; m_pidMode.assign(value); }
    inline AwsEcsTaskDefinitionDetails& WithPidMode(const Aws::String& value) { SetPidMode(value); return *this;}
    inline AwsEcsTaskDefinitionDetails& WithPidMode(Aws::String&& value) { SetPidMode(std::move(value)); return *this;}
    inline AwsEcsTaskDefinitionDetails& WithPidMode(const char* value) { SetPidMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The placement constraint objects to use for tasks.</p>
     */
    inline const Aws::Vector<AwsEcsTaskDefinitionPlacementConstraintsDetails>& GetPlacementConstraints() const{ return m_placementConstraints; }
    inline bool PlacementConstraintsHasBeenSet() const { return m_placementConstraintsHasBeenSet; }
    inline void SetPlacementConstraints(const Aws::Vector<AwsEcsTaskDefinitionPlacementConstraintsDetails>& value) { m_placementConstraintsHasBeenSet = true; m_placementConstraints = value; }
    inline void SetPlacementConstraints(Aws::Vector<AwsEcsTaskDefinitionPlacementConstraintsDetails>&& value) { m_placementConstraintsHasBeenSet = true; m_placementConstraints = std::move(value); }
    inline AwsEcsTaskDefinitionDetails& WithPlacementConstraints(const Aws::Vector<AwsEcsTaskDefinitionPlacementConstraintsDetails>& value) { SetPlacementConstraints(value); return *this;}
    inline AwsEcsTaskDefinitionDetails& WithPlacementConstraints(Aws::Vector<AwsEcsTaskDefinitionPlacementConstraintsDetails>&& value) { SetPlacementConstraints(std::move(value)); return *this;}
    inline AwsEcsTaskDefinitionDetails& AddPlacementConstraints(const AwsEcsTaskDefinitionPlacementConstraintsDetails& value) { m_placementConstraintsHasBeenSet = true; m_placementConstraints.push_back(value); return *this; }
    inline AwsEcsTaskDefinitionDetails& AddPlacementConstraints(AwsEcsTaskDefinitionPlacementConstraintsDetails&& value) { m_placementConstraintsHasBeenSet = true; m_placementConstraints.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration details for the App Mesh proxy.</p>
     */
    inline const AwsEcsTaskDefinitionProxyConfigurationDetails& GetProxyConfiguration() const{ return m_proxyConfiguration; }
    inline bool ProxyConfigurationHasBeenSet() const { return m_proxyConfigurationHasBeenSet; }
    inline void SetProxyConfiguration(const AwsEcsTaskDefinitionProxyConfigurationDetails& value) { m_proxyConfigurationHasBeenSet = true; m_proxyConfiguration = value; }
    inline void SetProxyConfiguration(AwsEcsTaskDefinitionProxyConfigurationDetails&& value) { m_proxyConfigurationHasBeenSet = true; m_proxyConfiguration = std::move(value); }
    inline AwsEcsTaskDefinitionDetails& WithProxyConfiguration(const AwsEcsTaskDefinitionProxyConfigurationDetails& value) { SetProxyConfiguration(value); return *this;}
    inline AwsEcsTaskDefinitionDetails& WithProxyConfiguration(AwsEcsTaskDefinitionProxyConfigurationDetails&& value) { SetProxyConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task launch types that the task definition was validated against.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRequiresCompatibilities() const{ return m_requiresCompatibilities; }
    inline bool RequiresCompatibilitiesHasBeenSet() const { return m_requiresCompatibilitiesHasBeenSet; }
    inline void SetRequiresCompatibilities(const Aws::Vector<Aws::String>& value) { m_requiresCompatibilitiesHasBeenSet = true; m_requiresCompatibilities = value; }
    inline void SetRequiresCompatibilities(Aws::Vector<Aws::String>&& value) { m_requiresCompatibilitiesHasBeenSet = true; m_requiresCompatibilities = std::move(value); }
    inline AwsEcsTaskDefinitionDetails& WithRequiresCompatibilities(const Aws::Vector<Aws::String>& value) { SetRequiresCompatibilities(value); return *this;}
    inline AwsEcsTaskDefinitionDetails& WithRequiresCompatibilities(Aws::Vector<Aws::String>&& value) { SetRequiresCompatibilities(std::move(value)); return *this;}
    inline AwsEcsTaskDefinitionDetails& AddRequiresCompatibilities(const Aws::String& value) { m_requiresCompatibilitiesHasBeenSet = true; m_requiresCompatibilities.push_back(value); return *this; }
    inline AwsEcsTaskDefinitionDetails& AddRequiresCompatibilities(Aws::String&& value) { m_requiresCompatibilitiesHasBeenSet = true; m_requiresCompatibilities.push_back(std::move(value)); return *this; }
    inline AwsEcsTaskDefinitionDetails& AddRequiresCompatibilities(const char* value) { m_requiresCompatibilitiesHasBeenSet = true; m_requiresCompatibilities.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The short name or ARN of the IAM role that grants containers in the task
     * permission to call Amazon Web Services API operations on your behalf.</p>
     */
    inline const Aws::String& GetTaskRoleArn() const{ return m_taskRoleArn; }
    inline bool TaskRoleArnHasBeenSet() const { return m_taskRoleArnHasBeenSet; }
    inline void SetTaskRoleArn(const Aws::String& value) { m_taskRoleArnHasBeenSet = true; m_taskRoleArn = value; }
    inline void SetTaskRoleArn(Aws::String&& value) { m_taskRoleArnHasBeenSet = true; m_taskRoleArn = std::move(value); }
    inline void SetTaskRoleArn(const char* value) { m_taskRoleArnHasBeenSet = true; m_taskRoleArn.assign(value); }
    inline AwsEcsTaskDefinitionDetails& WithTaskRoleArn(const Aws::String& value) { SetTaskRoleArn(value); return *this;}
    inline AwsEcsTaskDefinitionDetails& WithTaskRoleArn(Aws::String&& value) { SetTaskRoleArn(std::move(value)); return *this;}
    inline AwsEcsTaskDefinitionDetails& WithTaskRoleArn(const char* value) { SetTaskRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data volume definitions for the task.</p>
     */
    inline const Aws::Vector<AwsEcsTaskDefinitionVolumesDetails>& GetVolumes() const{ return m_volumes; }
    inline bool VolumesHasBeenSet() const { return m_volumesHasBeenSet; }
    inline void SetVolumes(const Aws::Vector<AwsEcsTaskDefinitionVolumesDetails>& value) { m_volumesHasBeenSet = true; m_volumes = value; }
    inline void SetVolumes(Aws::Vector<AwsEcsTaskDefinitionVolumesDetails>&& value) { m_volumesHasBeenSet = true; m_volumes = std::move(value); }
    inline AwsEcsTaskDefinitionDetails& WithVolumes(const Aws::Vector<AwsEcsTaskDefinitionVolumesDetails>& value) { SetVolumes(value); return *this;}
    inline AwsEcsTaskDefinitionDetails& WithVolumes(Aws::Vector<AwsEcsTaskDefinitionVolumesDetails>&& value) { SetVolumes(std::move(value)); return *this;}
    inline AwsEcsTaskDefinitionDetails& AddVolumes(const AwsEcsTaskDefinitionVolumesDetails& value) { m_volumesHasBeenSet = true; m_volumes.push_back(value); return *this; }
    inline AwsEcsTaskDefinitionDetails& AddVolumes(AwsEcsTaskDefinitionVolumesDetails&& value) { m_volumesHasBeenSet = true; m_volumes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The status of the task definition. </p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline AwsEcsTaskDefinitionDetails& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline AwsEcsTaskDefinitionDetails& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline AwsEcsTaskDefinitionDetails& WithStatus(const char* value) { SetStatus(value); return *this;}
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
