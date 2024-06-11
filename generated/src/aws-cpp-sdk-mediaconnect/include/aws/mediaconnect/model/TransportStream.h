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
   * The metadata of an elementary transport stream.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/TransportStream">AWS
   * API Reference</a></p>
   */
  class TransportStream
  {
  public:
    AWS_MEDIACONNECT_API TransportStream();
    AWS_MEDIACONNECT_API TransportStream(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API TransportStream& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The number of channels in the audio stream.
     */
    inline int GetChannels() const{ return m_channels; }
    inline bool ChannelsHasBeenSet() const { return m_channelsHasBeenSet; }
    inline void SetChannels(int value) { m_channelsHasBeenSet = true; m_channels = value; }
    inline TransportStream& WithChannels(int value) { SetChannels(value); return *this;}
    ///@}

    ///@{
    /**
     * The codec used by the stream.
     */
    inline const Aws::String& GetCodec() const{ return m_codec; }
    inline bool CodecHasBeenSet() const { return m_codecHasBeenSet; }
    inline void SetCodec(const Aws::String& value) { m_codecHasBeenSet = true; m_codec = value; }
    inline void SetCodec(Aws::String&& value) { m_codecHasBeenSet = true; m_codec = std::move(value); }
    inline void SetCodec(const char* value) { m_codecHasBeenSet = true; m_codec.assign(value); }
    inline TransportStream& WithCodec(const Aws::String& value) { SetCodec(value); return *this;}
    inline TransportStream& WithCodec(Aws::String&& value) { SetCodec(std::move(value)); return *this;}
    inline TransportStream& WithCodec(const char* value) { SetCodec(value); return *this;}
    ///@}

    ///@{
    /**
     * The frame rate used by the video stream.
     */
    inline const Aws::String& GetFrameRate() const{ return m_frameRate; }
    inline bool FrameRateHasBeenSet() const { return m_frameRateHasBeenSet; }
    inline void SetFrameRate(const Aws::String& value) { m_frameRateHasBeenSet = true; m_frameRate = value; }
    inline void SetFrameRate(Aws::String&& value) { m_frameRateHasBeenSet = true; m_frameRate = std::move(value); }
    inline void SetFrameRate(const char* value) { m_frameRateHasBeenSet = true; m_frameRate.assign(value); }
    inline TransportStream& WithFrameRate(const Aws::String& value) { SetFrameRate(value); return *this;}
    inline TransportStream& WithFrameRate(Aws::String&& value) { SetFrameRate(std::move(value)); return *this;}
    inline TransportStream& WithFrameRate(const char* value) { SetFrameRate(value); return *this;}
    ///@}

    ///@{
    
    inline const FrameResolution& GetFrameResolution() const{ return m_frameResolution; }
    inline bool FrameResolutionHasBeenSet() const { return m_frameResolutionHasBeenSet; }
    inline void SetFrameResolution(const FrameResolution& value) { m_frameResolutionHasBeenSet = true; m_frameResolution = value; }
    inline void SetFrameResolution(FrameResolution&& value) { m_frameResolutionHasBeenSet = true; m_frameResolution = std::move(value); }
    inline TransportStream& WithFrameResolution(const FrameResolution& value) { SetFrameResolution(value); return *this;}
    inline TransportStream& WithFrameResolution(FrameResolution&& value) { SetFrameResolution(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The Packet ID (PID) as it is reported in the Program Map Table.
     */
    inline int GetPid() const{ return m_pid; }
    inline bool PidHasBeenSet() const { return m_pidHasBeenSet; }
    inline void SetPid(int value) { m_pidHasBeenSet = true; m_pid = value; }
    inline TransportStream& WithPid(int value) { SetPid(value); return *this;}
    ///@}

    ///@{
    /**
     * The sample rate used by the audio stream.
     */
    inline int GetSampleRate() const{ return m_sampleRate; }
    inline bool SampleRateHasBeenSet() const { return m_sampleRateHasBeenSet; }
    inline void SetSampleRate(int value) { m_sampleRateHasBeenSet = true; m_sampleRate = value; }
    inline TransportStream& WithSampleRate(int value) { SetSampleRate(value); return *this;}
    ///@}

    ///@{
    /**
     * The sample bit size used by the audio stream.
     */
    inline int GetSampleSize() const{ return m_sampleSize; }
    inline bool SampleSizeHasBeenSet() const { return m_sampleSizeHasBeenSet; }
    inline void SetSampleSize(int value) { m_sampleSizeHasBeenSet = true; m_sampleSize = value; }
    inline TransportStream& WithSampleSize(int value) { SetSampleSize(value); return *this;}
    ///@}

    ///@{
    /**
     * The Stream Type as it is reported in the Program Map Table.
     */
    inline const Aws::String& GetStreamType() const{ return m_streamType; }
    inline bool StreamTypeHasBeenSet() const { return m_streamTypeHasBeenSet; }
    inline void SetStreamType(const Aws::String& value) { m_streamTypeHasBeenSet = true; m_streamType = value; }
    inline void SetStreamType(Aws::String&& value) { m_streamTypeHasBeenSet = true; m_streamType = std::move(value); }
    inline void SetStreamType(const char* value) { m_streamTypeHasBeenSet = true; m_streamType.assign(value); }
    inline TransportStream& WithStreamType(const Aws::String& value) { SetStreamType(value); return *this;}
    inline TransportStream& WithStreamType(Aws::String&& value) { SetStreamType(std::move(value)); return *this;}
    inline TransportStream& WithStreamType(const char* value) { SetStreamType(value); return *this;}
    ///@}
  private:

    int m_channels;
    bool m_channelsHasBeenSet = false;

    Aws::String m_codec;
    bool m_codecHasBeenSet = false;

    Aws::String m_frameRate;
    bool m_frameRateHasBeenSet = false;

    FrameResolution m_frameResolution;
    bool m_frameResolutionHasBeenSet = false;

    int m_pid;
    bool m_pidHasBeenSet = false;

    int m_sampleRate;
    bool m_sampleRateHasBeenSet = false;

    int m_sampleSize;
    bool m_sampleSizeHasBeenSet = false;

    Aws::String m_streamType;
    bool m_streamTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
