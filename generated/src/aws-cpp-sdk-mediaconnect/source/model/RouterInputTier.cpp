/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconnect/model/RouterInputTier.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {
namespace RouterInputTierMapper {

static const int INPUT_100_HASH = HashingUtils::HashString("INPUT_100");
static const int INPUT_50_HASH = HashingUtils::HashString("INPUT_50");
static const int INPUT_20_HASH = HashingUtils::HashString("INPUT_20");

RouterInputTier GetRouterInputTierForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == INPUT_100_HASH) {
    return RouterInputTier::INPUT_100;
  } else if (hashCode == INPUT_50_HASH) {
    return RouterInputTier::INPUT_50;
  } else if (hashCode == INPUT_20_HASH) {
    return RouterInputTier::INPUT_20;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RouterInputTier>(hashCode);
  }

  return RouterInputTier::NOT_SET;
}

Aws::String GetNameForRouterInputTier(RouterInputTier enumValue) {
  switch (enumValue) {
    case RouterInputTier::NOT_SET:
      return {};
    case RouterInputTier::INPUT_100:
      return "INPUT_100";
    case RouterInputTier::INPUT_50:
      return "INPUT_50";
    case RouterInputTier::INPUT_20:
      return "INPUT_20";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RouterInputTierMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
