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
    AWS_SAGEMAKER_API ContainerConfig() = default;
    AWS_SAGEMAKER_API ContainerConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ContainerConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The arguments for the container when you're running the application.</p>
     */
    inline const Aws::Vector<Aws::String>& GetContainerArguments() const { return m_containerArguments; }
    inline bool ContainerArgumentsHasBeenSet() const { return m_containerArgumentsHasBeenSet; }
    template<typename ContainerArgumentsT = Aws::Vector<Aws::String>>
    void SetContainerArguments(ContainerArgumentsT&& value) { m_containerArgumentsHasBeenSet = true; m_containerArguments = std::forward<ContainerArgumentsT>(value); }
    template<typename ContainerArgumentsT = Aws::Vector<Aws::String>>
    ContainerConfig& WithContainerArguments(ContainerArgumentsT&& value) { SetContainerArguments(std::forward<ContainerArgumentsT>(value)); return *this;}
    template<typename ContainerArgumentsT = Aws::String>
    ContainerConfig& AddContainerArguments(ContainerArgumentsT&& value) { m_containerArgumentsHasBeenSet = true; m_containerArguments.emplace_back(std::forward<ContainerArgumentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The entrypoint used to run the application in the container.</p>
     */
    inline const Aws::Vector<Aws::String>& GetContainerEntrypoint() const { return m_containerEntrypoint; }
    inline bool ContainerEntrypointHasBeenSet() const { return m_containerEntrypointHasBeenSet; }
    template<typename ContainerEntrypointT = Aws::Vector<Aws::String>>
    void SetContainerEntrypoint(ContainerEntrypointT&& value) { m_containerEntrypointHasBeenSet = true; m_containerEntrypoint = std::forward<ContainerEntrypointT>(value); }
    template<typename ContainerEntrypointT = Aws::Vector<Aws::String>>
    ContainerConfig& WithContainerEntrypoint(ContainerEntrypointT&& value) { SetContainerEntrypoint(std::forward<ContainerEntrypointT>(value)); return *this;}
    template<typename ContainerEntrypointT = Aws::String>
    ContainerConfig& AddContainerEntrypoint(ContainerEntrypointT&& value) { m_containerEntrypointHasBeenSet = true; m_containerEntrypoint.emplace_back(std::forward<ContainerEntrypointT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The environment variables to set in the container</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetContainerEnvironmentVariables() const { return m_containerEnvironmentVariables; }
    inline bool ContainerEnvironmentVariablesHasBeenSet() const { return m_containerEnvironmentVariablesHasBeenSet; }
    template<typename ContainerEnvironmentVariablesT = Aws::Map<Aws::String, Aws::String>>
    void SetContainerEnvironmentVariables(ContainerEnvironmentVariablesT&& value) { m_containerEnvironmentVariablesHasBeenSet = true; m_containerEnvironmentVariables = std::forward<ContainerEnvironmentVariablesT>(value); }
    template<typename ContainerEnvironmentVariablesT = Aws::Map<Aws::String, Aws::String>>
    ContainerConfig& WithContainerEnvironmentVariables(ContainerEnvironmentVariablesT&& value) { SetContainerEnvironmentVariables(std::forward<ContainerEnvironmentVariablesT>(value)); return *this;}
    template<typename ContainerEnvironmentVariablesKeyT = Aws::String, typename ContainerEnvironmentVariablesValueT = Aws::String>
    ContainerConfig& AddContainerEnvironmentVariables(ContainerEnvironmentVariablesKeyT&& key, ContainerEnvironmentVariablesValueT&& value) {
      m_containerEnvironmentVariablesHasBeenSet = true; m_containerEnvironmentVariables.emplace(std::forward<ContainerEnvironmentVariablesKeyT>(key), std::forward<ContainerEnvironmentVariablesValueT>(value)); return *this;
    }
    ///@}
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
