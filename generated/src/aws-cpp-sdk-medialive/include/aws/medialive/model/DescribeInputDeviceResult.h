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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MediaLive
{
namespace Model
{
  /**
   * Placeholder documentation for DescribeInputDeviceResponse<p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeInputDeviceResponse">AWS
   * API Reference</a></p>
   */
  class DescribeInputDeviceResult
  {
  public:
    AWS_MEDIALIVE_API DescribeInputDeviceResult() = default;
    AWS_MEDIALIVE_API DescribeInputDeviceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API DescribeInputDeviceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * The unique ARN of the input device.
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    DescribeInputDeviceResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The state of the connection between the input device and AWS.
     */
    inline InputDeviceConnectionState GetConnectionState() const { return m_connectionState; }
    inline void SetConnectionState(InputDeviceConnectionState value) { m_connectionStateHasBeenSet = true; m_connectionState = value; }
    inline DescribeInputDeviceResult& WithConnectionState(InputDeviceConnectionState value) { SetConnectionState(value); return *this;}
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
    inline void SetDeviceSettingsSyncState(DeviceSettingsSyncState value) { m_deviceSettingsSyncStateHasBeenSet = true; m_deviceSettingsSyncState = value; }
    inline DescribeInputDeviceResult& WithDeviceSettingsSyncState(DeviceSettingsSyncState value) { SetDeviceSettingsSyncState(value); return *this;}
    ///@}

    ///@{
    /**
     * The status of software on the input device.
     */
    inline DeviceUpdateStatus GetDeviceUpdateStatus() const { return m_deviceUpdateStatus; }
    inline void SetDeviceUpdateStatus(DeviceUpdateStatus value) { m_deviceUpdateStatusHasBeenSet = true; m_deviceUpdateStatus = value; }
    inline DescribeInputDeviceResult& WithDeviceUpdateStatus(DeviceUpdateStatus value) { SetDeviceUpdateStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * Settings that describe an input device that is type HD.
     */
    inline const InputDeviceHdSettings& GetHdDeviceSettings() const { return m_hdDeviceSettings; }
    template<typename HdDeviceSettingsT = InputDeviceHdSettings>
    void SetHdDeviceSettings(HdDeviceSettingsT&& value) { m_hdDeviceSettingsHasBeenSet = true; m_hdDeviceSettings = std::forward<HdDeviceSettingsT>(value); }
    template<typename HdDeviceSettingsT = InputDeviceHdSettings>
    DescribeInputDeviceResult& WithHdDeviceSettings(HdDeviceSettingsT&& value) { SetHdDeviceSettings(std::forward<HdDeviceSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The unique ID of the input device.
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    DescribeInputDeviceResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The network MAC address of the input device.
     */
    inline const Aws::String& GetMacAddress() const { return m_macAddress; }
    template<typename MacAddressT = Aws::String>
    void SetMacAddress(MacAddressT&& value) { m_macAddressHasBeenSet = true; m_macAddress = std::forward<MacAddressT>(value); }
    template<typename MacAddressT = Aws::String>
    DescribeInputDeviceResult& WithMacAddress(MacAddressT&& value) { SetMacAddress(std::forward<MacAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * A name that you specify for the input device.
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DescribeInputDeviceResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The network settings for the input device.
     */
    inline const InputDeviceNetworkSettings& GetNetworkSettings() const { return m_networkSettings; }
    template<typename NetworkSettingsT = InputDeviceNetworkSettings>
    void SetNetworkSettings(NetworkSettingsT&& value) { m_networkSettingsHasBeenSet = true; m_networkSettings = std::forward<NetworkSettingsT>(value); }
    template<typename NetworkSettingsT = InputDeviceNetworkSettings>
    DescribeInputDeviceResult& WithNetworkSettings(NetworkSettingsT&& value) { SetNetworkSettings(std::forward<NetworkSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The unique serial number of the input device.
     */
    inline const Aws::String& GetSerialNumber() const { return m_serialNumber; }
    template<typename SerialNumberT = Aws::String>
    void SetSerialNumber(SerialNumberT&& value) { m_serialNumberHasBeenSet = true; m_serialNumber = std::forward<SerialNumberT>(value); }
    template<typename SerialNumberT = Aws::String>
    DescribeInputDeviceResult& WithSerialNumber(SerialNumberT&& value) { SetSerialNumber(std::forward<SerialNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The type of the input device.
     */
    inline InputDeviceType GetType() const { return m_type; }
    inline void SetType(InputDeviceType value) { m_typeHasBeenSet = true; m_type = value; }
    inline DescribeInputDeviceResult& WithType(InputDeviceType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * Settings that describe an input device that is type UHD.
     */
    inline const InputDeviceUhdSettings& GetUhdDeviceSettings() const { return m_uhdDeviceSettings; }
    template<typename UhdDeviceSettingsT = InputDeviceUhdSettings>
    void SetUhdDeviceSettings(UhdDeviceSettingsT&& value) { m_uhdDeviceSettingsHasBeenSet = true; m_uhdDeviceSettings = std::forward<UhdDeviceSettingsT>(value); }
    template<typename UhdDeviceSettingsT = InputDeviceUhdSettings>
    DescribeInputDeviceResult& WithUhdDeviceSettings(UhdDeviceSettingsT&& value) { SetUhdDeviceSettings(std::forward<UhdDeviceSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * A collection of key-value pairs.
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    DescribeInputDeviceResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    DescribeInputDeviceResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * The Availability Zone associated with this input device.
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    DescribeInputDeviceResult& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * An array of the ARNs for the MediaLive inputs attached to the device. Returned
     * only if the outputType is MEDIALIVE_INPUT.
     */
    inline const Aws::Vector<Aws::String>& GetMedialiveInputArns() const { return m_medialiveInputArns; }
    template<typename MedialiveInputArnsT = Aws::Vector<Aws::String>>
    void SetMedialiveInputArns(MedialiveInputArnsT&& value) { m_medialiveInputArnsHasBeenSet = true; m_medialiveInputArns = std::forward<MedialiveInputArnsT>(value); }
    template<typename MedialiveInputArnsT = Aws::Vector<Aws::String>>
    DescribeInputDeviceResult& WithMedialiveInputArns(MedialiveInputArnsT&& value) { SetMedialiveInputArns(std::forward<MedialiveInputArnsT>(value)); return *this;}
    template<typename MedialiveInputArnsT = Aws::String>
    DescribeInputDeviceResult& AddMedialiveInputArns(MedialiveInputArnsT&& value) { m_medialiveInputArnsHasBeenSet = true; m_medialiveInputArns.emplace_back(std::forward<MedialiveInputArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * The output attachment type of the input device. Specifies MEDIACONNECT_FLOW if
     * this device is the source for a MediaConnect flow. Specifies MEDIALIVE_INPUT if
     * this device is the source for a MediaLive input.
     */
    inline InputDeviceOutputType GetOutputType() const { return m_outputType; }
    inline void SetOutputType(InputDeviceOutputType value) { m_outputTypeHasBeenSet = true; m_outputType = value; }
    inline DescribeInputDeviceResult& WithOutputType(InputDeviceOutputType value) { SetOutputType(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeInputDeviceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
