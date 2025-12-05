/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
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
 * Codec-specific parameters parsed from the video essence headers. This
 * information provides detailed technical specifications about how the video was
 * encoded, including profile settings, resolution details, and color space
 * information that can help you understand the source video characteristics and
 * make informed encoding decisions.<p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/CodecMetadata">AWS
 * API Reference</a></p>
 */
class CodecMetadata {
 public:
  AWS_MEDIACONVERT_API CodecMetadata() = default;
  AWS_MEDIACONVERT_API CodecMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONVERT_API CodecMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * The number of bits used per color component in the video essence such as 8, 10,
   * or 12 bits. Standard range (SDR) video typically uses 8-bit, while 10-bit is
   * common for high dynamic range (HDR).
   */
  inline int GetBitDepth() const { return m_bitDepth; }
  inline bool BitDepthHasBeenSet() const { return m_bitDepthHasBeenSet; }
  inline void SetBitDepth(int value) {
    m_bitDepthHasBeenSet = true;
    m_bitDepth = value;
  }
  inline CodecMetadata& WithBitDepth(int value) {
    SetBitDepth(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * The chroma subsampling format used in the video encoding, such as "4:2:0" or
   * "4:4:4". This describes how color information is sampled relative to brightness
   * information. Different subsampling ratios affect video quality and file size,
   * with "4:4:4" providing the highest color fidelity and "4:2:0" being most common
   * for standard video.
   */
  inline const Aws::String& GetChromaSubsampling() const { return m_chromaSubsampling; }
  inline bool ChromaSubsamplingHasBeenSet() const { return m_chromaSubsamplingHasBeenSet; }
  template <typename ChromaSubsamplingT = Aws::String>
  void SetChromaSubsampling(ChromaSubsamplingT&& value) {
    m_chromaSubsamplingHasBeenSet = true;
    m_chromaSubsampling = std::forward<ChromaSubsamplingT>(value);
  }
  template <typename ChromaSubsamplingT = Aws::String>
  CodecMetadata& WithChromaSubsampling(ChromaSubsamplingT&& value) {
    SetChromaSubsampling(std::forward<ChromaSubsamplingT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * The frame rate of the video or audio track, expressed as a fraction with
   * numerator and denominator values.
   */
  inline const FrameRate& GetCodedFrameRate() const { return m_codedFrameRate; }
  inline bool CodedFrameRateHasBeenSet() const { return m_codedFrameRateHasBeenSet; }
  template <typename CodedFrameRateT = FrameRate>
  void SetCodedFrameRate(CodedFrameRateT&& value) {
    m_codedFrameRateHasBeenSet = true;
    m_codedFrameRate = std::forward<CodedFrameRateT>(value);
  }
  template <typename CodedFrameRateT = FrameRate>
  CodecMetadata& WithCodedFrameRate(CodedFrameRateT&& value) {
    SetCodedFrameRate(std::forward<CodedFrameRateT>(value));
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
  inline CodecMetadata& WithColorPrimaries(ColorPrimaries value) {
    SetColorPrimaries(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * The height in pixels as coded by the codec. This represents the actual encoded
   * video height as specified in the video stream headers.
   */
  inline int GetHeight() const { return m_height; }
  inline bool HeightHasBeenSet() const { return m_heightHasBeenSet; }
  inline void SetHeight(int value) {
    m_heightHasBeenSet = true;
    m_height = value;
  }
  inline CodecMetadata& WithHeight(int value) {
    SetHeight(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * The codec level or tier that specifies the maximum processing requirements and
   * capabilities. Levels define constraints such as maximum bit rate, frame rate,
   * and resolution.
   */
  inline const Aws::String& GetLevel() const { return m_level; }
  inline bool LevelHasBeenSet() const { return m_levelHasBeenSet; }
  template <typename LevelT = Aws::String>
  void SetLevel(LevelT&& value) {
    m_levelHasBeenSet = true;
    m_level = std::forward<LevelT>(value);
  }
  template <typename LevelT = Aws::String>
  CodecMetadata& WithLevel(LevelT&& value) {
    SetLevel(std::forward<LevelT>(value));
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
  inline CodecMetadata& WithMatrixCoefficients(MatrixCoefficients value) {
    SetMatrixCoefficients(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * The codec profile used to encode the video. Profiles define specific feature
   * sets and capabilities within a codec standard. For example, H.264 profiles
   * include Baseline, Main, and High, each supporting different encoding features
   * and complexity levels.
   */
  inline const Aws::String& GetProfile() const { return m_profile; }
  inline bool ProfileHasBeenSet() const { return m_profileHasBeenSet; }
  template <typename ProfileT = Aws::String>
  void SetProfile(ProfileT&& value) {
    m_profileHasBeenSet = true;
    m_profile = std::forward<ProfileT>(value);
  }
  template <typename ProfileT = Aws::String>
  CodecMetadata& WithProfile(ProfileT&& value) {
    SetProfile(std::forward<ProfileT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * The scanning method specified in the video essence, indicating whether the video
   * uses progressive or interlaced scanning.
   */
  inline const Aws::String& GetScanType() const { return m_scanType; }
  inline bool ScanTypeHasBeenSet() const { return m_scanTypeHasBeenSet; }
  template <typename ScanTypeT = Aws::String>
  void SetScanType(ScanTypeT&& value) {
    m_scanTypeHasBeenSet = true;
    m_scanType = std::forward<ScanTypeT>(value);
  }
  template <typename ScanTypeT = Aws::String>
  CodecMetadata& WithScanType(ScanTypeT&& value) {
    SetScanType(std::forward<ScanTypeT>(value));
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
  inline CodecMetadata& WithTransferCharacteristics(TransferCharacteristics value) {
    SetTransferCharacteristics(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * The width in pixels as coded by the codec. This represents the actual encoded
   * video width as specified in the video stream headers.
   */
  inline int GetWidth() const { return m_width; }
  inline bool WidthHasBeenSet() const { return m_widthHasBeenSet; }
  inline void SetWidth(int value) {
    m_widthHasBeenSet = true;
    m_width = value;
  }
  inline CodecMetadata& WithWidth(int value) {
    SetWidth(value);
    return *this;
  }
  ///@}
 private:
  int m_bitDepth{0};

  Aws::String m_chromaSubsampling;

  FrameRate m_codedFrameRate;

  ColorPrimaries m_colorPrimaries{ColorPrimaries::NOT_SET};

  int m_height{0};

  Aws::String m_level;

  MatrixCoefficients m_matrixCoefficients{MatrixCoefficients::NOT_SET};

  Aws::String m_profile;

  Aws::String m_scanType;

  TransferCharacteristics m_transferCharacteristics{TransferCharacteristics::NOT_SET};

  int m_width{0};
  bool m_bitDepthHasBeenSet = false;
  bool m_chromaSubsamplingHasBeenSet = false;
  bool m_codedFrameRateHasBeenSet = false;
  bool m_colorPrimariesHasBeenSet = false;
  bool m_heightHasBeenSet = false;
  bool m_levelHasBeenSet = false;
  bool m_matrixCoefficientsHasBeenSet = false;
  bool m_profileHasBeenSet = false;
  bool m_scanTypeHasBeenSet = false;
  bool m_transferCharacteristicsHasBeenSet = false;
  bool m_widthHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
