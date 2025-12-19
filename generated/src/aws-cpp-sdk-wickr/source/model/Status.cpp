/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/wickr/model/Status.h>

using namespace Aws::Utils;

namespace Aws {
namespace Wickr {
namespace Model {
namespace StatusMapper {

static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
static const int FORCE_ENABLED_HASH = HashingUtils::HashString("FORCE_ENABLED");

Status GetStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DISABLED_HASH) {
    return Status::DISABLED;
  } else if (hashCode == ENABLED_HASH) {
    return Status::ENABLED;
  } else if (hashCode == FORCE_ENABLED_HASH) {
    return Status::FORCE_ENABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Status>(hashCode);
  }

  return Status::NOT_SET;
}

Aws::String GetNameForStatus(Status enumValue) {
  switch (enumValue) {
    case Status::NOT_SET:
      return {};
    case Status::DISABLED:
      return "DISABLED";
    case Status::ENABLED:
      return "ENABLED";
    case Status::FORCE_ENABLED:
      return "FORCE_ENABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace StatusMapper
}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
