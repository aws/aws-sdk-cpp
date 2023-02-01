/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pipes/model/BatchEnvironmentVariable.h>
#include <aws/pipes/model/BatchResourceRequirement.h>
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
   * <p>The overrides that are sent to a container.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/BatchContainerOverrides">AWS
   * API Reference</a></p>
   */
  class BatchContainerOverrides
  {
  public:
    AWS_PIPES_API BatchContainerOverrides();
    AWS_PIPES_API BatchContainerOverrides(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API BatchContainerOverrides& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The command to send to the container that overrides the default command from
     * the Docker image or the task definition.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCommand() const{ return m_command; }

    /**
     * <p>The command to send to the container that overrides the default command from
     * the Docker image or the task definition.</p>
     */
    inline bool CommandHasBeenSet() const { return m_commandHasBeenSet; }

    /**
     * <p>The command to send to the container that overrides the default command from
     * the Docker image or the task definition.</p>
     */
    inline void SetCommand(const Aws::Vector<Aws::String>& value) { m_commandHasBeenSet = true; m_command = value; }

    /**
     * <p>The command to send to the container that overrides the default command from
     * the Docker image or the task definition.</p>
     */
    inline void SetCommand(Aws::Vector<Aws::String>&& value) { m_commandHasBeenSet = true; m_command = std::move(value); }

    /**
     * <p>The command to send to the container that overrides the default command from
     * the Docker image or the task definition.</p>
     */
    inline BatchContainerOverrides& WithCommand(const Aws::Vector<Aws::String>& value) { SetCommand(value); return *this;}

    /**
     * <p>The command to send to the container that overrides the default command from
     * the Docker image or the task definition.</p>
     */
    inline BatchContainerOverrides& WithCommand(Aws::Vector<Aws::String>&& value) { SetCommand(std::move(value)); return *this;}

    /**
     * <p>The command to send to the container that overrides the default command from
     * the Docker image or the task definition.</p>
     */
    inline BatchContainerOverrides& AddCommand(const Aws::String& value) { m_commandHasBeenSet = true; m_command.push_back(value); return *this; }

    /**
     * <p>The command to send to the container that overrides the default command from
     * the Docker image or the task definition.</p>
     */
    inline BatchContainerOverrides& AddCommand(Aws::String&& value) { m_commandHasBeenSet = true; m_command.push_back(std::move(value)); return *this; }

    /**
     * <p>The command to send to the container that overrides the default command from
     * the Docker image or the task definition.</p>
     */
    inline BatchContainerOverrides& AddCommand(const char* value) { m_commandHasBeenSet = true; m_command.push_back(value); return *this; }


    /**
     * <p>The environment variables to send to the container. You can add new
     * environment variables, which are added to the container at launch, or you can
     * override the existing environment variables from the Docker image or the task
     * definition.</p>  <p>Environment variables cannot start with
     * "<code>Batch</code>". This naming convention is reserved for variables that
     * Batch sets.</p> 
     */
    inline const Aws::Vector<BatchEnvironmentVariable>& GetEnvironment() const{ return m_environment; }

    /**
     * <p>The environment variables to send to the container. You can add new
     * environment variables, which are added to the container at launch, or you can
     * override the existing environment variables from the Docker image or the task
     * definition.</p>  <p>Environment variables cannot start with
     * "<code>Batch</code>". This naming convention is reserved for variables that
     * Batch sets.</p> 
     */
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }

    /**
     * <p>The environment variables to send to the container. You can add new
     * environment variables, which are added to the container at launch, or you can
     * override the existing environment variables from the Docker image or the task
     * definition.</p>  <p>Environment variables cannot start with
     * "<code>Batch</code>". This naming convention is reserved for variables that
     * Batch sets.</p> 
     */
    inline void SetEnvironment(const Aws::Vector<BatchEnvironmentVariable>& value) { m_environmentHasBeenSet = true; m_environment = value; }

    /**
     * <p>The environment variables to send to the container. You can add new
     * environment variables, which are added to the container at launch, or you can
     * override the existing environment variables from the Docker image or the task
     * definition.</p>  <p>Environment variables cannot start with
     * "<code>Batch</code>". This naming convention is reserved for variables that
     * Batch sets.</p> 
     */
    inline void SetEnvironment(Aws::Vector<BatchEnvironmentVariable>&& value) { m_environmentHasBeenSet = true; m_environment = std::move(value); }

    /**
     * <p>The environment variables to send to the container. You can add new
     * environment variables, which are added to the container at launch, or you can
     * override the existing environment variables from the Docker image or the task
     * definition.</p>  <p>Environment variables cannot start with
     * "<code>Batch</code>". This naming convention is reserved for variables that
     * Batch sets.</p> 
     */
    inline BatchContainerOverrides& WithEnvironment(const Aws::Vector<BatchEnvironmentVariable>& value) { SetEnvironment(value); return *this;}

    /**
     * <p>The environment variables to send to the container. You can add new
     * environment variables, which are added to the container at launch, or you can
     * override the existing environment variables from the Docker image or the task
     * definition.</p>  <p>Environment variables cannot start with
     * "<code>Batch</code>". This naming convention is reserved for variables that
     * Batch sets.</p> 
     */
    inline BatchContainerOverrides& WithEnvironment(Aws::Vector<BatchEnvironmentVariable>&& value) { SetEnvironment(std::move(value)); return *this;}

    /**
     * <p>The environment variables to send to the container. You can add new
     * environment variables, which are added to the container at launch, or you can
     * override the existing environment variables from the Docker image or the task
     * definition.</p>  <p>Environment variables cannot start with
     * "<code>Batch</code>". This naming convention is reserved for variables that
     * Batch sets.</p> 
     */
    inline BatchContainerOverrides& AddEnvironment(const BatchEnvironmentVariable& value) { m_environmentHasBeenSet = true; m_environment.push_back(value); return *this; }

    /**
     * <p>The environment variables to send to the container. You can add new
     * environment variables, which are added to the container at launch, or you can
     * override the existing environment variables from the Docker image or the task
     * definition.</p>  <p>Environment variables cannot start with
     * "<code>Batch</code>". This naming convention is reserved for variables that
     * Batch sets.</p> 
     */
    inline BatchContainerOverrides& AddEnvironment(BatchEnvironmentVariable&& value) { m_environmentHasBeenSet = true; m_environment.push_back(std::move(value)); return *this; }


    /**
     * <p>The instance type to use for a multi-node parallel job.</p>  <p>This
     * parameter isn't applicable to single-node container jobs or jobs that run on
     * Fargate resources, and shouldn't be provided.</p> 
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The instance type to use for a multi-node parallel job.</p>  <p>This
     * parameter isn't applicable to single-node container jobs or jobs that run on
     * Fargate resources, and shouldn't be provided.</p> 
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The instance type to use for a multi-node parallel job.</p>  <p>This
     * parameter isn't applicable to single-node container jobs or jobs that run on
     * Fargate resources, and shouldn't be provided.</p> 
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The instance type to use for a multi-node parallel job.</p>  <p>This
     * parameter isn't applicable to single-node container jobs or jobs that run on
     * Fargate resources, and shouldn't be provided.</p> 
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The instance type to use for a multi-node parallel job.</p>  <p>This
     * parameter isn't applicable to single-node container jobs or jobs that run on
     * Fargate resources, and shouldn't be provided.</p> 
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * <p>The instance type to use for a multi-node parallel job.</p>  <p>This
     * parameter isn't applicable to single-node container jobs or jobs that run on
     * Fargate resources, and shouldn't be provided.</p> 
     */
    inline BatchContainerOverrides& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The instance type to use for a multi-node parallel job.</p>  <p>This
     * parameter isn't applicable to single-node container jobs or jobs that run on
     * Fargate resources, and shouldn't be provided.</p> 
     */
    inline BatchContainerOverrides& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * <p>The instance type to use for a multi-node parallel job.</p>  <p>This
     * parameter isn't applicable to single-node container jobs or jobs that run on
     * Fargate resources, and shouldn't be provided.</p> 
     */
    inline BatchContainerOverrides& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}


    /**
     * <p>The type and amount of resources to assign to a container. This overrides the
     * settings in the job definition. The supported resources include
     * <code>GPU</code>, <code>MEMORY</code>, and <code>VCPU</code>.</p>
     */
    inline const Aws::Vector<BatchResourceRequirement>& GetResourceRequirements() const{ return m_resourceRequirements; }

    /**
     * <p>The type and amount of resources to assign to a container. This overrides the
     * settings in the job definition. The supported resources include
     * <code>GPU</code>, <code>MEMORY</code>, and <code>VCPU</code>.</p>
     */
    inline bool ResourceRequirementsHasBeenSet() const { return m_resourceRequirementsHasBeenSet; }

    /**
     * <p>The type and amount of resources to assign to a container. This overrides the
     * settings in the job definition. The supported resources include
     * <code>GPU</code>, <code>MEMORY</code>, and <code>VCPU</code>.</p>
     */
    inline void SetResourceRequirements(const Aws::Vector<BatchResourceRequirement>& value) { m_resourceRequirementsHasBeenSet = true; m_resourceRequirements = value; }

    /**
     * <p>The type and amount of resources to assign to a container. This overrides the
     * settings in the job definition. The supported resources include
     * <code>GPU</code>, <code>MEMORY</code>, and <code>VCPU</code>.</p>
     */
    inline void SetResourceRequirements(Aws::Vector<BatchResourceRequirement>&& value) { m_resourceRequirementsHasBeenSet = true; m_resourceRequirements = std::move(value); }

    /**
     * <p>The type and amount of resources to assign to a container. This overrides the
     * settings in the job definition. The supported resources include
     * <code>GPU</code>, <code>MEMORY</code>, and <code>VCPU</code>.</p>
     */
    inline BatchContainerOverrides& WithResourceRequirements(const Aws::Vector<BatchResourceRequirement>& value) { SetResourceRequirements(value); return *this;}

    /**
     * <p>The type and amount of resources to assign to a container. This overrides the
     * settings in the job definition. The supported resources include
     * <code>GPU</code>, <code>MEMORY</code>, and <code>VCPU</code>.</p>
     */
    inline BatchContainerOverrides& WithResourceRequirements(Aws::Vector<BatchResourceRequirement>&& value) { SetResourceRequirements(std::move(value)); return *this;}

    /**
     * <p>The type and amount of resources to assign to a container. This overrides the
     * settings in the job definition. The supported resources include
     * <code>GPU</code>, <code>MEMORY</code>, and <code>VCPU</code>.</p>
     */
    inline BatchContainerOverrides& AddResourceRequirements(const BatchResourceRequirement& value) { m_resourceRequirementsHasBeenSet = true; m_resourceRequirements.push_back(value); return *this; }

    /**
     * <p>The type and amount of resources to assign to a container. This overrides the
     * settings in the job definition. The supported resources include
     * <code>GPU</code>, <code>MEMORY</code>, and <code>VCPU</code>.</p>
     */
    inline BatchContainerOverrides& AddResourceRequirements(BatchResourceRequirement&& value) { m_resourceRequirementsHasBeenSet = true; m_resourceRequirements.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Aws::String> m_command;
    bool m_commandHasBeenSet = false;

    Aws::Vector<BatchEnvironmentVariable> m_environment;
    bool m_environmentHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::Vector<BatchResourceRequirement> m_resourceRequirements;
    bool m_resourceRequirementsHasBeenSet = false;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws
