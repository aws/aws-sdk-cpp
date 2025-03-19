/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
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
namespace Rekognition
{
namespace Model
{

  /**
   * <p>Metadata information about an audio stream. An array of
   * <code>AudioMetadata</code> objects for the audio streams found in a stored video
   * is returned by <a>GetSegmentDetection</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/AudioMetadata">AWS
   * API Reference</a></p>
   */
  class AudioMetadata
  {
  public:
    AWS_REKOGNITION_API AudioMetadata() = default;
    AWS_REKOGNITION_API AudioMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API AudioMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The audio codec used to encode or decode the audio stream. </p>
     */
    inline const Aws::String& GetCodec() const { return m_codec; }
    inline bool CodecHasBeenSet() const { return m_codecHasBeenSet; }
    template<typename CodecT = Aws::String>
    void SetCodec(CodecT&& value) { m_codecHasBeenSet = true; m_codec = std::forward<CodecT>(value); }
    template<typename CodecT = Aws::String>
    AudioMetadata& WithCodec(CodecT&& value) { SetCodec(std::forward<CodecT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration of the audio stream in milliseconds.</p>
     */
    inline long long GetDurationMillis() const { return m_durationMillis; }
    inline bool DurationMillisHasBeenSet() const { return m_durationMillisHasBeenSet; }
    inline void SetDurationMillis(long long value) { m_durationMillisHasBeenSet = true; m_durationMillis = value; }
    inline AudioMetadata& WithDurationMillis(long long value) { SetDurationMillis(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sample rate for the audio stream.</p>
     */
    inline long long GetSampleRate() const { return m_sampleRate; }
    inline bool SampleRateHasBeenSet() const { return m_sampleRateHasBeenSet; }
    inline void SetSampleRate(long long value) { m_sampleRateHasBeenSet = true; m_sampleRate = value; }
    inline AudioMetadata& WithSampleRate(long long value) { SetSampleRate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of audio channels in the segment.</p>
     */
    inline long long GetNumberOfChannels() const { return m_numberOfChannels; }
    inline bool NumberOfChannelsHasBeenSet() const { return m_numberOfChannelsHasBeenSet; }
    inline void SetNumberOfChannels(long long value) { m_numberOfChannelsHasBeenSet = true; m_numberOfChannels = value; }
    inline AudioMetadata& WithNumberOfChannels(long long value) { SetNumberOfChannels(value); return *this;}
    ///@}
  private:

    Aws::String m_codec;
    bool m_codecHasBeenSet = false;

    long long m_durationMillis{0};
    bool m_durationMillisHasBeenSet = false;

    long long m_sampleRate{0};
    bool m_sampleRateHasBeenSet = false;

    long long m_numberOfChannels{0};
    bool m_numberOfChannelsHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
