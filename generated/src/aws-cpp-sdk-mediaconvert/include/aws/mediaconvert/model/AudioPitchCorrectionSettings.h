/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/SlowPalPitchCorrection.h>

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
 * Settings for audio pitch correction during framerate conversion.<p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/AudioPitchCorrectionSettings">AWS
 * API Reference</a></p>
 */
class AudioPitchCorrectionSettings {
 public:
  AWS_MEDIACONVERT_API AudioPitchCorrectionSettings() = default;
  AWS_MEDIACONVERT_API AudioPitchCorrectionSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONVERT_API AudioPitchCorrectionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * Use Slow PAL pitch correction to compensate for audio pitch changes during slow
   * PAL frame rate conversion. This setting only applies when Slow PAL is enabled in
   * your output video codec settings. To automatically apply audio pitch correction:
   * Choose Enabled. MediaConvert automatically applies a pitch correction to your
   * output to match the original content's audio pitch. To not apply audio pitch
   * correction: Keep the default value, Disabled.
   */
  inline SlowPalPitchCorrection GetSlowPalPitchCorrection() const { return m_slowPalPitchCorrection; }
  inline bool SlowPalPitchCorrectionHasBeenSet() const { return m_slowPalPitchCorrectionHasBeenSet; }
  inline void SetSlowPalPitchCorrection(SlowPalPitchCorrection value) {
    m_slowPalPitchCorrectionHasBeenSet = true;
    m_slowPalPitchCorrection = value;
  }
  inline AudioPitchCorrectionSettings& WithSlowPalPitchCorrection(SlowPalPitchCorrection value) {
    SetSlowPalPitchCorrection(value);
    return *this;
  }
  ///@}
 private:
  SlowPalPitchCorrection m_slowPalPitchCorrection{SlowPalPitchCorrection::NOT_SET};
  bool m_slowPalPitchCorrectionHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
