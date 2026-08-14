/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/observabilityadmin/model/TagPropagationFailureReason.h>

using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {
namespace TagPropagationFailureReasonMapper {

static const int RoleNotAssumable_HASH = HashingUtils::HashString("RoleNotAssumable");
static const int RoleLacksPermissions_HASH = HashingUtils::HashString("RoleLacksPermissions");

TagPropagationFailureReason GetTagPropagationFailureReasonForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == RoleNotAssumable_HASH) {
    return TagPropagationFailureReason::RoleNotAssumable;
  } else if (hashCode == RoleLacksPermissions_HASH) {
    return TagPropagationFailureReason::RoleLacksPermissions;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TagPropagationFailureReason>(hashCode);
  }

  return TagPropagationFailureReason::NOT_SET;
}

Aws::String GetNameForTagPropagationFailureReason(TagPropagationFailureReason enumValue) {
  switch (enumValue) {
    case TagPropagationFailureReason::NOT_SET:
      return {};
    case TagPropagationFailureReason::RoleNotAssumable:
      return "RoleNotAssumable";
    case TagPropagationFailureReason::RoleLacksPermissions:
      return "RoleLacksPermissions";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TagPropagationFailureReasonMapper
}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
