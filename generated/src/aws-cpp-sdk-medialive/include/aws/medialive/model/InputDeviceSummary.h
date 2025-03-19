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
    AWS_MEDIALIVE_API InputDeviceSummary() = default;
    AWS_MEDIALIVE_API InputDeviceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API InputDeviceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The unique ARN of the input device.
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    InputDeviceSummary& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The state of the connection between the input device and AWS.
     */
    inline InputDeviceConnectionState GetConnectionState() const { return m_connectionState; }
    inline bool ConnectionStateHasBeenSet() const { return m_connectionStateHasBeenSet; }
    inline void SetConnectionState(InputDeviceConnectionState value) { m_connectionStateHasBeenSet = true; m_connectionState = value; }
    inline InputDeviceSummary& WithConnectionState(InputDeviceConnectionState value) { SetConnectionState(value); return *this;}
    ///@}

    ///@{
    /**
     * The status of the action to synchronize the device configuration. If you change
     * the configuration of the input device (for example, the maximum bitrate),
     * MediaLive sends the new data to the device. The device might not update itself
     * immediately. SYNCED means the device has updated its configuration. SYNCING
     * means that it has not updated its configuration.
     */
    inline DeviceSettingsSyncState GetDeviceSettingsSyncState() const { return m_deviceSettingsSyncState; }
    inline bool DeviceSettingsSyncStateHasBeenSet() const { return m_deviceSettingsSyncStateHasBeenSet; }
    inline void SetDeviceSettingsSyncState(DeviceSettingsSyncState value) { m_deviceSettingsSyncStateHasBeenSet = true; m_deviceSettingsSyncState = value; }
    inline InputDeviceSummary& WithDeviceSettingsSyncState(DeviceSettingsSyncState value) { SetDeviceSettingsSyncState(value); return *this;}
    ///@}

    ///@{
    /**
     * The status of software on the input device.
     */
    inline DeviceUpdateStatus GetDeviceUpdateStatus() const { return m_deviceUpdateStatus; }
    inline bool DeviceUpdateStatusHasBeenSet() const { return m_deviceUpdateStatusHasBeenSet; }
    inline void SetDeviceUpdateStatus(DeviceUpdateStatus value) { m_deviceUpdateStatusHasBeenSet = true; m_deviceUpdateStatus = value; }
    inline InputDeviceSummary& WithDeviceUpdateStatus(DeviceUpdateStatus value) { SetDeviceUpdateStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * Settings that describe an input device that is type HD.
     */
    inline const InputDeviceHdSettings& GetHdDeviceSettings() const { return m_hdDeviceSettings; }
    inline bool HdDeviceSettingsHasBeenSet() const { return m_hdDeviceSettingsHasBeenSet; }
    template<typename HdDeviceSettingsT = InputDeviceHdSettings>
    void SetHdDeviceSettings(HdDeviceSettingsT&& value) { m_hdDeviceSettingsHasBeenSet = true; m_hdDeviceSettings = std::forward<HdDeviceSettingsT>(value); }
    template<typename HdDeviceSettingsT = InputDeviceHdSettings>
    InputDeviceSummary& WithHdDeviceSettings(HdDeviceSettingsT&& value) { SetHdDeviceSettings(std::forward<HdDeviceSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The unique ID of the input device.
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    InputDeviceSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The network MAC address of the input device.
     */
    inline const Aws::String& GetMacAddress() const { return m_macAddress; }
    inline bool MacAddressHasBeenSet() const { return m_macAddressHasBeenSet; }
    template<typename MacAddressT = Aws::String>
    void SetMacAddress(MacAddressT&& value) { m_macAddressHasBeenSet = true; m_macAddress = std::forward<MacAddressT>(value); }
    template<typename MacAddressT = Aws::String>
    InputDeviceSummary& WithMacAddress(MacAddressT&& value) { SetMacAddress(std::forward<MacAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * A name that you specify for the input device.
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    InputDeviceSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Network settings for the input device.
     */
    inline const InputDeviceNetworkSettings& GetNetworkSettings() const { return m_networkSettings; }
    inline bool NetworkSettingsHasBeenSet() const { return m_networkSettingsHasBeenSet; }
    template<typename NetworkSettingsT = InputDeviceNetworkSettings>
    void SetNetworkSettings(NetworkSettingsT&& value) { m_networkSettingsHasBeenSet = true; m_networkSettings = std::forward<NetworkSettingsT>(value); }
    template<typename NetworkSettingsT = InputDeviceNetworkSettings>
    InputDeviceSummary& WithNetworkSettings(NetworkSettingsT&& value) { SetNetworkSettings(std::forward<NetworkSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The unique serial number of the input device.
     */
    inline const Aws::String& GetSerialNumber() const { return m_serialNumber; }
    inline bool SerialNumberHasBeenSet() const { return m_serialNumberHasBeenSet; }
    template<typename SerialNumberT = Aws::String>
    void SetSerialNumber(SerialNumberT&& value) { m_serialNumberHasBeenSet = true; m_serialNumber = std::forward<SerialNumberT>(value); }
    template<typename SerialNumberT = Aws::String>
    InputDeviceSummary& WithSerialNumber(SerialNumberT&& value) { SetSerialNumber(std::forward<SerialNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The type of the input device.
     */
    inline InputDeviceType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(InputDeviceType value) { m_typeHasBeenSet = true; m_type = value; }
    inline InputDeviceSummary& WithType(InputDeviceType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * Settings that describe an input device that is type UHD.
     */
    inline const InputDeviceUhdSettings& GetUhdDeviceSettings() const { return m_uhdDeviceSettings; }
    inline bool UhdDeviceSettingsHasBeenSet() const { return m_uhdDeviceSettingsHasBeenSet; }
    template<typename UhdDeviceSettingsT = InputDeviceUhdSettings>
    void SetUhdDeviceSettings(UhdDeviceSettingsT&& value) { m_uhdDeviceSettingsHasBeenSet = true; m_uhdDeviceSettings = std::forward<UhdDeviceSettingsT>(value); }
    template<typename UhdDeviceSettingsT = InputDeviceUhdSettings>
    InputDeviceSummary& WithUhdDeviceSettings(UhdDeviceSettingsT&& value) { SetUhdDeviceSettings(std::forward<UhdDeviceSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * A collection of key-value pairs.
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    InputDeviceSummary& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    InputDeviceSummary& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * The Availability Zone associated with this input device.
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    InputDeviceSummary& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * An array of the ARNs for the MediaLive inputs attached to the device. Returned
     * only if the outputType is MEDIALIVE_INPUT.
     */
    inline const Aws::Vector<Aws::String>& GetMedialiveInputArns() const { return m_medialiveInputArns; }
    inline bool MedialiveInputArnsHasBeenSet() const { return m_medialiveInputArnsHasBeenSet; }
    template<typename MedialiveInputArnsT = Aws::Vector<Aws::String>>
    void SetMedialiveInputArns(MedialiveInputArnsT&& value) { m_medialiveInputArnsHasBeenSet = true; m_medialiveInputArns = std::forward<MedialiveInputArnsT>(value); }
    template<typename MedialiveInputArnsT = Aws::Vector<Aws::String>>
    InputDeviceSummary& WithMedialiveInputArns(MedialiveInputArnsT&& value) { SetMedialiveInputArns(std::forward<MedialiveInputArnsT>(value)); return *this;}
    template<typename MedialiveInputArnsT = Aws::String>
    InputDeviceSummary& AddMedialiveInputArns(MedialiveInputArnsT&& value) { m_medialiveInputArnsHasBeenSet = true; m_medialiveInputArns.emplace_back(std::forward<MedialiveInputArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * The output attachment type of the input device. Specifies MEDIACONNECT_FLOW if
     * this device is the source for a MediaConnect flow. Specifies MEDIALIVE_INPUT if
     * this device is the source for a MediaLive input.
     */
    inline InputDeviceOutputType GetOutputType() const { return m_outputType; }
    inline bool OutputTypeHasBeenSet() const { return m_outputTypeHasBeenSet; }
    inline void SetOutputType(InputDeviceOutputType value) { m_outputTypeHasBeenSet = true; m_outputType = value; }
    inline InputDeviceSummary& WithOutputType(InputDeviceOutputType value) { SetOutputType(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    InputDeviceConnectionState m_connectionState{InputDeviceConnectionState::NOT_SET};
    bool m_connectionStateHasBeenSet = false;

    DeviceSettingsSyncState m_deviceSettingsSyncState{DeviceSettingsSyncState::NOT_SET};
    bool m_deviceSettingsSyncStateHasBeenSet = false;

    DeviceUpdateStatus m_deviceUpdateStatus{DeviceUpdateStatus::NOT_SET};
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

    InputDeviceType m_type{InputDeviceType::NOT_SET};
    bool m_typeHasBeenSet = false;

    InputDeviceUhdSettings m_uhdDeviceSettings;
    bool m_uhdDeviceSettingsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::Vector<Aws::String> m_medialiveInputArns;
    bool m_medialiveInputArnsHasBeenSet = false;

    InputDeviceOutputType m_outputType{InputDeviceOutputType::NOT_SET};
    bool m_outputTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
