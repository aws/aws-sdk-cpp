/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>

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
   * When you include Video generator, MediaConvert creates a video input with black
   * frames. Use this setting if you do not have a video input or if you want to add
   * black video frames before, or after, other inputs. You can specify Video
   * generator, or you can specify an Input file, but you cannot specify both. For
   * more information, see
   * https://docs.aws.amazon.com/mediaconvert/latest/ug/video-generator.html<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/InputVideoGenerator">AWS
   * API Reference</a></p>
   */
  class InputVideoGenerator
  {
  public:
    AWS_MEDIACONVERT_API InputVideoGenerator() = default;
    AWS_MEDIACONVERT_API InputVideoGenerator(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API InputVideoGenerator& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Specify the number of audio channels to include in your video generator input.
     * MediaConvert creates these audio channels as silent audio within a single audio
     * track. Enter an integer from 1 to 32.
     */
    inline int GetChannels() const { return m_channels; }
    inline bool ChannelsHasBeenSet() const { return m_channelsHasBeenSet; }
    inline void SetChannels(int value) { m_channelsHasBeenSet = true; m_channels = value; }
    inline InputVideoGenerator& WithChannels(int value) { SetChannels(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the duration, in milliseconds, for your video generator input.
Enter an
     * integer from 50 to 86400000.
     */
    inline int GetDuration() const { return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(int value) { m_durationHasBeenSet = true; m_duration = value; }
    inline InputVideoGenerator& WithDuration(int value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the denominator of the fraction that represents the frame rate for your
     * video generator input. When you do, you must also specify a value for Frame rate
     * numerator. MediaConvert uses a default frame rate of 29.97 when you leave Frame
     * rate numerator and Frame rate denominator blank.
     */
    inline int GetFramerateDenominator() const { return m_framerateDenominator; }
    inline bool FramerateDenominatorHasBeenSet() const { return m_framerateDenominatorHasBeenSet; }
    inline void SetFramerateDenominator(int value) { m_framerateDenominatorHasBeenSet = true; m_framerateDenominator = value; }
    inline InputVideoGenerator& WithFramerateDenominator(int value) { SetFramerateDenominator(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the numerator of the fraction that represents the frame rate for your
     * video generator input. When you do, you must also specify a value for Frame rate
     * denominator. MediaConvert uses a default frame rate of 29.97 when you leave
     * Frame rate numerator and Frame rate denominator blank.
     */
    inline int GetFramerateNumerator() const { return m_framerateNumerator; }
    inline bool FramerateNumeratorHasBeenSet() const { return m_framerateNumeratorHasBeenSet; }
    inline void SetFramerateNumerator(int value) { m_framerateNumeratorHasBeenSet = true; m_framerateNumerator = value; }
    inline InputVideoGenerator& WithFramerateNumerator(int value) { SetFramerateNumerator(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the audio sample rate, in Hz, for the silent audio in your video
     * generator input.
Enter an integer from 32000 to 48000.
     */
    inline int GetSampleRate() const { return m_sampleRate; }
    inline bool SampleRateHasBeenSet() const { return m_sampleRateHasBeenSet; }
    inline void SetSampleRate(int value) { m_sampleRateHasBeenSet = true; m_sampleRate = value; }
    inline InputVideoGenerator& WithSampleRate(int value) { SetSampleRate(value); return *this;}
    ///@}
  private:

    int m_channels{0};
    bool m_channelsHasBeenSet = false;

    int m_duration{0};
    bool m_durationHasBeenSet = false;

    int m_framerateDenominator{0};
    bool m_framerateDenominatorHasBeenSet = false;

    int m_framerateNumerator{0};
    bool m_framerateNumeratorHasBeenSet = false;

    int m_sampleRate{0};
    bool m_sampleRateHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
