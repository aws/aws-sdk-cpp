/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/quicksight/model/GovernedAction.h>

using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {
namespace GovernedActionMapper {

static const int SHARE_HASH = HashingUtils::HashString("SHARE");

GovernedAction GetGovernedActionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SHARE_HASH) {
    return GovernedAction::SHARE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<GovernedAction>(hashCode);
  }

  return GovernedAction::NOT_SET;
}

Aws::String GetNameForGovernedAction(GovernedAction enumValue) {
  switch (enumValue) {
    case GovernedAction::NOT_SET:
      return {};
    case GovernedAction::SHARE:
      return "SHARE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace GovernedActionMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
