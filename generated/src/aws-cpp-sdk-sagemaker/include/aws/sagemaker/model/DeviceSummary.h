/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/EdgeModelSummary.h>
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
   * <p>Summary of the device.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeviceSummary">AWS
   * API Reference</a></p>
   */
  class DeviceSummary
  {
  public:
    AWS_SAGEMAKER_API DeviceSummary() = default;
    AWS_SAGEMAKER_API DeviceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API DeviceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the device.</p>
     */
    inline const Aws::String& GetDeviceName() const { return m_deviceName; }
    inline bool DeviceNameHasBeenSet() const { return m_deviceNameHasBeenSet; }
    template<typename DeviceNameT = Aws::String>
    void SetDeviceName(DeviceNameT&& value) { m_deviceNameHasBeenSet = true; m_deviceName = std::forward<DeviceNameT>(value); }
    template<typename DeviceNameT = Aws::String>
    DeviceSummary& WithDeviceName(DeviceNameT&& value) { SetDeviceName(std::forward<DeviceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the device.</p>
     */
    inline const Aws::String& GetDeviceArn() const { return m_deviceArn; }
    inline bool DeviceArnHasBeenSet() const { return m_deviceArnHasBeenSet; }
    template<typename DeviceArnT = Aws::String>
    void SetDeviceArn(DeviceArnT&& value) { m_deviceArnHasBeenSet = true; m_deviceArn = std::forward<DeviceArnT>(value); }
    template<typename DeviceArnT = Aws::String>
    DeviceSummary& WithDeviceArn(DeviceArnT&& value) { SetDeviceArn(std::forward<DeviceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the device.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DeviceSummary& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the fleet the device belongs to.</p>
     */
    inline const Aws::String& GetDeviceFleetName() const { return m_deviceFleetName; }
    inline bool DeviceFleetNameHasBeenSet() const { return m_deviceFleetNameHasBeenSet; }
    template<typename DeviceFleetNameT = Aws::String>
    void SetDeviceFleetName(DeviceFleetNameT&& value) { m_deviceFleetNameHasBeenSet = true; m_deviceFleetName = std::forward<DeviceFleetNameT>(value); }
    template<typename DeviceFleetNameT = Aws::String>
    DeviceSummary& WithDeviceFleetName(DeviceFleetNameT&& value) { SetDeviceFleetName(std::forward<DeviceFleetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Internet of Things (IoT) object thing name associated
     * with the device..</p>
     */
    inline const Aws::String& GetIotThingName() const { return m_iotThingName; }
    inline bool IotThingNameHasBeenSet() const { return m_iotThingNameHasBeenSet; }
    template<typename IotThingNameT = Aws::String>
    void SetIotThingName(IotThingNameT&& value) { m_iotThingNameHasBeenSet = true; m_iotThingName = std::forward<IotThingNameT>(value); }
    template<typename IotThingNameT = Aws::String>
    DeviceSummary& WithIotThingName(IotThingNameT&& value) { SetIotThingName(std::forward<IotThingNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the last registration or de-reregistration.</p>
     */
    inline const Aws::Utils::DateTime& GetRegistrationTime() const { return m_registrationTime; }
    inline bool RegistrationTimeHasBeenSet() const { return m_registrationTimeHasBeenSet; }
    template<typename RegistrationTimeT = Aws::Utils::DateTime>
    void SetRegistrationTime(RegistrationTimeT&& value) { m_registrationTimeHasBeenSet = true; m_registrationTime = std::forward<RegistrationTimeT>(value); }
    template<typename RegistrationTimeT = Aws::Utils::DateTime>
    DeviceSummary& WithRegistrationTime(RegistrationTimeT&& value) { SetRegistrationTime(std::forward<RegistrationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last heartbeat received from the device.</p>
     */
    inline const Aws::Utils::DateTime& GetLatestHeartbeat() const { return m_latestHeartbeat; }
    inline bool LatestHeartbeatHasBeenSet() const { return m_latestHeartbeatHasBeenSet; }
    template<typename LatestHeartbeatT = Aws::Utils::DateTime>
    void SetLatestHeartbeat(LatestHeartbeatT&& value) { m_latestHeartbeatHasBeenSet = true; m_latestHeartbeat = std::forward<LatestHeartbeatT>(value); }
    template<typename LatestHeartbeatT = Aws::Utils::DateTime>
    DeviceSummary& WithLatestHeartbeat(LatestHeartbeatT&& value) { SetLatestHeartbeat(std::forward<LatestHeartbeatT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Models on the device.</p>
     */
    inline const Aws::Vector<EdgeModelSummary>& GetModels() const { return m_models; }
    inline bool ModelsHasBeenSet() const { return m_modelsHasBeenSet; }
    template<typename ModelsT = Aws::Vector<EdgeModelSummary>>
    void SetModels(ModelsT&& value) { m_modelsHasBeenSet = true; m_models = std::forward<ModelsT>(value); }
    template<typename ModelsT = Aws::Vector<EdgeModelSummary>>
    DeviceSummary& WithModels(ModelsT&& value) { SetModels(std::forward<ModelsT>(value)); return *this;}
    template<typename ModelsT = EdgeModelSummary>
    DeviceSummary& AddModels(ModelsT&& value) { m_modelsHasBeenSet = true; m_models.emplace_back(std::forward<ModelsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Edge Manager agent version.</p>
     */
    inline const Aws::String& GetAgentVersion() const { return m_agentVersion; }
    inline bool AgentVersionHasBeenSet() const { return m_agentVersionHasBeenSet; }
    template<typename AgentVersionT = Aws::String>
    void SetAgentVersion(AgentVersionT&& value) { m_agentVersionHasBeenSet = true; m_agentVersion = std::forward<AgentVersionT>(value); }
    template<typename AgentVersionT = Aws::String>
    DeviceSummary& WithAgentVersion(AgentVersionT&& value) { SetAgentVersion(std::forward<AgentVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_deviceName;
    bool m_deviceNameHasBeenSet = false;

    Aws::String m_deviceArn;
    bool m_deviceArnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_deviceFleetName;
    bool m_deviceFleetNameHasBeenSet = false;

    Aws::String m_iotThingName;
    bool m_iotThingNameHasBeenSet = false;

    Aws::Utils::DateTime m_registrationTime{};
    bool m_registrationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_latestHeartbeat{};
    bool m_latestHeartbeatHasBeenSet = false;

    Aws::Vector<EdgeModelSummary> m_models;
    bool m_modelsHasBeenSet = false;

    Aws::String m_agentVersion;
    bool m_agentVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
