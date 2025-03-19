/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/model/ComponentState.h>
#include <aws/proton/model/EnvironmentState.h>
#include <aws/proton/model/ServiceInstanceState.h>
#include <aws/proton/model/ServicePipelineState.h>
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
namespace Proton
{
namespace Model
{

  /**
   * <p>The detailed data about the current state of the deployment.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/DeploymentState">AWS
   * API Reference</a></p>
   */
  class DeploymentState
  {
  public:
    AWS_PROTON_API DeploymentState() = default;
    AWS_PROTON_API DeploymentState(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API DeploymentState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The state of the component associated with the deployment.</p>
     */
    inline const ComponentState& GetComponent() const { return m_component; }
    inline bool ComponentHasBeenSet() const { return m_componentHasBeenSet; }
    template<typename ComponentT = ComponentState>
    void SetComponent(ComponentT&& value) { m_componentHasBeenSet = true; m_component = std::forward<ComponentT>(value); }
    template<typename ComponentT = ComponentState>
    DeploymentState& WithComponent(ComponentT&& value) { SetComponent(std::forward<ComponentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the environment associated with the deployment.</p>
     */
    inline const EnvironmentState& GetEnvironment() const { return m_environment; }
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }
    template<typename EnvironmentT = EnvironmentState>
    void SetEnvironment(EnvironmentT&& value) { m_environmentHasBeenSet = true; m_environment = std::forward<EnvironmentT>(value); }
    template<typename EnvironmentT = EnvironmentState>
    DeploymentState& WithEnvironment(EnvironmentT&& value) { SetEnvironment(std::forward<EnvironmentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the service instance associated with the deployment.</p>
     */
    inline const ServiceInstanceState& GetServiceInstance() const { return m_serviceInstance; }
    inline bool ServiceInstanceHasBeenSet() const { return m_serviceInstanceHasBeenSet; }
    template<typename ServiceInstanceT = ServiceInstanceState>
    void SetServiceInstance(ServiceInstanceT&& value) { m_serviceInstanceHasBeenSet = true; m_serviceInstance = std::forward<ServiceInstanceT>(value); }
    template<typename ServiceInstanceT = ServiceInstanceState>
    DeploymentState& WithServiceInstance(ServiceInstanceT&& value) { SetServiceInstance(std::forward<ServiceInstanceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the service pipeline associated with the deployment.</p>
     */
    inline const ServicePipelineState& GetServicePipeline() const { return m_servicePipeline; }
    inline bool ServicePipelineHasBeenSet() const { return m_servicePipelineHasBeenSet; }
    template<typename ServicePipelineT = ServicePipelineState>
    void SetServicePipeline(ServicePipelineT&& value) { m_servicePipelineHasBeenSet = true; m_servicePipeline = std::forward<ServicePipelineT>(value); }
    template<typename ServicePipelineT = ServicePipelineState>
    DeploymentState& WithServicePipeline(ServicePipelineT&& value) { SetServicePipeline(std::forward<ServicePipelineT>(value)); return *this;}
    ///@}
  private:

    ComponentState m_component;
    bool m_componentHasBeenSet = false;

    EnvironmentState m_environment;
    bool m_environmentHasBeenSet = false;

    ServiceInstanceState m_serviceInstance;
    bool m_serviceInstanceHasBeenSet = false;

    ServicePipelineState m_servicePipeline;
    bool m_servicePipelineHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
