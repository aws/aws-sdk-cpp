/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/model/FrameResolution.h>
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
namespace MediaConnect
{
namespace Model
{

  /**
   * <p> The metadata of an elementary transport stream.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/TransportStream">AWS
   * API Reference</a></p>
   */
  class TransportStream
  {
  public:
    AWS_MEDIACONNECT_API TransportStream() = default;
    AWS_MEDIACONNECT_API TransportStream(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API TransportStream& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The number of channels in the audio stream.</p>
     */
    inline int GetChannels() const { return m_channels; }
    inline bool ChannelsHasBeenSet() const { return m_channelsHasBeenSet; }
    inline void SetChannels(int value) { m_channelsHasBeenSet = true; m_channels = value; }
    inline TransportStream& WithChannels(int value) { SetChannels(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The codec used by the stream.</p>
     */
    inline const Aws::String& GetCodec() const { return m_codec; }
    inline bool CodecHasBeenSet() const { return m_codecHasBeenSet; }
    template<typename CodecT = Aws::String>
    void SetCodec(CodecT&& value) { m_codecHasBeenSet = true; m_codec = std::forward<CodecT>(value); }
    template<typename CodecT = Aws::String>
    TransportStream& WithCodec(CodecT&& value) { SetCodec(std::forward<CodecT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The frame rate used by the video stream.</p>
     */
    inline const Aws::String& GetFrameRate() const { return m_frameRate; }
    inline bool FrameRateHasBeenSet() const { return m_frameRateHasBeenSet; }
    template<typename FrameRateT = Aws::String>
    void SetFrameRate(FrameRateT&& value) { m_frameRateHasBeenSet = true; m_frameRate = std::forward<FrameRateT>(value); }
    template<typename FrameRateT = Aws::String>
    TransportStream& WithFrameRate(FrameRateT&& value) { SetFrameRate(std::forward<FrameRateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The frame resolution used by the video stream. </p>
     */
    inline const FrameResolution& GetFrameResolution() const { return m_frameResolution; }
    inline bool FrameResolutionHasBeenSet() const { return m_frameResolutionHasBeenSet; }
    template<typename FrameResolutionT = FrameResolution>
    void SetFrameResolution(FrameResolutionT&& value) { m_frameResolutionHasBeenSet = true; m_frameResolution = std::forward<FrameResolutionT>(value); }
    template<typename FrameResolutionT = FrameResolution>
    TransportStream& WithFrameResolution(FrameResolutionT&& value) { SetFrameResolution(std::forward<FrameResolutionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Packet ID (PID) as it is reported in the Program Map Table.</p>
     */
    inline int GetPid() const { return m_pid; }
    inline bool PidHasBeenSet() const { return m_pidHasBeenSet; }
    inline void SetPid(int value) { m_pidHasBeenSet = true; m_pid = value; }
    inline TransportStream& WithPid(int value) { SetPid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The sample rate used by the audio stream.</p>
     */
    inline int GetSampleRate() const { return m_sampleRate; }
    inline bool SampleRateHasBeenSet() const { return m_sampleRateHasBeenSet; }
    inline void SetSampleRate(int value) { m_sampleRateHasBeenSet = true; m_sampleRate = value; }
    inline TransportStream& WithSampleRate(int value) { SetSampleRate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The sample bit size used by the audio stream.</p>
     */
    inline int GetSampleSize() const { return m_sampleSize; }
    inline bool SampleSizeHasBeenSet() const { return m_sampleSizeHasBeenSet; }
    inline void SetSampleSize(int value) { m_sampleSizeHasBeenSet = true; m_sampleSize = value; }
    inline TransportStream& WithSampleSize(int value) { SetSampleSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Stream Type as it is reported in the Program Map Table.</p>
     */
    inline const Aws::String& GetStreamType() const { return m_streamType; }
    inline bool StreamTypeHasBeenSet() const { return m_streamTypeHasBeenSet; }
    template<typename StreamTypeT = Aws::String>
    void SetStreamType(StreamTypeT&& value) { m_streamTypeHasBeenSet = true; m_streamType = std::forward<StreamTypeT>(value); }
    template<typename StreamTypeT = Aws::String>
    TransportStream& WithStreamType(StreamTypeT&& value) { SetStreamType(std::forward<StreamTypeT>(value)); return *this;}
    ///@}
  private:

    int m_channels{0};
    bool m_channelsHasBeenSet = false;

    Aws::String m_codec;
    bool m_codecHasBeenSet = false;

    Aws::String m_frameRate;
    bool m_frameRateHasBeenSet = false;

    FrameResolution m_frameResolution;
    bool m_frameResolutionHasBeenSet = false;

    int m_pid{0};
    bool m_pidHasBeenSet = false;

    int m_sampleRate{0};
    bool m_sampleRateHasBeenSet = false;

    int m_sampleSize{0};
    bool m_sampleSizeHasBeenSet = false;

    Aws::String m_streamType;
    bool m_streamTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
