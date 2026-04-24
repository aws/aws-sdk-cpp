/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/FrameResolution.h>
#include <aws/mediaconnect/model/ScanMode.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaConnect {
namespace Model {

/**
 * <p> Detailed information about a single media stream that is part of an NDI®
 * source. This includes details about the stream type, codec, resolution, frame
 * rate, audio channels, and sample rate. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/NdiMediaStreamInfo">AWS
 * API Reference</a></p>
 */
class NdiMediaStreamInfo {
 public:
  AWS_MEDIACONNECT_API NdiMediaStreamInfo() = default;
  AWS_MEDIACONNECT_API NdiMediaStreamInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API NdiMediaStreamInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The type of media stream (for example, <code>Video</code> or
   * <code>Audio</code>). </p>
   */
  inline const Aws::String& GetStreamType() const { return m_streamType; }
  inline bool StreamTypeHasBeenSet() const { return m_streamTypeHasBeenSet; }
  template <typename StreamTypeT = Aws::String>
  void SetStreamType(StreamTypeT&& value) {
    m_streamTypeHasBeenSet = true;
    m_streamType = std::forward<StreamTypeT>(value);
  }
  template <typename StreamTypeT = Aws::String>
  NdiMediaStreamInfo& WithStreamType(StreamTypeT&& value) {
    SetStreamType(std::forward<StreamTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The codec used for the media stream. For NDI sources, use
   * <code>speed-hq</code>. </p>
   */
  inline const Aws::String& GetCodec() const { return m_codec; }
  inline bool CodecHasBeenSet() const { return m_codecHasBeenSet; }
  template <typename CodecT = Aws::String>
  void SetCodec(CodecT&& value) {
    m_codecHasBeenSet = true;
    m_codec = std::forward<CodecT>(value);
  }
  template <typename CodecT = Aws::String>
  NdiMediaStreamInfo& WithCodec(CodecT&& value) {
    SetCodec(std::forward<CodecT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> A unique identifier for the media stream. </p>
   */
  inline int GetStreamId() const { return m_streamId; }
  inline bool StreamIdHasBeenSet() const { return m_streamIdHasBeenSet; }
  inline void SetStreamId(int value) {
    m_streamIdHasBeenSet = true;
    m_streamId = value;
  }
  inline NdiMediaStreamInfo& WithStreamId(int value) {
    SetStreamId(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The method used to display video frames. Used when the
   * <code>streamType</code> is <code>Video</code>.</p>
   */
  inline ScanMode GetScanMode() const { return m_scanMode; }
  inline bool ScanModeHasBeenSet() const { return m_scanModeHasBeenSet; }
  inline void SetScanMode(ScanMode value) {
    m_scanModeHasBeenSet = true;
    m_scanMode = value;
  }
  inline NdiMediaStreamInfo& WithScanMode(ScanMode value) {
    SetScanMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The width and height dimensions of the video frame in pixels. Used when the
   * <code>streamType</code> is <code>Video</code>. </p>
   */
  inline const FrameResolution& GetFrameResolution() const { return m_frameResolution; }
  inline bool FrameResolutionHasBeenSet() const { return m_frameResolutionHasBeenSet; }
  template <typename FrameResolutionT = FrameResolution>
  void SetFrameResolution(FrameResolutionT&& value) {
    m_frameResolutionHasBeenSet = true;
    m_frameResolution = std::forward<FrameResolutionT>(value);
  }
  template <typename FrameResolutionT = FrameResolution>
  NdiMediaStreamInfo& WithFrameResolution(FrameResolutionT&& value) {
    SetFrameResolution(std::forward<FrameResolutionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The number of video frames displayed per second. Used when the
   * <code>streamType</code> is <code>Video</code>. </p>
   */
  inline const Aws::String& GetFrameRate() const { return m_frameRate; }
  inline bool FrameRateHasBeenSet() const { return m_frameRateHasBeenSet; }
  template <typename FrameRateT = Aws::String>
  void SetFrameRate(FrameRateT&& value) {
    m_frameRateHasBeenSet = true;
    m_frameRate = std::forward<FrameRateT>(value);
  }
  template <typename FrameRateT = Aws::String>
  NdiMediaStreamInfo& WithFrameRate(FrameRateT&& value) {
    SetFrameRate(std::forward<FrameRateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The number of audio channels in the stream. Used when the
   * <code>streamType</code> is <code>Audio</code>.</p>
   */
  inline int GetChannels() const { return m_channels; }
  inline bool ChannelsHasBeenSet() const { return m_channelsHasBeenSet; }
  inline void SetChannels(int value) {
    m_channelsHasBeenSet = true;
    m_channels = value;
  }
  inline NdiMediaStreamInfo& WithChannels(int value) {
    SetChannels(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The number of audio samples captured per second, measured in kilohertz
   * (kHz). Used when the <code>streamType</code> is <code>Audio</code>.</p>
   */
  inline int GetSampleRate() const { return m_sampleRate; }
  inline bool SampleRateHasBeenSet() const { return m_sampleRateHasBeenSet; }
  inline void SetSampleRate(int value) {
    m_sampleRateHasBeenSet = true;
    m_sampleRate = value;
  }
  inline NdiMediaStreamInfo& WithSampleRate(int value) {
    SetSampleRate(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_streamType;

  Aws::String m_codec;

  int m_streamId{0};

  ScanMode m_scanMode{ScanMode::NOT_SET};

  FrameResolution m_frameResolution;

  Aws::String m_frameRate;

  int m_channels{0};

  int m_sampleRate{0};
  bool m_streamTypeHasBeenSet = false;
  bool m_codecHasBeenSet = false;
  bool m_streamIdHasBeenSet = false;
  bool m_scanModeHasBeenSet = false;
  bool m_frameResolutionHasBeenSet = false;
  bool m_frameRateHasBeenSet = false;
  bool m_channelsHasBeenSet = false;
  bool m_sampleRateHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
