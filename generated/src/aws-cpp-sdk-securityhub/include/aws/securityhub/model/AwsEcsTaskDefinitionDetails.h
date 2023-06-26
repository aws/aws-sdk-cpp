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


    /**
     * <p>The container definitions that describe the containers that make up the
     * task.</p>
     */
    inline const Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsDetails>& GetContainerDefinitions() const{ return m_containerDefinitions; }

    /**
     * <p>The container definitions that describe the containers that make up the
     * task.</p>
     */
    inline bool ContainerDefinitionsHasBeenSet() const { return m_containerDefinitionsHasBeenSet; }

    /**
     * <p>The container definitions that describe the containers that make up the
     * task.</p>
     */
    inline void SetContainerDefinitions(const Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsDetails>& value) { m_containerDefinitionsHasBeenSet = true; m_containerDefinitions = value; }

    /**
     * <p>The container definitions that describe the containers that make up the
     * task.</p>
     */
    inline void SetContainerDefinitions(Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsDetails>&& value) { m_containerDefinitionsHasBeenSet = true; m_containerDefinitions = std::move(value); }

    /**
     * <p>The container definitions that describe the containers that make up the
     * task.</p>
     */
    inline AwsEcsTaskDefinitionDetails& WithContainerDefinitions(const Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsDetails>& value) { SetContainerDefinitions(value); return *this;}

    /**
     * <p>The container definitions that describe the containers that make up the
     * task.</p>
     */
    inline AwsEcsTaskDefinitionDetails& WithContainerDefinitions(Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsDetails>&& value) { SetContainerDefinitions(std::move(value)); return *this;}

    /**
     * <p>The container definitions that describe the containers that make up the
     * task.</p>
     */
    inline AwsEcsTaskDefinitionDetails& AddContainerDefinitions(const AwsEcsTaskDefinitionContainerDefinitionsDetails& value) { m_containerDefinitionsHasBeenSet = true; m_containerDefinitions.push_back(value); return *this; }

    /**
     * <p>The container definitions that describe the containers that make up the
     * task.</p>
     */
    inline AwsEcsTaskDefinitionDetails& AddContainerDefinitions(AwsEcsTaskDefinitionContainerDefinitionsDetails&& value) { m_containerDefinitionsHasBeenSet = true; m_containerDefinitions.push_back(std::move(value)); return *this; }


    /**
     * <p>The number of CPU units used by the task.Valid values are as follows:</p>
     * <ul> <li> <p> <code>256 (.25 vCPU)</code> </p> </li> <li> <p> <code>512 (.5
     * vCPU)</code> </p> </li> <li> <p> <code>1024 (1 vCPU)</code> </p> </li> <li> <p>
     * <code>2048 (2 vCPU)</code> </p> </li> <li> <p> <code>4096 (4 vCPU)</code> </p>
     * </li> </ul>
     */
    inline const Aws::String& GetCpu() const{ return m_cpu; }

    /**
     * <p>The number of CPU units used by the task.Valid values are as follows:</p>
     * <ul> <li> <p> <code>256 (.25 vCPU)</code> </p> </li> <li> <p> <code>512 (.5
     * vCPU)</code> </p> </li> <li> <p> <code>1024 (1 vCPU)</code> </p> </li> <li> <p>
     * <code>2048 (2 vCPU)</code> </p> </li> <li> <p> <code>4096 (4 vCPU)</code> </p>
     * </li> </ul>
     */
    inline bool CpuHasBeenSet() const { return m_cpuHasBeenSet; }

    /**
     * <p>The number of CPU units used by the task.Valid values are as follows:</p>
     * <ul> <li> <p> <code>256 (.25 vCPU)</code> </p> </li> <li> <p> <code>512 (.5
     * vCPU)</code> </p> </li> <li> <p> <code>1024 (1 vCPU)</code> </p> </li> <li> <p>
     * <code>2048 (2 vCPU)</code> </p> </li> <li> <p> <code>4096 (4 vCPU)</code> </p>
     * </li> </ul>
     */
    inline void SetCpu(const Aws::String& value) { m_cpuHasBeenSet = true; m_cpu = value; }

    /**
     * <p>The number of CPU units used by the task.Valid values are as follows:</p>
     * <ul> <li> <p> <code>256 (.25 vCPU)</code> </p> </li> <li> <p> <code>512 (.5
     * vCPU)</code> </p> </li> <li> <p> <code>1024 (1 vCPU)</code> </p> </li> <li> <p>
     * <code>2048 (2 vCPU)</code> </p> </li> <li> <p> <code>4096 (4 vCPU)</code> </p>
     * </li> </ul>
     */
    inline void SetCpu(Aws::String&& value) { m_cpuHasBeenSet = true; m_cpu = std::move(value); }

    /**
     * <p>The number of CPU units used by the task.Valid values are as follows:</p>
     * <ul> <li> <p> <code>256 (.25 vCPU)</code> </p> </li> <li> <p> <code>512 (.5
     * vCPU)</code> </p> </li> <li> <p> <code>1024 (1 vCPU)</code> </p> </li> <li> <p>
     * <code>2048 (2 vCPU)</code> </p> </li> <li> <p> <code>4096 (4 vCPU)</code> </p>
     * </li> </ul>
     */
    inline void SetCpu(const char* value) { m_cpuHasBeenSet = true; m_cpu.assign(value); }

    /**
     * <p>The number of CPU units used by the task.Valid values are as follows:</p>
     * <ul> <li> <p> <code>256 (.25 vCPU)</code> </p> </li> <li> <p> <code>512 (.5
     * vCPU)</code> </p> </li> <li> <p> <code>1024 (1 vCPU)</code> </p> </li> <li> <p>
     * <code>2048 (2 vCPU)</code> </p> </li> <li> <p> <code>4096 (4 vCPU)</code> </p>
     * </li> </ul>
     */
    inline AwsEcsTaskDefinitionDetails& WithCpu(const Aws::String& value) { SetCpu(value); return *this;}

    /**
     * <p>The number of CPU units used by the task.Valid values are as follows:</p>
     * <ul> <li> <p> <code>256 (.25 vCPU)</code> </p> </li> <li> <p> <code>512 (.5
     * vCPU)</code> </p> </li> <li> <p> <code>1024 (1 vCPU)</code> </p> </li> <li> <p>
     * <code>2048 (2 vCPU)</code> </p> </li> <li> <p> <code>4096 (4 vCPU)</code> </p>
     * </li> </ul>
     */
    inline AwsEcsTaskDefinitionDetails& WithCpu(Aws::String&& value) { SetCpu(std::move(value)); return *this;}

    /**
     * <p>The number of CPU units used by the task.Valid values are as follows:</p>
     * <ul> <li> <p> <code>256 (.25 vCPU)</code> </p> </li> <li> <p> <code>512 (.5
     * vCPU)</code> </p> </li> <li> <p> <code>1024 (1 vCPU)</code> </p> </li> <li> <p>
     * <code>2048 (2 vCPU)</code> </p> </li> <li> <p> <code>4096 (4 vCPU)</code> </p>
     * </li> </ul>
     */
    inline AwsEcsTaskDefinitionDetails& WithCpu(const char* value) { SetCpu(value); return *this;}


    /**
     * <p>The ARN of the task execution role that grants the container agent permission
     * to make API calls on behalf of the container user.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const{ return m_executionRoleArn; }

    /**
     * <p>The ARN of the task execution role that grants the container agent permission
     * to make API calls on behalf of the container user.</p>
     */
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }

    /**
     * <p>The ARN of the task execution role that grants the container agent permission
     * to make API calls on behalf of the container user.</p>
     */
    inline void SetExecutionRoleArn(const Aws::String& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = value; }

    /**
     * <p>The ARN of the task execution role that grants the container agent permission
     * to make API calls on behalf of the container user.</p>
     */
    inline void SetExecutionRoleArn(Aws::String&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::move(value); }

    /**
     * <p>The ARN of the task execution role that grants the container agent permission
     * to make API calls on behalf of the container user.</p>
     */
    inline void SetExecutionRoleArn(const char* value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn.assign(value); }

    /**
     * <p>The ARN of the task execution role that grants the container agent permission
     * to make API calls on behalf of the container user.</p>
     */
    inline AwsEcsTaskDefinitionDetails& WithExecutionRoleArn(const Aws::String& value) { SetExecutionRoleArn(value); return *this;}

    /**
     * <p>The ARN of the task execution role that grants the container agent permission
     * to make API calls on behalf of the container user.</p>
     */
    inline AwsEcsTaskDefinitionDetails& WithExecutionRoleArn(Aws::String&& value) { SetExecutionRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the task execution role that grants the container agent permission
     * to make API calls on behalf of the container user.</p>
     */
    inline AwsEcsTaskDefinitionDetails& WithExecutionRoleArn(const char* value) { SetExecutionRoleArn(value); return *this;}


    /**
     * <p>The name of a family that this task definition is registered to.</p>
     */
    inline const Aws::String& GetFamily() const{ return m_family; }

    /**
     * <p>The name of a family that this task definition is registered to.</p>
     */
    inline bool FamilyHasBeenSet() const { return m_familyHasBeenSet; }

    /**
     * <p>The name of a family that this task definition is registered to.</p>
     */
    inline void SetFamily(const Aws::String& value) { m_familyHasBeenSet = true; m_family = value; }

    /**
     * <p>The name of a family that this task definition is registered to.</p>
     */
    inline void SetFamily(Aws::String&& value) { m_familyHasBeenSet = true; m_family = std::move(value); }

    /**
     * <p>The name of a family that this task definition is registered to.</p>
     */
    inline void SetFamily(const char* value) { m_familyHasBeenSet = true; m_family.assign(value); }

    /**
     * <p>The name of a family that this task definition is registered to.</p>
     */
    inline AwsEcsTaskDefinitionDetails& WithFamily(const Aws::String& value) { SetFamily(value); return *this;}

    /**
     * <p>The name of a family that this task definition is registered to.</p>
     */
    inline AwsEcsTaskDefinitionDetails& WithFamily(Aws::String&& value) { SetFamily(std::move(value)); return *this;}

    /**
     * <p>The name of a family that this task definition is registered to.</p>
     */
    inline AwsEcsTaskDefinitionDetails& WithFamily(const char* value) { SetFamily(value); return *this;}


    /**
     * <p>The Elastic Inference accelerators to use for the containers in the task.</p>
     */
    inline const Aws::Vector<AwsEcsTaskDefinitionInferenceAcceleratorsDetails>& GetInferenceAccelerators() const{ return m_inferenceAccelerators; }

    /**
     * <p>The Elastic Inference accelerators to use for the containers in the task.</p>
     */
    inline bool InferenceAcceleratorsHasBeenSet() const { return m_inferenceAcceleratorsHasBeenSet; }

    /**
     * <p>The Elastic Inference accelerators to use for the containers in the task.</p>
     */
    inline void SetInferenceAccelerators(const Aws::Vector<AwsEcsTaskDefinitionInferenceAcceleratorsDetails>& value) { m_inferenceAcceleratorsHasBeenSet = true; m_inferenceAccelerators = value; }

    /**
     * <p>The Elastic Inference accelerators to use for the containers in the task.</p>
     */
    inline void SetInferenceAccelerators(Aws::Vector<AwsEcsTaskDefinitionInferenceAcceleratorsDetails>&& value) { m_inferenceAcceleratorsHasBeenSet = true; m_inferenceAccelerators = std::move(value); }

    /**
     * <p>The Elastic Inference accelerators to use for the containers in the task.</p>
     */
    inline AwsEcsTaskDefinitionDetails& WithInferenceAccelerators(const Aws::Vector<AwsEcsTaskDefinitionInferenceAcceleratorsDetails>& value) { SetInferenceAccelerators(value); return *this;}

    /**
     * <p>The Elastic Inference accelerators to use for the containers in the task.</p>
     */
    inline AwsEcsTaskDefinitionDetails& WithInferenceAccelerators(Aws::Vector<AwsEcsTaskDefinitionInferenceAcceleratorsDetails>&& value) { SetInferenceAccelerators(std::move(value)); return *this;}

    /**
     * <p>The Elastic Inference accelerators to use for the containers in the task.</p>
     */
    inline AwsEcsTaskDefinitionDetails& AddInferenceAccelerators(const AwsEcsTaskDefinitionInferenceAcceleratorsDetails& value) { m_inferenceAcceleratorsHasBeenSet = true; m_inferenceAccelerators.push_back(value); return *this; }

    /**
     * <p>The Elastic Inference accelerators to use for the containers in the task.</p>
     */
    inline AwsEcsTaskDefinitionDetails& AddInferenceAccelerators(AwsEcsTaskDefinitionInferenceAcceleratorsDetails&& value) { m_inferenceAcceleratorsHasBeenSet = true; m_inferenceAccelerators.push_back(std::move(value)); return *this; }


    /**
     * <p>The inter-process communication (IPC) resource namespace to use for the
     * containers in the task. Valid values are as follows:</p> <ul> <li> <p>
     * <code>host</code> </p> </li> <li> <p> <code>none</code> </p> </li> <li> <p>
     * <code>task</code> </p> </li> </ul>
     */
    inline const Aws::String& GetIpcMode() const{ return m_ipcMode; }

    /**
     * <p>The inter-process communication (IPC) resource namespace to use for the
     * containers in the task. Valid values are as follows:</p> <ul> <li> <p>
     * <code>host</code> </p> </li> <li> <p> <code>none</code> </p> </li> <li> <p>
     * <code>task</code> </p> </li> </ul>
     */
    inline bool IpcModeHasBeenSet() const { return m_ipcModeHasBeenSet; }

    /**
     * <p>The inter-process communication (IPC) resource namespace to use for the
     * containers in the task. Valid values are as follows:</p> <ul> <li> <p>
     * <code>host</code> </p> </li> <li> <p> <code>none</code> </p> </li> <li> <p>
     * <code>task</code> </p> </li> </ul>
     */
    inline void SetIpcMode(const Aws::String& value) { m_ipcModeHasBeenSet = true; m_ipcMode = value; }

    /**
     * <p>The inter-process communication (IPC) resource namespace to use for the
     * containers in the task. Valid values are as follows:</p> <ul> <li> <p>
     * <code>host</code> </p> </li> <li> <p> <code>none</code> </p> </li> <li> <p>
     * <code>task</code> </p> </li> </ul>
     */
    inline void SetIpcMode(Aws::String&& value) { m_ipcModeHasBeenSet = true; m_ipcMode = std::move(value); }

    /**
     * <p>The inter-process communication (IPC) resource namespace to use for the
     * containers in the task. Valid values are as follows:</p> <ul> <li> <p>
     * <code>host</code> </p> </li> <li> <p> <code>none</code> </p> </li> <li> <p>
     * <code>task</code> </p> </li> </ul>
     */
    inline void SetIpcMode(const char* value) { m_ipcModeHasBeenSet = true; m_ipcMode.assign(value); }

    /**
     * <p>The inter-process communication (IPC) resource namespace to use for the
     * containers in the task. Valid values are as follows:</p> <ul> <li> <p>
     * <code>host</code> </p> </li> <li> <p> <code>none</code> </p> </li> <li> <p>
     * <code>task</code> </p> </li> </ul>
     */
    inline AwsEcsTaskDefinitionDetails& WithIpcMode(const Aws::String& value) { SetIpcMode(value); return *this;}

    /**
     * <p>The inter-process communication (IPC) resource namespace to use for the
     * containers in the task. Valid values are as follows:</p> <ul> <li> <p>
     * <code>host</code> </p> </li> <li> <p> <code>none</code> </p> </li> <li> <p>
     * <code>task</code> </p> </li> </ul>
     */
    inline AwsEcsTaskDefinitionDetails& WithIpcMode(Aws::String&& value) { SetIpcMode(std::move(value)); return *this;}

    /**
     * <p>The inter-process communication (IPC) resource namespace to use for the
     * containers in the task. Valid values are as follows:</p> <ul> <li> <p>
     * <code>host</code> </p> </li> <li> <p> <code>none</code> </p> </li> <li> <p>
     * <code>task</code> </p> </li> </ul>
     */
    inline AwsEcsTaskDefinitionDetails& WithIpcMode(const char* value) { SetIpcMode(value); return *this;}


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
    inline bool MemoryHasBeenSet() const { return m_memoryHasBeenSet; }

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
    inline void SetMemory(const Aws::String& value) { m_memoryHasBeenSet = true; m_memory = value; }

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
    inline void SetMemory(Aws::String&& value) { m_memoryHasBeenSet = true; m_memory = std::move(value); }

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
    inline void SetMemory(const char* value) { m_memoryHasBeenSet = true; m_memory.assign(value); }

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
    inline AwsEcsTaskDefinitionDetails& WithMemory(const Aws::String& value) { SetMemory(value); return *this;}

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
    inline AwsEcsTaskDefinitionDetails& WithMemory(Aws::String&& value) { SetMemory(std::move(value)); return *this;}

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
    inline AwsEcsTaskDefinitionDetails& WithMemory(const char* value) { SetMemory(value); return *this;}


    /**
     * <p>The Docker networking mode to use for the containers in the task. Valid
     * values are as follows:</p> <ul> <li> <p> <code>awsvpc</code> </p> </li> <li> <p>
     * <code>bridge</code> </p> </li> <li> <p> <code>host</code> </p> </li> <li> <p>
     * <code>none</code> </p> </li> </ul>
     */
    inline const Aws::String& GetNetworkMode() const{ return m_networkMode; }

    /**
     * <p>The Docker networking mode to use for the containers in the task. Valid
     * values are as follows:</p> <ul> <li> <p> <code>awsvpc</code> </p> </li> <li> <p>
     * <code>bridge</code> </p> </li> <li> <p> <code>host</code> </p> </li> <li> <p>
     * <code>none</code> </p> </li> </ul>
     */
    inline bool NetworkModeHasBeenSet() const { return m_networkModeHasBeenSet; }

    /**
     * <p>The Docker networking mode to use for the containers in the task. Valid
     * values are as follows:</p> <ul> <li> <p> <code>awsvpc</code> </p> </li> <li> <p>
     * <code>bridge</code> </p> </li> <li> <p> <code>host</code> </p> </li> <li> <p>
     * <code>none</code> </p> </li> </ul>
     */
    inline void SetNetworkMode(const Aws::String& value) { m_networkModeHasBeenSet = true; m_networkMode = value; }

    /**
     * <p>The Docker networking mode to use for the containers in the task. Valid
     * values are as follows:</p> <ul> <li> <p> <code>awsvpc</code> </p> </li> <li> <p>
     * <code>bridge</code> </p> </li> <li> <p> <code>host</code> </p> </li> <li> <p>
     * <code>none</code> </p> </li> </ul>
     */
    inline void SetNetworkMode(Aws::String&& value) { m_networkModeHasBeenSet = true; m_networkMode = std::move(value); }

    /**
     * <p>The Docker networking mode to use for the containers in the task. Valid
     * values are as follows:</p> <ul> <li> <p> <code>awsvpc</code> </p> </li> <li> <p>
     * <code>bridge</code> </p> </li> <li> <p> <code>host</code> </p> </li> <li> <p>
     * <code>none</code> </p> </li> </ul>
     */
    inline void SetNetworkMode(const char* value) { m_networkModeHasBeenSet = true; m_networkMode.assign(value); }

    /**
     * <p>The Docker networking mode to use for the containers in the task. Valid
     * values are as follows:</p> <ul> <li> <p> <code>awsvpc</code> </p> </li> <li> <p>
     * <code>bridge</code> </p> </li> <li> <p> <code>host</code> </p> </li> <li> <p>
     * <code>none</code> </p> </li> </ul>
     */
    inline AwsEcsTaskDefinitionDetails& WithNetworkMode(const Aws::String& value) { SetNetworkMode(value); return *this;}

    /**
     * <p>The Docker networking mode to use for the containers in the task. Valid
     * values are as follows:</p> <ul> <li> <p> <code>awsvpc</code> </p> </li> <li> <p>
     * <code>bridge</code> </p> </li> <li> <p> <code>host</code> </p> </li> <li> <p>
     * <code>none</code> </p> </li> </ul>
     */
    inline AwsEcsTaskDefinitionDetails& WithNetworkMode(Aws::String&& value) { SetNetworkMode(std::move(value)); return *this;}

    /**
     * <p>The Docker networking mode to use for the containers in the task. Valid
     * values are as follows:</p> <ul> <li> <p> <code>awsvpc</code> </p> </li> <li> <p>
     * <code>bridge</code> </p> </li> <li> <p> <code>host</code> </p> </li> <li> <p>
     * <code>none</code> </p> </li> </ul>
     */
    inline AwsEcsTaskDefinitionDetails& WithNetworkMode(const char* value) { SetNetworkMode(value); return *this;}


    /**
     * <p>The process namespace to use for the containers in the task. Valid values are
     * <code>host</code> or <code>task</code>.</p>
     */
    inline const Aws::String& GetPidMode() const{ return m_pidMode; }

    /**
     * <p>The process namespace to use for the containers in the task. Valid values are
     * <code>host</code> or <code>task</code>.</p>
     */
    inline bool PidModeHasBeenSet() const { return m_pidModeHasBeenSet; }

    /**
     * <p>The process namespace to use for the containers in the task. Valid values are
     * <code>host</code> or <code>task</code>.</p>
     */
    inline void SetPidMode(const Aws::String& value) { m_pidModeHasBeenSet = true; m_pidMode = value; }

    /**
     * <p>The process namespace to use for the containers in the task. Valid values are
     * <code>host</code> or <code>task</code>.</p>
     */
    inline void SetPidMode(Aws::String&& value) { m_pidModeHasBeenSet = true; m_pidMode = std::move(value); }

    /**
     * <p>The process namespace to use for the containers in the task. Valid values are
     * <code>host</code> or <code>task</code>.</p>
     */
    inline void SetPidMode(const char* value) { m_pidModeHasBeenSet = true; m_pidMode.assign(value); }

    /**
     * <p>The process namespace to use for the containers in the task. Valid values are
     * <code>host</code> or <code>task</code>.</p>
     */
    inline AwsEcsTaskDefinitionDetails& WithPidMode(const Aws::String& value) { SetPidMode(value); return *this;}

    /**
     * <p>The process namespace to use for the containers in the task. Valid values are
     * <code>host</code> or <code>task</code>.</p>
     */
    inline AwsEcsTaskDefinitionDetails& WithPidMode(Aws::String&& value) { SetPidMode(std::move(value)); return *this;}

    /**
     * <p>The process namespace to use for the containers in the task. Valid values are
     * <code>host</code> or <code>task</code>.</p>
     */
    inline AwsEcsTaskDefinitionDetails& WithPidMode(const char* value) { SetPidMode(value); return *this;}


    /**
     * <p>The placement constraint objects to use for tasks.</p>
     */
    inline const Aws::Vector<AwsEcsTaskDefinitionPlacementConstraintsDetails>& GetPlacementConstraints() const{ return m_placementConstraints; }

    /**
     * <p>The placement constraint objects to use for tasks.</p>
     */
    inline bool PlacementConstraintsHasBeenSet() const { return m_placementConstraintsHasBeenSet; }

    /**
     * <p>The placement constraint objects to use for tasks.</p>
     */
    inline void SetPlacementConstraints(const Aws::Vector<AwsEcsTaskDefinitionPlacementConstraintsDetails>& value) { m_placementConstraintsHasBeenSet = true; m_placementConstraints = value; }

    /**
     * <p>The placement constraint objects to use for tasks.</p>
     */
    inline void SetPlacementConstraints(Aws::Vector<AwsEcsTaskDefinitionPlacementConstraintsDetails>&& value) { m_placementConstraintsHasBeenSet = true; m_placementConstraints = std::move(value); }

    /**
     * <p>The placement constraint objects to use for tasks.</p>
     */
    inline AwsEcsTaskDefinitionDetails& WithPlacementConstraints(const Aws::Vector<AwsEcsTaskDefinitionPlacementConstraintsDetails>& value) { SetPlacementConstraints(value); return *this;}

    /**
     * <p>The placement constraint objects to use for tasks.</p>
     */
    inline AwsEcsTaskDefinitionDetails& WithPlacementConstraints(Aws::Vector<AwsEcsTaskDefinitionPlacementConstraintsDetails>&& value) { SetPlacementConstraints(std::move(value)); return *this;}

    /**
     * <p>The placement constraint objects to use for tasks.</p>
     */
    inline AwsEcsTaskDefinitionDetails& AddPlacementConstraints(const AwsEcsTaskDefinitionPlacementConstraintsDetails& value) { m_placementConstraintsHasBeenSet = true; m_placementConstraints.push_back(value); return *this; }

    /**
     * <p>The placement constraint objects to use for tasks.</p>
     */
    inline AwsEcsTaskDefinitionDetails& AddPlacementConstraints(AwsEcsTaskDefinitionPlacementConstraintsDetails&& value) { m_placementConstraintsHasBeenSet = true; m_placementConstraints.push_back(std::move(value)); return *this; }


    /**
     * <p>The configuration details for the App Mesh proxy.</p>
     */
    inline const AwsEcsTaskDefinitionProxyConfigurationDetails& GetProxyConfiguration() const{ return m_proxyConfiguration; }

    /**
     * <p>The configuration details for the App Mesh proxy.</p>
     */
    inline bool ProxyConfigurationHasBeenSet() const { return m_proxyConfigurationHasBeenSet; }

    /**
     * <p>The configuration details for the App Mesh proxy.</p>
     */
    inline void SetProxyConfiguration(const AwsEcsTaskDefinitionProxyConfigurationDetails& value) { m_proxyConfigurationHasBeenSet = true; m_proxyConfiguration = value; }

    /**
     * <p>The configuration details for the App Mesh proxy.</p>
     */
    inline void SetProxyConfiguration(AwsEcsTaskDefinitionProxyConfigurationDetails&& value) { m_proxyConfigurationHasBeenSet = true; m_proxyConfiguration = std::move(value); }

    /**
     * <p>The configuration details for the App Mesh proxy.</p>
     */
    inline AwsEcsTaskDefinitionDetails& WithProxyConfiguration(const AwsEcsTaskDefinitionProxyConfigurationDetails& value) { SetProxyConfiguration(value); return *this;}

    /**
     * <p>The configuration details for the App Mesh proxy.</p>
     */
    inline AwsEcsTaskDefinitionDetails& WithProxyConfiguration(AwsEcsTaskDefinitionProxyConfigurationDetails&& value) { SetProxyConfiguration(std::move(value)); return *this;}


    /**
     * <p>The task launch types that the task definition was validated against.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRequiresCompatibilities() const{ return m_requiresCompatibilities; }

    /**
     * <p>The task launch types that the task definition was validated against.</p>
     */
    inline bool RequiresCompatibilitiesHasBeenSet() const { return m_requiresCompatibilitiesHasBeenSet; }

    /**
     * <p>The task launch types that the task definition was validated against.</p>
     */
    inline void SetRequiresCompatibilities(const Aws::Vector<Aws::String>& value) { m_requiresCompatibilitiesHasBeenSet = true; m_requiresCompatibilities = value; }

    /**
     * <p>The task launch types that the task definition was validated against.</p>
     */
    inline void SetRequiresCompatibilities(Aws::Vector<Aws::String>&& value) { m_requiresCompatibilitiesHasBeenSet = true; m_requiresCompatibilities = std::move(value); }

    /**
     * <p>The task launch types that the task definition was validated against.</p>
     */
    inline AwsEcsTaskDefinitionDetails& WithRequiresCompatibilities(const Aws::Vector<Aws::String>& value) { SetRequiresCompatibilities(value); return *this;}

    /**
     * <p>The task launch types that the task definition was validated against.</p>
     */
    inline AwsEcsTaskDefinitionDetails& WithRequiresCompatibilities(Aws::Vector<Aws::String>&& value) { SetRequiresCompatibilities(std::move(value)); return *this;}

    /**
     * <p>The task launch types that the task definition was validated against.</p>
     */
    inline AwsEcsTaskDefinitionDetails& AddRequiresCompatibilities(const Aws::String& value) { m_requiresCompatibilitiesHasBeenSet = true; m_requiresCompatibilities.push_back(value); return *this; }

    /**
     * <p>The task launch types that the task definition was validated against.</p>
     */
    inline AwsEcsTaskDefinitionDetails& AddRequiresCompatibilities(Aws::String&& value) { m_requiresCompatibilitiesHasBeenSet = true; m_requiresCompatibilities.push_back(std::move(value)); return *this; }

    /**
     * <p>The task launch types that the task definition was validated against.</p>
     */
    inline AwsEcsTaskDefinitionDetails& AddRequiresCompatibilities(const char* value) { m_requiresCompatibilitiesHasBeenSet = true; m_requiresCompatibilities.push_back(value); return *this; }


    /**
     * <p>The short name or ARN of the IAM role that grants containers in the task
     * permission to call Amazon Web Services API operations on your behalf.</p>
     */
    inline const Aws::String& GetTaskRoleArn() const{ return m_taskRoleArn; }

    /**
     * <p>The short name or ARN of the IAM role that grants containers in the task
     * permission to call Amazon Web Services API operations on your behalf.</p>
     */
    inline bool TaskRoleArnHasBeenSet() const { return m_taskRoleArnHasBeenSet; }

    /**
     * <p>The short name or ARN of the IAM role that grants containers in the task
     * permission to call Amazon Web Services API operations on your behalf.</p>
     */
    inline void SetTaskRoleArn(const Aws::String& value) { m_taskRoleArnHasBeenSet = true; m_taskRoleArn = value; }

    /**
     * <p>The short name or ARN of the IAM role that grants containers in the task
     * permission to call Amazon Web Services API operations on your behalf.</p>
     */
    inline void SetTaskRoleArn(Aws::String&& value) { m_taskRoleArnHasBeenSet = true; m_taskRoleArn = std::move(value); }

    /**
     * <p>The short name or ARN of the IAM role that grants containers in the task
     * permission to call Amazon Web Services API operations on your behalf.</p>
     */
    inline void SetTaskRoleArn(const char* value) { m_taskRoleArnHasBeenSet = true; m_taskRoleArn.assign(value); }

    /**
     * <p>The short name or ARN of the IAM role that grants containers in the task
     * permission to call Amazon Web Services API operations on your behalf.</p>
     */
    inline AwsEcsTaskDefinitionDetails& WithTaskRoleArn(const Aws::String& value) { SetTaskRoleArn(value); return *this;}

    /**
     * <p>The short name or ARN of the IAM role that grants containers in the task
     * permission to call Amazon Web Services API operations on your behalf.</p>
     */
    inline AwsEcsTaskDefinitionDetails& WithTaskRoleArn(Aws::String&& value) { SetTaskRoleArn(std::move(value)); return *this;}

    /**
     * <p>The short name or ARN of the IAM role that grants containers in the task
     * permission to call Amazon Web Services API operations on your behalf.</p>
     */
    inline AwsEcsTaskDefinitionDetails& WithTaskRoleArn(const char* value) { SetTaskRoleArn(value); return *this;}


    /**
     * <p>The data volume definitions for the task.</p>
     */
    inline const Aws::Vector<AwsEcsTaskDefinitionVolumesDetails>& GetVolumes() const{ return m_volumes; }

    /**
     * <p>The data volume definitions for the task.</p>
     */
    inline bool VolumesHasBeenSet() const { return m_volumesHasBeenSet; }

    /**
     * <p>The data volume definitions for the task.</p>
     */
    inline void SetVolumes(const Aws::Vector<AwsEcsTaskDefinitionVolumesDetails>& value) { m_volumesHasBeenSet = true; m_volumes = value; }

    /**
     * <p>The data volume definitions for the task.</p>
     */
    inline void SetVolumes(Aws::Vector<AwsEcsTaskDefinitionVolumesDetails>&& value) { m_volumesHasBeenSet = true; m_volumes = std::move(value); }

    /**
     * <p>The data volume definitions for the task.</p>
     */
    inline AwsEcsTaskDefinitionDetails& WithVolumes(const Aws::Vector<AwsEcsTaskDefinitionVolumesDetails>& value) { SetVolumes(value); return *this;}

    /**
     * <p>The data volume definitions for the task.</p>
     */
    inline AwsEcsTaskDefinitionDetails& WithVolumes(Aws::Vector<AwsEcsTaskDefinitionVolumesDetails>&& value) { SetVolumes(std::move(value)); return *this;}

    /**
     * <p>The data volume definitions for the task.</p>
     */
    inline AwsEcsTaskDefinitionDetails& AddVolumes(const AwsEcsTaskDefinitionVolumesDetails& value) { m_volumesHasBeenSet = true; m_volumes.push_back(value); return *this; }

    /**
     * <p>The data volume definitions for the task.</p>
     */
    inline AwsEcsTaskDefinitionDetails& AddVolumes(AwsEcsTaskDefinitionVolumesDetails&& value) { m_volumesHasBeenSet = true; m_volumes.push_back(std::move(value)); return *this; }

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
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
