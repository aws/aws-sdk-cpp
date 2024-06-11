﻿/**
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
    AWS_SAGEMAKER_API DeviceDeploymentSummary();
    AWS_SAGEMAKER_API DeviceDeploymentSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API DeviceDeploymentSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the edge deployment plan.</p>
     */
    inline const Aws::String& GetEdgeDeploymentPlanArn() const{ return m_edgeDeploymentPlanArn; }
    inline bool EdgeDeploymentPlanArnHasBeenSet() const { return m_edgeDeploymentPlanArnHasBeenSet; }
    inline void SetEdgeDeploymentPlanArn(const Aws::String& value) { m_edgeDeploymentPlanArnHasBeenSet = true; m_edgeDeploymentPlanArn = value; }
    inline void SetEdgeDeploymentPlanArn(Aws::String&& value) { m_edgeDeploymentPlanArnHasBeenSet = true; m_edgeDeploymentPlanArn = std::move(value); }
    inline void SetEdgeDeploymentPlanArn(const char* value) { m_edgeDeploymentPlanArnHasBeenSet = true; m_edgeDeploymentPlanArn.assign(value); }
    inline DeviceDeploymentSummary& WithEdgeDeploymentPlanArn(const Aws::String& value) { SetEdgeDeploymentPlanArn(value); return *this;}
    inline DeviceDeploymentSummary& WithEdgeDeploymentPlanArn(Aws::String&& value) { SetEdgeDeploymentPlanArn(std::move(value)); return *this;}
    inline DeviceDeploymentSummary& WithEdgeDeploymentPlanArn(const char* value) { SetEdgeDeploymentPlanArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the edge deployment plan.</p>
     */
    inline const Aws::String& GetEdgeDeploymentPlanName() const{ return m_edgeDeploymentPlanName; }
    inline bool EdgeDeploymentPlanNameHasBeenSet() const { return m_edgeDeploymentPlanNameHasBeenSet; }
    inline void SetEdgeDeploymentPlanName(const Aws::String& value) { m_edgeDeploymentPlanNameHasBeenSet = true; m_edgeDeploymentPlanName = value; }
    inline void SetEdgeDeploymentPlanName(Aws::String&& value) { m_edgeDeploymentPlanNameHasBeenSet = true; m_edgeDeploymentPlanName = std::move(value); }
    inline void SetEdgeDeploymentPlanName(const char* value) { m_edgeDeploymentPlanNameHasBeenSet = true; m_edgeDeploymentPlanName.assign(value); }
    inline DeviceDeploymentSummary& WithEdgeDeploymentPlanName(const Aws::String& value) { SetEdgeDeploymentPlanName(value); return *this;}
    inline DeviceDeploymentSummary& WithEdgeDeploymentPlanName(Aws::String&& value) { SetEdgeDeploymentPlanName(std::move(value)); return *this;}
    inline DeviceDeploymentSummary& WithEdgeDeploymentPlanName(const char* value) { SetEdgeDeploymentPlanName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the stage in the edge deployment plan.</p>
     */
    inline const Aws::String& GetStageName() const{ return m_stageName; }
    inline bool StageNameHasBeenSet() const { return m_stageNameHasBeenSet; }
    inline void SetStageName(const Aws::String& value) { m_stageNameHasBeenSet = true; m_stageName = value; }
    inline void SetStageName(Aws::String&& value) { m_stageNameHasBeenSet = true; m_stageName = std::move(value); }
    inline void SetStageName(const char* value) { m_stageNameHasBeenSet = true; m_stageName.assign(value); }
    inline DeviceDeploymentSummary& WithStageName(const Aws::String& value) { SetStageName(value); return *this;}
    inline DeviceDeploymentSummary& WithStageName(Aws::String&& value) { SetStageName(std::move(value)); return *this;}
    inline DeviceDeploymentSummary& WithStageName(const char* value) { SetStageName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the deployed stage.</p>
     */
    inline const Aws::String& GetDeployedStageName() const{ return m_deployedStageName; }
    inline bool DeployedStageNameHasBeenSet() const { return m_deployedStageNameHasBeenSet; }
    inline void SetDeployedStageName(const Aws::String& value) { m_deployedStageNameHasBeenSet = true; m_deployedStageName = value; }
    inline void SetDeployedStageName(Aws::String&& value) { m_deployedStageNameHasBeenSet = true; m_deployedStageName = std::move(value); }
    inline void SetDeployedStageName(const char* value) { m_deployedStageNameHasBeenSet = true; m_deployedStageName.assign(value); }
    inline DeviceDeploymentSummary& WithDeployedStageName(const Aws::String& value) { SetDeployedStageName(value); return *this;}
    inline DeviceDeploymentSummary& WithDeployedStageName(Aws::String&& value) { SetDeployedStageName(std::move(value)); return *this;}
    inline DeviceDeploymentSummary& WithDeployedStageName(const char* value) { SetDeployedStageName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the fleet to which the device belongs to.</p>
     */
    inline const Aws::String& GetDeviceFleetName() const{ return m_deviceFleetName; }
    inline bool DeviceFleetNameHasBeenSet() const { return m_deviceFleetNameHasBeenSet; }
    inline void SetDeviceFleetName(const Aws::String& value) { m_deviceFleetNameHasBeenSet = true; m_deviceFleetName = value; }
    inline void SetDeviceFleetName(Aws::String&& value) { m_deviceFleetNameHasBeenSet = true; m_deviceFleetName = std::move(value); }
    inline void SetDeviceFleetName(const char* value) { m_deviceFleetNameHasBeenSet = true; m_deviceFleetName.assign(value); }
    inline DeviceDeploymentSummary& WithDeviceFleetName(const Aws::String& value) { SetDeviceFleetName(value); return *this;}
    inline DeviceDeploymentSummary& WithDeviceFleetName(Aws::String&& value) { SetDeviceFleetName(std::move(value)); return *this;}
    inline DeviceDeploymentSummary& WithDeviceFleetName(const char* value) { SetDeviceFleetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the device.</p>
     */
    inline const Aws::String& GetDeviceName() const{ return m_deviceName; }
    inline bool DeviceNameHasBeenSet() const { return m_deviceNameHasBeenSet; }
    inline void SetDeviceName(const Aws::String& value) { m_deviceNameHasBeenSet = true; m_deviceName = value; }
    inline void SetDeviceName(Aws::String&& value) { m_deviceNameHasBeenSet = true; m_deviceName = std::move(value); }
    inline void SetDeviceName(const char* value) { m_deviceNameHasBeenSet = true; m_deviceName.assign(value); }
    inline DeviceDeploymentSummary& WithDeviceName(const Aws::String& value) { SetDeviceName(value); return *this;}
    inline DeviceDeploymentSummary& WithDeviceName(Aws::String&& value) { SetDeviceName(std::move(value)); return *this;}
    inline DeviceDeploymentSummary& WithDeviceName(const char* value) { SetDeviceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the device.</p>
     */
    inline const Aws::String& GetDeviceArn() const{ return m_deviceArn; }
    inline bool DeviceArnHasBeenSet() const { return m_deviceArnHasBeenSet; }
    inline void SetDeviceArn(const Aws::String& value) { m_deviceArnHasBeenSet = true; m_deviceArn = value; }
    inline void SetDeviceArn(Aws::String&& value) { m_deviceArnHasBeenSet = true; m_deviceArn = std::move(value); }
    inline void SetDeviceArn(const char* value) { m_deviceArnHasBeenSet = true; m_deviceArn.assign(value); }
    inline DeviceDeploymentSummary& WithDeviceArn(const Aws::String& value) { SetDeviceArn(value); return *this;}
    inline DeviceDeploymentSummary& WithDeviceArn(Aws::String&& value) { SetDeviceArn(std::move(value)); return *this;}
    inline DeviceDeploymentSummary& WithDeviceArn(const char* value) { SetDeviceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deployment status of the device.</p>
     */
    inline const DeviceDeploymentStatus& GetDeviceDeploymentStatus() const{ return m_deviceDeploymentStatus; }
    inline bool DeviceDeploymentStatusHasBeenSet() const { return m_deviceDeploymentStatusHasBeenSet; }
    inline void SetDeviceDeploymentStatus(const DeviceDeploymentStatus& value) { m_deviceDeploymentStatusHasBeenSet = true; m_deviceDeploymentStatus = value; }
    inline void SetDeviceDeploymentStatus(DeviceDeploymentStatus&& value) { m_deviceDeploymentStatusHasBeenSet = true; m_deviceDeploymentStatus = std::move(value); }
    inline DeviceDeploymentSummary& WithDeviceDeploymentStatus(const DeviceDeploymentStatus& value) { SetDeviceDeploymentStatus(value); return *this;}
    inline DeviceDeploymentSummary& WithDeviceDeploymentStatus(DeviceDeploymentStatus&& value) { SetDeviceDeploymentStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The detailed error message for the deployoment status result.</p>
     */
    inline const Aws::String& GetDeviceDeploymentStatusMessage() const{ return m_deviceDeploymentStatusMessage; }
    inline bool DeviceDeploymentStatusMessageHasBeenSet() const { return m_deviceDeploymentStatusMessageHasBeenSet; }
    inline void SetDeviceDeploymentStatusMessage(const Aws::String& value) { m_deviceDeploymentStatusMessageHasBeenSet = true; m_deviceDeploymentStatusMessage = value; }
    inline void SetDeviceDeploymentStatusMessage(Aws::String&& value) { m_deviceDeploymentStatusMessageHasBeenSet = true; m_deviceDeploymentStatusMessage = std::move(value); }
    inline void SetDeviceDeploymentStatusMessage(const char* value) { m_deviceDeploymentStatusMessageHasBeenSet = true; m_deviceDeploymentStatusMessage.assign(value); }
    inline DeviceDeploymentSummary& WithDeviceDeploymentStatusMessage(const Aws::String& value) { SetDeviceDeploymentStatusMessage(value); return *this;}
    inline DeviceDeploymentSummary& WithDeviceDeploymentStatusMessage(Aws::String&& value) { SetDeviceDeploymentStatusMessage(std::move(value)); return *this;}
    inline DeviceDeploymentSummary& WithDeviceDeploymentStatusMessage(const char* value) { SetDeviceDeploymentStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the device.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline DeviceDeploymentSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline DeviceDeploymentSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline DeviceDeploymentSummary& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the deployment on the device started.</p>
     */
    inline const Aws::Utils::DateTime& GetDeploymentStartTime() const{ return m_deploymentStartTime; }
    inline bool DeploymentStartTimeHasBeenSet() const { return m_deploymentStartTimeHasBeenSet; }
    inline void SetDeploymentStartTime(const Aws::Utils::DateTime& value) { m_deploymentStartTimeHasBeenSet = true; m_deploymentStartTime = value; }
    inline void SetDeploymentStartTime(Aws::Utils::DateTime&& value) { m_deploymentStartTimeHasBeenSet = true; m_deploymentStartTime = std::move(value); }
    inline DeviceDeploymentSummary& WithDeploymentStartTime(const Aws::Utils::DateTime& value) { SetDeploymentStartTime(value); return *this;}
    inline DeviceDeploymentSummary& WithDeploymentStartTime(Aws::Utils::DateTime&& value) { SetDeploymentStartTime(std::move(value)); return *this;}
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

    DeviceDeploymentStatus m_deviceDeploymentStatus;
    bool m_deviceDeploymentStatusHasBeenSet = false;

    Aws::String m_deviceDeploymentStatusMessage;
    bool m_deviceDeploymentStatusMessageHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_deploymentStartTime;
    bool m_deploymentStartTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
