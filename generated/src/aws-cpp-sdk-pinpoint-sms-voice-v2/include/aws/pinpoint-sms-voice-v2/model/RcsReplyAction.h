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
 * <p>A suggested reply action that sends predefined text and postback data when
 * tapped by the recipient.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/RcsReplyAction">AWS
 * API Reference</a></p>
 */
class RcsReplyAction {
 public:
  AWS_PINPOINTSMSVOICEV2_API RcsReplyAction() = default;
  AWS_PINPOINTSMSVOICEV2_API RcsReplyAction(Aws::Utils::Json::JsonView jsonValue);
  AWS_PINPOINTSMSVOICEV2_API RcsReplyAction& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The display text of the suggested reply. Maximum 25 characters.</p>
   */
  inline const Aws::String& GetText() const { return m_text; }
  inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
  template <typename TextT = Aws::String>
  void SetText(TextT&& value) {
    m_textHasBeenSet = true;
    m_text = std::forward<TextT>(value);
  }
  template <typename TextT = Aws::String>
  RcsReplyAction& WithText(TextT&& value) {
    SetText(std::forward<TextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The postback data sent to your webhook when the user taps this reply. Maximum
   * 2048 characters.</p>
   */
  inline const Aws::String& GetPostbackData() const { return m_postbackData; }
  inline bool PostbackDataHasBeenSet() const { return m_postbackDataHasBeenSet; }
  template <typename PostbackDataT = Aws::String>
  void SetPostbackData(PostbackDataT&& value) {
    m_postbackDataHasBeenSet = true;
    m_postbackData = std::forward<PostbackDataT>(value);
  }
  template <typename PostbackDataT = Aws::String>
  RcsReplyAction& WithPostbackData(PostbackDataT&& value) {
    SetPostbackData(std::forward<PostbackDataT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_text;

  Aws::String m_postbackData;
  bool m_textHasBeenSet = false;
  bool m_postbackDataHasBeenSet = false;
};

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
