/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/InputDeviceConfiguredInput.h>
#include <aws/medialive/model/InputDeviceCodec.h>
#include <aws/medialive/model/InputDeviceMediaConnectConfigurableSettings.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/InputDeviceConfigurableAudioChannelPairConfig.h>
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
   * Configurable settings for the input device.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/InputDeviceConfigurableSettings">AWS
   * API Reference</a></p>
   */
  class InputDeviceConfigurableSettings
  {
  public:
    AWS_MEDIALIVE_API InputDeviceConfigurableSettings() = default;
    AWS_MEDIALIVE_API InputDeviceConfigurableSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API InputDeviceConfigurableSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The input source that you want to use. If the device has a source connected to
     * only one of its input ports, or if you don't care which source the device sends,
     * specify Auto. If the device has sources connected to both its input ports, and
     * you want to use a specific source, specify the source.
     */
    inline InputDeviceConfiguredInput GetConfiguredInput() const { return m_configuredInput; }
    inline bool ConfiguredInputHasBeenSet() const { return m_configuredInputHasBeenSet; }
    inline void SetConfiguredInput(InputDeviceConfiguredInput value) { m_configuredInputHasBeenSet = true; m_configuredInput = value; }
    inline InputDeviceConfigurableSettings& WithConfiguredInput(InputDeviceConfiguredInput value) { SetConfiguredInput(value); return *this;}
    ///@}

    ///@{
    /**
     * The maximum bitrate in bits per second. Set a value here to throttle the bitrate
     * of the source video.
     */
    inline int GetMaxBitrate() const { return m_maxBitrate; }
    inline bool MaxBitrateHasBeenSet() const { return m_maxBitrateHasBeenSet; }
    inline void SetMaxBitrate(int value) { m_maxBitrateHasBeenSet = true; m_maxBitrate = value; }
    inline InputDeviceConfigurableSettings& WithMaxBitrate(int value) { SetMaxBitrate(value); return *this;}
    ///@}

    ///@{
    /**
     * The Link device's buffer size (latency) in milliseconds (ms).
     */
    inline int GetLatencyMs() const { return m_latencyMs; }
    inline bool LatencyMsHasBeenSet() const { return m_latencyMsHasBeenSet; }
    inline void SetLatencyMs(int value) { m_latencyMsHasBeenSet = true; m_latencyMs = value; }
    inline InputDeviceConfigurableSettings& WithLatencyMs(int value) { SetLatencyMs(value); return *this;}
    ///@}

    ///@{
    /**
     * Choose the codec for the video that the device produces. Only UHD devices can
     * specify this parameter.
     */
    inline InputDeviceCodec GetCodec() const { return m_codec; }
    inline bool CodecHasBeenSet() const { return m_codecHasBeenSet; }
    inline void SetCodec(InputDeviceCodec value) { m_codecHasBeenSet = true; m_codec = value; }
    inline InputDeviceConfigurableSettings& WithCodec(InputDeviceCodec value) { SetCodec(value); return *this;}
    ///@}

    ///@{
    /**
     * To attach this device to a MediaConnect flow, specify these parameters. To
     * detach an existing flow, enter {} for the value of mediaconnectSettings. Only
     * UHD devices can specify this parameter.
     */
    inline const InputDeviceMediaConnectConfigurableSettings& GetMediaconnectSettings() const { return m_mediaconnectSettings; }
    inline bool MediaconnectSettingsHasBeenSet() const { return m_mediaconnectSettingsHasBeenSet; }
    template<typename MediaconnectSettingsT = InputDeviceMediaConnectConfigurableSettings>
    void SetMediaconnectSettings(MediaconnectSettingsT&& value) { m_mediaconnectSettingsHasBeenSet = true; m_mediaconnectSettings = std::forward<MediaconnectSettingsT>(value); }
    template<typename MediaconnectSettingsT = InputDeviceMediaConnectConfigurableSettings>
    InputDeviceConfigurableSettings& WithMediaconnectSettings(MediaconnectSettingsT&& value) { SetMediaconnectSettings(std::forward<MediaconnectSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * An array of eight audio configurations, one for each audio pair in the source.
     * Set up each audio configuration either to exclude the pair, or to format it and
     * include it in the output from the device. This parameter applies only to UHD
     * devices, and only when the device is configured as the source for a MediaConnect
     * flow. For an HD device, you configure the audio by setting up audio selectors in
     * the channel configuration.
     */
    inline const Aws::Vector<InputDeviceConfigurableAudioChannelPairConfig>& GetAudioChannelPairs() const { return m_audioChannelPairs; }
    inline bool AudioChannelPairsHasBeenSet() const { return m_audioChannelPairsHasBeenSet; }
    template<typename AudioChannelPairsT = Aws::Vector<InputDeviceConfigurableAudioChannelPairConfig>>
    void SetAudioChannelPairs(AudioChannelPairsT&& value) { m_audioChannelPairsHasBeenSet = true; m_audioChannelPairs = std::forward<AudioChannelPairsT>(value); }
    template<typename AudioChannelPairsT = Aws::Vector<InputDeviceConfigurableAudioChannelPairConfig>>
    InputDeviceConfigurableSettings& WithAudioChannelPairs(AudioChannelPairsT&& value) { SetAudioChannelPairs(std::forward<AudioChannelPairsT>(value)); return *this;}
    template<typename AudioChannelPairsT = InputDeviceConfigurableAudioChannelPairConfig>
    InputDeviceConfigurableSettings& AddAudioChannelPairs(AudioChannelPairsT&& value) { m_audioChannelPairsHasBeenSet = true; m_audioChannelPairs.emplace_back(std::forward<AudioChannelPairsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * Choose the resolution of the Link device's source (HD or UHD). Make sure the
     * resolution matches the current source from the device. This value determines
     * MediaLive resource allocation and billing for this input. Only UHD devices can
     * specify this parameter.
     */
    inline const Aws::String& GetInputResolution() const { return m_inputResolution; }
    inline bool InputResolutionHasBeenSet() const { return m_inputResolutionHasBeenSet; }
    template<typename InputResolutionT = Aws::String>
    void SetInputResolution(InputResolutionT&& value) { m_inputResolutionHasBeenSet = true; m_inputResolution = std::forward<InputResolutionT>(value); }
    template<typename InputResolutionT = Aws::String>
    InputDeviceConfigurableSettings& WithInputResolution(InputResolutionT&& value) { SetInputResolution(std::forward<InputResolutionT>(value)); return *this;}
    ///@}
  private:

    InputDeviceConfiguredInput m_configuredInput{InputDeviceConfiguredInput::NOT_SET};
    bool m_configuredInputHasBeenSet = false;

    int m_maxBitrate{0};
    bool m_maxBitrateHasBeenSet = false;

    int m_latencyMs{0};
    bool m_latencyMsHasBeenSet = false;

    InputDeviceCodec m_codec{InputDeviceCodec::NOT_SET};
    bool m_codecHasBeenSet = false;

    InputDeviceMediaConnectConfigurableSettings m_mediaconnectSettings;
    bool m_mediaconnectSettingsHasBeenSet = false;

    Aws::Vector<InputDeviceConfigurableAudioChannelPairConfig> m_audioChannelPairs;
    bool m_audioChannelPairsHasBeenSet = false;

    Aws::String m_inputResolution;
    bool m_inputResolutionHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
