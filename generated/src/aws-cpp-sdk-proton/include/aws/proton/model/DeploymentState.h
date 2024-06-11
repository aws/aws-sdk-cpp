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
    AWS_PROTON_API DeploymentState();
    AWS_PROTON_API DeploymentState(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API DeploymentState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The state of the component associated with the deployment.</p>
     */
    inline const ComponentState& GetComponent() const{ return m_component; }
    inline bool ComponentHasBeenSet() const { return m_componentHasBeenSet; }
    inline void SetComponent(const ComponentState& value) { m_componentHasBeenSet = true; m_component = value; }
    inline void SetComponent(ComponentState&& value) { m_componentHasBeenSet = true; m_component = std::move(value); }
    inline DeploymentState& WithComponent(const ComponentState& value) { SetComponent(value); return *this;}
    inline DeploymentState& WithComponent(ComponentState&& value) { SetComponent(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the environment associated with the deployment.</p>
     */
    inline const EnvironmentState& GetEnvironment() const{ return m_environment; }
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }
    inline void SetEnvironment(const EnvironmentState& value) { m_environmentHasBeenSet = true; m_environment = value; }
    inline void SetEnvironment(EnvironmentState&& value) { m_environmentHasBeenSet = true; m_environment = std::move(value); }
    inline DeploymentState& WithEnvironment(const EnvironmentState& value) { SetEnvironment(value); return *this;}
    inline DeploymentState& WithEnvironment(EnvironmentState&& value) { SetEnvironment(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the service instance associated with the deployment.</p>
     */
    inline const ServiceInstanceState& GetServiceInstance() const{ return m_serviceInstance; }
    inline bool ServiceInstanceHasBeenSet() const { return m_serviceInstanceHasBeenSet; }
    inline void SetServiceInstance(const ServiceInstanceState& value) { m_serviceInstanceHasBeenSet = true; m_serviceInstance = value; }
    inline void SetServiceInstance(ServiceInstanceState&& value) { m_serviceInstanceHasBeenSet = true; m_serviceInstance = std::move(value); }
    inline DeploymentState& WithServiceInstance(const ServiceInstanceState& value) { SetServiceInstance(value); return *this;}
    inline DeploymentState& WithServiceInstance(ServiceInstanceState&& value) { SetServiceInstance(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the service pipeline associated with the deployment.</p>
     */
    inline const ServicePipelineState& GetServicePipeline() const{ return m_servicePipeline; }
    inline bool ServicePipelineHasBeenSet() const { return m_servicePipelineHasBeenSet; }
    inline void SetServicePipeline(const ServicePipelineState& value) { m_servicePipelineHasBeenSet = true; m_servicePipeline = value; }
    inline void SetServicePipeline(ServicePipelineState&& value) { m_servicePipelineHasBeenSet = true; m_servicePipeline = std::move(value); }
    inline DeploymentState& WithServicePipeline(const ServicePipelineState& value) { SetServicePipeline(value); return *this;}
    inline DeploymentState& WithServicePipeline(ServicePipelineState&& value) { SetServicePipeline(std::move(value)); return *this;}
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
