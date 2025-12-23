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
class SubmitRegistrationVersionRequest : public PinpointSMSVoiceV2Request {
 public:
  AWS_PINPOINTSMSVOICEV2_API SubmitRegistrationVersionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "SubmitRegistrationVersion"; }

  AWS_PINPOINTSMSVOICEV2_API Aws::String SerializePayload() const override;

  AWS_PINPOINTSMSVOICEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The unique identifier for the registration.</p>
   */
  inline const Aws::String& GetRegistrationId() const { return m_registrationId; }
  inline bool RegistrationIdHasBeenSet() const { return m_registrationIdHasBeenSet; }
  template <typename RegistrationIdT = Aws::String>
  void SetRegistrationId(RegistrationIdT&& value) {
    m_registrationIdHasBeenSet = true;
    m_registrationId = std::forward<RegistrationIdT>(value);
  }
  template <typename RegistrationIdT = Aws::String>
  SubmitRegistrationVersionRequest& WithRegistrationId(RegistrationIdT&& value) {
    SetRegistrationId(std::forward<RegistrationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Set to true to request AWS review of the registration. When enabled, AWS will
   * perform additional validation and review of the registration submission before
   * processing.</p>
   */
  inline bool GetAwsReview() const { return m_awsReview; }
  inline bool AwsReviewHasBeenSet() const { return m_awsReviewHasBeenSet; }
  inline void SetAwsReview(bool value) {
    m_awsReviewHasBeenSet = true;
    m_awsReview = value;
  }
  inline SubmitRegistrationVersionRequest& WithAwsReview(bool value) {
    SetAwsReview(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_registrationId;

  bool m_awsReview{false};
  bool m_registrationIdHasBeenSet = false;
  bool m_awsReviewHasBeenSet = false;
};

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
