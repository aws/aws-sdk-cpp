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
 * Text Caption Position Settings<p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/TextCaptionPositionSettings">AWS
 * API Reference</a></p>
 */
class TextCaptionPositionSettings {
 public:
  AWS_MEDIALIVE_API TextCaptionPositionSettings() = default;
  AWS_MEDIALIVE_API TextCaptionPositionSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API TextCaptionPositionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * Specifies the vertical position of the top edge of the caption relative to the
   * top of the output as a percentage. A value of 0 places the caption at the top of
   * the output and 100 at the bottom.
   */
  inline int GetYPositionPercentage() const { return m_yPositionPercentage; }
  inline bool YPositionPercentageHasBeenSet() const { return m_yPositionPercentageHasBeenSet; }
  inline void SetYPositionPercentage(int value) {
    m_yPositionPercentageHasBeenSet = true;
    m_yPositionPercentage = value;
  }
  inline TextCaptionPositionSettings& WithYPositionPercentage(int value) {
    SetYPositionPercentage(value);
    return *this;
  }
  ///@}
 private:
  int m_yPositionPercentage{0};
  bool m_yPositionPercentageHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
