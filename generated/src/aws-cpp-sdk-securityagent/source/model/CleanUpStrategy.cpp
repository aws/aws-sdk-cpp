/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityagent/model/CleanUpStrategy.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {
namespace CleanUpStrategyMapper {

static const int BEST_EFFORT_DELETE_HASH = HashingUtils::HashString("BEST_EFFORT_DELETE");
static const int RETAIN_ALL_HASH = HashingUtils::HashString("RETAIN_ALL");

CleanUpStrategy GetCleanUpStrategyForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == BEST_EFFORT_DELETE_HASH) {
    return CleanUpStrategy::BEST_EFFORT_DELETE;
  } else if (hashCode == RETAIN_ALL_HASH) {
    return CleanUpStrategy::RETAIN_ALL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CleanUpStrategy>(hashCode);
  }

  return CleanUpStrategy::NOT_SET;
}

Aws::String GetNameForCleanUpStrategy(CleanUpStrategy enumValue) {
  switch (enumValue) {
    case CleanUpStrategy::NOT_SET:
      return {};
    case CleanUpStrategy::BEST_EFFORT_DELETE:
      return "BEST_EFFORT_DELETE";
    case CleanUpStrategy::RETAIN_ALL:
      return "RETAIN_ALL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CleanUpStrategyMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
