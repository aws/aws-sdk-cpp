/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/FrameRate.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * Properties specific to audio tracks.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/AudioProperties">AWS
   * API Reference</a></p>
   */
  class AudioProperties
  {
  public:
    AWS_MEDIACONVERT_API AudioProperties() = default;
    AWS_MEDIACONVERT_API AudioProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API AudioProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The bit depth of the audio track.
     */
    inline int GetBitDepth() const { return m_bitDepth; }
    inline bool BitDepthHasBeenSet() const { return m_bitDepthHasBeenSet; }
    inline void SetBitDepth(int value) { m_bitDepthHasBeenSet = true; m_bitDepth = value; }
    inline AudioProperties& WithBitDepth(int value) { SetBitDepth(value); return *this;}
    ///@}

    ///@{
    /**
     * The bit rate of the audio track in bits per second.
     */
    inline int GetBitRate() const { return m_bitRate; }
    inline bool BitRateHasBeenSet() const { return m_bitRateHasBeenSet; }
    inline void SetBitRate(int value) { m_bitRateHasBeenSet = true; m_bitRate = value; }
    inline AudioProperties& WithBitRate(int value) { SetBitRate(value); return *this;}
    ///@}

    ///@{
    /**
     * The number of audio channels.
     */
    inline int GetChannels() const { return m_channels; }
    inline bool ChannelsHasBeenSet() const { return m_channelsHasBeenSet; }
    inline void SetChannels(int value) { m_channelsHasBeenSet = true; m_channels = value; }
    inline AudioProperties& WithChannels(int value) { SetChannels(value); return *this;}
    ///@}

    ///@{
    /**
     * the calculated frame rate of the asset.
     */
    inline const FrameRate& GetFrameRate() const { return m_frameRate; }
    inline bool FrameRateHasBeenSet() const { return m_frameRateHasBeenSet; }
    template<typename FrameRateT = FrameRate>
    void SetFrameRate(FrameRateT&& value) { m_frameRateHasBeenSet = true; m_frameRate = std::forward<FrameRateT>(value); }
    template<typename FrameRateT = FrameRate>
    AudioProperties& WithFrameRate(FrameRateT&& value) { SetFrameRate(std::forward<FrameRateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * the language code of the track
     */
    inline const Aws::String& GetLanguageCode() const { return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    template<typename LanguageCodeT = Aws::String>
    void SetLanguageCode(LanguageCodeT&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::forward<LanguageCodeT>(value); }
    template<typename LanguageCodeT = Aws::String>
    AudioProperties& WithLanguageCode(LanguageCodeT&& value) { SetLanguageCode(std::forward<LanguageCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The sample rate of the audio track.
     */
    inline int GetSampleRate() const { return m_sampleRate; }
    inline bool SampleRateHasBeenSet() const { return m_sampleRateHasBeenSet; }
    inline void SetSampleRate(int value) { m_sampleRateHasBeenSet = true; m_sampleRate = value; }
    inline AudioProperties& WithSampleRate(int value) { SetSampleRate(value); return *this;}
    ///@}
  private:

    int m_bitDepth{0};
    bool m_bitDepthHasBeenSet = false;

    int m_bitRate{0};
    bool m_bitRateHasBeenSet = false;

    int m_channels{0};
    bool m_channelsHasBeenSet = false;

    FrameRate m_frameRate;
    bool m_frameRateHasBeenSet = false;

    Aws::String m_languageCode;
    bool m_languageCodeHasBeenSet = false;

    int m_sampleRate{0};
    bool m_sampleRateHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
