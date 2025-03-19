/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/DeviceDeploymentStatus.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Contains information summarizing device details and deployment
   * status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeviceDeploymentSummary">AWS
   * API Reference</a></p>
   */
  class DeviceDeploymentSummary
  {
  public:
    AWS_SAGEMAKER_API DeviceDeploymentSummary() = default;
    AWS_SAGEMAKER_API DeviceDeploymentSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API DeviceDeploymentSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the edge deployment plan.</p>
     */
    inline const Aws::String& GetEdgeDeploymentPlanArn() const { return m_edgeDeploymentPlanArn; }
    inline bool EdgeDeploymentPlanArnHasBeenSet() const { return m_edgeDeploymentPlanArnHasBeenSet; }
    template<typename EdgeDeploymentPlanArnT = Aws::String>
    void SetEdgeDeploymentPlanArn(EdgeDeploymentPlanArnT&& value) { m_edgeDeploymentPlanArnHasBeenSet = true; m_edgeDeploymentPlanArn = std::forward<EdgeDeploymentPlanArnT>(value); }
    template<typename EdgeDeploymentPlanArnT = Aws::String>
    DeviceDeploymentSummary& WithEdgeDeploymentPlanArn(EdgeDeploymentPlanArnT&& value) { SetEdgeDeploymentPlanArn(std::forward<EdgeDeploymentPlanArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the edge deployment plan.</p>
     */
    inline const Aws::String& GetEdgeDeploymentPlanName() const { return m_edgeDeploymentPlanName; }
    inline bool EdgeDeploymentPlanNameHasBeenSet() const { return m_edgeDeploymentPlanNameHasBeenSet; }
    template<typename EdgeDeploymentPlanNameT = Aws::String>
    void SetEdgeDeploymentPlanName(EdgeDeploymentPlanNameT&& value) { m_edgeDeploymentPlanNameHasBeenSet = true; m_edgeDeploymentPlanName = std::forward<EdgeDeploymentPlanNameT>(value); }
    template<typename EdgeDeploymentPlanNameT = Aws::String>
    DeviceDeploymentSummary& WithEdgeDeploymentPlanName(EdgeDeploymentPlanNameT&& value) { SetEdgeDeploymentPlanName(std::forward<EdgeDeploymentPlanNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the stage in the edge deployment plan.</p>
     */
    inline const Aws::String& GetStageName() const { return m_stageName; }
    inline bool StageNameHasBeenSet() const { return m_stageNameHasBeenSet; }
    template<typename StageNameT = Aws::String>
    void SetStageName(StageNameT&& value) { m_stageNameHasBeenSet = true; m_stageName = std::forward<StageNameT>(value); }
    template<typename StageNameT = Aws::String>
    DeviceDeploymentSummary& WithStageName(StageNameT&& value) { SetStageName(std::forward<StageNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the deployed stage.</p>
     */
    inline const Aws::String& GetDeployedStageName() const { return m_deployedStageName; }
    inline bool DeployedStageNameHasBeenSet() const { return m_deployedStageNameHasBeenSet; }
    template<typename DeployedStageNameT = Aws::String>
    void SetDeployedStageName(DeployedStageNameT&& value) { m_deployedStageNameHasBeenSet = true; m_deployedStageName = std::forward<DeployedStageNameT>(value); }
    template<typename DeployedStageNameT = Aws::String>
    DeviceDeploymentSummary& WithDeployedStageName(DeployedStageNameT&& value) { SetDeployedStageName(std::forward<DeployedStageNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the fleet to which the device belongs to.</p>
     */
    inline const Aws::String& GetDeviceFleetName() const { return m_deviceFleetName; }
    inline bool DeviceFleetNameHasBeenSet() const { return m_deviceFleetNameHasBeenSet; }
    template<typename DeviceFleetNameT = Aws::String>
    void SetDeviceFleetName(DeviceFleetNameT&& value) { m_deviceFleetNameHasBeenSet = true; m_deviceFleetName = std::forward<DeviceFleetNameT>(value); }
    template<typename DeviceFleetNameT = Aws::String>
    DeviceDeploymentSummary& WithDeviceFleetName(DeviceFleetNameT&& value) { SetDeviceFleetName(std::forward<DeviceFleetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the device.</p>
     */
    inline const Aws::String& GetDeviceName() const { return m_deviceName; }
    inline bool DeviceNameHasBeenSet() const { return m_deviceNameHasBeenSet; }
    template<typename DeviceNameT = Aws::String>
    void SetDeviceName(DeviceNameT&& value) { m_deviceNameHasBeenSet = true; m_deviceName = std::forward<DeviceNameT>(value); }
    template<typename DeviceNameT = Aws::String>
    DeviceDeploymentSummary& WithDeviceName(DeviceNameT&& value) { SetDeviceName(std::forward<DeviceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the device.</p>
     */
    inline const Aws::String& GetDeviceArn() const { return m_deviceArn; }
    inline bool DeviceArnHasBeenSet() const { return m_deviceArnHasBeenSet; }
    template<typename DeviceArnT = Aws::String>
    void SetDeviceArn(DeviceArnT&& value) { m_deviceArnHasBeenSet = true; m_deviceArn = std::forward<DeviceArnT>(value); }
    template<typename DeviceArnT = Aws::String>
    DeviceDeploymentSummary& WithDeviceArn(DeviceArnT&& value) { SetDeviceArn(std::forward<DeviceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deployment status of the device.</p>
     */
    inline DeviceDeploymentStatus GetDeviceDeploymentStatus() const { return m_deviceDeploymentStatus; }
    inline bool DeviceDeploymentStatusHasBeenSet() const { return m_deviceDeploymentStatusHasBeenSet; }
    inline void SetDeviceDeploymentStatus(DeviceDeploymentStatus value) { m_deviceDeploymentStatusHasBeenSet = true; m_deviceDeploymentStatus = value; }
    inline DeviceDeploymentSummary& WithDeviceDeploymentStatus(DeviceDeploymentStatus value) { SetDeviceDeploymentStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The detailed error message for the deployoment status result.</p>
     */
    inline const Aws::String& GetDeviceDeploymentStatusMessage() const { return m_deviceDeploymentStatusMessage; }
    inline bool DeviceDeploymentStatusMessageHasBeenSet() const { return m_deviceDeploymentStatusMessageHasBeenSet; }
    template<typename DeviceDeploymentStatusMessageT = Aws::String>
    void SetDeviceDeploymentStatusMessage(DeviceDeploymentStatusMessageT&& value) { m_deviceDeploymentStatusMessageHasBeenSet = true; m_deviceDeploymentStatusMessage = std::forward<DeviceDeploymentStatusMessageT>(value); }
    template<typename DeviceDeploymentStatusMessageT = Aws::String>
    DeviceDeploymentSummary& WithDeviceDeploymentStatusMessage(DeviceDeploymentStatusMessageT&& value) { SetDeviceDeploymentStatusMessage(std::forward<DeviceDeploymentStatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the device.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DeviceDeploymentSummary& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the deployment on the device started.</p>
     */
    inline const Aws::Utils::DateTime& GetDeploymentStartTime() const { return m_deploymentStartTime; }
    inline bool DeploymentStartTimeHasBeenSet() const { return m_deploymentStartTimeHasBeenSet; }
    template<typename DeploymentStartTimeT = Aws::Utils::DateTime>
    void SetDeploymentStartTime(DeploymentStartTimeT&& value) { m_deploymentStartTimeHasBeenSet = true; m_deploymentStartTime = std::forward<DeploymentStartTimeT>(value); }
    template<typename DeploymentStartTimeT = Aws::Utils::DateTime>
    DeviceDeploymentSummary& WithDeploymentStartTime(DeploymentStartTimeT&& value) { SetDeploymentStartTime(std::forward<DeploymentStartTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_edgeDeploymentPlanArn;
    bool m_edgeDeploymentPlanArnHasBeenSet = false;

    Aws::String m_edgeDeploymentPlanName;
    bool m_edgeDeploymentPlanNameHasBeenSet = false;

    Aws::String m_stageName;
    bool m_stageNameHasBeenSet = false;

    Aws::String m_deployedStageName;
    bool m_deployedStageNameHasBeenSet = false;

    Aws::String m_deviceFleetName;
    bool m_deviceFleetNameHasBeenSet = false;

    Aws::String m_deviceName;
    bool m_deviceNameHasBeenSet = false;

    Aws::String m_deviceArn;
    bool m_deviceArnHasBeenSet = false;

    DeviceDeploymentStatus m_deviceDeploymentStatus{DeviceDeploymentStatus::NOT_SET};
    bool m_deviceDeploymentStatusHasBeenSet = false;

    Aws::String m_deviceDeploymentStatusMessage;
    bool m_deviceDeploymentStatusMessageHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_deploymentStartTime{};
    bool m_deploymentStartTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
