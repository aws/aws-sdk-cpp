/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2Request.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace PinpointSMSVoiceV2 {
namespace Model {

/**
 */
class CarrierLookupRequest : public PinpointSMSVoiceV2Request {
 public:
  AWS_PINPOINTSMSVOICEV2_API CarrierLookupRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CarrierLookup"; }

  AWS_PINPOINTSMSVOICEV2_API Aws::String SerializePayload() const override;

  AWS_PINPOINTSMSVOICEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The phone number that you want to retrieve information about. You can provide
   * the phone number in various formats including special characters such as
   * parentheses, brackets, spaces, hyphens, periods, and commas. The service
   * automatically converts the input to E164 format for processing.</p>
   */
  inline const Aws::String& GetPhoneNumber() const { return m_phoneNumber; }
  inline bool PhoneNumberHasBeenSet() const { return m_phoneNumberHasBeenSet; }
  template <typename PhoneNumberT = Aws::String>
  void SetPhoneNumber(PhoneNumberT&& value) {
    m_phoneNumberHasBeenSet = true;
    m_phoneNumber = std::forward<PhoneNumberT>(value);
  }
  template <typename PhoneNumberT = Aws::String>
  CarrierLookupRequest& WithPhoneNumber(PhoneNumberT&& value) {
    SetPhoneNumber(std::forward<PhoneNumberT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_phoneNumber;
  bool m_phoneNumberHasBeenSet = false;
};

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
