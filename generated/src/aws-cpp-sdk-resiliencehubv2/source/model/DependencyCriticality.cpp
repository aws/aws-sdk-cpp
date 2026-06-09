/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/resiliencehubv2/model/DependencyCriticality.h>

using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {
namespace DependencyCriticalityMapper {

static const int HARD_HASH = HashingUtils::HashString("HARD");
static const int SOFT_HASH = HashingUtils::HashString("SOFT");
static const int UNKNOWN_HASH = HashingUtils::HashString("UNKNOWN");

DependencyCriticality GetDependencyCriticalityForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == HARD_HASH) {
    return DependencyCriticality::HARD;
  } else if (hashCode == SOFT_HASH) {
    return DependencyCriticality::SOFT;
  } else if (hashCode == UNKNOWN_HASH) {
    return DependencyCriticality::UNKNOWN;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DependencyCriticality>(hashCode);
  }

  return DependencyCriticality::NOT_SET;
}

Aws::String GetNameForDependencyCriticality(DependencyCriticality enumValue) {
  switch (enumValue) {
    case DependencyCriticality::NOT_SET:
      return {};
    case DependencyCriticality::HARD:
      return "HARD";
    case DependencyCriticality::SOFT:
      return "SOFT";
    case DependencyCriticality::UNKNOWN:
      return "UNKNOWN";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DependencyCriticalityMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
