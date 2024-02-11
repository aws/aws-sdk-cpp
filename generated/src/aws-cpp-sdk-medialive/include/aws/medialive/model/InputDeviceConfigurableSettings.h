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
    AWS_MEDIALIVE_API InputDeviceConfigurableSettings();
    AWS_MEDIALIVE_API InputDeviceConfigurableSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API InputDeviceConfigurableSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The input source that you want to use. If the device has a source connected to
     * only one of its input ports, or if you don't care which source the device sends,
     * specify Auto. If the device has sources connected to both its input ports, and
     * you want to use a specific source, specify the source.
     */
    inline const InputDeviceConfiguredInput& GetConfiguredInput() const{ return m_configuredInput; }

    /**
     * The input source that you want to use. If the device has a source connected to
     * only one of its input ports, or if you don't care which source the device sends,
     * specify Auto. If the device has sources connected to both its input ports, and
     * you want to use a specific source, specify the source.
     */
    inline bool ConfiguredInputHasBeenSet() const { return m_configuredInputHasBeenSet; }

    /**
     * The input source that you want to use. If the device has a source connected to
     * only one of its input ports, or if you don't care which source the device sends,
     * specify Auto. If the device has sources connected to both its input ports, and
     * you want to use a specific source, specify the source.
     */
    inline void SetConfiguredInput(const InputDeviceConfiguredInput& value) { m_configuredInputHasBeenSet = true; m_configuredInput = value; }

    /**
     * The input source that you want to use. If the device has a source connected to
     * only one of its input ports, or if you don't care which source the device sends,
     * specify Auto. If the device has sources connected to both its input ports, and
     * you want to use a specific source, specify the source.
     */
    inline void SetConfiguredInput(InputDeviceConfiguredInput&& value) { m_configuredInputHasBeenSet = true; m_configuredInput = std::move(value); }

    /**
     * The input source that you want to use. If the device has a source connected to
     * only one of its input ports, or if you don't care which source the device sends,
     * specify Auto. If the device has sources connected to both its input ports, and
     * you want to use a specific source, specify the source.
     */
    inline InputDeviceConfigurableSettings& WithConfiguredInput(const InputDeviceConfiguredInput& value) { SetConfiguredInput(value); return *this;}

    /**
     * The input source that you want to use. If the device has a source connected to
     * only one of its input ports, or if you don't care which source the device sends,
     * specify Auto. If the device has sources connected to both its input ports, and
     * you want to use a specific source, specify the source.
     */
    inline InputDeviceConfigurableSettings& WithConfiguredInput(InputDeviceConfiguredInput&& value) { SetConfiguredInput(std::move(value)); return *this;}


    /**
     * The maximum bitrate in bits per second. Set a value here to throttle the bitrate
     * of the source video.
     */
    inline int GetMaxBitrate() const{ return m_maxBitrate; }

    /**
     * The maximum bitrate in bits per second. Set a value here to throttle the bitrate
     * of the source video.
     */
    inline bool MaxBitrateHasBeenSet() const { return m_maxBitrateHasBeenSet; }

    /**
     * The maximum bitrate in bits per second. Set a value here to throttle the bitrate
     * of the source video.
     */
    inline void SetMaxBitrate(int value) { m_maxBitrateHasBeenSet = true; m_maxBitrate = value; }

    /**
     * The maximum bitrate in bits per second. Set a value here to throttle the bitrate
     * of the source video.
     */
    inline InputDeviceConfigurableSettings& WithMaxBitrate(int value) { SetMaxBitrate(value); return *this;}


    /**
     * The Link device's buffer size (latency) in milliseconds (ms).
     */
    inline int GetLatencyMs() const{ return m_latencyMs; }

    /**
     * The Link device's buffer size (latency) in milliseconds (ms).
     */
    inline bool LatencyMsHasBeenSet() const { return m_latencyMsHasBeenSet; }

    /**
     * The Link device's buffer size (latency) in milliseconds (ms).
     */
    inline void SetLatencyMs(int value) { m_latencyMsHasBeenSet = true; m_latencyMs = value; }

    /**
     * The Link device's buffer size (latency) in milliseconds (ms).
     */
    inline InputDeviceConfigurableSettings& WithLatencyMs(int value) { SetLatencyMs(value); return *this;}


    /**
     * Choose the codec for the video that the device produces. Only UHD devices can
     * specify this parameter.
     */
    inline const InputDeviceCodec& GetCodec() const{ return m_codec; }

    /**
     * Choose the codec for the video that the device produces. Only UHD devices can
     * specify this parameter.
     */
    inline bool CodecHasBeenSet() const { return m_codecHasBeenSet; }

    /**
     * Choose the codec for the video that the device produces. Only UHD devices can
     * specify this parameter.
     */
    inline void SetCodec(const InputDeviceCodec& value) { m_codecHasBeenSet = true; m_codec = value; }

    /**
     * Choose the codec for the video that the device produces. Only UHD devices can
     * specify this parameter.
     */
    inline void SetCodec(InputDeviceCodec&& value) { m_codecHasBeenSet = true; m_codec = std::move(value); }

    /**
     * Choose the codec for the video that the device produces. Only UHD devices can
     * specify this parameter.
     */
    inline InputDeviceConfigurableSettings& WithCodec(const InputDeviceCodec& value) { SetCodec(value); return *this;}

    /**
     * Choose the codec for the video that the device produces. Only UHD devices can
     * specify this parameter.
     */
    inline InputDeviceConfigurableSettings& WithCodec(InputDeviceCodec&& value) { SetCodec(std::move(value)); return *this;}


    /**
     * To attach this device to a MediaConnect flow, specify these parameters. To
     * detach an existing flow, enter {} for the value of mediaconnectSettings. Only
     * UHD devices can specify this parameter.
     */
    inline const InputDeviceMediaConnectConfigurableSettings& GetMediaconnectSettings() const{ return m_mediaconnectSettings; }

    /**
     * To attach this device to a MediaConnect flow, specify these parameters. To
     * detach an existing flow, enter {} for the value of mediaconnectSettings. Only
     * UHD devices can specify this parameter.
     */
    inline bool MediaconnectSettingsHasBeenSet() const { return m_mediaconnectSettingsHasBeenSet; }

    /**
     * To attach this device to a MediaConnect flow, specify these parameters. To
     * detach an existing flow, enter {} for the value of mediaconnectSettings. Only
     * UHD devices can specify this parameter.
     */
    inline void SetMediaconnectSettings(const InputDeviceMediaConnectConfigurableSettings& value) { m_mediaconnectSettingsHasBeenSet = true; m_mediaconnectSettings = value; }

    /**
     * To attach this device to a MediaConnect flow, specify these parameters. To
     * detach an existing flow, enter {} for the value of mediaconnectSettings. Only
     * UHD devices can specify this parameter.
     */
    inline void SetMediaconnectSettings(InputDeviceMediaConnectConfigurableSettings&& value) { m_mediaconnectSettingsHasBeenSet = true; m_mediaconnectSettings = std::move(value); }

    /**
     * To attach this device to a MediaConnect flow, specify these parameters. To
     * detach an existing flow, enter {} for the value of mediaconnectSettings. Only
     * UHD devices can specify this parameter.
     */
    inline InputDeviceConfigurableSettings& WithMediaconnectSettings(const InputDeviceMediaConnectConfigurableSettings& value) { SetMediaconnectSettings(value); return *this;}

    /**
     * To attach this device to a MediaConnect flow, specify these parameters. To
     * detach an existing flow, enter {} for the value of mediaconnectSettings. Only
     * UHD devices can specify this parameter.
     */
    inline InputDeviceConfigurableSettings& WithMediaconnectSettings(InputDeviceMediaConnectConfigurableSettings&& value) { SetMediaconnectSettings(std::move(value)); return *this;}


    /**
     * An array of eight audio configurations, one for each audio pair in the source.
     * Set up each audio configuration either to exclude the pair, or to format it and
     * include it in the output from the device. This parameter applies only to UHD
     * devices, and only when the device is configured as the source for a MediaConnect
     * flow. For an HD device, you configure the audio by setting up audio selectors in
     * the channel configuration.
     */
    inline const Aws::Vector<InputDeviceConfigurableAudioChannelPairConfig>& GetAudioChannelPairs() const{ return m_audioChannelPairs; }

    /**
     * An array of eight audio configurations, one for each audio pair in the source.
     * Set up each audio configuration either to exclude the pair, or to format it and
     * include it in the output from the device. This parameter applies only to UHD
     * devices, and only when the device is configured as the source for a MediaConnect
     * flow. For an HD device, you configure the audio by setting up audio selectors in
     * the channel configuration.
     */
    inline bool AudioChannelPairsHasBeenSet() const { return m_audioChannelPairsHasBeenSet; }

    /**
     * An array of eight audio configurations, one for each audio pair in the source.
     * Set up each audio configuration either to exclude the pair, or to format it and
     * include it in the output from the device. This parameter applies only to UHD
     * devices, and only when the device is configured as the source for a MediaConnect
     * flow. For an HD device, you configure the audio by setting up audio selectors in
     * the channel configuration.
     */
    inline void SetAudioChannelPairs(const Aws::Vector<InputDeviceConfigurableAudioChannelPairConfig>& value) { m_audioChannelPairsHasBeenSet = true; m_audioChannelPairs = value; }

    /**
     * An array of eight audio configurations, one for each audio pair in the source.
     * Set up each audio configuration either to exclude the pair, or to format it and
     * include it in the output from the device. This parameter applies only to UHD
     * devices, and only when the device is configured as the source for a MediaConnect
     * flow. For an HD device, you configure the audio by setting up audio selectors in
     * the channel configuration.
     */
    inline void SetAudioChannelPairs(Aws::Vector<InputDeviceConfigurableAudioChannelPairConfig>&& value) { m_audioChannelPairsHasBeenSet = true; m_audioChannelPairs = std::move(value); }

    /**
     * An array of eight audio configurations, one for each audio pair in the source.
     * Set up each audio configuration either to exclude the pair, or to format it and
     * include it in the output from the device. This parameter applies only to UHD
     * devices, and only when the device is configured as the source for a MediaConnect
     * flow. For an HD device, you configure the audio by setting up audio selectors in
     * the channel configuration.
     */
    inline InputDeviceConfigurableSettings& WithAudioChannelPairs(const Aws::Vector<InputDeviceConfigurableAudioChannelPairConfig>& value) { SetAudioChannelPairs(value); return *this;}

    /**
     * An array of eight audio configurations, one for each audio pair in the source.
     * Set up each audio configuration either to exclude the pair, or to format it and
     * include it in the output from the device. This parameter applies only to UHD
     * devices, and only when the device is configured as the source for a MediaConnect
     * flow. For an HD device, you configure the audio by setting up audio selectors in
     * the channel configuration.
     */
    inline InputDeviceConfigurableSettings& WithAudioChannelPairs(Aws::Vector<InputDeviceConfigurableAudioChannelPairConfig>&& value) { SetAudioChannelPairs(std::move(value)); return *this;}

    /**
     * An array of eight audio configurations, one for each audio pair in the source.
     * Set up each audio configuration either to exclude the pair, or to format it and
     * include it in the output from the device. This parameter applies only to UHD
     * devices, and only when the device is configured as the source for a MediaConnect
     * flow. For an HD device, you configure the audio by setting up audio selectors in
     * the channel configuration.
     */
    inline InputDeviceConfigurableSettings& AddAudioChannelPairs(const InputDeviceConfigurableAudioChannelPairConfig& value) { m_audioChannelPairsHasBeenSet = true; m_audioChannelPairs.push_back(value); return *this; }

    /**
     * An array of eight audio configurations, one for each audio pair in the source.
     * Set up each audio configuration either to exclude the pair, or to format it and
     * include it in the output from the device. This parameter applies only to UHD
     * devices, and only when the device is configured as the source for a MediaConnect
     * flow. For an HD device, you configure the audio by setting up audio selectors in
     * the channel configuration.
     */
    inline InputDeviceConfigurableSettings& AddAudioChannelPairs(InputDeviceConfigurableAudioChannelPairConfig&& value) { m_audioChannelPairsHasBeenSet = true; m_audioChannelPairs.push_back(std::move(value)); return *this; }

  private:

    InputDeviceConfiguredInput m_configuredInput;
    bool m_configuredInputHasBeenSet = false;

    int m_maxBitrate;
    bool m_maxBitrateHasBeenSet = false;

    int m_latencyMs;
    bool m_latencyMsHasBeenSet = false;

    InputDeviceCodec m_codec;
    bool m_codecHasBeenSet = false;

    InputDeviceMediaConnectConfigurableSettings m_mediaconnectSettings;
    bool m_mediaconnectSettingsHasBeenSet = false;

    Aws::Vector<InputDeviceConfigurableAudioChannelPairConfig> m_audioChannelPairs;
    bool m_audioChannelPairsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
