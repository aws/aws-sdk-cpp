/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/Device.h>
#include <aws/sagemaker/model/Tag.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class RegisterDevicesRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API RegisterDevicesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterDevices"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the fleet.</p>
     */
    inline const Aws::String& GetDeviceFleetName() const{ return m_deviceFleetName; }
    inline bool DeviceFleetNameHasBeenSet() const { return m_deviceFleetNameHasBeenSet; }
    inline void SetDeviceFleetName(const Aws::String& value) { m_deviceFleetNameHasBeenSet = true; m_deviceFleetName = value; }
    inline void SetDeviceFleetName(Aws::String&& value) { m_deviceFleetNameHasBeenSet = true; m_deviceFleetName = std::move(value); }
    inline void SetDeviceFleetName(const char* value) { m_deviceFleetNameHasBeenSet = true; m_deviceFleetName.assign(value); }
    inline RegisterDevicesRequest& WithDeviceFleetName(const Aws::String& value) { SetDeviceFleetName(value); return *this;}
    inline RegisterDevicesRequest& WithDeviceFleetName(Aws::String&& value) { SetDeviceFleetName(std::move(value)); return *this;}
    inline RegisterDevicesRequest& WithDeviceFleetName(const char* value) { SetDeviceFleetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of devices to register with SageMaker Edge Manager.</p>
     */
    inline const Aws::Vector<Device>& GetDevices() const{ return m_devices; }
    inline bool DevicesHasBeenSet() const { return m_devicesHasBeenSet; }
    inline void SetDevices(const Aws::Vector<Device>& value) { m_devicesHasBeenSet = true; m_devices = value; }
    inline void SetDevices(Aws::Vector<Device>&& value) { m_devicesHasBeenSet = true; m_devices = std::move(value); }
    inline RegisterDevicesRequest& WithDevices(const Aws::Vector<Device>& value) { SetDevices(value); return *this;}
    inline RegisterDevicesRequest& WithDevices(Aws::Vector<Device>&& value) { SetDevices(std::move(value)); return *this;}
    inline RegisterDevicesRequest& AddDevices(const Device& value) { m_devicesHasBeenSet = true; m_devices.push_back(value); return *this; }
    inline RegisterDevicesRequest& AddDevices(Device&& value) { m_devicesHasBeenSet = true; m_devices.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags associated with devices.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline RegisterDevicesRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline RegisterDevicesRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline RegisterDevicesRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline RegisterDevicesRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_deviceFleetName;
    bool m_deviceFleetNameHasBeenSet = false;

    Aws::Vector<Device> m_devices;
    bool m_devicesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
