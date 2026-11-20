/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/EmbeddedCaptionPositionSettings.h>
#include <aws/medialive/model/EmbeddedDestinationStyleControl.h>
#include <aws/medialive/model/EmbeddedModeType.h>

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

  ///@{
  /**
   * CC Channel / Service number for 608/708 encode mode. Serves as both the 608 CC
   * channel
and the 708 service number (e.g., 1 = CC1 + Service 1). Only takes
   * effect when the source
is non-embedded (teletext, smart captions, etc.) —
   * ignored in passthrough mode.

Range 1-4: valid for embedded608Only,
   * embedded708Only, or embedded608And708.
Range 5-63: valid for embedded708Only.
   */
  inline int GetCaptionServiceChannel() const { return m_captionServiceChannel; }
  inline bool CaptionServiceChannelHasBeenSet() const { return m_captionServiceChannelHasBeenSet; }
  inline void SetCaptionServiceChannel(int value) {
    m_captionServiceChannelHasBeenSet = true;
    m_captionServiceChannel = value;
  }
  inline EmbeddedDestinationSettings& WithCaptionServiceChannel(int value) {
    SetCaptionServiceChannel(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Controls what the encoder generates when in encode mode (non-embedded source →
   * embedded destination).
Ignored in passthrough mode (embedded source → embedded
   * destination).

- "embedded608Only": Generate CEA-608 CC pairs only (channel must
   * be 1-4)
- "embedded708Only": Generate CEA-708 service blocks only (channel
   * 1-63)
- "embedded608And708": Generate both 608 CC pairs and 708 service blocks
   * (channel 1-4 gets both, 5-63 gets 708 only)
   */
  inline EmbeddedModeType GetEmbeddedMode() const { return m_embeddedMode; }
  inline bool EmbeddedModeHasBeenSet() const { return m_embeddedModeHasBeenSet; }
  inline void SetEmbeddedMode(EmbeddedModeType value) {
    m_embeddedModeHasBeenSet = true;
    m_embeddedMode = value;
  }
  inline EmbeddedDestinationSettings& WithEmbeddedMode(EmbeddedModeType value) {
    SetEmbeddedMode(value);
    return *this;
  }
  ///@}
 private:
  EmbeddedCaptionPositionSettings m_position;

  EmbeddedDestinationStyleControl m_styleControl{EmbeddedDestinationStyleControl::NOT_SET};

  int m_captionServiceChannel{0};

  EmbeddedModeType m_embeddedMode{EmbeddedModeType::NOT_SET};
  bool m_positionHasBeenSet = false;
  bool m_styleControlHasBeenSet = false;
  bool m_captionServiceChannelHasBeenSet = false;
  bool m_embeddedModeHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
