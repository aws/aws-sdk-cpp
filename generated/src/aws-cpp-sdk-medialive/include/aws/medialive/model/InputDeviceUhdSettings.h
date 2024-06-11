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
    AWS_MEDIALIVE_API InputDeviceUhdSettings();
    AWS_MEDIALIVE_API InputDeviceUhdSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API InputDeviceUhdSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * If you specified Auto as the configured input, specifies which of the sources is
     * currently active (SDI or HDMI).
     */
    inline const InputDeviceActiveInput& GetActiveInput() const{ return m_activeInput; }
    inline bool ActiveInputHasBeenSet() const { return m_activeInputHasBeenSet; }
    inline void SetActiveInput(const InputDeviceActiveInput& value) { m_activeInputHasBeenSet = true; m_activeInput = value; }
    inline void SetActiveInput(InputDeviceActiveInput&& value) { m_activeInputHasBeenSet = true; m_activeInput = std::move(value); }
    inline InputDeviceUhdSettings& WithActiveInput(const InputDeviceActiveInput& value) { SetActiveInput(value); return *this;}
    inline InputDeviceUhdSettings& WithActiveInput(InputDeviceActiveInput&& value) { SetActiveInput(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The source at the input device that is currently active. You can specify this
     * source.
     */
    inline const InputDeviceConfiguredInput& GetConfiguredInput() const{ return m_configuredInput; }
    inline bool ConfiguredInputHasBeenSet() const { return m_configuredInputHasBeenSet; }
    inline void SetConfiguredInput(const InputDeviceConfiguredInput& value) { m_configuredInputHasBeenSet = true; m_configuredInput = value; }
    inline void SetConfiguredInput(InputDeviceConfiguredInput&& value) { m_configuredInputHasBeenSet = true; m_configuredInput = std::move(value); }
    inline InputDeviceUhdSettings& WithConfiguredInput(const InputDeviceConfiguredInput& value) { SetConfiguredInput(value); return *this;}
    inline InputDeviceUhdSettings& WithConfiguredInput(InputDeviceConfiguredInput&& value) { SetConfiguredInput(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The state of the input device.
     */
    inline const InputDeviceState& GetDeviceState() const{ return m_deviceState; }
    inline bool DeviceStateHasBeenSet() const { return m_deviceStateHasBeenSet; }
    inline void SetDeviceState(const InputDeviceState& value) { m_deviceStateHasBeenSet = true; m_deviceState = value; }
    inline void SetDeviceState(InputDeviceState&& value) { m_deviceStateHasBeenSet = true; m_deviceState = std::move(value); }
    inline InputDeviceUhdSettings& WithDeviceState(const InputDeviceState& value) { SetDeviceState(value); return *this;}
    inline InputDeviceUhdSettings& WithDeviceState(InputDeviceState&& value) { SetDeviceState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The frame rate of the video source.
     */
    inline double GetFramerate() const{ return m_framerate; }
    inline bool FramerateHasBeenSet() const { return m_framerateHasBeenSet; }
    inline void SetFramerate(double value) { m_framerateHasBeenSet = true; m_framerate = value; }
    inline InputDeviceUhdSettings& WithFramerate(double value) { SetFramerate(value); return *this;}
    ///@}

    ///@{
    /**
     * The height of the video source, in pixels.
     */
    inline int GetHeight() const{ return m_height; }
    inline bool HeightHasBeenSet() const { return m_heightHasBeenSet; }
    inline void SetHeight(int value) { m_heightHasBeenSet = true; m_height = value; }
    inline InputDeviceUhdSettings& WithHeight(int value) { SetHeight(value); return *this;}
    ///@}

    ///@{
    /**
     * The current maximum bitrate for ingesting this source, in bits per second. You
     * can specify this maximum.
     */
    inline int GetMaxBitrate() const{ return m_maxBitrate; }
    inline bool MaxBitrateHasBeenSet() const { return m_maxBitrateHasBeenSet; }
    inline void SetMaxBitrate(int value) { m_maxBitrateHasBeenSet = true; m_maxBitrate = value; }
    inline InputDeviceUhdSettings& WithMaxBitrate(int value) { SetMaxBitrate(value); return *this;}
    ///@}

    ///@{
    /**
     * The scan type of the video source.
     */
    inline const InputDeviceScanType& GetScanType() const{ return m_scanType; }
    inline bool ScanTypeHasBeenSet() const { return m_scanTypeHasBeenSet; }
    inline void SetScanType(const InputDeviceScanType& value) { m_scanTypeHasBeenSet = true; m_scanType = value; }
    inline void SetScanType(InputDeviceScanType&& value) { m_scanTypeHasBeenSet = true; m_scanType = std::move(value); }
    inline InputDeviceUhdSettings& WithScanType(const InputDeviceScanType& value) { SetScanType(value); return *this;}
    inline InputDeviceUhdSettings& WithScanType(InputDeviceScanType&& value) { SetScanType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The width of the video source, in pixels.
     */
    inline int GetWidth() const{ return m_width; }
    inline bool WidthHasBeenSet() const { return m_widthHasBeenSet; }
    inline void SetWidth(int value) { m_widthHasBeenSet = true; m_width = value; }
    inline InputDeviceUhdSettings& WithWidth(int value) { SetWidth(value); return *this;}
    ///@}

    ///@{
    /**
     * The Link device's buffer size (latency) in milliseconds (ms). You can specify
     * this value.
     */
    inline int GetLatencyMs() const{ return m_latencyMs; }
    inline bool LatencyMsHasBeenSet() const { return m_latencyMsHasBeenSet; }
    inline void SetLatencyMs(int value) { m_latencyMsHasBeenSet = true; m_latencyMs = value; }
    inline InputDeviceUhdSettings& WithLatencyMs(int value) { SetLatencyMs(value); return *this;}
    ///@}

    ///@{
    /**
     * The codec for the video that the device produces.
     */
    inline const InputDeviceCodec& GetCodec() const{ return m_codec; }
    inline bool CodecHasBeenSet() const { return m_codecHasBeenSet; }
    inline void SetCodec(const InputDeviceCodec& value) { m_codecHasBeenSet = true; m_codec = value; }
    inline void SetCodec(InputDeviceCodec&& value) { m_codecHasBeenSet = true; m_codec = std::move(value); }
    inline InputDeviceUhdSettings& WithCodec(const InputDeviceCodec& value) { SetCodec(value); return *this;}
    inline InputDeviceUhdSettings& WithCodec(InputDeviceCodec&& value) { SetCodec(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Information about the MediaConnect flow attached to the device. Returned only if
     * the outputType is MEDIACONNECT_FLOW.
     */
    inline const InputDeviceMediaConnectSettings& GetMediaconnectSettings() const{ return m_mediaconnectSettings; }
    inline bool MediaconnectSettingsHasBeenSet() const { return m_mediaconnectSettingsHasBeenSet; }
    inline void SetMediaconnectSettings(const InputDeviceMediaConnectSettings& value) { m_mediaconnectSettingsHasBeenSet = true; m_mediaconnectSettings = value; }
    inline void SetMediaconnectSettings(InputDeviceMediaConnectSettings&& value) { m_mediaconnectSettingsHasBeenSet = true; m_mediaconnectSettings = std::move(value); }
    inline InputDeviceUhdSettings& WithMediaconnectSettings(const InputDeviceMediaConnectSettings& value) { SetMediaconnectSettings(value); return *this;}
    inline InputDeviceUhdSettings& WithMediaconnectSettings(InputDeviceMediaConnectSettings&& value) { SetMediaconnectSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * An array of eight audio configurations, one for each audio pair in the source.
     * Each audio configuration specifies either to exclude the pair, or to format it
     * and include it in the output from the UHD device. Applies only when the device
     * is configured as the source for a MediaConnect flow.
     */
    inline const Aws::Vector<InputDeviceUhdAudioChannelPairConfig>& GetAudioChannelPairs() const{ return m_audioChannelPairs; }
    inline bool AudioChannelPairsHasBeenSet() const { return m_audioChannelPairsHasBeenSet; }
    inline void SetAudioChannelPairs(const Aws::Vector<InputDeviceUhdAudioChannelPairConfig>& value) { m_audioChannelPairsHasBeenSet = true; m_audioChannelPairs = value; }
    inline void SetAudioChannelPairs(Aws::Vector<InputDeviceUhdAudioChannelPairConfig>&& value) { m_audioChannelPairsHasBeenSet = true; m_audioChannelPairs = std::move(value); }
    inline InputDeviceUhdSettings& WithAudioChannelPairs(const Aws::Vector<InputDeviceUhdAudioChannelPairConfig>& value) { SetAudioChannelPairs(value); return *this;}
    inline InputDeviceUhdSettings& WithAudioChannelPairs(Aws::Vector<InputDeviceUhdAudioChannelPairConfig>&& value) { SetAudioChannelPairs(std::move(value)); return *this;}
    inline InputDeviceUhdSettings& AddAudioChannelPairs(const InputDeviceUhdAudioChannelPairConfig& value) { m_audioChannelPairsHasBeenSet = true; m_audioChannelPairs.push_back(value); return *this; }
    inline InputDeviceUhdSettings& AddAudioChannelPairs(InputDeviceUhdAudioChannelPairConfig&& value) { m_audioChannelPairsHasBeenSet = true; m_audioChannelPairs.push_back(std::move(value)); return *this; }
    ///@}
  private:

    InputDeviceActiveInput m_activeInput;
    bool m_activeInputHasBeenSet = false;

    InputDeviceConfiguredInput m_configuredInput;
    bool m_configuredInputHasBeenSet = false;

    InputDeviceState m_deviceState;
    bool m_deviceStateHasBeenSet = false;

    double m_framerate;
    bool m_framerateHasBeenSet = false;

    int m_height;
    bool m_heightHasBeenSet = false;

    int m_maxBitrate;
    bool m_maxBitrateHasBeenSet = false;

    InputDeviceScanType m_scanType;
    bool m_scanTypeHasBeenSet = false;

    int m_width;
    bool m_widthHasBeenSet = false;

    int m_latencyMs;
    bool m_latencyMsHasBeenSet = false;

    InputDeviceCodec m_codec;
    bool m_codecHasBeenSet = false;

    InputDeviceMediaConnectSettings m_mediaconnectSettings;
    bool m_mediaconnectSettingsHasBeenSet = false;

    Aws::Vector<InputDeviceUhdAudioChannelPairConfig> m_audioChannelPairs;
    bool m_audioChannelPairsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
