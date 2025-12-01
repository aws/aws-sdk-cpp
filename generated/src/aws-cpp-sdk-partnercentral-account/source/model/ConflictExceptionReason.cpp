/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-account/model/ConflictExceptionReason.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralAccount {
namespace Model {
namespace ConflictExceptionReasonMapper {

static const int CONFLICT_CLIENT_TOKEN_HASH = HashingUtils::HashString("CONFLICT_CLIENT_TOKEN");
static const int DUPLICATE_PARTNER_HASH = HashingUtils::HashString("DUPLICATE_PARTNER");
static const int INCOMPATIBLE_PROFILE_STATE_HASH = HashingUtils::HashString("INCOMPATIBLE_PROFILE_STATE");
static const int INCOMPATIBLE_PARTNER_PROFILE_TASK_STATE_HASH = HashingUtils::HashString("INCOMPATIBLE_PARTNER_PROFILE_TASK_STATE");
static const int DUPLICATE_CONNECTION_INVITATION_HASH = HashingUtils::HashString("DUPLICATE_CONNECTION_INVITATION");
static const int INCOMPATIBLE_CONNECTION_INVITATION_STATE_HASH = HashingUtils::HashString("INCOMPATIBLE_CONNECTION_INVITATION_STATE");
static const int INCOMPATIBLE_CONNECTION_INVITATION_RECEIVER_HASH = HashingUtils::HashString("INCOMPATIBLE_CONNECTION_INVITATION_RECEIVER");
static const int DUPLICATE_CONNECTION_HASH = HashingUtils::HashString("DUPLICATE_CONNECTION");
static const int INCOMPATIBLE_CONNECTION_STATE_HASH = HashingUtils::HashString("INCOMPATIBLE_CONNECTION_STATE");
static const int INCOMPATIBLE_CONNECTION_PREFERENCES_REVISION_HASH =
    HashingUtils::HashString("INCOMPATIBLE_CONNECTION_PREFERENCES_REVISION");

ConflictExceptionReason GetConflictExceptionReasonForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CONFLICT_CLIENT_TOKEN_HASH) {
    return ConflictExceptionReason::CONFLICT_CLIENT_TOKEN;
  } else if (hashCode == DUPLICATE_PARTNER_HASH) {
    return ConflictExceptionReason::DUPLICATE_PARTNER;
  } else if (hashCode == INCOMPATIBLE_PROFILE_STATE_HASH) {
    return ConflictExceptionReason::INCOMPATIBLE_PROFILE_STATE;
  } else if (hashCode == INCOMPATIBLE_PARTNER_PROFILE_TASK_STATE_HASH) {
    return ConflictExceptionReason::INCOMPATIBLE_PARTNER_PROFILE_TASK_STATE;
  } else if (hashCode == DUPLICATE_CONNECTION_INVITATION_HASH) {
    return ConflictExceptionReason::DUPLICATE_CONNECTION_INVITATION;
  } else if (hashCode == INCOMPATIBLE_CONNECTION_INVITATION_STATE_HASH) {
    return ConflictExceptionReason::INCOMPATIBLE_CONNECTION_INVITATION_STATE;
  } else if (hashCode == INCOMPATIBLE_CONNECTION_INVITATION_RECEIVER_HASH) {
    return ConflictExceptionReason::INCOMPATIBLE_CONNECTION_INVITATION_RECEIVER;
  } else if (hashCode == DUPLICATE_CONNECTION_HASH) {
    return ConflictExceptionReason::DUPLICATE_CONNECTION;
  } else if (hashCode == INCOMPATIBLE_CONNECTION_STATE_HASH) {
    return ConflictExceptionReason::INCOMPATIBLE_CONNECTION_STATE;
  } else if (hashCode == INCOMPATIBLE_CONNECTION_PREFERENCES_REVISION_HASH) {
    return ConflictExceptionReason::INCOMPATIBLE_CONNECTION_PREFERENCES_REVISION;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ConflictExceptionReason>(hashCode);
  }

  return ConflictExceptionReason::NOT_SET;
}

Aws::String GetNameForConflictExceptionReason(ConflictExceptionReason enumValue) {
  switch (enumValue) {
    case ConflictExceptionReason::NOT_SET:
      return {};
    case ConflictExceptionReason::CONFLICT_CLIENT_TOKEN:
      return "CONFLICT_CLIENT_TOKEN";
    case ConflictExceptionReason::DUPLICATE_PARTNER:
      return "DUPLICATE_PARTNER";
    case ConflictExceptionReason::INCOMPATIBLE_PROFILE_STATE:
      return "INCOMPATIBLE_PROFILE_STATE";
    case ConflictExceptionReason::INCOMPATIBLE_PARTNER_PROFILE_TASK_STATE:
      return "INCOMPATIBLE_PARTNER_PROFILE_TASK_STATE";
    case ConflictExceptionReason::DUPLICATE_CONNECTION_INVITATION:
      return "DUPLICATE_CONNECTION_INVITATION";
    case ConflictExceptionReason::INCOMPATIBLE_CONNECTION_INVITATION_STATE:
      return "INCOMPATIBLE_CONNECTION_INVITATION_STATE";
    case ConflictExceptionReason::INCOMPATIBLE_CONNECTION_INVITATION_RECEIVER:
      return "INCOMPATIBLE_CONNECTION_INVITATION_RECEIVER";
    case ConflictExceptionReason::DUPLICATE_CONNECTION:
      return "DUPLICATE_CONNECTION";
    case ConflictExceptionReason::INCOMPATIBLE_CONNECTION_STATE:
      return "INCOMPATIBLE_CONNECTION_STATE";
    case ConflictExceptionReason::INCOMPATIBLE_CONNECTION_PREFERENCES_REVISION:
      return "INCOMPATIBLE_CONNECTION_PREFERENCES_REVISION";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ConflictExceptionReasonMapper
}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
