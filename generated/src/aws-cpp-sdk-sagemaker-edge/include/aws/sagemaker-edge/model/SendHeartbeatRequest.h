/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-edge/SagemakerEdgeManager_EXPORTS.h>
#include <aws/sagemaker-edge/SagemakerEdgeManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker-edge/model/DeploymentResult.h>
#include <aws/sagemaker-edge/model/EdgeMetric.h>
#include <aws/sagemaker-edge/model/Model.h>
#include <utility>

namespace Aws
{
namespace SagemakerEdgeManager
{
namespace Model
{

  /**
   */
  class SendHeartbeatRequest : public SagemakerEdgeManagerRequest
  {
  public:
    AWS_SAGEMAKEREDGEMANAGER_API SendHeartbeatRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendHeartbeat"; }

    AWS_SAGEMAKEREDGEMANAGER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>For internal use. Returns a list of SageMaker Edge Manager agent operating
     * metrics.</p>
     */
    inline const Aws::Vector<EdgeMetric>& GetAgentMetrics() const { return m_agentMetrics; }
    inline bool AgentMetricsHasBeenSet() const { return m_agentMetricsHasBeenSet; }
    template<typename AgentMetricsT = Aws::Vector<EdgeMetric>>
    void SetAgentMetrics(AgentMetricsT&& value) { m_agentMetricsHasBeenSet = true; m_agentMetrics = std::forward<AgentMetricsT>(value); }
    template<typename AgentMetricsT = Aws::Vector<EdgeMetric>>
    SendHeartbeatRequest& WithAgentMetrics(AgentMetricsT&& value) { SetAgentMetrics(std::forward<AgentMetricsT>(value)); return *this;}
    template<typename AgentMetricsT = EdgeMetric>
    SendHeartbeatRequest& AddAgentMetrics(AgentMetricsT&& value) { m_agentMetricsHasBeenSet = true; m_agentMetrics.emplace_back(std::forward<AgentMetricsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Returns a list of models deployed on the the device.</p>
     */
    inline const Aws::Vector<Model>& GetModels() const { return m_models; }
    inline bool ModelsHasBeenSet() const { return m_modelsHasBeenSet; }
    template<typename ModelsT = Aws::Vector<Model>>
    void SetModels(ModelsT&& value) { m_modelsHasBeenSet = true; m_models = std::forward<ModelsT>(value); }
    template<typename ModelsT = Aws::Vector<Model>>
    SendHeartbeatRequest& WithModels(ModelsT&& value) { SetModels(std::forward<ModelsT>(value)); return *this;}
    template<typename ModelsT = Model>
    SendHeartbeatRequest& AddModels(ModelsT&& value) { m_modelsHasBeenSet = true; m_models.emplace_back(std::forward<ModelsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Returns the version of the agent.</p>
     */
    inline const Aws::String& GetAgentVersion() const { return m_agentVersion; }
    inline bool AgentVersionHasBeenSet() const { return m_agentVersionHasBeenSet; }
    template<typename AgentVersionT = Aws::String>
    void SetAgentVersion(AgentVersionT&& value) { m_agentVersionHasBeenSet = true; m_agentVersion = std::forward<AgentVersionT>(value); }
    template<typename AgentVersionT = Aws::String>
    SendHeartbeatRequest& WithAgentVersion(AgentVersionT&& value) { SetAgentVersion(std::forward<AgentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique name of the device.</p>
     */
    inline const Aws::String& GetDeviceName() const { return m_deviceName; }
    inline bool DeviceNameHasBeenSet() const { return m_deviceNameHasBeenSet; }
    template<typename DeviceNameT = Aws::String>
    void SetDeviceName(DeviceNameT&& value) { m_deviceNameHasBeenSet = true; m_deviceName = std::forward<DeviceNameT>(value); }
    template<typename DeviceNameT = Aws::String>
    SendHeartbeatRequest& WithDeviceName(DeviceNameT&& value) { SetDeviceName(std::forward<DeviceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the fleet that the device belongs to.</p>
     */
    inline const Aws::String& GetDeviceFleetName() const { return m_deviceFleetName; }
    inline bool DeviceFleetNameHasBeenSet() const { return m_deviceFleetNameHasBeenSet; }
    template<typename DeviceFleetNameT = Aws::String>
    void SetDeviceFleetName(DeviceFleetNameT&& value) { m_deviceFleetNameHasBeenSet = true; m_deviceFleetName = std::forward<DeviceFleetNameT>(value); }
    template<typename DeviceFleetNameT = Aws::String>
    SendHeartbeatRequest& WithDeviceFleetName(DeviceFleetNameT&& value) { SetDeviceFleetName(std::forward<DeviceFleetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the result of a deployment on the device.</p>
     */
    inline const DeploymentResult& GetDeploymentResult() const { return m_deploymentResult; }
    inline bool DeploymentResultHasBeenSet() const { return m_deploymentResultHasBeenSet; }
    template<typename DeploymentResultT = DeploymentResult>
    void SetDeploymentResult(DeploymentResultT&& value) { m_deploymentResultHasBeenSet = true; m_deploymentResult = std::forward<DeploymentResultT>(value); }
    template<typename DeploymentResultT = DeploymentResult>
    SendHeartbeatRequest& WithDeploymentResult(DeploymentResultT&& value) { SetDeploymentResult(std::forward<DeploymentResultT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EdgeMetric> m_agentMetrics;
    bool m_agentMetricsHasBeenSet = false;

    Aws::Vector<Model> m_models;
    bool m_modelsHasBeenSet = false;

    Aws::String m_agentVersion;
    bool m_agentVersionHasBeenSet = false;

    Aws::String m_deviceName;
    bool m_deviceNameHasBeenSet = false;

    Aws::String m_deviceFleetName;
    bool m_deviceFleetNameHasBeenSet = false;

    DeploymentResult m_deploymentResult;
    bool m_deploymentResultHasBeenSet = false;
  };

} // namespace Model
} // namespace SagemakerEdgeManager
} // namespace Aws
