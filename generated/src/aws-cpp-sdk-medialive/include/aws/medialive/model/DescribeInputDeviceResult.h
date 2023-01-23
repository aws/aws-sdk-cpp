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
    AWS_MEDIALIVE_API DescribeInputDeviceResult();
    AWS_MEDIALIVE_API DescribeInputDeviceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API DescribeInputDeviceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * The unique ARN of the input device.
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * The unique ARN of the input device.
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * The unique ARN of the input device.
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * The unique ARN of the input device.
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * The unique ARN of the input device.
     */
    inline DescribeInputDeviceResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * The unique ARN of the input device.
     */
    inline DescribeInputDeviceResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * The unique ARN of the input device.
     */
    inline DescribeInputDeviceResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * The state of the connection between the input device and AWS.
     */
    inline const InputDeviceConnectionState& GetConnectionState() const{ return m_connectionState; }

    /**
     * The state of the connection between the input device and AWS.
     */
    inline void SetConnectionState(const InputDeviceConnectionState& value) { m_connectionState = value; }

    /**
     * The state of the connection between the input device and AWS.
     */
    inline void SetConnectionState(InputDeviceConnectionState&& value) { m_connectionState = std::move(value); }

    /**
     * The state of the connection between the input device and AWS.
     */
    inline DescribeInputDeviceResult& WithConnectionState(const InputDeviceConnectionState& value) { SetConnectionState(value); return *this;}

    /**
     * The state of the connection between the input device and AWS.
     */
    inline DescribeInputDeviceResult& WithConnectionState(InputDeviceConnectionState&& value) { SetConnectionState(std::move(value)); return *this;}


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
    inline void SetDeviceSettingsSyncState(const DeviceSettingsSyncState& value) { m_deviceSettingsSyncState = value; }

    /**
     * The status of the action to synchronize the device configuration. If you change
     * the configuration of the input device (for example, the maximum bitrate),
     * MediaLive sends the new data to the device. The device might not update itself
     * immediately. SYNCED means the device has updated its configuration. SYNCING
     * means that it has not updated its configuration.
     */
    inline void SetDeviceSettingsSyncState(DeviceSettingsSyncState&& value) { m_deviceSettingsSyncState = std::move(value); }

    /**
     * The status of the action to synchronize the device configuration. If you change
     * the configuration of the input device (for example, the maximum bitrate),
     * MediaLive sends the new data to the device. The device might not update itself
     * immediately. SYNCED means the device has updated its configuration. SYNCING
     * means that it has not updated its configuration.
     */
    inline DescribeInputDeviceResult& WithDeviceSettingsSyncState(const DeviceSettingsSyncState& value) { SetDeviceSettingsSyncState(value); return *this;}

    /**
     * The status of the action to synchronize the device configuration. If you change
     * the configuration of the input device (for example, the maximum bitrate),
     * MediaLive sends the new data to the device. The device might not update itself
     * immediately. SYNCED means the device has updated its configuration. SYNCING
     * means that it has not updated its configuration.
     */
    inline DescribeInputDeviceResult& WithDeviceSettingsSyncState(DeviceSettingsSyncState&& value) { SetDeviceSettingsSyncState(std::move(value)); return *this;}


    /**
     * The status of software on the input device.
     */
    inline const DeviceUpdateStatus& GetDeviceUpdateStatus() const{ return m_deviceUpdateStatus; }

    /**
     * The status of software on the input device.
     */
    inline void SetDeviceUpdateStatus(const DeviceUpdateStatus& value) { m_deviceUpdateStatus = value; }

    /**
     * The status of software on the input device.
     */
    inline void SetDeviceUpdateStatus(DeviceUpdateStatus&& value) { m_deviceUpdateStatus = std::move(value); }

    /**
     * The status of software on the input device.
     */
    inline DescribeInputDeviceResult& WithDeviceUpdateStatus(const DeviceUpdateStatus& value) { SetDeviceUpdateStatus(value); return *this;}

    /**
     * The status of software on the input device.
     */
    inline DescribeInputDeviceResult& WithDeviceUpdateStatus(DeviceUpdateStatus&& value) { SetDeviceUpdateStatus(std::move(value)); return *this;}


    /**
     * Settings that describe an input device that is type HD.
     */
    inline const InputDeviceHdSettings& GetHdDeviceSettings() const{ return m_hdDeviceSettings; }

    /**
     * Settings that describe an input device that is type HD.
     */
    inline void SetHdDeviceSettings(const InputDeviceHdSettings& value) { m_hdDeviceSettings = value; }

    /**
     * Settings that describe an input device that is type HD.
     */
    inline void SetHdDeviceSettings(InputDeviceHdSettings&& value) { m_hdDeviceSettings = std::move(value); }

    /**
     * Settings that describe an input device that is type HD.
     */
    inline DescribeInputDeviceResult& WithHdDeviceSettings(const InputDeviceHdSettings& value) { SetHdDeviceSettings(value); return *this;}

    /**
     * Settings that describe an input device that is type HD.
     */
    inline DescribeInputDeviceResult& WithHdDeviceSettings(InputDeviceHdSettings&& value) { SetHdDeviceSettings(std::move(value)); return *this;}


    /**
     * The unique ID of the input device.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * The unique ID of the input device.
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * The unique ID of the input device.
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * The unique ID of the input device.
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * The unique ID of the input device.
     */
    inline DescribeInputDeviceResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * The unique ID of the input device.
     */
    inline DescribeInputDeviceResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * The unique ID of the input device.
     */
    inline DescribeInputDeviceResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * The network MAC address of the input device.
     */
    inline const Aws::String& GetMacAddress() const{ return m_macAddress; }

    /**
     * The network MAC address of the input device.
     */
    inline void SetMacAddress(const Aws::String& value) { m_macAddress = value; }

    /**
     * The network MAC address of the input device.
     */
    inline void SetMacAddress(Aws::String&& value) { m_macAddress = std::move(value); }

    /**
     * The network MAC address of the input device.
     */
    inline void SetMacAddress(const char* value) { m_macAddress.assign(value); }

    /**
     * The network MAC address of the input device.
     */
    inline DescribeInputDeviceResult& WithMacAddress(const Aws::String& value) { SetMacAddress(value); return *this;}

    /**
     * The network MAC address of the input device.
     */
    inline DescribeInputDeviceResult& WithMacAddress(Aws::String&& value) { SetMacAddress(std::move(value)); return *this;}

    /**
     * The network MAC address of the input device.
     */
    inline DescribeInputDeviceResult& WithMacAddress(const char* value) { SetMacAddress(value); return *this;}


    /**
     * A name that you specify for the input device.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * A name that you specify for the input device.
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * A name that you specify for the input device.
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * A name that you specify for the input device.
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * A name that you specify for the input device.
     */
    inline DescribeInputDeviceResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * A name that you specify for the input device.
     */
    inline DescribeInputDeviceResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * A name that you specify for the input device.
     */
    inline DescribeInputDeviceResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * The network settings for the input device.
     */
    inline const InputDeviceNetworkSettings& GetNetworkSettings() const{ return m_networkSettings; }

    /**
     * The network settings for the input device.
     */
    inline void SetNetworkSettings(const InputDeviceNetworkSettings& value) { m_networkSettings = value; }

    /**
     * The network settings for the input device.
     */
    inline void SetNetworkSettings(InputDeviceNetworkSettings&& value) { m_networkSettings = std::move(value); }

    /**
     * The network settings for the input device.
     */
    inline DescribeInputDeviceResult& WithNetworkSettings(const InputDeviceNetworkSettings& value) { SetNetworkSettings(value); return *this;}

    /**
     * The network settings for the input device.
     */
    inline DescribeInputDeviceResult& WithNetworkSettings(InputDeviceNetworkSettings&& value) { SetNetworkSettings(std::move(value)); return *this;}


    /**
     * The unique serial number of the input device.
     */
    inline const Aws::String& GetSerialNumber() const{ return m_serialNumber; }

    /**
     * The unique serial number of the input device.
     */
    inline void SetSerialNumber(const Aws::String& value) { m_serialNumber = value; }

    /**
     * The unique serial number of the input device.
     */
    inline void SetSerialNumber(Aws::String&& value) { m_serialNumber = std::move(value); }

    /**
     * The unique serial number of the input device.
     */
    inline void SetSerialNumber(const char* value) { m_serialNumber.assign(value); }

    /**
     * The unique serial number of the input device.
     */
    inline DescribeInputDeviceResult& WithSerialNumber(const Aws::String& value) { SetSerialNumber(value); return *this;}

    /**
     * The unique serial number of the input device.
     */
    inline DescribeInputDeviceResult& WithSerialNumber(Aws::String&& value) { SetSerialNumber(std::move(value)); return *this;}

    /**
     * The unique serial number of the input device.
     */
    inline DescribeInputDeviceResult& WithSerialNumber(const char* value) { SetSerialNumber(value); return *this;}


    /**
     * The type of the input device.
     */
    inline const InputDeviceType& GetType() const{ return m_type; }

    /**
     * The type of the input device.
     */
    inline void SetType(const InputDeviceType& value) { m_type = value; }

    /**
     * The type of the input device.
     */
    inline void SetType(InputDeviceType&& value) { m_type = std::move(value); }

    /**
     * The type of the input device.
     */
    inline DescribeInputDeviceResult& WithType(const InputDeviceType& value) { SetType(value); return *this;}

    /**
     * The type of the input device.
     */
    inline DescribeInputDeviceResult& WithType(InputDeviceType&& value) { SetType(std::move(value)); return *this;}


    /**
     * Settings that describe an input device that is type UHD.
     */
    inline const InputDeviceUhdSettings& GetUhdDeviceSettings() const{ return m_uhdDeviceSettings; }

    /**
     * Settings that describe an input device that is type UHD.
     */
    inline void SetUhdDeviceSettings(const InputDeviceUhdSettings& value) { m_uhdDeviceSettings = value; }

    /**
     * Settings that describe an input device that is type UHD.
     */
    inline void SetUhdDeviceSettings(InputDeviceUhdSettings&& value) { m_uhdDeviceSettings = std::move(value); }

    /**
     * Settings that describe an input device that is type UHD.
     */
    inline DescribeInputDeviceResult& WithUhdDeviceSettings(const InputDeviceUhdSettings& value) { SetUhdDeviceSettings(value); return *this;}

    /**
     * Settings that describe an input device that is type UHD.
     */
    inline DescribeInputDeviceResult& WithUhdDeviceSettings(InputDeviceUhdSettings&& value) { SetUhdDeviceSettings(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
