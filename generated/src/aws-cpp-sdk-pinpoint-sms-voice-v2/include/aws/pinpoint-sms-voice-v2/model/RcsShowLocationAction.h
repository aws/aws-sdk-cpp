/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PinpointSMSVoiceV2 {
namespace Model {

/**
 * <p>A suggested action that shows a location on a map when tapped by the
 * recipient.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/RcsShowLocationAction">AWS
 * API Reference</a></p>
 */
class RcsShowLocationAction {
 public:
  AWS_PINPOINTSMSVOICEV2_API RcsShowLocationAction() = default;
  AWS_PINPOINTSMSVOICEV2_API RcsShowLocationAction(Aws::Utils::Json::JsonView jsonValue);
  AWS_PINPOINTSMSVOICEV2_API RcsShowLocationAction& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The display text of the action. Maximum 25 characters.</p>
   */
  inline const Aws::String& GetText() const { return m_text; }
  inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
  template <typename TextT = Aws::String>
  void SetText(TextT&& value) {
    m_textHasBeenSet = true;
    m_text = std::forward<TextT>(value);
  }
  template <typename TextT = Aws::String>
  RcsShowLocationAction& WithText(TextT&& value) {
    SetText(std::forward<TextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The postback data sent to your webhook when the user taps this action.
   * Maximum 2048 characters.</p>
   */
  inline const Aws::String& GetPostbackData() const { return m_postbackData; }
  inline bool PostbackDataHasBeenSet() const { return m_postbackDataHasBeenSet; }
  template <typename PostbackDataT = Aws::String>
  void SetPostbackData(PostbackDataT&& value) {
    m_postbackDataHasBeenSet = true;
    m_postbackData = std::forward<PostbackDataT>(value);
  }
  template <typename PostbackDataT = Aws::String>
  RcsShowLocationAction& WithPostbackData(PostbackDataT&& value) {
    SetPostbackData(std::forward<PostbackDataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The latitude of the location. Valid values are -90 to 90.</p>
   */
  inline double GetLatitude() const { return m_latitude; }
  inline bool LatitudeHasBeenSet() const { return m_latitudeHasBeenSet; }
  inline void SetLatitude(double value) {
    m_latitudeHasBeenSet = true;
    m_latitude = value;
  }
  inline RcsShowLocationAction& WithLatitude(double value) {
    SetLatitude(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The longitude of the location. Valid values are -180 to 180.</p>
   */
  inline double GetLongitude() const { return m_longitude; }
  inline bool LongitudeHasBeenSet() const { return m_longitudeHasBeenSet; }
  inline void SetLongitude(double value) {
    m_longitudeHasBeenSet = true;
    m_longitude = value;
  }
  inline RcsShowLocationAction& WithLongitude(double value) {
    SetLongitude(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional label for the location pin. Maximum 100 characters.</p>
   */
  inline const Aws::String& GetLabel() const { return m_label; }
  inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }
  template <typename LabelT = Aws::String>
  void SetLabel(LabelT&& value) {
    m_labelHasBeenSet = true;
    m_label = std::forward<LabelT>(value);
  }
  template <typename LabelT = Aws::String>
  RcsShowLocationAction& WithLabel(LabelT&& value) {
    SetLabel(std::forward<LabelT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_text;

  Aws::String m_postbackData;

  double m_latitude{0.0};

  double m_longitude{0.0};

  Aws::String m_label;
  bool m_textHasBeenSet = false;
  bool m_postbackDataHasBeenSet = false;
  bool m_latitudeHasBeenSet = false;
  bool m_longitudeHasBeenSet = false;
  bool m_labelHasBeenSet = false;
};

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
