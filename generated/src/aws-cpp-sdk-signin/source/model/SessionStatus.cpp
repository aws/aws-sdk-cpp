/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/signin/model/SessionStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace Signin {
namespace Model {
namespace SessionStatusMapper {

static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int REVOKED_HASH = HashingUtils::HashString("REVOKED");

SessionStatus GetSessionStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVE_HASH) {
    return SessionStatus::ACTIVE;
  } else if (hashCode == REVOKED_HASH) {
    return SessionStatus::REVOKED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SessionStatus>(hashCode);
  }

  return SessionStatus::NOT_SET;
}

Aws::String GetNameForSessionStatus(SessionStatus enumValue) {
  switch (enumValue) {
    case SessionStatus::NOT_SET:
      return {};
    case SessionStatus::ACTIVE:
      return "ACTIVE";
    case SessionStatus::REVOKED:
      return "REVOKED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SessionStatusMapper
}  // namespace Model
}  // namespace Signin
}  // namespace Aws
