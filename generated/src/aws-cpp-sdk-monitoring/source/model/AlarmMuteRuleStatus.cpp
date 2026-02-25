/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/monitoring/model/AlarmMuteRuleStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudWatch {
namespace Model {
namespace AlarmMuteRuleStatusMapper {

static const int SCHEDULED_HASH = HashingUtils::HashString("SCHEDULED");
static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int EXPIRED_HASH = HashingUtils::HashString("EXPIRED");

AlarmMuteRuleStatus GetAlarmMuteRuleStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SCHEDULED_HASH) {
    return AlarmMuteRuleStatus::SCHEDULED;
  } else if (hashCode == ACTIVE_HASH) {
    return AlarmMuteRuleStatus::ACTIVE;
  } else if (hashCode == EXPIRED_HASH) {
    return AlarmMuteRuleStatus::EXPIRED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AlarmMuteRuleStatus>(hashCode);
  }

  return AlarmMuteRuleStatus::NOT_SET;
}

Aws::String GetNameForAlarmMuteRuleStatus(AlarmMuteRuleStatus enumValue) {
  switch (enumValue) {
    case AlarmMuteRuleStatus::NOT_SET:
      return {};
    case AlarmMuteRuleStatus::SCHEDULED:
      return "SCHEDULED";
    case AlarmMuteRuleStatus::ACTIVE:
      return "ACTIVE";
    case AlarmMuteRuleStatus::EXPIRED:
      return "EXPIRED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AlarmMuteRuleStatusMapper
}  // namespace Model
}  // namespace CloudWatch
}  // namespace Aws
