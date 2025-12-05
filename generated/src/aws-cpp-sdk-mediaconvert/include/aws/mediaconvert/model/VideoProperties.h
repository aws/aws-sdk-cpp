/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/CodecMetadata.h>
#include <aws/mediaconvert/model/ColorPrimaries.h>
#include <aws/mediaconvert/model/FrameRate.h>
#include <aws/mediaconvert/model/MatrixCoefficients.h>
#include <aws/mediaconvert/model/TransferCharacteristics.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaConvert {
namespace Model {

/**
 * Details about the media file's video track.<p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/VideoProperties">AWS
 * API Reference</a></p>
 */
class VideoProperties {
 public:
  AWS_MEDIACONVERT_API VideoProperties() = default;
  AWS_MEDIACONVERT_API VideoProperties(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONVERT_API VideoProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * The number of bits used per color component such as 8, 10, or 12 bits. Standard
   * range (SDR) video typically uses 8-bit, while 10-bit is common for high dynamic
   * range (HDR).
   */
  inline int GetBitDepth() const { return m_bitDepth; }
  inline bool BitDepthHasBeenSet() const { return m_bitDepthHasBeenSet; }
  inline void SetBitDepth(int value) {
    m_bitDepthHasBeenSet = true;
    m_bitDepth = value;
  }
  inline VideoProperties& WithBitDepth(int value) {
    SetBitDepth(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * The bit rate of the video track, in bits per second.
   */
  inline long long GetBitRate() const { return m_bitRate; }
  inline bool BitRateHasBeenSet() const { return m_bitRateHasBeenSet; }
  inline void SetBitRate(long long value) {
    m_bitRateHasBeenSet = true;
    m_bitRate = value;
  }
  inline VideoProperties& WithBitRate(long long value) {
    SetBitRate(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Codec-specific parameters parsed from the video essence headers. This
   * information provides detailed technical specifications about how the video was
   * encoded, including profile settings, resolution details, and color space
   * information that can help you understand the source video characteristics and
   * make informed encoding decisions.
   */
  inline const CodecMetadata& GetCodecMetadata() const { return m_codecMetadata; }
  inline bool CodecMetadataHasBeenSet() const { return m_codecMetadataHasBeenSet; }
  template <typename CodecMetadataT = CodecMetadata>
  void SetCodecMetadata(CodecMetadataT&& value) {
    m_codecMetadataHasBeenSet = true;
    m_codecMetadata = std::forward<CodecMetadataT>(value);
  }
  template <typename CodecMetadataT = CodecMetadata>
  VideoProperties& WithCodecMetadata(CodecMetadataT&& value) {
    SetCodecMetadata(std::forward<CodecMetadataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * The color space primaries of the video track, defining the red, green, and blue
   * color coordinates used for the video. This information helps ensure accurate
   * color reproduction during playback and transcoding.
   */
  inline ColorPrimaries GetColorPrimaries() const { return m_colorPrimaries; }
  inline bool ColorPrimariesHasBeenSet() const { return m_colorPrimariesHasBeenSet; }
  inline void SetColorPrimaries(ColorPrimaries value) {
    m_colorPrimariesHasBeenSet = true;
    m_colorPrimaries = value;
  }
  inline VideoProperties& WithColorPrimaries(ColorPrimaries value) {
    SetColorPrimaries(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * The frame rate of the video or audio track, expressed as a fraction with
   * numerator and denominator values.
   */
  inline const FrameRate& GetFrameRate() const { return m_frameRate; }
  inline bool FrameRateHasBeenSet() const { return m_frameRateHasBeenSet; }
  template <typename FrameRateT = FrameRate>
  void SetFrameRate(FrameRateT&& value) {
    m_frameRateHasBeenSet = true;
    m_frameRate = std::forward<FrameRateT>(value);
  }
  template <typename FrameRateT = FrameRate>
  VideoProperties& WithFrameRate(FrameRateT&& value) {
    SetFrameRate(std::forward<FrameRateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * The height of the video track, in pixels.
   */
  inline int GetHeight() const { return m_height; }
  inline bool HeightHasBeenSet() const { return m_heightHasBeenSet; }
  inline void SetHeight(int value) {
    m_heightHasBeenSet = true;
    m_height = value;
  }
  inline VideoProperties& WithHeight(int value) {
    SetHeight(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * The color space matrix coefficients of the video track, defining how RGB color
   * values are converted to and from YUV color space. This affects color accuracy
   * during encoding and decoding processes.
   */
  inline MatrixCoefficients GetMatrixCoefficients() const { return m_matrixCoefficients; }
  inline bool MatrixCoefficientsHasBeenSet() const { return m_matrixCoefficientsHasBeenSet; }
  inline void SetMatrixCoefficients(MatrixCoefficients value) {
    m_matrixCoefficientsHasBeenSet = true;
    m_matrixCoefficients = value;
  }
  inline VideoProperties& WithMatrixCoefficients(MatrixCoefficients value) {
    SetMatrixCoefficients(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * The color space transfer characteristics of the video track, defining the
   * relationship between linear light values and the encoded signal values. This
   * affects brightness and contrast reproduction.
   */
  inline TransferCharacteristics GetTransferCharacteristics() const { return m_transferCharacteristics; }
  inline bool TransferCharacteristicsHasBeenSet() const { return m_transferCharacteristicsHasBeenSet; }
  inline void SetTransferCharacteristics(TransferCharacteristics value) {
    m_transferCharacteristicsHasBeenSet = true;
    m_transferCharacteristics = value;
  }
  inline VideoProperties& WithTransferCharacteristics(TransferCharacteristics value) {
    SetTransferCharacteristics(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * The width of the video track, in pixels.
   */
  inline int GetWidth() const { return m_width; }
  inline bool WidthHasBeenSet() const { return m_widthHasBeenSet; }
  inline void SetWidth(int value) {
    m_widthHasBeenSet = true;
    m_width = value;
  }
  inline VideoProperties& WithWidth(int value) {
    SetWidth(value);
    return *this;
  }
  ///@}
 private:
  int m_bitDepth{0};

  long long m_bitRate{0};

  CodecMetadata m_codecMetadata;

  ColorPrimaries m_colorPrimaries{ColorPrimaries::NOT_SET};

  FrameRate m_frameRate;

  int m_height{0};

  MatrixCoefficients m_matrixCoefficients{MatrixCoefficients::NOT_SET};

  TransferCharacteristics m_transferCharacteristics{TransferCharacteristics::NOT_SET};

  int m_width{0};
  bool m_bitDepthHasBeenSet = false;
  bool m_bitRateHasBeenSet = false;
  bool m_codecMetadataHasBeenSet = false;
  bool m_colorPrimariesHasBeenSet = false;
  bool m_frameRateHasBeenSet = false;
  bool m_heightHasBeenSet = false;
  bool m_matrixCoefficientsHasBeenSet = false;
  bool m_transferCharacteristicsHasBeenSet = false;
  bool m_widthHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
