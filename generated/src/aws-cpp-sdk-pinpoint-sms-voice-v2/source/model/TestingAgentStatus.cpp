/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/pinpoint-sms-voice-v2/model/TestingAgentStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace PinpointSMSVoiceV2 {
namespace Model {
namespace TestingAgentStatusMapper {

static const int CREATED_HASH = HashingUtils::HashString("CREATED");
static const int PENDING_HASH = HashingUtils::HashString("PENDING");
static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");

TestingAgentStatus GetTestingAgentStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATED_HASH) {
    return TestingAgentStatus::CREATED;
  } else if (hashCode == PENDING_HASH) {
    return TestingAgentStatus::PENDING;
  } else if (hashCode == ACTIVE_HASH) {
    return TestingAgentStatus::ACTIVE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TestingAgentStatus>(hashCode);
  }

  return TestingAgentStatus::NOT_SET;
}

Aws::String GetNameForTestingAgentStatus(TestingAgentStatus enumValue) {
  switch (enumValue) {
    case TestingAgentStatus::NOT_SET:
      return {};
    case TestingAgentStatus::CREATED:
      return "CREATED";
    case TestingAgentStatus::PENDING:
      return "PENDING";
    case TestingAgentStatus::ACTIVE:
      return "ACTIVE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TestingAgentStatusMapper
}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
