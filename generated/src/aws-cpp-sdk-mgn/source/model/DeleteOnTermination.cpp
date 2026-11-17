/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mgn/model/DeleteOnTermination.h>

using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {
namespace DeleteOnTerminationMapper {

static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");

DeleteOnTermination GetDeleteOnTerminationForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENABLED_HASH) {
    return DeleteOnTermination::ENABLED;
  } else if (hashCode == DISABLED_HASH) {
    return DeleteOnTermination::DISABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DeleteOnTermination>(hashCode);
  }

  return DeleteOnTermination::NOT_SET;
}

Aws::String GetNameForDeleteOnTermination(DeleteOnTermination enumValue) {
  switch (enumValue) {
    case DeleteOnTermination::NOT_SET:
      return {};
    case DeleteOnTermination::ENABLED:
      return "ENABLED";
    case DeleteOnTermination::DISABLED:
      return "DISABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DeleteOnTerminationMapper
}  // namespace Model
}  // namespace mgn
}  // namespace Aws
