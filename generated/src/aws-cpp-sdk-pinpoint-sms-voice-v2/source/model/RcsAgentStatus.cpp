/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/pinpoint-sms-voice-v2/model/RcsAgentStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace PinpointSMSVoiceV2 {
namespace Model {
namespace RcsAgentStatusMapper {

static const int CREATED_HASH = HashingUtils::HashString("CREATED");
static const int PENDING_HASH = HashingUtils::HashString("PENDING");
static const int TESTING_HASH = HashingUtils::HashString("TESTING");
static const int PARTIAL_HASH = HashingUtils::HashString("PARTIAL");
static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int DELETED_HASH = HashingUtils::HashString("DELETED");

RcsAgentStatus GetRcsAgentStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATED_HASH) {
    return RcsAgentStatus::CREATED;
  } else if (hashCode == PENDING_HASH) {
    return RcsAgentStatus::PENDING;
  } else if (hashCode == TESTING_HASH) {
    return RcsAgentStatus::TESTING;
  } else if (hashCode == PARTIAL_HASH) {
    return RcsAgentStatus::PARTIAL;
  } else if (hashCode == ACTIVE_HASH) {
    return RcsAgentStatus::ACTIVE;
  } else if (hashCode == DELETED_HASH) {
    return RcsAgentStatus::DELETED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RcsAgentStatus>(hashCode);
  }

  return RcsAgentStatus::NOT_SET;
}

Aws::String GetNameForRcsAgentStatus(RcsAgentStatus enumValue) {
  switch (enumValue) {
    case RcsAgentStatus::NOT_SET:
      return {};
    case RcsAgentStatus::CREATED:
      return "CREATED";
    case RcsAgentStatus::PENDING:
      return "PENDING";
    case RcsAgentStatus::TESTING:
      return "TESTING";
    case RcsAgentStatus::PARTIAL:
      return "PARTIAL";
    case RcsAgentStatus::ACTIVE:
      return "ACTIVE";
    case RcsAgentStatus::DELETED:
      return "DELETED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RcsAgentStatusMapper
}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
