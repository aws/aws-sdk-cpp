/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/quicksight/model/PolicyType.h>

using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {
namespace PolicyTypeMapper {

static const int LIMITS_PROFILE_HASH = HashingUtils::HashString("LIMITS_PROFILE");
static const int CUSTOM_PERMISSIONS_HASH = HashingUtils::HashString("CUSTOM_PERMISSIONS");

PolicyType GetPolicyTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == LIMITS_PROFILE_HASH) {
    return PolicyType::LIMITS_PROFILE;
  } else if (hashCode == CUSTOM_PERMISSIONS_HASH) {
    return PolicyType::CUSTOM_PERMISSIONS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PolicyType>(hashCode);
  }

  return PolicyType::NOT_SET;
}

Aws::String GetNameForPolicyType(PolicyType enumValue) {
  switch (enumValue) {
    case PolicyType::NOT_SET:
      return {};
    case PolicyType::LIMITS_PROFILE:
      return "LIMITS_PROFILE";
    case PolicyType::CUSTOM_PERMISSIONS:
      return "CUSTOM_PERMISSIONS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PolicyTypeMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
