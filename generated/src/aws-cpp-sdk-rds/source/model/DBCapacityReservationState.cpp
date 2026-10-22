/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/rds/model/DBCapacityReservationState.h>

using namespace Aws::Utils;

namespace Aws {
namespace RDS {
namespace Model {
namespace DBCapacityReservationStateMapper {

static const int active_HASH = HashingUtils::HashString("active");
static const int expired_HASH = HashingUtils::HashString("expired");
static const int cancelled_HASH = HashingUtils::HashString("cancelled");
static const int pending_HASH = HashingUtils::HashString("pending");
static const int failed_HASH = HashingUtils::HashString("failed");
static const int assessing_HASH = HashingUtils::HashString("assessing");
static const int scheduled_HASH = HashingUtils::HashString("scheduled");
static const int delayed_HASH = HashingUtils::HashString("delayed");
static const int unsupported_HASH = HashingUtils::HashString("unsupported");

DBCapacityReservationState GetDBCapacityReservationStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == active_HASH) {
    return DBCapacityReservationState::active;
  } else if (hashCode == expired_HASH) {
    return DBCapacityReservationState::expired;
  } else if (hashCode == cancelled_HASH) {
    return DBCapacityReservationState::cancelled;
  } else if (hashCode == pending_HASH) {
    return DBCapacityReservationState::pending;
  } else if (hashCode == failed_HASH) {
    return DBCapacityReservationState::failed;
  } else if (hashCode == assessing_HASH) {
    return DBCapacityReservationState::assessing;
  } else if (hashCode == scheduled_HASH) {
    return DBCapacityReservationState::scheduled;
  } else if (hashCode == delayed_HASH) {
    return DBCapacityReservationState::delayed;
  } else if (hashCode == unsupported_HASH) {
    return DBCapacityReservationState::unsupported;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DBCapacityReservationState>(hashCode);
  }

  return DBCapacityReservationState::NOT_SET;
}

Aws::String GetNameForDBCapacityReservationState(DBCapacityReservationState enumValue) {
  switch (enumValue) {
    case DBCapacityReservationState::NOT_SET:
      return {};
    case DBCapacityReservationState::active:
      return "active";
    case DBCapacityReservationState::expired:
      return "expired";
    case DBCapacityReservationState::cancelled:
      return "cancelled";
    case DBCapacityReservationState::pending:
      return "pending";
    case DBCapacityReservationState::failed:
      return "failed";
    case DBCapacityReservationState::assessing:
      return "assessing";
    case DBCapacityReservationState::scheduled:
      return "scheduled";
    case DBCapacityReservationState::delayed:
      return "delayed";
    case DBCapacityReservationState::unsupported:
      return "unsupported";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DBCapacityReservationStateMapper
}  // namespace Model
}  // namespace RDS
}  // namespace Aws
