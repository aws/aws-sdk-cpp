/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/DeviceSelectionConfig.h>
#include <aws/sagemaker/model/EdgeDeploymentConfig.h>
#include <aws/sagemaker/model/EdgeDeploymentStatus.h>
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
   * <p>Contains information summarizing the deployment stage results.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeploymentStageStatusSummary">AWS
   * API Reference</a></p>
   */
  class DeploymentStageStatusSummary
  {
  public:
    AWS_SAGEMAKER_API DeploymentStageStatusSummary() = default;
    AWS_SAGEMAKER_API DeploymentStageStatusSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API DeploymentStageStatusSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the stage.</p>
     */
    inline const Aws::String& GetStageName() const { return m_stageName; }
    inline bool StageNameHasBeenSet() const { return m_stageNameHasBeenSet; }
    template<typename StageNameT = Aws::String>
    void SetStageName(StageNameT&& value) { m_stageNameHasBeenSet = true; m_stageName = std::forward<StageNameT>(value); }
    template<typename StageNameT = Aws::String>
    DeploymentStageStatusSummary& WithStageName(StageNameT&& value) { SetStageName(std::forward<StageNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration of the devices in the stage.</p>
     */
    inline const DeviceSelectionConfig& GetDeviceSelectionConfig() const { return m_deviceSelectionConfig; }
    inline bool DeviceSelectionConfigHasBeenSet() const { return m_deviceSelectionConfigHasBeenSet; }
    template<typename DeviceSelectionConfigT = DeviceSelectionConfig>
    void SetDeviceSelectionConfig(DeviceSelectionConfigT&& value) { m_deviceSelectionConfigHasBeenSet = true; m_deviceSelectionConfig = std::forward<DeviceSelectionConfigT>(value); }
    template<typename DeviceSelectionConfigT = DeviceSelectionConfig>
    DeploymentStageStatusSummary& WithDeviceSelectionConfig(DeviceSelectionConfigT&& value) { SetDeviceSelectionConfig(std::forward<DeviceSelectionConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration of the deployment details.</p>
     */
    inline const EdgeDeploymentConfig& GetDeploymentConfig() const { return m_deploymentConfig; }
    inline bool DeploymentConfigHasBeenSet() const { return m_deploymentConfigHasBeenSet; }
    template<typename DeploymentConfigT = EdgeDeploymentConfig>
    void SetDeploymentConfig(DeploymentConfigT&& value) { m_deploymentConfigHasBeenSet = true; m_deploymentConfig = std::forward<DeploymentConfigT>(value); }
    template<typename DeploymentConfigT = EdgeDeploymentConfig>
    DeploymentStageStatusSummary& WithDeploymentConfig(DeploymentConfigT&& value) { SetDeploymentConfig(std::forward<DeploymentConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>General status of the current state.</p>
     */
    inline const EdgeDeploymentStatus& GetDeploymentStatus() const { return m_deploymentStatus; }
    inline bool DeploymentStatusHasBeenSet() const { return m_deploymentStatusHasBeenSet; }
    template<typename DeploymentStatusT = EdgeDeploymentStatus>
    void SetDeploymentStatus(DeploymentStatusT&& value) { m_deploymentStatusHasBeenSet = true; m_deploymentStatus = std::forward<DeploymentStatusT>(value); }
    template<typename DeploymentStatusT = EdgeDeploymentStatus>
    DeploymentStageStatusSummary& WithDeploymentStatus(DeploymentStatusT&& value) { SetDeploymentStatus(std::forward<DeploymentStatusT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_stageName;
    bool m_stageNameHasBeenSet = false;

    DeviceSelectionConfig m_deviceSelectionConfig;
    bool m_deviceSelectionConfigHasBeenSet = false;

    EdgeDeploymentConfig m_deploymentConfig;
    bool m_deploymentConfigHasBeenSet = false;

    EdgeDeploymentStatus m_deploymentStatus;
    bool m_deploymentStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
