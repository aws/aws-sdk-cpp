/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/networkmanager/model/MultipathResilienceMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace NetworkManager {
namespace Model {
namespace MultipathResilienceModeMapper {

static const int best_effort_HASH = HashingUtils::HashString("best-effort");
static const int disabled_HASH = HashingUtils::HashString("disabled");

MultipathResilienceMode GetMultipathResilienceModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == best_effort_HASH) {
    return MultipathResilienceMode::best_effort;
  } else if (hashCode == disabled_HASH) {
    return MultipathResilienceMode::disabled;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MultipathResilienceMode>(hashCode);
  }

  return MultipathResilienceMode::NOT_SET;
}

Aws::String GetNameForMultipathResilienceMode(MultipathResilienceMode enumValue) {
  switch (enumValue) {
    case MultipathResilienceMode::NOT_SET:
      return {};
    case MultipathResilienceMode::best_effort:
      return "best-effort";
    case MultipathResilienceMode::disabled:
      return "disabled";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MultipathResilienceModeMapper
}  // namespace Model
}  // namespace NetworkManager
}  // namespace Aws
