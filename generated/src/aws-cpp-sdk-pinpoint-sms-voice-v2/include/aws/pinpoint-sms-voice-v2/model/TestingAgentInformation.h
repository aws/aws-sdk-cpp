/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/model/TestingAgentStatus.h>

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
 * <p>Contains details about the testing agent associated with an RCS
 * agent.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/TestingAgentInformation">AWS
 * API Reference</a></p>
 */
class TestingAgentInformation {
 public:
  AWS_PINPOINTSMSVOICEV2_API TestingAgentInformation() = default;
  AWS_PINPOINTSMSVOICEV2_API TestingAgentInformation(Aws::Utils::Json::JsonView jsonValue);
  AWS_PINPOINTSMSVOICEV2_API TestingAgentInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The current status of the testing agent.</p>
   */
  inline TestingAgentStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(TestingAgentStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline TestingAgentInformation& WithStatus(TestingAgentStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier for the testing agent.</p>
   */
  inline const Aws::String& GetTestingAgentId() const { return m_testingAgentId; }
  inline bool TestingAgentIdHasBeenSet() const { return m_testingAgentIdHasBeenSet; }
  template <typename TestingAgentIdT = Aws::String>
  void SetTestingAgentId(TestingAgentIdT&& value) {
    m_testingAgentIdHasBeenSet = true;
    m_testingAgentId = std::forward<TestingAgentIdT>(value);
  }
  template <typename TestingAgentIdT = Aws::String>
  TestingAgentInformation& WithTestingAgentId(TestingAgentIdT&& value) {
    SetTestingAgentId(std::forward<TestingAgentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the registration associated with the testing
   * agent.</p>
   */
  inline const Aws::String& GetRegistrationId() const { return m_registrationId; }
  inline bool RegistrationIdHasBeenSet() const { return m_registrationIdHasBeenSet; }
  template <typename RegistrationIdT = Aws::String>
  void SetRegistrationId(RegistrationIdT&& value) {
    m_registrationIdHasBeenSet = true;
    m_registrationId = std::forward<RegistrationIdT>(value);
  }
  template <typename RegistrationIdT = Aws::String>
  TestingAgentInformation& WithRegistrationId(RegistrationIdT&& value) {
    SetRegistrationId(std::forward<RegistrationIdT>(value));
    return *this;
  }
  ///@}
 private:
  TestingAgentStatus m_status{TestingAgentStatus::NOT_SET};

  Aws::String m_testingAgentId;

  Aws::String m_registrationId;
  bool m_statusHasBeenSet = false;
  bool m_testingAgentIdHasBeenSet = false;
  bool m_registrationIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
