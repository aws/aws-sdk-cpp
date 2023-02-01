/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/worklink/WorkLink_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/worklink/model/DeviceStatus.h>
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
namespace WorkLink
{
namespace Model
{

  /**
   * <p>The summary of devices.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/DeviceSummary">AWS
   * API Reference</a></p>
   */
  class DeviceSummary
  {
  public:
    AWS_WORKLINK_API DeviceSummary();
    AWS_WORKLINK_API DeviceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKLINK_API DeviceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKLINK_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the device.</p>
     */
    inline const Aws::String& GetDeviceId() const{ return m_deviceId; }

    /**
     * <p>The ID of the device.</p>
     */
    inline bool DeviceIdHasBeenSet() const { return m_deviceIdHasBeenSet; }

    /**
     * <p>The ID of the device.</p>
     */
    inline void SetDeviceId(const Aws::String& value) { m_deviceIdHasBeenSet = true; m_deviceId = value; }

    /**
     * <p>The ID of the device.</p>
     */
    inline void SetDeviceId(Aws::String&& value) { m_deviceIdHasBeenSet = true; m_deviceId = std::move(value); }

    /**
     * <p>The ID of the device.</p>
     */
    inline void SetDeviceId(const char* value) { m_deviceIdHasBeenSet = true; m_deviceId.assign(value); }

    /**
     * <p>The ID of the device.</p>
     */
    inline DeviceSummary& WithDeviceId(const Aws::String& value) { SetDeviceId(value); return *this;}

    /**
     * <p>The ID of the device.</p>
     */
    inline DeviceSummary& WithDeviceId(Aws::String&& value) { SetDeviceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the device.</p>
     */
    inline DeviceSummary& WithDeviceId(const char* value) { SetDeviceId(value); return *this;}


    /**
     * <p>The status of the device.</p>
     */
    inline const DeviceStatus& GetDeviceStatus() const{ return m_deviceStatus; }

    /**
     * <p>The status of the device.</p>
     */
    inline bool DeviceStatusHasBeenSet() const { return m_deviceStatusHasBeenSet; }

    /**
     * <p>The status of the device.</p>
     */
    inline void SetDeviceStatus(const DeviceStatus& value) { m_deviceStatusHasBeenSet = true; m_deviceStatus = value; }

    /**
     * <p>The status of the device.</p>
     */
    inline void SetDeviceStatus(DeviceStatus&& value) { m_deviceStatusHasBeenSet = true; m_deviceStatus = std::move(value); }

    /**
     * <p>The status of the device.</p>
     */
    inline DeviceSummary& WithDeviceStatus(const DeviceStatus& value) { SetDeviceStatus(value); return *this;}

    /**
     * <p>The status of the device.</p>
     */
    inline DeviceSummary& WithDeviceStatus(DeviceStatus&& value) { SetDeviceStatus(std::move(value)); return *this;}

  private:

    Aws::String m_deviceId;
    bool m_deviceIdHasBeenSet = false;

    DeviceStatus m_deviceStatus;
    bool m_deviceStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkLink
} // namespace Aws
