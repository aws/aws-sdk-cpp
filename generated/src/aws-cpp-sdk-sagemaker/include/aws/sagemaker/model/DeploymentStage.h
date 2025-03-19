/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/DeviceSelectionConfig.h>
#include <aws/sagemaker/model/EdgeDeploymentConfig.h>
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
   * <p>Contains information about a stage in an edge deployment plan.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeploymentStage">AWS
   * API Reference</a></p>
   */
  class DeploymentStage
  {
  public:
    AWS_SAGEMAKER_API DeploymentStage() = default;
    AWS_SAGEMAKER_API DeploymentStage(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API DeploymentStage& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    DeploymentStage& WithStageName(StageNameT&& value) { SetStageName(std::forward<StageNameT>(value)); return *this;}
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
    DeploymentStage& WithDeviceSelectionConfig(DeviceSelectionConfigT&& value) { SetDeviceSelectionConfig(std::forward<DeviceSelectionConfigT>(value)); return *this;}
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
    DeploymentStage& WithDeploymentConfig(DeploymentConfigT&& value) { SetDeploymentConfig(std::forward<DeploymentConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_stageName;
    bool m_stageNameHasBeenSet = false;

    DeviceSelectionConfig m_deviceSelectionConfig;
    bool m_deviceSelectionConfigHasBeenSet = false;

    EdgeDeploymentConfig m_deploymentConfig;
    bool m_deploymentConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
