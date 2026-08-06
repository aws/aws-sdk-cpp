/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityhub/model/FreeTrialStatusValue.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {
namespace FreeTrialStatusValueMapper {

static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");

FreeTrialStatusValue GetFreeTrialStatusValueForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVE_HASH) {
    return FreeTrialStatusValue::ACTIVE;
  } else if (hashCode == INACTIVE_HASH) {
    return FreeTrialStatusValue::INACTIVE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FreeTrialStatusValue>(hashCode);
  }

  return FreeTrialStatusValue::NOT_SET;
}

Aws::String GetNameForFreeTrialStatusValue(FreeTrialStatusValue enumValue) {
  switch (enumValue) {
    case FreeTrialStatusValue::NOT_SET:
      return {};
    case FreeTrialStatusValue::ACTIVE:
      return "ACTIVE";
    case FreeTrialStatusValue::INACTIVE:
      return "INACTIVE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FreeTrialStatusValueMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
