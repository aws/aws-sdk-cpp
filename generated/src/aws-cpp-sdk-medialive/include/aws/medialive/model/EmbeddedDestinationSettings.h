/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/EmbeddedCaptionPositionSettings.h>
#include <aws/medialive/model/EmbeddedDestinationStyleControl.h>

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
 * Embedded Destination Settings<p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/EmbeddedDestinationSettings">AWS
 * API Reference</a></p>
 */
class EmbeddedDestinationSettings {
 public:
  AWS_MEDIALIVE_API EmbeddedDestinationSettings() = default;
  AWS_MEDIALIVE_API EmbeddedDestinationSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API EmbeddedDestinationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * Specifies the position of the output captions. Applies only when styleControl is
   * set to manual.
   */
  inline const EmbeddedCaptionPositionSettings& GetPosition() const { return m_position; }
  inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }
  template <typename PositionT = EmbeddedCaptionPositionSettings>
  void SetPosition(PositionT&& value) {
    m_positionHasBeenSet = true;
    m_position = std::forward<PositionT>(value);
  }
  template <typename PositionT = EmbeddedCaptionPositionSettings>
  EmbeddedDestinationSettings& WithPosition(PositionT&& value) {
    SetPosition(std::forward<PositionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * Controls the source of position and style information for the output
   * captions.

- "passthrough": Carry the caption position and style from the source
   * captions. When the source captions are embedded, SCTE-20, or ancillary, the
   * position and style are preserved exactly. When the source captions are another
   * format, the position and any supported style are carried over.
- "manual":
   * Applies the specified styling and positioning. All other styling and positioning
   * is given default values.
   */
  inline EmbeddedDestinationStyleControl GetStyleControl() const { return m_styleControl; }
  inline bool StyleControlHasBeenSet() const { return m_styleControlHasBeenSet; }
  inline void SetStyleControl(EmbeddedDestinationStyleControl value) {
    m_styleControlHasBeenSet = true;
    m_styleControl = value;
  }
  inline EmbeddedDestinationSettings& WithStyleControl(EmbeddedDestinationStyleControl value) {
    SetStyleControl(value);
    return *this;
  }
  ///@}
 private:
  EmbeddedCaptionPositionSettings m_position;

  EmbeddedDestinationStyleControl m_styleControl{EmbeddedDestinationStyleControl::NOT_SET};
  bool m_positionHasBeenSet = false;
  bool m_styleControlHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
