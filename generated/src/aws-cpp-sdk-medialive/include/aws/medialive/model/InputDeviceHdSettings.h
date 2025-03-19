/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/InputDeviceActiveInput.h>
#include <aws/medialive/model/InputDeviceConfiguredInput.h>
#include <aws/medialive/model/InputDeviceState.h>
#include <aws/medialive/model/InputDeviceScanType.h>
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
   * Settings that describe the active source from the input device, and the video
   * characteristics of that source.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/InputDeviceHdSettings">AWS
   * API Reference</a></p>
   */
  class InputDeviceHdSettings
  {
  public:
    AWS_MEDIALIVE_API InputDeviceHdSettings() = default;
    AWS_MEDIALIVE_API InputDeviceHdSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API InputDeviceHdSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * If you specified Auto as the configured input, specifies which of the sources is
     * currently active (SDI or HDMI).
     */
    inline InputDeviceActiveInput GetActiveInput() const { return m_activeInput; }
    inline bool ActiveInputHasBeenSet() const { return m_activeInputHasBeenSet; }
    inline void SetActiveInput(InputDeviceActiveInput value) { m_activeInputHasBeenSet = true; m_activeInput = value; }
    inline InputDeviceHdSettings& WithActiveInput(InputDeviceActiveInput value) { SetActiveInput(value); return *this;}
    ///@}

    ///@{
    /**
     * The source at the input device that is currently active. You can specify this
     * source.
     */
    inline InputDeviceConfiguredInput GetConfiguredInput() const { return m_configuredInput; }
    inline bool ConfiguredInputHasBeenSet() const { return m_configuredInputHasBeenSet; }
    inline void SetConfiguredInput(InputDeviceConfiguredInput value) { m_configuredInputHasBeenSet = true; m_configuredInput = value; }
    inline InputDeviceHdSettings& WithConfiguredInput(InputDeviceConfiguredInput value) { SetConfiguredInput(value); return *this;}
    ///@}

    ///@{
    /**
     * The state of the input device.
     */
    inline InputDeviceState GetDeviceState() const { return m_deviceState; }
    inline bool DeviceStateHasBeenSet() const { return m_deviceStateHasBeenSet; }
    inline void SetDeviceState(InputDeviceState value) { m_deviceStateHasBeenSet = true; m_deviceState = value; }
    inline InputDeviceHdSettings& WithDeviceState(InputDeviceState value) { SetDeviceState(value); return *this;}
    ///@}

    ///@{
    /**
     * The frame rate of the video source.
     */
    inline double GetFramerate() const { return m_framerate; }
    inline bool FramerateHasBeenSet() const { return m_framerateHasBeenSet; }
    inline void SetFramerate(double value) { m_framerateHasBeenSet = true; m_framerate = value; }
    inline InputDeviceHdSettings& WithFramerate(double value) { SetFramerate(value); return *this;}
    ///@}

    ///@{
    /**
     * The height of the video source, in pixels.
     */
    inline int GetHeight() const { return m_height; }
    inline bool HeightHasBeenSet() const { return m_heightHasBeenSet; }
    inline void SetHeight(int value) { m_heightHasBeenSet = true; m_height = value; }
    inline InputDeviceHdSettings& WithHeight(int value) { SetHeight(value); return *this;}
    ///@}

    ///@{
    /**
     * The current maximum bitrate for ingesting this source, in bits per second. You
     * can specify this maximum.
     */
    inline int GetMaxBitrate() const { return m_maxBitrate; }
    inline bool MaxBitrateHasBeenSet() const { return m_maxBitrateHasBeenSet; }
    inline void SetMaxBitrate(int value) { m_maxBitrateHasBeenSet = true; m_maxBitrate = value; }
    inline InputDeviceHdSettings& WithMaxBitrate(int value) { SetMaxBitrate(value); return *this;}
    ///@}

    ///@{
    /**
     * The scan type of the video source.
     */
    inline InputDeviceScanType GetScanType() const { return m_scanType; }
    inline bool ScanTypeHasBeenSet() const { return m_scanTypeHasBeenSet; }
    inline void SetScanType(InputDeviceScanType value) { m_scanTypeHasBeenSet = true; m_scanType = value; }
    inline InputDeviceHdSettings& WithScanType(InputDeviceScanType value) { SetScanType(value); return *this;}
    ///@}

    ///@{
    /**
     * The width of the video source, in pixels.
     */
    inline int GetWidth() const { return m_width; }
    inline bool WidthHasBeenSet() const { return m_widthHasBeenSet; }
    inline void SetWidth(int value) { m_widthHasBeenSet = true; m_width = value; }
    inline InputDeviceHdSettings& WithWidth(int value) { SetWidth(value); return *this;}
    ///@}

    ///@{
    /**
     * The Link device's buffer size (latency) in milliseconds (ms). You can specify
     * this value.
     */
    inline int GetLatencyMs() const { return m_latencyMs; }
    inline bool LatencyMsHasBeenSet() const { return m_latencyMsHasBeenSet; }
    inline void SetLatencyMs(int value) { m_latencyMsHasBeenSet = true; m_latencyMs = value; }
    inline InputDeviceHdSettings& WithLatencyMs(int value) { SetLatencyMs(value); return *this;}
    ///@}
  private:

    InputDeviceActiveInput m_activeInput{InputDeviceActiveInput::NOT_SET};
    bool m_activeInputHasBeenSet = false;

    InputDeviceConfiguredInput m_configuredInput{InputDeviceConfiguredInput::NOT_SET};
    bool m_configuredInputHasBeenSet = false;

    InputDeviceState m_deviceState{InputDeviceState::NOT_SET};
    bool m_deviceStateHasBeenSet = false;

    double m_framerate{0.0};
    bool m_framerateHasBeenSet = false;

    int m_height{0};
    bool m_heightHasBeenSet = false;

    int m_maxBitrate{0};
    bool m_maxBitrateHasBeenSet = false;

    InputDeviceScanType m_scanType{InputDeviceScanType::NOT_SET};
    bool m_scanTypeHasBeenSet = false;

    int m_width{0};
    bool m_widthHasBeenSet = false;

    int m_latencyMs{0};
    bool m_latencyMsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
