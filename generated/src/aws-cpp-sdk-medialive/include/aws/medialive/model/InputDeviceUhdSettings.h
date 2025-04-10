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
#include <aws/medialive/model/InputDeviceCodec.h>
#include <aws/medialive/model/InputDeviceMediaConnectSettings.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/InputDeviceUhdAudioChannelPairConfig.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/InputDeviceUhdSettings">AWS
   * API Reference</a></p>
   */
  class InputDeviceUhdSettings
  {
  public:
    AWS_MEDIALIVE_API InputDeviceUhdSettings() = default;
    AWS_MEDIALIVE_API InputDeviceUhdSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API InputDeviceUhdSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * If you specified Auto as the configured input, specifies which of the sources is
     * currently active (SDI or HDMI).
     */
    inline InputDeviceActiveInput GetActiveInput() const { return m_activeInput; }
    inline bool ActiveInputHasBeenSet() const { return m_activeInputHasBeenSet; }
    inline void SetActiveInput(InputDeviceActiveInput value) { m_activeInputHasBeenSet = true; m_activeInput = value; }
    inline InputDeviceUhdSettings& WithActiveInput(InputDeviceActiveInput value) { SetActiveInput(value); return *this;}
    ///@}

    ///@{
    /**
     * The source at the input device that is currently active. You can specify this
     * source.
     */
    inline InputDeviceConfiguredInput GetConfiguredInput() const { return m_configuredInput; }
    inline bool ConfiguredInputHasBeenSet() const { return m_configuredInputHasBeenSet; }
    inline void SetConfiguredInput(InputDeviceConfiguredInput value) { m_configuredInputHasBeenSet = true; m_configuredInput = value; }
    inline InputDeviceUhdSettings& WithConfiguredInput(InputDeviceConfiguredInput value) { SetConfiguredInput(value); return *this;}
    ///@}

    ///@{
    /**
     * The state of the input device.
     */
    inline InputDeviceState GetDeviceState() const { return m_deviceState; }
    inline bool DeviceStateHasBeenSet() const { return m_deviceStateHasBeenSet; }
    inline void SetDeviceState(InputDeviceState value) { m_deviceStateHasBeenSet = true; m_deviceState = value; }
    inline InputDeviceUhdSettings& WithDeviceState(InputDeviceState value) { SetDeviceState(value); return *this;}
    ///@}

    ///@{
    /**
     * The frame rate of the video source.
     */
    inline double GetFramerate() const { return m_framerate; }
    inline bool FramerateHasBeenSet() const { return m_framerateHasBeenSet; }
    inline void SetFramerate(double value) { m_framerateHasBeenSet = true; m_framerate = value; }
    inline InputDeviceUhdSettings& WithFramerate(double value) { SetFramerate(value); return *this;}
    ///@}

    ///@{
    /**
     * The height of the video source, in pixels.
     */
    inline int GetHeight() const { return m_height; }
    inline bool HeightHasBeenSet() const { return m_heightHasBeenSet; }
    inline void SetHeight(int value) { m_heightHasBeenSet = true; m_height = value; }
    inline InputDeviceUhdSettings& WithHeight(int value) { SetHeight(value); return *this;}
    ///@}

    ///@{
    /**
     * The current maximum bitrate for ingesting this source, in bits per second. You
     * can specify this maximum.
     */
    inline int GetMaxBitrate() const { return m_maxBitrate; }
    inline bool MaxBitrateHasBeenSet() const { return m_maxBitrateHasBeenSet; }
    inline void SetMaxBitrate(int value) { m_maxBitrateHasBeenSet = true; m_maxBitrate = value; }
    inline InputDeviceUhdSettings& WithMaxBitrate(int value) { SetMaxBitrate(value); return *this;}
    ///@}

    ///@{
    /**
     * The scan type of the video source.
     */
    inline InputDeviceScanType GetScanType() const { return m_scanType; }
    inline bool ScanTypeHasBeenSet() const { return m_scanTypeHasBeenSet; }
    inline void SetScanType(InputDeviceScanType value) { m_scanTypeHasBeenSet = true; m_scanType = value; }
    inline InputDeviceUhdSettings& WithScanType(InputDeviceScanType value) { SetScanType(value); return *this;}
    ///@}

    ///@{
    /**
     * The width of the video source, in pixels.
     */
    inline int GetWidth() const { return m_width; }
    inline bool WidthHasBeenSet() const { return m_widthHasBeenSet; }
    inline void SetWidth(int value) { m_widthHasBeenSet = true; m_width = value; }
    inline InputDeviceUhdSettings& WithWidth(int value) { SetWidth(value); return *this;}
    ///@}

    ///@{
    /**
     * The Link device's buffer size (latency) in milliseconds (ms). You can specify
     * this value.
     */
    inline int GetLatencyMs() const { return m_latencyMs; }
    inline bool LatencyMsHasBeenSet() const { return m_latencyMsHasBeenSet; }
    inline void SetLatencyMs(int value) { m_latencyMsHasBeenSet = true; m_latencyMs = value; }
    inline InputDeviceUhdSettings& WithLatencyMs(int value) { SetLatencyMs(value); return *this;}
    ///@}

    ///@{
    /**
     * The codec for the video that the device produces.
     */
    inline InputDeviceCodec GetCodec() const { return m_codec; }
    inline bool CodecHasBeenSet() const { return m_codecHasBeenSet; }
    inline void SetCodec(InputDeviceCodec value) { m_codecHasBeenSet = true; m_codec = value; }
    inline InputDeviceUhdSettings& WithCodec(InputDeviceCodec value) { SetCodec(value); return *this;}
    ///@}

    ///@{
    /**
     * Information about the MediaConnect flow attached to the device. Returned only if
     * the outputType is MEDIACONNECT_FLOW.
     */
    inline const InputDeviceMediaConnectSettings& GetMediaconnectSettings() const { return m_mediaconnectSettings; }
    inline bool MediaconnectSettingsHasBeenSet() const { return m_mediaconnectSettingsHasBeenSet; }
    template<typename MediaconnectSettingsT = InputDeviceMediaConnectSettings>
    void SetMediaconnectSettings(MediaconnectSettingsT&& value) { m_mediaconnectSettingsHasBeenSet = true; m_mediaconnectSettings = std::forward<MediaconnectSettingsT>(value); }
    template<typename MediaconnectSettingsT = InputDeviceMediaConnectSettings>
    InputDeviceUhdSettings& WithMediaconnectSettings(MediaconnectSettingsT&& value) { SetMediaconnectSettings(std::forward<MediaconnectSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * An array of eight audio configurations, one for each audio pair in the source.
     * Each audio configuration specifies either to exclude the pair, or to format it
     * and include it in the output from the UHD device. Applies only when the device
     * is configured as the source for a MediaConnect flow.
     */
    inline const Aws::Vector<InputDeviceUhdAudioChannelPairConfig>& GetAudioChannelPairs() const { return m_audioChannelPairs; }
    inline bool AudioChannelPairsHasBeenSet() const { return m_audioChannelPairsHasBeenSet; }
    template<typename AudioChannelPairsT = Aws::Vector<InputDeviceUhdAudioChannelPairConfig>>
    void SetAudioChannelPairs(AudioChannelPairsT&& value) { m_audioChannelPairsHasBeenSet = true; m_audioChannelPairs = std::forward<AudioChannelPairsT>(value); }
    template<typename AudioChannelPairsT = Aws::Vector<InputDeviceUhdAudioChannelPairConfig>>
    InputDeviceUhdSettings& WithAudioChannelPairs(AudioChannelPairsT&& value) { SetAudioChannelPairs(std::forward<AudioChannelPairsT>(value)); return *this;}
    template<typename AudioChannelPairsT = InputDeviceUhdAudioChannelPairConfig>
    InputDeviceUhdSettings& AddAudioChannelPairs(AudioChannelPairsT&& value) { m_audioChannelPairsHasBeenSet = true; m_audioChannelPairs.emplace_back(std::forward<AudioChannelPairsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * The resolution of the Link device's source (HD or UHD). This value determines
     * MediaLive resource allocation and billing for this input.
     */
    inline const Aws::String& GetInputResolution() const { return m_inputResolution; }
    inline bool InputResolutionHasBeenSet() const { return m_inputResolutionHasBeenSet; }
    template<typename InputResolutionT = Aws::String>
    void SetInputResolution(InputResolutionT&& value) { m_inputResolutionHasBeenSet = true; m_inputResolution = std::forward<InputResolutionT>(value); }
    template<typename InputResolutionT = Aws::String>
    InputDeviceUhdSettings& WithInputResolution(InputResolutionT&& value) { SetInputResolution(std::forward<InputResolutionT>(value)); return *this;}
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

    InputDeviceCodec m_codec{InputDeviceCodec::NOT_SET};
    bool m_codecHasBeenSet = false;

    InputDeviceMediaConnectSettings m_mediaconnectSettings;
    bool m_mediaconnectSettingsHasBeenSet = false;

    Aws::Vector<InputDeviceUhdAudioChannelPairConfig> m_audioChannelPairs;
    bool m_audioChannelPairsHasBeenSet = false;

    Aws::String m_inputResolution;
    bool m_inputResolutionHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
