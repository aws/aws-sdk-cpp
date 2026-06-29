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
 * <p>A plain text RCS message body.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/RcsTextMessage">AWS
 * API Reference</a></p>
 */
class RcsTextMessage {
 public:
  AWS_PINPOINTSMSVOICEV2_API RcsTextMessage() = default;
  AWS_PINPOINTSMSVOICEV2_API RcsTextMessage(Aws::Utils::Json::JsonView jsonValue);
  AWS_PINPOINTSMSVOICEV2_API RcsTextMessage& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The text body of the RCS message. Maximum 3072 characters.</p>
   */
  inline const Aws::String& GetBody() const { return m_body; }
  inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }
  template <typename BodyT = Aws::String>
  void SetBody(BodyT&& value) {
    m_bodyHasBeenSet = true;
    m_body = std::forward<BodyT>(value);
  }
  template <typename BodyT = Aws::String>
  RcsTextMessage& WithBody(BodyT&& value) {
    SetBody(std::forward<BodyT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_body;
  bool m_bodyHasBeenSet = false;
};

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
