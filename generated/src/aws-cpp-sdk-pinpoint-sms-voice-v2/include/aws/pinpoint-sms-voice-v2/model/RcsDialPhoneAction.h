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
 * <p>A suggested action that initiates a phone call to a specified number when
 * tapped by the recipient.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/RcsDialPhoneAction">AWS
 * API Reference</a></p>
 */
class RcsDialPhoneAction {
 public:
  AWS_PINPOINTSMSVOICEV2_API RcsDialPhoneAction() = default;
  AWS_PINPOINTSMSVOICEV2_API RcsDialPhoneAction(Aws::Utils::Json::JsonView jsonValue);
  AWS_PINPOINTSMSVOICEV2_API RcsDialPhoneAction& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  RcsDialPhoneAction& WithText(TextT&& value) {
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
  RcsDialPhoneAction& WithPostbackData(PostbackDataT&& value) {
    SetPostbackData(std::forward<PostbackDataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The phone number to dial in E.164 format.</p>
   */
  inline const Aws::String& GetPhoneNumber() const { return m_phoneNumber; }
  inline bool PhoneNumberHasBeenSet() const { return m_phoneNumberHasBeenSet; }
  template <typename PhoneNumberT = Aws::String>
  void SetPhoneNumber(PhoneNumberT&& value) {
    m_phoneNumberHasBeenSet = true;
    m_phoneNumber = std::forward<PhoneNumberT>(value);
  }
  template <typename PhoneNumberT = Aws::String>
  RcsDialPhoneAction& WithPhoneNumber(PhoneNumberT&& value) {
    SetPhoneNumber(std::forward<PhoneNumberT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_text;

  Aws::String m_postbackData;

  Aws::String m_phoneNumber;
  bool m_textHasBeenSet = false;
  bool m_postbackDataHasBeenSet = false;
  bool m_phoneNumberHasBeenSet = false;
};

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
