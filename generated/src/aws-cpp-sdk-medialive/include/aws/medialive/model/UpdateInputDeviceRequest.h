/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/MediaLiveRequest.h>
#include <aws/medialive/model/InputDeviceConfigurableSettings.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MediaLive
{
namespace Model
{

  /**
   * A request to update an input device.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateInputDeviceRequest">AWS
   * API Reference</a></p>
   */
  class UpdateInputDeviceRequest : public MediaLiveRequest
  {
  public:
    AWS_MEDIALIVE_API UpdateInputDeviceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateInputDevice"; }

    AWS_MEDIALIVE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * The settings that you want to apply to the HD input device.
     */
    inline const InputDeviceConfigurableSettings& GetHdDeviceSettings() const { return m_hdDeviceSettings; }
    inline bool HdDeviceSettingsHasBeenSet() const { return m_hdDeviceSettingsHasBeenSet; }
    template<typename HdDeviceSettingsT = InputDeviceConfigurableSettings>
    void SetHdDeviceSettings(HdDeviceSettingsT&& value) { m_hdDeviceSettingsHasBeenSet = true; m_hdDeviceSettings = std::forward<HdDeviceSettingsT>(value); }
    template<typename HdDeviceSettingsT = InputDeviceConfigurableSettings>
    UpdateInputDeviceRequest& WithHdDeviceSettings(HdDeviceSettingsT&& value) { SetHdDeviceSettings(std::forward<HdDeviceSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The unique ID of the input device. For example, hd-123456789abcdef.
     */
    inline const Aws::String& GetInputDeviceId() const { return m_inputDeviceId; }
    inline bool InputDeviceIdHasBeenSet() const { return m_inputDeviceIdHasBeenSet; }
    template<typename InputDeviceIdT = Aws::String>
    void SetInputDeviceId(InputDeviceIdT&& value) { m_inputDeviceIdHasBeenSet = true; m_inputDeviceId = std::forward<InputDeviceIdT>(value); }
    template<typename InputDeviceIdT = Aws::String>
    UpdateInputDeviceRequest& WithInputDeviceId(InputDeviceIdT&& value) { SetInputDeviceId(std::forward<InputDeviceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The name that you assigned to this input device (not the unique ID).
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateInputDeviceRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The settings that you want to apply to the UHD input device.
     */
    inline const InputDeviceConfigurableSettings& GetUhdDeviceSettings() const { return m_uhdDeviceSettings; }
    inline bool UhdDeviceSettingsHasBeenSet() const { return m_uhdDeviceSettingsHasBeenSet; }
    template<typename UhdDeviceSettingsT = InputDeviceConfigurableSettings>
    void SetUhdDeviceSettings(UhdDeviceSettingsT&& value) { m_uhdDeviceSettingsHasBeenSet = true; m_uhdDeviceSettings = std::forward<UhdDeviceSettingsT>(value); }
    template<typename UhdDeviceSettingsT = InputDeviceConfigurableSettings>
    UpdateInputDeviceRequest& WithUhdDeviceSettings(UhdDeviceSettingsT&& value) { SetUhdDeviceSettings(std::forward<UhdDeviceSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The Availability Zone you want associated with this input device.
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    UpdateInputDeviceRequest& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}
  private:

    InputDeviceConfigurableSettings m_hdDeviceSettings;
    bool m_hdDeviceSettingsHasBeenSet = false;

    Aws::String m_inputDeviceId;
    bool m_inputDeviceIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    InputDeviceConfigurableSettings m_uhdDeviceSettings;
    bool m_uhdDeviceSettingsHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
