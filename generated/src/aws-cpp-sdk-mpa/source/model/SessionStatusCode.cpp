/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mpa/model/SessionStatusCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace MPA {
namespace Model {
namespace SessionStatusCodeMapper {

static const int REJECTED_HASH = HashingUtils::HashString("REJECTED");
static const int EXPIRED_HASH = HashingUtils::HashString("EXPIRED");
static const int CONFIGURATION_CHANGED_HASH = HashingUtils::HashString("CONFIGURATION_CHANGED");
static const int ALL_APPROVERS_IN_SESSION_HASH = HashingUtils::HashString("ALL_APPROVERS_IN_SESSION");

SessionStatusCode GetSessionStatusCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == REJECTED_HASH) {
    return SessionStatusCode::REJECTED;
  } else if (hashCode == EXPIRED_HASH) {
    return SessionStatusCode::EXPIRED;
  } else if (hashCode == CONFIGURATION_CHANGED_HASH) {
    return SessionStatusCode::CONFIGURATION_CHANGED;
  } else if (hashCode == ALL_APPROVERS_IN_SESSION_HASH) {
    return SessionStatusCode::ALL_APPROVERS_IN_SESSION;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SessionStatusCode>(hashCode);
  }

  return SessionStatusCode::NOT_SET;
}

Aws::String GetNameForSessionStatusCode(SessionStatusCode enumValue) {
  switch (enumValue) {
    case SessionStatusCode::NOT_SET:
      return {};
    case SessionStatusCode::REJECTED:
      return "REJECTED";
    case SessionStatusCode::EXPIRED:
      return "EXPIRED";
    case SessionStatusCode::CONFIGURATION_CHANGED:
      return "CONFIGURATION_CHANGED";
    case SessionStatusCode::ALL_APPROVERS_IN_SESSION:
      return "ALL_APPROVERS_IN_SESSION";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SessionStatusCodeMapper
}  // namespace Model
}  // namespace MPA
}  // namespace Aws
