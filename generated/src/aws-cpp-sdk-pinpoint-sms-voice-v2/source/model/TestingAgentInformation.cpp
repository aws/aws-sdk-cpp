/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pinpoint-sms-voice-v2/model/TestingAgentInformation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PinpointSMSVoiceV2 {
namespace Model {

TestingAgentInformation::TestingAgentInformation(JsonView jsonValue) { *this = jsonValue; }

TestingAgentInformation& TestingAgentInformation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Status")) {
    m_status = TestingAgentStatusMapper::GetTestingAgentStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TestingAgentId")) {
    m_testingAgentId = jsonValue.GetString("TestingAgentId");
    m_testingAgentIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RegistrationId")) {
    m_registrationId = jsonValue.GetString("RegistrationId");
    m_registrationIdHasBeenSet = true;
  }
  return *this;
}

JsonValue TestingAgentInformation::Jsonize() const {
  JsonValue payload;

  if (m_statusHasBeenSet) {
    payload.WithString("Status", TestingAgentStatusMapper::GetNameForTestingAgentStatus(m_status));
  }

  if (m_testingAgentIdHasBeenSet) {
    payload.WithString("TestingAgentId", m_testingAgentId);
  }

  if (m_registrationIdHasBeenSet) {
    payload.WithString("RegistrationId", m_registrationId);
  }

  return payload;
}

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
