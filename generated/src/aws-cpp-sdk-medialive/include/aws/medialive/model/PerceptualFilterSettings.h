/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/PerceptualFilterStrength.h>

#include <utility>

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
 * Perceptual Filter Settings<p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/PerceptualFilterSettings">AWS
 * API Reference</a></p>
 */
class PerceptualFilterSettings {
 public:
  AWS_MEDIALIVE_API PerceptualFilterSettings() = default;
  AWS_MEDIALIVE_API PerceptualFilterSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API PerceptualFilterSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * Selects the perceptual noise filter strength. Strength 1 (perceptual lite) is
   * the recommended default and adds
approximately 30% of an AVC encode of compute
   * on the highest rendition. Strength 2 adds approximately 60% of an
AVC encode of
   * compute and can introduce slight softening on noisy content.
   */
  inline PerceptualFilterStrength GetStrength() const { return m_strength; }
  inline bool StrengthHasBeenSet() const { return m_strengthHasBeenSet; }
  inline void SetStrength(PerceptualFilterStrength value) {
    m_strengthHasBeenSet = true;
    m_strength = value;
  }
  inline PerceptualFilterSettings& WithStrength(PerceptualFilterStrength value) {
    SetStrength(value);
    return *this;
  }
  ///@}
 private:
  PerceptualFilterStrength m_strength{PerceptualFilterStrength::NOT_SET};
  bool m_strengthHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
