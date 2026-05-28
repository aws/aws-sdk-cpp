/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/resiliencehubv2/model/MultiAzDisasterRecoveryApproach.h>

using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {
namespace MultiAzDisasterRecoveryApproachMapper {

static const int ACTIVE_ACTIVE_HASH = HashingUtils::HashString("ACTIVE_ACTIVE");
static const int HOT_STANDBY_HASH = HashingUtils::HashString("HOT_STANDBY");
static const int WARM_STANDBY_HASH = HashingUtils::HashString("WARM_STANDBY");
static const int PILOT_LIGHT_HASH = HashingUtils::HashString("PILOT_LIGHT");
static const int BACKUP_AND_RESTORE_HASH = HashingUtils::HashString("BACKUP_AND_RESTORE");

MultiAzDisasterRecoveryApproach GetMultiAzDisasterRecoveryApproachForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVE_ACTIVE_HASH) {
    return MultiAzDisasterRecoveryApproach::ACTIVE_ACTIVE;
  } else if (hashCode == HOT_STANDBY_HASH) {
    return MultiAzDisasterRecoveryApproach::HOT_STANDBY;
  } else if (hashCode == WARM_STANDBY_HASH) {
    return MultiAzDisasterRecoveryApproach::WARM_STANDBY;
  } else if (hashCode == PILOT_LIGHT_HASH) {
    return MultiAzDisasterRecoveryApproach::PILOT_LIGHT;
  } else if (hashCode == BACKUP_AND_RESTORE_HASH) {
    return MultiAzDisasterRecoveryApproach::BACKUP_AND_RESTORE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MultiAzDisasterRecoveryApproach>(hashCode);
  }

  return MultiAzDisasterRecoveryApproach::NOT_SET;
}

Aws::String GetNameForMultiAzDisasterRecoveryApproach(MultiAzDisasterRecoveryApproach enumValue) {
  switch (enumValue) {
    case MultiAzDisasterRecoveryApproach::NOT_SET:
      return {};
    case MultiAzDisasterRecoveryApproach::ACTIVE_ACTIVE:
      return "ACTIVE_ACTIVE";
    case MultiAzDisasterRecoveryApproach::HOT_STANDBY:
      return "HOT_STANDBY";
    case MultiAzDisasterRecoveryApproach::WARM_STANDBY:
      return "WARM_STANDBY";
    case MultiAzDisasterRecoveryApproach::PILOT_LIGHT:
      return "PILOT_LIGHT";
    case MultiAzDisasterRecoveryApproach::BACKUP_AND_RESTORE:
      return "BACKUP_AND_RESTORE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MultiAzDisasterRecoveryApproachMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
