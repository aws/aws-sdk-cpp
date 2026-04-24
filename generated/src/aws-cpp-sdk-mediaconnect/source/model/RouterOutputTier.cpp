/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconnect/model/RouterOutputTier.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {
namespace RouterOutputTierMapper {

static const int OUTPUT_100_HASH = HashingUtils::HashString("OUTPUT_100");
static const int OUTPUT_50_HASH = HashingUtils::HashString("OUTPUT_50");
static const int OUTPUT_20_HASH = HashingUtils::HashString("OUTPUT_20");

RouterOutputTier GetRouterOutputTierForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == OUTPUT_100_HASH) {
    return RouterOutputTier::OUTPUT_100;
  } else if (hashCode == OUTPUT_50_HASH) {
    return RouterOutputTier::OUTPUT_50;
  } else if (hashCode == OUTPUT_20_HASH) {
    return RouterOutputTier::OUTPUT_20;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RouterOutputTier>(hashCode);
  }

  return RouterOutputTier::NOT_SET;
}

Aws::String GetNameForRouterOutputTier(RouterOutputTier enumValue) {
  switch (enumValue) {
    case RouterOutputTier::NOT_SET:
      return {};
    case RouterOutputTier::OUTPUT_100:
      return "OUTPUT_100";
    case RouterOutputTier::OUTPUT_50:
      return "OUTPUT_50";
    case RouterOutputTier::OUTPUT_20:
      return "OUTPUT_20";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RouterOutputTierMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
