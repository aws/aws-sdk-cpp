/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/DtsxCodingMode.h>

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
 * Required when you set Codec to the value DTSX.<p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/DtsxSettings">AWS
 * API Reference</a></p>
 */
class DtsxSettings {
 public:
  AWS_MEDIACONVERT_API DtsxSettings() = default;
  AWS_MEDIACONVERT_API DtsxSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONVERT_API DtsxSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * Specify the average bitrate for the DTS:X Profile 2 stream, in bits per second.
   * Valid values depend on the coding mode: 160000, 192000, 224000, 256000, 288000
   * and 320000 for CODING_MODE_5_1, and 288000, 384000 and 448000 for
   * CODING_MODE_5_1_4.
   */
  inline int GetBitrate() const { return m_bitrate; }
  inline bool BitrateHasBeenSet() const { return m_bitrateHasBeenSet; }
  inline void SetBitrate(int value) {
    m_bitrateHasBeenSet = true;
    m_bitrate = value;
  }
  inline DtsxSettings& WithBitrate(int value) {
    SetBitrate(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * DTS:X coding mode. Determines the number of input channels and the channel
   * layout that the encoder emits. - CODING_MODE_5_1: 5.1 surround -
   * CODING_MODE_5_1_4: 5.1.4 immersive
   */
  inline DtsxCodingMode GetCodingMode() const { return m_codingMode; }
  inline bool CodingModeHasBeenSet() const { return m_codingModeHasBeenSet; }
  inline void SetCodingMode(DtsxCodingMode value) {
    m_codingModeHasBeenSet = true;
    m_codingMode = value;
  }
  inline DtsxSettings& WithCodingMode(DtsxCodingMode value) {
    SetCodingMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * This value must be 48000. It represents the sample rate in Hz.
   */
  inline int GetSampleRate() const { return m_sampleRate; }
  inline bool SampleRateHasBeenSet() const { return m_sampleRateHasBeenSet; }
  inline void SetSampleRate(int value) {
    m_sampleRateHasBeenSet = true;
    m_sampleRate = value;
  }
  inline DtsxSettings& WithSampleRate(int value) {
    SetSampleRate(value);
    return *this;
  }
  ///@}
 private:
  int m_bitrate{0};

  DtsxCodingMode m_codingMode{DtsxCodingMode::NOT_SET};

  int m_sampleRate{0};
  bool m_bitrateHasBeenSet = false;
  bool m_codingModeHasBeenSet = false;
  bool m_sampleRateHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
