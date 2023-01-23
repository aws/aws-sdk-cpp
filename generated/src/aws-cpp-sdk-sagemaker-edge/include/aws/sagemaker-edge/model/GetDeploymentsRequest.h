/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-edge/SagemakerEdgeManager_EXPORTS.h>
#include <aws/sagemaker-edge/SagemakerEdgeManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SagemakerEdgeManager
{
namespace Model
{

  /**
   */
  class GetDeploymentsRequest : public SagemakerEdgeManagerRequest
  {
  public:
    AWS_SAGEMAKEREDGEMANAGER_API GetDeploymentsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDeployments"; }

    AWS_SAGEMAKEREDGEMANAGER_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique name of the device you want to get the configuration of active
     * deployments from.</p>
     */
    inline const Aws::String& GetDeviceName() const{ return m_deviceName; }

    /**
     * <p>The unique name of the device you want to get the configuration of active
     * deployments from.</p>
     */
    inline bool DeviceNameHasBeenSet() const { return m_deviceNameHasBeenSet; }

    /**
     * <p>The unique name of the device you want to get the configuration of active
     * deployments from.</p>
     */
    inline void SetDeviceName(const Aws::String& value) { m_deviceNameHasBeenSet = true; m_deviceName = value; }

    /**
     * <p>The unique name of the device you want to get the configuration of active
     * deployments from.</p>
     */
    inline void SetDeviceName(Aws::String&& value) { m_deviceNameHasBeenSet = true; m_deviceName = std::move(value); }

    /**
     * <p>The unique name of the device you want to get the configuration of active
     * deployments from.</p>
     */
    inline void SetDeviceName(const char* value) { m_deviceNameHasBeenSet = true; m_deviceName.assign(value); }

    /**
     * <p>The unique name of the device you want to get the configuration of active
     * deployments from.</p>
     */
    inline GetDeploymentsRequest& WithDeviceName(const Aws::String& value) { SetDeviceName(value); return *this;}

    /**
     * <p>The unique name of the device you want to get the configuration of active
     * deployments from.</p>
     */
    inline GetDeploymentsRequest& WithDeviceName(Aws::String&& value) { SetDeviceName(std::move(value)); return *this;}

    /**
     * <p>The unique name of the device you want to get the configuration of active
     * deployments from.</p>
     */
    inline GetDeploymentsRequest& WithDeviceName(const char* value) { SetDeviceName(value); return *this;}


    /**
     * <p>The name of the fleet that the device belongs to.</p>
     */
    inline const Aws::String& GetDeviceFleetName() const{ return m_deviceFleetName; }

    /**
     * <p>The name of the fleet that the device belongs to.</p>
     */
    inline bool DeviceFleetNameHasBeenSet() const { return m_deviceFleetNameHasBeenSet; }

    /**
     * <p>The name of the fleet that the device belongs to.</p>
     */
    inline void SetDeviceFleetName(const Aws::String& value) { m_deviceFleetNameHasBeenSet = true; m_deviceFleetName = value; }

    /**
     * <p>The name of the fleet that the device belongs to.</p>
     */
    inline void SetDeviceFleetName(Aws::String&& value) { m_deviceFleetNameHasBeenSet = true; m_deviceFleetName = std::move(value); }

    /**
     * <p>The name of the fleet that the device belongs to.</p>
     */
    inline void SetDeviceFleetName(const char* value) { m_deviceFleetNameHasBeenSet = true; m_deviceFleetName.assign(value); }

    /**
     * <p>The name of the fleet that the device belongs to.</p>
     */
    inline GetDeploymentsRequest& WithDeviceFleetName(const Aws::String& value) { SetDeviceFleetName(value); return *this;}

    /**
     * <p>The name of the fleet that the device belongs to.</p>
     */
    inline GetDeploymentsRequest& WithDeviceFleetName(Aws::String&& value) { SetDeviceFleetName(std::move(value)); return *this;}

    /**
     * <p>The name of the fleet that the device belongs to.</p>
     */
    inline GetDeploymentsRequest& WithDeviceFleetName(const char* value) { SetDeviceFleetName(value); return *this;}

  private:

    Aws::String m_deviceName;
    bool m_deviceNameHasBeenSet = false;

    Aws::String m_deviceFleetName;
    bool m_deviceFleetNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SagemakerEdgeManager
} // namespace Aws
