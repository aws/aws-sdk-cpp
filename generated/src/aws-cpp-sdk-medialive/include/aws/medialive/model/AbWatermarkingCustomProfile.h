/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaLive {
namespace Model {

/**
 * The vendor-specified custom profile options<p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/AbWatermarkingCustomProfile">AWS
 * API Reference</a></p>
 */
class AbWatermarkingCustomProfile {
 public:
  AWS_MEDIALIVE_API AbWatermarkingCustomProfile() = default;
  AWS_MEDIALIVE_API AbWatermarkingCustomProfile(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API AbWatermarkingCustomProfile& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * The frequency with which watermarks will be embedded, in milliseconds.
   */
  inline double GetEmbeddingFrequency() const { return m_embeddingFrequency; }
  inline bool EmbeddingFrequencyHasBeenSet() const { return m_embeddingFrequencyHasBeenSet; }
  inline void SetEmbeddingFrequency(double value) {
    m_embeddingFrequencyHasBeenSet = true;
    m_embeddingFrequency = value;
  }
  inline AbWatermarkingCustomProfile& WithEmbeddingFrequency(double value) {
    SetEmbeddingFrequency(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * The number of frames after scene-cut to embed the watermark.
   */
  inline double GetSceneCut() const { return m_sceneCut; }
  inline bool SceneCutHasBeenSet() const { return m_sceneCutHasBeenSet; }
  inline void SetSceneCut(double value) {
    m_sceneCutHasBeenSet = true;
    m_sceneCut = value;
  }
  inline AbWatermarkingCustomProfile& WithSceneCut(double value) {
    SetSceneCut(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * The target PSNR of the watermarked frame
   */
  inline double GetTargetPsnr() const { return m_targetPsnr; }
  inline bool TargetPsnrHasBeenSet() const { return m_targetPsnrHasBeenSet; }
  inline void SetTargetPsnr(double value) {
    m_targetPsnrHasBeenSet = true;
    m_targetPsnr = value;
  }
  inline AbWatermarkingCustomProfile& WithTargetPsnr(double value) {
    SetTargetPsnr(value);
    return *this;
  }
  ///@}
 private:
  double m_embeddingFrequency{0.0};

  double m_sceneCut{0.0};

  double m_targetPsnr{0.0};
  bool m_embeddingFrequencyHasBeenSet = false;
  bool m_sceneCutHasBeenSet = false;
  bool m_targetPsnrHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
