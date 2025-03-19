/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class DeregisterDevicesRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API DeregisterDevicesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeregisterDevices"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the fleet the devices belong to.</p>
     */
    inline const Aws::String& GetDeviceFleetName() const { return m_deviceFleetName; }
    inline bool DeviceFleetNameHasBeenSet() const { return m_deviceFleetNameHasBeenSet; }
    template<typename DeviceFleetNameT = Aws::String>
    void SetDeviceFleetName(DeviceFleetNameT&& value) { m_deviceFleetNameHasBeenSet = true; m_deviceFleetName = std::forward<DeviceFleetNameT>(value); }
    template<typename DeviceFleetNameT = Aws::String>
    DeregisterDevicesRequest& WithDeviceFleetName(DeviceFleetNameT&& value) { SetDeviceFleetName(std::forward<DeviceFleetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique IDs of the devices.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeviceNames() const { return m_deviceNames; }
    inline bool DeviceNamesHasBeenSet() const { return m_deviceNamesHasBeenSet; }
    template<typename DeviceNamesT = Aws::Vector<Aws::String>>
    void SetDeviceNames(DeviceNamesT&& value) { m_deviceNamesHasBeenSet = true; m_deviceNames = std::forward<DeviceNamesT>(value); }
    template<typename DeviceNamesT = Aws::Vector<Aws::String>>
    DeregisterDevicesRequest& WithDeviceNames(DeviceNamesT&& value) { SetDeviceNames(std::forward<DeviceNamesT>(value)); return *this;}
    template<typename DeviceNamesT = Aws::String>
    DeregisterDevicesRequest& AddDeviceNames(DeviceNamesT&& value) { m_deviceNamesHasBeenSet = true; m_deviceNames.emplace_back(std::forward<DeviceNamesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_deviceFleetName;
    bool m_deviceFleetNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_deviceNames;
    bool m_deviceNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
