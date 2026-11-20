/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>

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
 * Required when you set Codec to the value DTSC.<p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/DtscSettings">AWS
 * API Reference</a></p>
 */
class DtscSettings {
 public:
  AWS_MEDIACONVERT_API DtscSettings() = default;
  AWS_MEDIACONVERT_API DtscSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONVERT_API DtscSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * Specify the bitrate for the DTS Digital Surround stream, in bits per second. The
   * only valid value is 768000.
   */
  inline int GetBitrate() const { return m_bitrate; }
  inline bool BitrateHasBeenSet() const { return m_bitrateHasBeenSet; }
  inline void SetBitrate(int value) {
    m_bitrateHasBeenSet = true;
    m_bitrate = value;
  }
  inline DtscSettings& WithBitrate(int value) {
    SetBitrate(value);
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
  inline DtscSettings& WithSampleRate(int value) {
    SetSampleRate(value);
    return *this;
  }
  ///@}
 private:
  int m_bitrate{0};

  int m_sampleRate{0};
  bool m_bitrateHasBeenSet = false;
  bool m_sampleRateHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
