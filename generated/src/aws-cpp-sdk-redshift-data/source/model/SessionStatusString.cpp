/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/redshift-data/model/SessionStatusString.h>

using namespace Aws::Utils;

namespace Aws {
namespace RedshiftDataAPIService {
namespace Model {
namespace SessionStatusStringMapper {

static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
static const int BUSY_HASH = HashingUtils::HashString("BUSY");
static const int CLOSED_HASH = HashingUtils::HashString("CLOSED");

SessionStatusString GetSessionStatusStringForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AVAILABLE_HASH) {
    return SessionStatusString::AVAILABLE;
  } else if (hashCode == BUSY_HASH) {
    return SessionStatusString::BUSY;
  } else if (hashCode == CLOSED_HASH) {
    return SessionStatusString::CLOSED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SessionStatusString>(hashCode);
  }

  return SessionStatusString::NOT_SET;
}

Aws::String GetNameForSessionStatusString(SessionStatusString enumValue) {
  switch (enumValue) {
    case SessionStatusString::NOT_SET:
      return {};
    case SessionStatusString::AVAILABLE:
      return "AVAILABLE";
    case SessionStatusString::BUSY:
      return "BUSY";
    case SessionStatusString::CLOSED:
      return "CLOSED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SessionStatusStringMapper
}  // namespace Model
}  // namespace RedshiftDataAPIService
}  // namespace Aws
