/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/EdgeModel.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{
  class DescribeDeviceResult
  {
  public:
    AWS_SAGEMAKER_API DescribeDeviceResult() = default;
    AWS_SAGEMAKER_API DescribeDeviceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeDeviceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the device.</p>
     */
    inline const Aws::String& GetDeviceArn() const { return m_deviceArn; }
    template<typename DeviceArnT = Aws::String>
    void SetDeviceArn(DeviceArnT&& value) { m_deviceArnHasBeenSet = true; m_deviceArn = std::forward<DeviceArnT>(value); }
    template<typename DeviceArnT = Aws::String>
    DescribeDeviceResult& WithDeviceArn(DeviceArnT&& value) { SetDeviceArn(std::forward<DeviceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the device.</p>
     */
    inline const Aws::String& GetDeviceName() const { return m_deviceName; }
    template<typename DeviceNameT = Aws::String>
    void SetDeviceName(DeviceNameT&& value) { m_deviceNameHasBeenSet = true; m_deviceName = std::forward<DeviceNameT>(value); }
    template<typename DeviceNameT = Aws::String>
    DescribeDeviceResult& WithDeviceName(DeviceNameT&& value) { SetDeviceName(std::forward<DeviceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the device.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DescribeDeviceResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the fleet the device belongs to.</p>
     */
    inline const Aws::String& GetDeviceFleetName() const { return m_deviceFleetName; }
    template<typename DeviceFleetNameT = Aws::String>
    void SetDeviceFleetName(DeviceFleetNameT&& value) { m_deviceFleetNameHasBeenSet = true; m_deviceFleetName = std::forward<DeviceFleetNameT>(value); }
    template<typename DeviceFleetNameT = Aws::String>
    DescribeDeviceResult& WithDeviceFleetName(DeviceFleetNameT&& value) { SetDeviceFleetName(std::forward<DeviceFleetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Internet of Things (IoT) object thing name associated
     * with the device.</p>
     */
    inline const Aws::String& GetIotThingName() const { return m_iotThingName; }
    template<typename IotThingNameT = Aws::String>
    void SetIotThingName(IotThingNameT&& value) { m_iotThingNameHasBeenSet = true; m_iotThingName = std::forward<IotThingNameT>(value); }
    template<typename IotThingNameT = Aws::String>
    DescribeDeviceResult& WithIotThingName(IotThingNameT&& value) { SetIotThingName(std::forward<IotThingNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the last registration or de-reregistration.</p>
     */
    inline const Aws::Utils::DateTime& GetRegistrationTime() const { return m_registrationTime; }
    template<typename RegistrationTimeT = Aws::Utils::DateTime>
    void SetRegistrationTime(RegistrationTimeT&& value) { m_registrationTimeHasBeenSet = true; m_registrationTime = std::forward<RegistrationTimeT>(value); }
    template<typename RegistrationTimeT = Aws::Utils::DateTime>
    DescribeDeviceResult& WithRegistrationTime(RegistrationTimeT&& value) { SetRegistrationTime(std::forward<RegistrationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last heartbeat received from the device.</p>
     */
    inline const Aws::Utils::DateTime& GetLatestHeartbeat() const { return m_latestHeartbeat; }
    template<typename LatestHeartbeatT = Aws::Utils::DateTime>
    void SetLatestHeartbeat(LatestHeartbeatT&& value) { m_latestHeartbeatHasBeenSet = true; m_latestHeartbeat = std::forward<LatestHeartbeatT>(value); }
    template<typename LatestHeartbeatT = Aws::Utils::DateTime>
    DescribeDeviceResult& WithLatestHeartbeat(LatestHeartbeatT&& value) { SetLatestHeartbeat(std::forward<LatestHeartbeatT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Models on the device.</p>
     */
    inline const Aws::Vector<EdgeModel>& GetModels() const { return m_models; }
    template<typename ModelsT = Aws::Vector<EdgeModel>>
    void SetModels(ModelsT&& value) { m_modelsHasBeenSet = true; m_models = std::forward<ModelsT>(value); }
    template<typename ModelsT = Aws::Vector<EdgeModel>>
    DescribeDeviceResult& WithModels(ModelsT&& value) { SetModels(std::forward<ModelsT>(value)); return *this;}
    template<typename ModelsT = EdgeModel>
    DescribeDeviceResult& AddModels(ModelsT&& value) { m_modelsHasBeenSet = true; m_models.emplace_back(std::forward<ModelsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of models.</p>
     */
    inline int GetMaxModels() const { return m_maxModels; }
    inline void SetMaxModels(int value) { m_maxModelsHasBeenSet = true; m_maxModels = value; }
    inline DescribeDeviceResult& WithMaxModels(int value) { SetMaxModels(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The response from the last list when returning a list large enough to need
     * tokening.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeDeviceResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Edge Manager agent version.</p>
     */
    inline const Aws::String& GetAgentVersion() const { return m_agentVersion; }
    template<typename AgentVersionT = Aws::String>
    void SetAgentVersion(AgentVersionT&& value) { m_agentVersionHasBeenSet = true; m_agentVersion = std::forward<AgentVersionT>(value); }
    template<typename AgentVersionT = Aws::String>
    DescribeDeviceResult& WithAgentVersion(AgentVersionT&& value) { SetAgentVersion(std::forward<AgentVersionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeDeviceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_deviceArn;
    bool m_deviceArnHasBeenSet = false;

    Aws::String m_deviceName;
    bool m_deviceNameHasBeenSet = false;

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

    Aws::Vector<EdgeModel> m_models;
    bool m_modelsHasBeenSet = false;

    int m_maxModels{0};
    bool m_maxModelsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_agentVersion;
    bool m_agentVersionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
