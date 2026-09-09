/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/TextCaptionPositionSettings.h>
#include <aws/medialive/model/TtmlDestinationStyleControl.h>

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
 * Ttml Destination Settings<p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/TtmlDestinationSettings">AWS
 * API Reference</a></p>
 */
class TtmlDestinationSettings {
 public:
  AWS_MEDIALIVE_API TtmlDestinationSettings() = default;
  AWS_MEDIALIVE_API TtmlDestinationSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API TtmlDestinationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * Controls the source of style and position information for the output captions.
   * PASSTHROUGH - Preserve the style and position from the source captions.
   * USE_CONFIGURED - Don't pass through the style. The output captions will use the
   * default styling.  MANUAL - Applies the specified styling and positioning. All
   * other styling and positioning is given default values.
   */
  inline TtmlDestinationStyleControl GetStyleControl() const { return m_styleControl; }
  inline bool StyleControlHasBeenSet() const { return m_styleControlHasBeenSet; }
  inline void SetStyleControl(TtmlDestinationStyleControl value) {
    m_styleControlHasBeenSet = true;
    m_styleControl = value;
  }
  inline TtmlDestinationSettings& WithStyleControl(TtmlDestinationStyleControl value) {
    SetStyleControl(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Specifies the position of the output captions. Applies only when styleControl is
   * set to manual.
   */
  inline const TextCaptionPositionSettings& GetPosition() const { return m_position; }
  inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }
  template <typename PositionT = TextCaptionPositionSettings>
  void SetPosition(PositionT&& value) {
    m_positionHasBeenSet = true;
    m_position = std::forward<PositionT>(value);
  }
  template <typename PositionT = TextCaptionPositionSettings>
  TtmlDestinationSettings& WithPosition(PositionT&& value) {
    SetPosition(std::forward<PositionT>(value));
    return *this;
  }
  ///@}
 private:
  TtmlDestinationStyleControl m_styleControl{TtmlDestinationStyleControl::NOT_SET};

  TextCaptionPositionSettings m_position;
  bool m_styleControlHasBeenSet = false;
  bool m_positionHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
