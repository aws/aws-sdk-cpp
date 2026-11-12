/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/ColorInformation.h>
#include <aws/mediaconnect/model/FrameResolution.h>
#include <aws/mediaconnect/model/ScanMode.h>
#include <aws/mediaconnect/model/SourceMediaStreamType.h>

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
 * <p>Information about a single audio or video stream that is part of an RTMP
 * source. This includes details about the stream type, codec, resolution, frame
 * rate, audio channels, and sample rate.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/RtmpMediaStreamInfo">AWS
 * API Reference</a></p>
 */
class RtmpMediaStreamInfo {
 public:
  AWS_MEDIACONNECT_API RtmpMediaStreamInfo() = default;
  AWS_MEDIACONNECT_API RtmpMediaStreamInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API RtmpMediaStreamInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A unique identifier for the stream.</p>
   */
  inline int GetStreamId() const { return m_streamId; }
  inline bool StreamIdHasBeenSet() const { return m_streamIdHasBeenSet; }
  inline void SetStreamId(int value) {
    m_streamIdHasBeenSet = true;
    m_streamId = value;
  }
  inline RtmpMediaStreamInfo& WithStreamId(int value) {
    SetStreamId(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of stream (for example, <code>VIDEO</code> or
   * <code>AUDIO</code>).</p>
   */
  inline SourceMediaStreamType GetStreamType() const { return m_streamType; }
  inline bool StreamTypeHasBeenSet() const { return m_streamTypeHasBeenSet; }
  inline void SetStreamType(SourceMediaStreamType value) {
    m_streamTypeHasBeenSet = true;
    m_streamType = value;
  }
  inline RtmpMediaStreamInfo& WithStreamType(SourceMediaStreamType value) {
    SetStreamType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The codec used for the stream.</p>
   */
  inline const Aws::String& GetCodec() const { return m_codec; }
  inline bool CodecHasBeenSet() const { return m_codecHasBeenSet; }
  template <typename CodecT = Aws::String>
  void SetCodec(CodecT&& value) {
    m_codecHasBeenSet = true;
    m_codec = std::forward<CodecT>(value);
  }
  template <typename CodecT = Aws::String>
  RtmpMediaStreamInfo& WithCodec(CodecT&& value) {
    SetCodec(std::forward<CodecT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of video frames displayed per second. Used when the
   * <code>streamType</code> is <code>VIDEO</code>.</p>
   */
  inline const Aws::String& GetFrameRate() const { return m_frameRate; }
  inline bool FrameRateHasBeenSet() const { return m_frameRateHasBeenSet; }
  template <typename FrameRateT = Aws::String>
  void SetFrameRate(FrameRateT&& value) {
    m_frameRateHasBeenSet = true;
    m_frameRate = std::forward<FrameRateT>(value);
  }
  template <typename FrameRateT = Aws::String>
  RtmpMediaStreamInfo& WithFrameRate(FrameRateT&& value) {
    SetFrameRate(std::forward<FrameRateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The width and height dimensions of the video frame in pixels. Used when the
   * <code>streamType</code> is <code>VIDEO</code>.</p>
   */
  inline const FrameResolution& GetFrameResolution() const { return m_frameResolution; }
  inline bool FrameResolutionHasBeenSet() const { return m_frameResolutionHasBeenSet; }
  template <typename FrameResolutionT = FrameResolution>
  void SetFrameResolution(FrameResolutionT&& value) {
    m_frameResolutionHasBeenSet = true;
    m_frameResolution = std::forward<FrameResolutionT>(value);
  }
  template <typename FrameResolutionT = FrameResolution>
  RtmpMediaStreamInfo& WithFrameResolution(FrameResolutionT&& value) {
    SetFrameResolution(std::forward<FrameResolutionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The method used to display video frames. Used when the
   * <code>streamType</code> is <code>VIDEO</code>.</p>
   */
  inline ScanMode GetScanMode() const { return m_scanMode; }
  inline bool ScanModeHasBeenSet() const { return m_scanModeHasBeenSet; }
  inline void SetScanMode(ScanMode value) {
    m_scanModeHasBeenSet = true;
    m_scanMode = value;
  }
  inline RtmpMediaStreamInfo& WithScanMode(ScanMode value) {
    SetScanMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The color signaling of the video stream. Used when the
   * <code>streamType</code> is <code>VIDEO</code>.</p>
   */
  inline const ColorInformation& GetColor() const { return m_color; }
  inline bool ColorHasBeenSet() const { return m_colorHasBeenSet; }
  template <typename ColorT = ColorInformation>
  void SetColor(ColorT&& value) {
    m_colorHasBeenSet = true;
    m_color = std::forward<ColorT>(value);
  }
  template <typename ColorT = ColorInformation>
  RtmpMediaStreamInfo& WithColor(ColorT&& value) {
    SetColor(std::forward<ColorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of audio channels in the stream. Used when the
   * <code>streamType</code> is <code>AUDIO</code>.</p>
   */
  inline int GetChannels() const { return m_channels; }
  inline bool ChannelsHasBeenSet() const { return m_channelsHasBeenSet; }
  inline void SetChannels(int value) {
    m_channelsHasBeenSet = true;
    m_channels = value;
  }
  inline RtmpMediaStreamInfo& WithChannels(int value) {
    SetChannels(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of audio samples captured per second. Used when the
   * <code>streamType</code> is <code>AUDIO</code>.</p>
   */
  inline int GetSampleRate() const { return m_sampleRate; }
  inline bool SampleRateHasBeenSet() const { return m_sampleRateHasBeenSet; }
  inline void SetSampleRate(int value) {
    m_sampleRateHasBeenSet = true;
    m_sampleRate = value;
  }
  inline RtmpMediaStreamInfo& WithSampleRate(int value) {
    SetSampleRate(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The sample bit size used by the audio stream. Used when the
   * <code>streamType</code> is <code>AUDIO</code>.</p>
   */
  inline int GetSampleSize() const { return m_sampleSize; }
  inline bool SampleSizeHasBeenSet() const { return m_sampleSizeHasBeenSet; }
  inline void SetSampleSize(int value) {
    m_sampleSizeHasBeenSet = true;
    m_sampleSize = value;
  }
  inline RtmpMediaStreamInfo& WithSampleSize(int value) {
    SetSampleSize(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The language of the audio stream. Used when the <code>streamType</code> is
   * <code>AUDIO</code>.</p>
   */
  inline const Aws::String& GetLanguage() const { return m_language; }
  inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }
  template <typename LanguageT = Aws::String>
  void SetLanguage(LanguageT&& value) {
    m_languageHasBeenSet = true;
    m_language = std::forward<LanguageT>(value);
  }
  template <typename LanguageT = Aws::String>
  RtmpMediaStreamInfo& WithLanguage(LanguageT&& value) {
    SetLanguage(std::forward<LanguageT>(value));
    return *this;
  }
  ///@}
 private:
  int m_streamId{0};

  SourceMediaStreamType m_streamType{SourceMediaStreamType::NOT_SET};

  Aws::String m_codec;

  Aws::String m_frameRate;

  FrameResolution m_frameResolution;

  ScanMode m_scanMode{ScanMode::NOT_SET};

  ColorInformation m_color;

  int m_channels{0};

  int m_sampleRate{0};

  int m_sampleSize{0};

  Aws::String m_language;
  bool m_streamIdHasBeenSet = false;
  bool m_streamTypeHasBeenSet = false;
  bool m_codecHasBeenSet = false;
  bool m_frameRateHasBeenSet = false;
  bool m_frameResolutionHasBeenSet = false;
  bool m_scanModeHasBeenSet = false;
  bool m_colorHasBeenSet = false;
  bool m_channelsHasBeenSet = false;
  bool m_sampleRateHasBeenSet = false;
  bool m_sampleSizeHasBeenSet = false;
  bool m_languageHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
