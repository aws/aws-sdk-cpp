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
 * Embedded Caption Position Settings<p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/EmbeddedCaptionPositionSettings">AWS
 * API Reference</a></p>
 */
class EmbeddedCaptionPositionSettings {
 public:
  AWS_MEDIALIVE_API EmbeddedCaptionPositionSettings() = default;
  AWS_MEDIALIVE_API EmbeddedCaptionPositionSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API EmbeddedCaptionPositionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * Specifies the vertical position of the caption as a row counted from the top of
   * the output. Row 1 is the topmost row. Acceptable values are 1 through 15.
   */
  inline int GetYPositionLine() const { return m_yPositionLine; }
  inline bool YPositionLineHasBeenSet() const { return m_yPositionLineHasBeenSet; }
  inline void SetYPositionLine(int value) {
    m_yPositionLineHasBeenSet = true;
    m_yPositionLine = value;
  }
  inline EmbeddedCaptionPositionSettings& WithYPositionLine(int value) {
    SetYPositionLine(value);
    return *this;
  }
  ///@}
 private:
  int m_yPositionLine{0};
  bool m_yPositionLineHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
