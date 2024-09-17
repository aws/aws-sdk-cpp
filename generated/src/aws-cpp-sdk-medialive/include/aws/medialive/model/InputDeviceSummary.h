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
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/InputDeviceOutputType.h>
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


    ///@{
    /**
     * The unique ARN of the input device.
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline InputDeviceSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline InputDeviceSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline InputDeviceSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * The state of the connection between the input device and AWS.
     */
    inline const InputDeviceConnectionState& GetConnectionState() const{ return m_connectionState; }
    inline bool ConnectionStateHasBeenSet() const { return m_connectionStateHasBeenSet; }
    inline void SetConnectionState(const InputDeviceConnectionState& value) { m_connectionStateHasBeenSet = true; m_connectionState = value; }
    inline void SetConnectionState(InputDeviceConnectionState&& value) { m_connectionStateHasBeenSet = true; m_connectionState = std::move(value); }
    inline InputDeviceSummary& WithConnectionState(const InputDeviceConnectionState& value) { SetConnectionState(value); return *this;}
    inline InputDeviceSummary& WithConnectionState(InputDeviceConnectionState&& value) { SetConnectionState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The status of the action to synchronize the device configuration. If you change
     * the configuration of the input device (for example, the maximum bitrate),
     * MediaLive sends the new data to the device. The device might not update itself
     * immediately. SYNCED means the device has updated its configuration. SYNCING
     * means that it has not updated its configuration.
     */
    inline const DeviceSettingsSyncState& GetDeviceSettingsSyncState() const{ return m_deviceSettingsSyncState; }
    inline bool DeviceSettingsSyncStateHasBeenSet() const { return m_deviceSettingsSyncStateHasBeenSet; }
    inline void SetDeviceSettingsSyncState(const DeviceSettingsSyncState& value) { m_deviceSettingsSyncStateHasBeenSet = true; m_deviceSettingsSyncState = value; }
    inline void SetDeviceSettingsSyncState(DeviceSettingsSyncState&& value) { m_deviceSettingsSyncStateHasBeenSet = true; m_deviceSettingsSyncState = std::move(value); }
    inline InputDeviceSummary& WithDeviceSettingsSyncState(const DeviceSettingsSyncState& value) { SetDeviceSettingsSyncState(value); return *this;}
    inline InputDeviceSummary& WithDeviceSettingsSyncState(DeviceSettingsSyncState&& value) { SetDeviceSettingsSyncState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The status of software on the input device.
     */
    inline const DeviceUpdateStatus& GetDeviceUpdateStatus() const{ return m_deviceUpdateStatus; }
    inline bool DeviceUpdateStatusHasBeenSet() const { return m_deviceUpdateStatusHasBeenSet; }
    inline void SetDeviceUpdateStatus(const DeviceUpdateStatus& value) { m_deviceUpdateStatusHasBeenSet = true; m_deviceUpdateStatus = value; }
    inline void SetDeviceUpdateStatus(DeviceUpdateStatus&& value) { m_deviceUpdateStatusHasBeenSet = true; m_deviceUpdateStatus = std::move(value); }
    inline InputDeviceSummary& WithDeviceUpdateStatus(const DeviceUpdateStatus& value) { SetDeviceUpdateStatus(value); return *this;}
    inline InputDeviceSummary& WithDeviceUpdateStatus(DeviceUpdateStatus&& value) { SetDeviceUpdateStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Settings that describe an input device that is type HD.
     */
    inline const InputDeviceHdSettings& GetHdDeviceSettings() const{ return m_hdDeviceSettings; }
    inline bool HdDeviceSettingsHasBeenSet() const { return m_hdDeviceSettingsHasBeenSet; }
    inline void SetHdDeviceSettings(const InputDeviceHdSettings& value) { m_hdDeviceSettingsHasBeenSet = true; m_hdDeviceSettings = value; }
    inline void SetHdDeviceSettings(InputDeviceHdSettings&& value) { m_hdDeviceSettingsHasBeenSet = true; m_hdDeviceSettings = std::move(value); }
    inline InputDeviceSummary& WithHdDeviceSettings(const InputDeviceHdSettings& value) { SetHdDeviceSettings(value); return *this;}
    inline InputDeviceSummary& WithHdDeviceSettings(InputDeviceHdSettings&& value) { SetHdDeviceSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The unique ID of the input device.
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline InputDeviceSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline InputDeviceSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline InputDeviceSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * The network MAC address of the input device.
     */
    inline const Aws::String& GetMacAddress() const{ return m_macAddress; }
    inline bool MacAddressHasBeenSet() const { return m_macAddressHasBeenSet; }
    inline void SetMacAddress(const Aws::String& value) { m_macAddressHasBeenSet = true; m_macAddress = value; }
    inline void SetMacAddress(Aws::String&& value) { m_macAddressHasBeenSet = true; m_macAddress = std::move(value); }
    inline void SetMacAddress(const char* value) { m_macAddressHasBeenSet = true; m_macAddress.assign(value); }
    inline InputDeviceSummary& WithMacAddress(const Aws::String& value) { SetMacAddress(value); return *this;}
    inline InputDeviceSummary& WithMacAddress(Aws::String&& value) { SetMacAddress(std::move(value)); return *this;}
    inline InputDeviceSummary& WithMacAddress(const char* value) { SetMacAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * A name that you specify for the input device.
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline InputDeviceSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline InputDeviceSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline InputDeviceSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * Network settings for the input device.
     */
    inline const InputDeviceNetworkSettings& GetNetworkSettings() const{ return m_networkSettings; }
    inline bool NetworkSettingsHasBeenSet() const { return m_networkSettingsHasBeenSet; }
    inline void SetNetworkSettings(const InputDeviceNetworkSettings& value) { m_networkSettingsHasBeenSet = true; m_networkSettings = value; }
    inline void SetNetworkSettings(InputDeviceNetworkSettings&& value) { m_networkSettingsHasBeenSet = true; m_networkSettings = std::move(value); }
    inline InputDeviceSummary& WithNetworkSettings(const InputDeviceNetworkSettings& value) { SetNetworkSettings(value); return *this;}
    inline InputDeviceSummary& WithNetworkSettings(InputDeviceNetworkSettings&& value) { SetNetworkSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The unique serial number of the input device.
     */
    inline const Aws::String& GetSerialNumber() const{ return m_serialNumber; }
    inline bool SerialNumberHasBeenSet() const { return m_serialNumberHasBeenSet; }
    inline void SetSerialNumber(const Aws::String& value) { m_serialNumberHasBeenSet = true; m_serialNumber = value; }
    inline void SetSerialNumber(Aws::String&& value) { m_serialNumberHasBeenSet = true; m_serialNumber = std::move(value); }
    inline void SetSerialNumber(const char* value) { m_serialNumberHasBeenSet = true; m_serialNumber.assign(value); }
    inline InputDeviceSummary& WithSerialNumber(const Aws::String& value) { SetSerialNumber(value); return *this;}
    inline InputDeviceSummary& WithSerialNumber(Aws::String&& value) { SetSerialNumber(std::move(value)); return *this;}
    inline InputDeviceSummary& WithSerialNumber(const char* value) { SetSerialNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * The type of the input device.
     */
    inline const InputDeviceType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const InputDeviceType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(InputDeviceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline InputDeviceSummary& WithType(const InputDeviceType& value) { SetType(value); return *this;}
    inline InputDeviceSummary& WithType(InputDeviceType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Settings that describe an input device that is type UHD.
     */
    inline const InputDeviceUhdSettings& GetUhdDeviceSettings() const{ return m_uhdDeviceSettings; }
    inline bool UhdDeviceSettingsHasBeenSet() const { return m_uhdDeviceSettingsHasBeenSet; }
    inline void SetUhdDeviceSettings(const InputDeviceUhdSettings& value) { m_uhdDeviceSettingsHasBeenSet = true; m_uhdDeviceSettings = value; }
    inline void SetUhdDeviceSettings(InputDeviceUhdSettings&& value) { m_uhdDeviceSettingsHasBeenSet = true; m_uhdDeviceSettings = std::move(value); }
    inline InputDeviceSummary& WithUhdDeviceSettings(const InputDeviceUhdSettings& value) { SetUhdDeviceSettings(value); return *this;}
    inline InputDeviceSummary& WithUhdDeviceSettings(InputDeviceUhdSettings&& value) { SetUhdDeviceSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * A collection of key-value pairs.
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline InputDeviceSummary& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline InputDeviceSummary& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline InputDeviceSummary& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline InputDeviceSummary& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline InputDeviceSummary& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline InputDeviceSummary& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline InputDeviceSummary& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline InputDeviceSummary& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline InputDeviceSummary& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * The Availability Zone associated with this input device.
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }
    inline InputDeviceSummary& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline InputDeviceSummary& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline InputDeviceSummary& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * An array of the ARNs for the MediaLive inputs attached to the device. Returned
     * only if the outputType is MEDIALIVE_INPUT.
     */
    inline const Aws::Vector<Aws::String>& GetMedialiveInputArns() const{ return m_medialiveInputArns; }
    inline bool MedialiveInputArnsHasBeenSet() const { return m_medialiveInputArnsHasBeenSet; }
    inline void SetMedialiveInputArns(const Aws::Vector<Aws::String>& value) { m_medialiveInputArnsHasBeenSet = true; m_medialiveInputArns = value; }
    inline void SetMedialiveInputArns(Aws::Vector<Aws::String>&& value) { m_medialiveInputArnsHasBeenSet = true; m_medialiveInputArns = std::move(value); }
    inline InputDeviceSummary& WithMedialiveInputArns(const Aws::Vector<Aws::String>& value) { SetMedialiveInputArns(value); return *this;}
    inline InputDeviceSummary& WithMedialiveInputArns(Aws::Vector<Aws::String>&& value) { SetMedialiveInputArns(std::move(value)); return *this;}
    inline InputDeviceSummary& AddMedialiveInputArns(const Aws::String& value) { m_medialiveInputArnsHasBeenSet = true; m_medialiveInputArns.push_back(value); return *this; }
    inline InputDeviceSummary& AddMedialiveInputArns(Aws::String&& value) { m_medialiveInputArnsHasBeenSet = true; m_medialiveInputArns.push_back(std::move(value)); return *this; }
    inline InputDeviceSummary& AddMedialiveInputArns(const char* value) { m_medialiveInputArnsHasBeenSet = true; m_medialiveInputArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * The output attachment type of the input device. Specifies MEDIACONNECT_FLOW if
     * this device is the source for a MediaConnect flow. Specifies MEDIALIVE_INPUT if
     * this device is the source for a MediaLive input.
     */
    inline const InputDeviceOutputType& GetOutputType() const{ return m_outputType; }
    inline bool OutputTypeHasBeenSet() const { return m_outputTypeHasBeenSet; }
    inline void SetOutputType(const InputDeviceOutputType& value) { m_outputTypeHasBeenSet = true; m_outputType = value; }
    inline void SetOutputType(InputDeviceOutputType&& value) { m_outputTypeHasBeenSet = true; m_outputType = std::move(value); }
    inline InputDeviceSummary& WithOutputType(const InputDeviceOutputType& value) { SetOutputType(value); return *this;}
    inline InputDeviceSummary& WithOutputType(InputDeviceOutputType&& value) { SetOutputType(std::move(value)); return *this;}
    ///@}
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

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::Vector<Aws::String> m_medialiveInputArns;
    bool m_medialiveInputArnsHasBeenSet = false;

    InputDeviceOutputType m_outputType;
    bool m_outputTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
