/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/wickr/model/AccessLevel.h>

using namespace Aws::Utils;

namespace Aws {
namespace Wickr {
namespace Model {
namespace AccessLevelMapper {

static const int STANDARD_HASH = HashingUtils::HashString("STANDARD");
static const int PREMIUM_HASH = HashingUtils::HashString("PREMIUM");

AccessLevel GetAccessLevelForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == STANDARD_HASH) {
    return AccessLevel::STANDARD;
  } else if (hashCode == PREMIUM_HASH) {
    return AccessLevel::PREMIUM;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AccessLevel>(hashCode);
  }

  return AccessLevel::NOT_SET;
}

Aws::String GetNameForAccessLevel(AccessLevel enumValue) {
  switch (enumValue) {
    case AccessLevel::NOT_SET:
      return {};
    case AccessLevel::STANDARD:
      return "STANDARD";
    case AccessLevel::PREMIUM:
      return "PREMIUM";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AccessLevelMapper
}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
