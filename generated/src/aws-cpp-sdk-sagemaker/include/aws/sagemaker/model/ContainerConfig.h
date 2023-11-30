/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The configuration used to run the application image container.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ContainerConfig">AWS
   * API Reference</a></p>
   */
  class ContainerConfig
  {
  public:
    AWS_SAGEMAKER_API ContainerConfig();
    AWS_SAGEMAKER_API ContainerConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ContainerConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The arguments for the container when you're running the application.</p>
     */
    inline const Aws::Vector<Aws::String>& GetContainerArguments() const{ return m_containerArguments; }

    /**
     * <p>The arguments for the container when you're running the application.</p>
     */
    inline bool ContainerArgumentsHasBeenSet() const { return m_containerArgumentsHasBeenSet; }

    /**
     * <p>The arguments for the container when you're running the application.</p>
     */
    inline void SetContainerArguments(const Aws::Vector<Aws::String>& value) { m_containerArgumentsHasBeenSet = true; m_containerArguments = value; }

    /**
     * <p>The arguments for the container when you're running the application.</p>
     */
    inline void SetContainerArguments(Aws::Vector<Aws::String>&& value) { m_containerArgumentsHasBeenSet = true; m_containerArguments = std::move(value); }

    /**
     * <p>The arguments for the container when you're running the application.</p>
     */
    inline ContainerConfig& WithContainerArguments(const Aws::Vector<Aws::String>& value) { SetContainerArguments(value); return *this;}

    /**
     * <p>The arguments for the container when you're running the application.</p>
     */
    inline ContainerConfig& WithContainerArguments(Aws::Vector<Aws::String>&& value) { SetContainerArguments(std::move(value)); return *this;}

    /**
     * <p>The arguments for the container when you're running the application.</p>
     */
    inline ContainerConfig& AddContainerArguments(const Aws::String& value) { m_containerArgumentsHasBeenSet = true; m_containerArguments.push_back(value); return *this; }

    /**
     * <p>The arguments for the container when you're running the application.</p>
     */
    inline ContainerConfig& AddContainerArguments(Aws::String&& value) { m_containerArgumentsHasBeenSet = true; m_containerArguments.push_back(std::move(value)); return *this; }

    /**
     * <p>The arguments for the container when you're running the application.</p>
     */
    inline ContainerConfig& AddContainerArguments(const char* value) { m_containerArgumentsHasBeenSet = true; m_containerArguments.push_back(value); return *this; }


    /**
     * <p>The entrypoint used to run the application in the container.</p>
     */
    inline const Aws::Vector<Aws::String>& GetContainerEntrypoint() const{ return m_containerEntrypoint; }

    /**
     * <p>The entrypoint used to run the application in the container.</p>
     */
    inline bool ContainerEntrypointHasBeenSet() const { return m_containerEntrypointHasBeenSet; }

    /**
     * <p>The entrypoint used to run the application in the container.</p>
     */
    inline void SetContainerEntrypoint(const Aws::Vector<Aws::String>& value) { m_containerEntrypointHasBeenSet = true; m_containerEntrypoint = value; }

    /**
     * <p>The entrypoint used to run the application in the container.</p>
     */
    inline void SetContainerEntrypoint(Aws::Vector<Aws::String>&& value) { m_containerEntrypointHasBeenSet = true; m_containerEntrypoint = std::move(value); }

    /**
     * <p>The entrypoint used to run the application in the container.</p>
     */
    inline ContainerConfig& WithContainerEntrypoint(const Aws::Vector<Aws::String>& value) { SetContainerEntrypoint(value); return *this;}

    /**
     * <p>The entrypoint used to run the application in the container.</p>
     */
    inline ContainerConfig& WithContainerEntrypoint(Aws::Vector<Aws::String>&& value) { SetContainerEntrypoint(std::move(value)); return *this;}

    /**
     * <p>The entrypoint used to run the application in the container.</p>
     */
    inline ContainerConfig& AddContainerEntrypoint(const Aws::String& value) { m_containerEntrypointHasBeenSet = true; m_containerEntrypoint.push_back(value); return *this; }

    /**
     * <p>The entrypoint used to run the application in the container.</p>
     */
    inline ContainerConfig& AddContainerEntrypoint(Aws::String&& value) { m_containerEntrypointHasBeenSet = true; m_containerEntrypoint.push_back(std::move(value)); return *this; }

    /**
     * <p>The entrypoint used to run the application in the container.</p>
     */
    inline ContainerConfig& AddContainerEntrypoint(const char* value) { m_containerEntrypointHasBeenSet = true; m_containerEntrypoint.push_back(value); return *this; }


    /**
     * <p>The environment variables to set in the container</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetContainerEnvironmentVariables() const{ return m_containerEnvironmentVariables; }

    /**
     * <p>The environment variables to set in the container</p>
     */
    inline bool ContainerEnvironmentVariablesHasBeenSet() const { return m_containerEnvironmentVariablesHasBeenSet; }

    /**
     * <p>The environment variables to set in the container</p>
     */
    inline void SetContainerEnvironmentVariables(const Aws::Map<Aws::String, Aws::String>& value) { m_containerEnvironmentVariablesHasBeenSet = true; m_containerEnvironmentVariables = value; }

    /**
     * <p>The environment variables to set in the container</p>
     */
    inline void SetContainerEnvironmentVariables(Aws::Map<Aws::String, Aws::String>&& value) { m_containerEnvironmentVariablesHasBeenSet = true; m_containerEnvironmentVariables = std::move(value); }

    /**
     * <p>The environment variables to set in the container</p>
     */
    inline ContainerConfig& WithContainerEnvironmentVariables(const Aws::Map<Aws::String, Aws::String>& value) { SetContainerEnvironmentVariables(value); return *this;}

    /**
     * <p>The environment variables to set in the container</p>
     */
    inline ContainerConfig& WithContainerEnvironmentVariables(Aws::Map<Aws::String, Aws::String>&& value) { SetContainerEnvironmentVariables(std::move(value)); return *this;}

    /**
     * <p>The environment variables to set in the container</p>
     */
    inline ContainerConfig& AddContainerEnvironmentVariables(const Aws::String& key, const Aws::String& value) { m_containerEnvironmentVariablesHasBeenSet = true; m_containerEnvironmentVariables.emplace(key, value); return *this; }

    /**
     * <p>The environment variables to set in the container</p>
     */
    inline ContainerConfig& AddContainerEnvironmentVariables(Aws::String&& key, const Aws::String& value) { m_containerEnvironmentVariablesHasBeenSet = true; m_containerEnvironmentVariables.emplace(std::move(key), value); return *this; }

    /**
     * <p>The environment variables to set in the container</p>
     */
    inline ContainerConfig& AddContainerEnvironmentVariables(const Aws::String& key, Aws::String&& value) { m_containerEnvironmentVariablesHasBeenSet = true; m_containerEnvironmentVariables.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The environment variables to set in the container</p>
     */
    inline ContainerConfig& AddContainerEnvironmentVariables(Aws::String&& key, Aws::String&& value) { m_containerEnvironmentVariablesHasBeenSet = true; m_containerEnvironmentVariables.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The environment variables to set in the container</p>
     */
    inline ContainerConfig& AddContainerEnvironmentVariables(const char* key, Aws::String&& value) { m_containerEnvironmentVariablesHasBeenSet = true; m_containerEnvironmentVariables.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The environment variables to set in the container</p>
     */
    inline ContainerConfig& AddContainerEnvironmentVariables(Aws::String&& key, const char* value) { m_containerEnvironmentVariablesHasBeenSet = true; m_containerEnvironmentVariables.emplace(std::move(key), value); return *this; }

    /**
     * <p>The environment variables to set in the container</p>
     */
    inline ContainerConfig& AddContainerEnvironmentVariables(const char* key, const char* value) { m_containerEnvironmentVariablesHasBeenSet = true; m_containerEnvironmentVariables.emplace(key, value); return *this; }

  private:

    Aws::Vector<Aws::String> m_containerArguments;
    bool m_containerArgumentsHasBeenSet = false;

    Aws::Vector<Aws::String> m_containerEntrypoint;
    bool m_containerEntrypointHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_containerEnvironmentVariables;
    bool m_containerEnvironmentVariablesHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
