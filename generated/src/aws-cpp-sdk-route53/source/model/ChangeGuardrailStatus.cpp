/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/route53/model/ChangeGuardrailStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace Route53 {
namespace Model {
namespace ChangeGuardrailStatusMapper {

static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");

ChangeGuardrailStatus GetChangeGuardrailStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENABLED_HASH) {
    return ChangeGuardrailStatus::ENABLED;
  } else if (hashCode == DISABLED_HASH) {
    return ChangeGuardrailStatus::DISABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ChangeGuardrailStatus>(hashCode);
  }

  return ChangeGuardrailStatus::NOT_SET;
}

Aws::String GetNameForChangeGuardrailStatus(ChangeGuardrailStatus enumValue) {
  switch (enumValue) {
    case ChangeGuardrailStatus::NOT_SET:
      return {};
    case ChangeGuardrailStatus::ENABLED:
      return "ENABLED";
    case ChangeGuardrailStatus::DISABLED:
      return "DISABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ChangeGuardrailStatusMapper
}  // namespace Model
}  // namespace Route53
}  // namespace Aws
