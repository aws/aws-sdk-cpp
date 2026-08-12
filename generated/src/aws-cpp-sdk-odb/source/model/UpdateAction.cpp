/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/odb/model/UpdateAction.h>

using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {
namespace UpdateActionMapper {

static const int ROLLING_APPLY_HASH = HashingUtils::HashString("ROLLING_APPLY");
static const int NON_ROLLING_APPLY_HASH = HashingUtils::HashString("NON_ROLLING_APPLY");
static const int PRECHECK_HASH = HashingUtils::HashString("PRECHECK");
static const int ROLLBACK_HASH = HashingUtils::HashString("ROLLBACK");

UpdateAction GetUpdateActionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ROLLING_APPLY_HASH) {
    return UpdateAction::ROLLING_APPLY;
  } else if (hashCode == NON_ROLLING_APPLY_HASH) {
    return UpdateAction::NON_ROLLING_APPLY;
  } else if (hashCode == PRECHECK_HASH) {
    return UpdateAction::PRECHECK;
  } else if (hashCode == ROLLBACK_HASH) {
    return UpdateAction::ROLLBACK;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<UpdateAction>(hashCode);
  }

  return UpdateAction::NOT_SET;
}

Aws::String GetNameForUpdateAction(UpdateAction enumValue) {
  switch (enumValue) {
    case UpdateAction::NOT_SET:
      return {};
    case UpdateAction::ROLLING_APPLY:
      return "ROLLING_APPLY";
    case UpdateAction::NON_ROLLING_APPLY:
      return "NON_ROLLING_APPLY";
    case UpdateAction::PRECHECK:
      return "PRECHECK";
    case UpdateAction::ROLLBACK:
      return "ROLLBACK";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace UpdateActionMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
