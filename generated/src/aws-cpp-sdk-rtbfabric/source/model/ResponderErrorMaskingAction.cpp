/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/rtbfabric/model/ResponderErrorMaskingAction.h>

using namespace Aws::Utils;

namespace Aws {
namespace RTBFabric {
namespace Model {
namespace ResponderErrorMaskingActionMapper {

static const int NO_BID_HASH = HashingUtils::HashString("NO_BID");
static const int PASSTHROUGH_HASH = HashingUtils::HashString("PASSTHROUGH");

ResponderErrorMaskingAction GetResponderErrorMaskingActionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NO_BID_HASH) {
    return ResponderErrorMaskingAction::NO_BID;
  } else if (hashCode == PASSTHROUGH_HASH) {
    return ResponderErrorMaskingAction::PASSTHROUGH;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ResponderErrorMaskingAction>(hashCode);
  }

  return ResponderErrorMaskingAction::NOT_SET;
}

Aws::String GetNameForResponderErrorMaskingAction(ResponderErrorMaskingAction enumValue) {
  switch (enumValue) {
    case ResponderErrorMaskingAction::NOT_SET:
      return {};
    case ResponderErrorMaskingAction::NO_BID:
      return "NO_BID";
    case ResponderErrorMaskingAction::PASSTHROUGH:
      return "PASSTHROUGH";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ResponderErrorMaskingActionMapper
}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
