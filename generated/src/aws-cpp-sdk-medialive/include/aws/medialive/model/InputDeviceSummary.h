/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/InputDeviceConnectionState.h>
#include <aws/medialive/model/DeviceSettingsSyncState.h>
#include <aws/medialive/model/DeviceUpdateStatus.h>
#include <aws/medialive/model/InputDeviceHdSettings.h>
#include <aws/medialive/model/InputDeviceNetworkSettings.h>
#include <aws/medialive/model/InputDeviceType.h>
#include <aws/medialive/model/InputDeviceUhdSettings.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Details of the input device.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/InputDeviceSummary">AWS
   * API Reference</a></p>
   */
  class InputDeviceSummary
  {
  public:
    AWS_MEDIALIVE_API InputDeviceSummary();
    AWS_MEDIALIVE_API InputDeviceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API InputDeviceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The unique ARN of the input device.
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * The unique ARN of the input device.
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * The unique ARN of the input device.
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * The unique ARN of the input device.
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * The unique ARN of the input device.
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * The unique ARN of the input device.
     */
    inline InputDeviceSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * The unique ARN of the input device.
     */
    inline InputDeviceSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * The unique ARN of the input device.
     */
    inline InputDeviceSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * The state of the connection between the input device and AWS.
     */
    inline const InputDeviceConnectionState& GetConnectionState() const{ return m_connectionState; }

    /**
     * The state of the connection between the input device and AWS.
     */
    inline bool ConnectionStateHasBeenSet() const { return m_connectionStateHasBeenSet; }

    /**
     * The state of the connection between the input device and AWS.
     */
    inline void SetConnectionState(const InputDeviceConnectionState& value) { m_connectionStateHasBeenSet = true; m_connectionState = value; }

    /**
     * The state of the connection between the input device and AWS.
     */
    inline void SetConnectionState(InputDeviceConnectionState&& value) { m_connectionStateHasBeenSet = true; m_connectionState = std::move(value); }

    /**
     * The state of the connection between the input device and AWS.
     */
    inline InputDeviceSummary& WithConnectionState(const InputDeviceConnectionState& value) { SetConnectionState(value); return *this;}

    /**
     * The state of the connection between the input device and AWS.
     */
    inline InputDeviceSummary& WithConnectionState(InputDeviceConnectionState&& value) { SetConnectionState(std::move(value)); return *this;}


    /**
     * The status of the action to synchronize the device configuration. If you change
     * the configuration of the input device (for example, the maximum bitrate),
     * MediaLive sends the new data to the device. The device might not update itself
     * immediately. SYNCED means the device has updated its configuration. SYNCING
     * means that it has not updated its configuration.
     */
    inline const DeviceSettingsSyncState& GetDeviceSettingsSyncState() const{ return m_deviceSettingsSyncState; }

    /**
     * The status of the action to synchronize the device configuration. If you change
     * the configuration of the input device (for example, the maximum bitrate),
     * MediaLive sends the new data to the device. The device might not update itself
     * immediately. SYNCED means the device has updated its configuration. SYNCING
     * means that it has not updated its configuration.
     */
    inline bool DeviceSettingsSyncStateHasBeenSet() const { return m_deviceSettingsSyncStateHasBeenSet; }

    /**
     * The status of the action to synchronize the device configuration. If you change
     * the configuration of the input device (for example, the maximum bitrate),
     * MediaLive sends the new data to the device. The device might not update itself
     * immediately. SYNCED means the device has updated its configuration. SYNCING
     * means that it has not updated its configuration.
     */
    inline void SetDeviceSettingsSyncState(const DeviceSettingsSyncState& value) { m_deviceSettingsSyncStateHasBeenSet = true; m_deviceSettingsSyncState = value; }

    /**
     * The status of the action to synchronize the device configuration. If you change
     * the configuration of the input device (for example, the maximum bitrate),
     * MediaLive sends the new data to the device. The device might not update itself
     * immediately. SYNCED means the device has updated its configuration. SYNCING
     * means that it has not updated its configuration.
     */
    inline void SetDeviceSettingsSyncState(DeviceSettingsSyncState&& value) { m_deviceSettingsSyncStateHasBeenSet = true; m_deviceSettingsSyncState = std::move(value); }

    /**
     * The status of the action to synchronize the device configuration. If you change
     * the configuration of the input device (for example, the maximum bitrate),
     * MediaLive sends the new data to the device. The device might not update itself
     * immediately. SYNCED means the device has updated its configuration. SYNCING
     * means that it has not updated its configuration.
     */
    inline InputDeviceSummary& WithDeviceSettingsSyncState(const DeviceSettingsSyncState& value) { SetDeviceSettingsSyncState(value); return *this;}

    /**
     * The status of the action to synchronize the device configuration. If you change
     * the configuration of the input device (for example, the maximum bitrate),
     * MediaLive sends the new data to the device. The device might not update itself
     * immediately. SYNCED means the device has updated its configuration. SYNCING
     * means that it has not updated its configuration.
     */
    inline InputDeviceSummary& WithDeviceSettingsSyncState(DeviceSettingsSyncState&& value) { SetDeviceSettingsSyncState(std::move(value)); return *this;}


    /**
     * The status of software on the input device.
     */
    inline const DeviceUpdateStatus& GetDeviceUpdateStatus() const{ return m_deviceUpdateStatus; }

    /**
     * The status of software on the input device.
     */
    inline bool DeviceUpdateStatusHasBeenSet() const { return m_deviceUpdateStatusHasBeenSet; }

    /**
     * The status of software on the input device.
     */
    inline void SetDeviceUpdateStatus(const DeviceUpdateStatus& value) { m_deviceUpdateStatusHasBeenSet = true; m_deviceUpdateStatus = value; }

    /**
     * The status of software on the input device.
     */
    inline void SetDeviceUpdateStatus(DeviceUpdateStatus&& value) { m_deviceUpdateStatusHasBeenSet = true; m_deviceUpdateStatus = std::move(value); }

    /**
     * The status of software on the input device.
     */
    inline InputDeviceSummary& WithDeviceUpdateStatus(const DeviceUpdateStatus& value) { SetDeviceUpdateStatus(value); return *this;}

    /**
     * The status of software on the input device.
     */
    inline InputDeviceSummary& WithDeviceUpdateStatus(DeviceUpdateStatus&& value) { SetDeviceUpdateStatus(std::move(value)); return *this;}


    /**
     * Settings that describe an input device that is type HD.
     */
    inline const InputDeviceHdSettings& GetHdDeviceSettings() const{ return m_hdDeviceSettings; }

    /**
     * Settings that describe an input device that is type HD.
     */
    inline bool HdDeviceSettingsHasBeenSet() const { return m_hdDeviceSettingsHasBeenSet; }

    /**
     * Settings that describe an input device that is type HD.
     */
    inline void SetHdDeviceSettings(const InputDeviceHdSettings& value) { m_hdDeviceSettingsHasBeenSet = true; m_hdDeviceSettings = value; }

    /**
     * Settings that describe an input device that is type HD.
     */
    inline void SetHdDeviceSettings(InputDeviceHdSettings&& value) { m_hdDeviceSettingsHasBeenSet = true; m_hdDeviceSettings = std::move(value); }

    /**
     * Settings that describe an input device that is type HD.
     */
    inline InputDeviceSummary& WithHdDeviceSettings(const InputDeviceHdSettings& value) { SetHdDeviceSettings(value); return *this;}

    /**
     * Settings that describe an input device that is type HD.
     */
    inline InputDeviceSummary& WithHdDeviceSettings(InputDeviceHdSettings&& value) { SetHdDeviceSettings(std::move(value)); return *this;}


    /**
     * The unique ID of the input device.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * The unique ID of the input device.
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * The unique ID of the input device.
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * The unique ID of the input device.
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * The unique ID of the input device.
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * The unique ID of the input device.
     */
    inline InputDeviceSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * The unique ID of the input device.
     */
    inline InputDeviceSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * The unique ID of the input device.
     */
    inline InputDeviceSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * The network MAC address of the input device.
     */
    inline const Aws::String& GetMacAddress() const{ return m_macAddress; }

    /**
     * The network MAC address of the input device.
     */
    inline bool MacAddressHasBeenSet() const { return m_macAddressHasBeenSet; }

    /**
     * The network MAC address of the input device.
     */
    inline void SetMacAddress(const Aws::String& value) { m_macAddressHasBeenSet = true; m_macAddress = value; }

    /**
     * The network MAC address of the input device.
     */
    inline void SetMacAddress(Aws::String&& value) { m_macAddressHasBeenSet = true; m_macAddress = std::move(value); }

    /**
     * The network MAC address of the input device.
     */
    inline void SetMacAddress(const char* value) { m_macAddressHasBeenSet = true; m_macAddress.assign(value); }

    /**
     * The network MAC address of the input device.
     */
    inline InputDeviceSummary& WithMacAddress(const Aws::String& value) { SetMacAddress(value); return *this;}

    /**
     * The network MAC address of the input device.
     */
    inline InputDeviceSummary& WithMacAddress(Aws::String&& value) { SetMacAddress(std::move(value)); return *this;}

    /**
     * The network MAC address of the input device.
     */
    inline InputDeviceSummary& WithMacAddress(const char* value) { SetMacAddress(value); return *this;}


    /**
     * A name that you specify for the input device.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * A name that you specify for the input device.
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * A name that you specify for the input device.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * A name that you specify for the input device.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * A name that you specify for the input device.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * A name that you specify for the input device.
     */
    inline InputDeviceSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * A name that you specify for the input device.
     */
    inline InputDeviceSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * A name that you specify for the input device.
     */
    inline InputDeviceSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * Network settings for the input device.
     */
    inline const InputDeviceNetworkSettings& GetNetworkSettings() const{ return m_networkSettings; }

    /**
     * Network settings for the input device.
     */
    inline bool NetworkSettingsHasBeenSet() const { return m_networkSettingsHasBeenSet; }

    /**
     * Network settings for the input device.
     */
    inline void SetNetworkSettings(const InputDeviceNetworkSettings& value) { m_networkSettingsHasBeenSet = true; m_networkSettings = value; }

    /**
     * Network settings for the input device.
     */
    inline void SetNetworkSettings(InputDeviceNetworkSettings&& value) { m_networkSettingsHasBeenSet = true; m_networkSettings = std::move(value); }

    /**
     * Network settings for the input device.
     */
    inline InputDeviceSummary& WithNetworkSettings(const InputDeviceNetworkSettings& value) { SetNetworkSettings(value); return *this;}

    /**
     * Network settings for the input device.
     */
    inline InputDeviceSummary& WithNetworkSettings(InputDeviceNetworkSettings&& value) { SetNetworkSettings(std::move(value)); return *this;}


    /**
     * The unique serial number of the input device.
     */
    inline const Aws::String& GetSerialNumber() const{ return m_serialNumber; }

    /**
     * The unique serial number of the input device.
     */
    inline bool SerialNumberHasBeenSet() const { return m_serialNumberHasBeenSet; }

    /**
     * The unique serial number of the input device.
     */
    inline void SetSerialNumber(const Aws::String& value) { m_serialNumberHasBeenSet = true; m_serialNumber = value; }

    /**
     * The unique serial number of the input device.
     */
    inline void SetSerialNumber(Aws::String&& value) { m_serialNumberHasBeenSet = true; m_serialNumber = std::move(value); }

    /**
     * The unique serial number of the input device.
     */
    inline void SetSerialNumber(const char* value) { m_serialNumberHasBeenSet = true; m_serialNumber.assign(value); }

    /**
     * The unique serial number of the input device.
     */
    inline InputDeviceSummary& WithSerialNumber(const Aws::String& value) { SetSerialNumber(value); return *this;}

    /**
     * The unique serial number of the input device.
     */
    inline InputDeviceSummary& WithSerialNumber(Aws::String&& value) { SetSerialNumber(std::move(value)); return *this;}

    /**
     * The unique serial number of the input device.
     */
    inline InputDeviceSummary& WithSerialNumber(const char* value) { SetSerialNumber(value); return *this;}


    /**
     * The type of the input device.
     */
    inline const InputDeviceType& GetType() const{ return m_type; }

    /**
     * The type of the input device.
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * The type of the input device.
     */
    inline void SetType(const InputDeviceType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * The type of the input device.
     */
    inline void SetType(InputDeviceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * The type of the input device.
     */
    inline InputDeviceSummary& WithType(const InputDeviceType& value) { SetType(value); return *this;}

    /**
     * The type of the input device.
     */
    inline InputDeviceSummary& WithType(InputDeviceType&& value) { SetType(std::move(value)); return *this;}


    /**
     * Settings that describe an input device that is type UHD.
     */
    inline const InputDeviceUhdSettings& GetUhdDeviceSettings() const{ return m_uhdDeviceSettings; }

    /**
     * Settings that describe an input device that is type UHD.
     */
    inline bool UhdDeviceSettingsHasBeenSet() const { return m_uhdDeviceSettingsHasBeenSet; }

    /**
     * Settings that describe an input device that is type UHD.
     */
    inline void SetUhdDeviceSettings(const InputDeviceUhdSettings& value) { m_uhdDeviceSettingsHasBeenSet = true; m_uhdDeviceSettings = value; }

    /**
     * Settings that describe an input device that is type UHD.
     */
    inline void SetUhdDeviceSettings(InputDeviceUhdSettings&& value) { m_uhdDeviceSettingsHasBeenSet = true; m_uhdDeviceSettings = std::move(value); }

    /**
     * Settings that describe an input device that is type UHD.
     */
    inline InputDeviceSummary& WithUhdDeviceSettings(const InputDeviceUhdSettings& value) { SetUhdDeviceSettings(value); return *this;}

    /**
     * Settings that describe an input device that is type UHD.
     */
    inline InputDeviceSummary& WithUhdDeviceSettings(InputDeviceUhdSettings&& value) { SetUhdDeviceSettings(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    InputDeviceConnectionState m_connectionState;
    bool m_connectionStateHasBeenSet = false;

    DeviceSettingsSyncState m_deviceSettingsSyncState;
    bool m_deviceSettingsSyncStateHasBeenSet = false;

    DeviceUpdateStatus m_deviceUpdateStatus;
    bool m_deviceUpdateStatusHasBeenSet = false;

    InputDeviceHdSettings m_hdDeviceSettings;
    bool m_hdDeviceSettingsHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_macAddress;
    bool m_macAddressHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    InputDeviceNetworkSettings m_networkSettings;
    bool m_networkSettingsHasBeenSet = false;

    Aws::String m_serialNumber;
    bool m_serialNumberHasBeenSet = false;

    InputDeviceType m_type;
    bool m_typeHasBeenSet = false;

    InputDeviceUhdSettings m_uhdDeviceSettings;
    bool m_uhdDeviceSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
