/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/pcs/model/DeepHealthCheckOnStartProfile.h>

using namespace Aws::Utils;

namespace Aws {
namespace PCS {
namespace Model {
namespace DeepHealthCheckOnStartProfileMapper {

static const int NONE_HASH = HashingUtils::HashString("NONE");
static const int QUICK_HASH = HashingUtils::HashString("QUICK");
static const int MEDIUM_HASH = HashingUtils::HashString("MEDIUM");
static const int LONG_HASH = HashingUtils::HashString("LONG");

DeepHealthCheckOnStartProfile GetDeepHealthCheckOnStartProfileForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NONE_HASH) {
    return DeepHealthCheckOnStartProfile::NONE;
  } else if (hashCode == QUICK_HASH) {
    return DeepHealthCheckOnStartProfile::QUICK;
  } else if (hashCode == MEDIUM_HASH) {
    return DeepHealthCheckOnStartProfile::MEDIUM;
  } else if (hashCode == LONG_HASH) {
    return DeepHealthCheckOnStartProfile::LONG;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DeepHealthCheckOnStartProfile>(hashCode);
  }

  return DeepHealthCheckOnStartProfile::NOT_SET;
}

Aws::String GetNameForDeepHealthCheckOnStartProfile(DeepHealthCheckOnStartProfile enumValue) {
  switch (enumValue) {
    case DeepHealthCheckOnStartProfile::NOT_SET:
      return {};
    case DeepHealthCheckOnStartProfile::NONE:
      return "NONE";
    case DeepHealthCheckOnStartProfile::QUICK:
      return "QUICK";
    case DeepHealthCheckOnStartProfile::MEDIUM:
      return "MEDIUM";
    case DeepHealthCheckOnStartProfile::LONG:
      return "LONG";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DeepHealthCheckOnStartProfileMapper
}  // namespace Model
}  // namespace PCS
}  // namespace Aws
