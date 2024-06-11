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
   * Placeholder documentation for UpdateInputDeviceResponse<p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateInputDeviceResponse">AWS
   * API Reference</a></p>
   */
  class UpdateInputDeviceResult
  {
  public:
    AWS_MEDIALIVE_API UpdateInputDeviceResult();
    AWS_MEDIALIVE_API UpdateInputDeviceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API UpdateInputDeviceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * The unique ARN of the input device.
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline UpdateInputDeviceResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline UpdateInputDeviceResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline UpdateInputDeviceResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * The state of the connection between the input device and AWS.
     */
    inline const InputDeviceConnectionState& GetConnectionState() const{ return m_connectionState; }
    inline void SetConnectionState(const InputDeviceConnectionState& value) { m_connectionState = value; }
    inline void SetConnectionState(InputDeviceConnectionState&& value) { m_connectionState = std::move(value); }
    inline UpdateInputDeviceResult& WithConnectionState(const InputDeviceConnectionState& value) { SetConnectionState(value); return *this;}
    inline UpdateInputDeviceResult& WithConnectionState(InputDeviceConnectionState&& value) { SetConnectionState(std::move(value)); return *this;}
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
    inline void SetDeviceSettingsSyncState(const DeviceSettingsSyncState& value) { m_deviceSettingsSyncState = value; }
    inline void SetDeviceSettingsSyncState(DeviceSettingsSyncState&& value) { m_deviceSettingsSyncState = std::move(value); }
    inline UpdateInputDeviceResult& WithDeviceSettingsSyncState(const DeviceSettingsSyncState& value) { SetDeviceSettingsSyncState(value); return *this;}
    inline UpdateInputDeviceResult& WithDeviceSettingsSyncState(DeviceSettingsSyncState&& value) { SetDeviceSettingsSyncState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The status of software on the input device.
     */
    inline const DeviceUpdateStatus& GetDeviceUpdateStatus() const{ return m_deviceUpdateStatus; }
    inline void SetDeviceUpdateStatus(const DeviceUpdateStatus& value) { m_deviceUpdateStatus = value; }
    inline void SetDeviceUpdateStatus(DeviceUpdateStatus&& value) { m_deviceUpdateStatus = std::move(value); }
    inline UpdateInputDeviceResult& WithDeviceUpdateStatus(const DeviceUpdateStatus& value) { SetDeviceUpdateStatus(value); return *this;}
    inline UpdateInputDeviceResult& WithDeviceUpdateStatus(DeviceUpdateStatus&& value) { SetDeviceUpdateStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Settings that describe an input device that is type HD.
     */
    inline const InputDeviceHdSettings& GetHdDeviceSettings() const{ return m_hdDeviceSettings; }
    inline void SetHdDeviceSettings(const InputDeviceHdSettings& value) { m_hdDeviceSettings = value; }
    inline void SetHdDeviceSettings(InputDeviceHdSettings&& value) { m_hdDeviceSettings = std::move(value); }
    inline UpdateInputDeviceResult& WithHdDeviceSettings(const InputDeviceHdSettings& value) { SetHdDeviceSettings(value); return *this;}
    inline UpdateInputDeviceResult& WithHdDeviceSettings(InputDeviceHdSettings&& value) { SetHdDeviceSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The unique ID of the input device.
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline UpdateInputDeviceResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline UpdateInputDeviceResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline UpdateInputDeviceResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * The network MAC address of the input device.
     */
    inline const Aws::String& GetMacAddress() const{ return m_macAddress; }
    inline void SetMacAddress(const Aws::String& value) { m_macAddress = value; }
    inline void SetMacAddress(Aws::String&& value) { m_macAddress = std::move(value); }
    inline void SetMacAddress(const char* value) { m_macAddress.assign(value); }
    inline UpdateInputDeviceResult& WithMacAddress(const Aws::String& value) { SetMacAddress(value); return *this;}
    inline UpdateInputDeviceResult& WithMacAddress(Aws::String&& value) { SetMacAddress(std::move(value)); return *this;}
    inline UpdateInputDeviceResult& WithMacAddress(const char* value) { SetMacAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * A name that you specify for the input device.
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline UpdateInputDeviceResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateInputDeviceResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateInputDeviceResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * The network settings for the input device.
     */
    inline const InputDeviceNetworkSettings& GetNetworkSettings() const{ return m_networkSettings; }
    inline void SetNetworkSettings(const InputDeviceNetworkSettings& value) { m_networkSettings = value; }
    inline void SetNetworkSettings(InputDeviceNetworkSettings&& value) { m_networkSettings = std::move(value); }
    inline UpdateInputDeviceResult& WithNetworkSettings(const InputDeviceNetworkSettings& value) { SetNetworkSettings(value); return *this;}
    inline UpdateInputDeviceResult& WithNetworkSettings(InputDeviceNetworkSettings&& value) { SetNetworkSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The unique serial number of the input device.
     */
    inline const Aws::String& GetSerialNumber() const{ return m_serialNumber; }
    inline void SetSerialNumber(const Aws::String& value) { m_serialNumber = value; }
    inline void SetSerialNumber(Aws::String&& value) { m_serialNumber = std::move(value); }
    inline void SetSerialNumber(const char* value) { m_serialNumber.assign(value); }
    inline UpdateInputDeviceResult& WithSerialNumber(const Aws::String& value) { SetSerialNumber(value); return *this;}
    inline UpdateInputDeviceResult& WithSerialNumber(Aws::String&& value) { SetSerialNumber(std::move(value)); return *this;}
    inline UpdateInputDeviceResult& WithSerialNumber(const char* value) { SetSerialNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * The type of the input device.
     */
    inline const InputDeviceType& GetType() const{ return m_type; }
    inline void SetType(const InputDeviceType& value) { m_type = value; }
    inline void SetType(InputDeviceType&& value) { m_type = std::move(value); }
    inline UpdateInputDeviceResult& WithType(const InputDeviceType& value) { SetType(value); return *this;}
    inline UpdateInputDeviceResult& WithType(InputDeviceType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Settings that describe an input device that is type UHD.
     */
    inline const InputDeviceUhdSettings& GetUhdDeviceSettings() const{ return m_uhdDeviceSettings; }
    inline void SetUhdDeviceSettings(const InputDeviceUhdSettings& value) { m_uhdDeviceSettings = value; }
    inline void SetUhdDeviceSettings(InputDeviceUhdSettings&& value) { m_uhdDeviceSettings = std::move(value); }
    inline UpdateInputDeviceResult& WithUhdDeviceSettings(const InputDeviceUhdSettings& value) { SetUhdDeviceSettings(value); return *this;}
    inline UpdateInputDeviceResult& WithUhdDeviceSettings(InputDeviceUhdSettings&& value) { SetUhdDeviceSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * A collection of key-value pairs.
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline UpdateInputDeviceResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline UpdateInputDeviceResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline UpdateInputDeviceResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline UpdateInputDeviceResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline UpdateInputDeviceResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline UpdateInputDeviceResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateInputDeviceResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline UpdateInputDeviceResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline UpdateInputDeviceResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * The Availability Zone associated with this input device.
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZone.assign(value); }
    inline UpdateInputDeviceResult& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline UpdateInputDeviceResult& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline UpdateInputDeviceResult& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * An array of the ARNs for the MediaLive inputs attached to the device. Returned
     * only if the outputType is MEDIALIVE_INPUT.
     */
    inline const Aws::Vector<Aws::String>& GetMedialiveInputArns() const{ return m_medialiveInputArns; }
    inline void SetMedialiveInputArns(const Aws::Vector<Aws::String>& value) { m_medialiveInputArns = value; }
    inline void SetMedialiveInputArns(Aws::Vector<Aws::String>&& value) { m_medialiveInputArns = std::move(value); }
    inline UpdateInputDeviceResult& WithMedialiveInputArns(const Aws::Vector<Aws::String>& value) { SetMedialiveInputArns(value); return *this;}
    inline UpdateInputDeviceResult& WithMedialiveInputArns(Aws::Vector<Aws::String>&& value) { SetMedialiveInputArns(std::move(value)); return *this;}
    inline UpdateInputDeviceResult& AddMedialiveInputArns(const Aws::String& value) { m_medialiveInputArns.push_back(value); return *this; }
    inline UpdateInputDeviceResult& AddMedialiveInputArns(Aws::String&& value) { m_medialiveInputArns.push_back(std::move(value)); return *this; }
    inline UpdateInputDeviceResult& AddMedialiveInputArns(const char* value) { m_medialiveInputArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * The output attachment type of the input device. Specifies MEDIACONNECT_FLOW if
     * this device is the source for a MediaConnect flow. Specifies MEDIALIVE_INPUT if
     * this device is the source for a MediaLive input.
     */
    inline const InputDeviceOutputType& GetOutputType() const{ return m_outputType; }
    inline void SetOutputType(const InputDeviceOutputType& value) { m_outputType = value; }
    inline void SetOutputType(InputDeviceOutputType&& value) { m_outputType = std::move(value); }
    inline UpdateInputDeviceResult& WithOutputType(const InputDeviceOutputType& value) { SetOutputType(value); return *this;}
    inline UpdateInputDeviceResult& WithOutputType(InputDeviceOutputType&& value) { SetOutputType(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateInputDeviceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateInputDeviceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateInputDeviceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    InputDeviceConnectionState m_connectionState;

    DeviceSettingsSyncState m_deviceSettingsSyncState;

    DeviceUpdateStatus m_deviceUpdateStatus;

    InputDeviceHdSettings m_hdDeviceSettings;

    Aws::String m_id;

    Aws::String m_macAddress;

    Aws::String m_name;

    InputDeviceNetworkSettings m_networkSettings;

    Aws::String m_serialNumber;

    InputDeviceType m_type;

    InputDeviceUhdSettings m_uhdDeviceSettings;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_availabilityZone;

    Aws::Vector<Aws::String> m_medialiveInputArns;

    InputDeviceOutputType m_outputType;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
