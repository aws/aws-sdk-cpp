/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconnect/model/RouterInputType.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {
namespace RouterInputTypeMapper {

static const int STANDARD_HASH = HashingUtils::HashString("STANDARD");
static const int FAILOVER_HASH = HashingUtils::HashString("FAILOVER");
static const int MERGE_HASH = HashingUtils::HashString("MERGE");
static const int MEDIACONNECT_FLOW_HASH = HashingUtils::HashString("MEDIACONNECT_FLOW");

RouterInputType GetRouterInputTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == STANDARD_HASH) {
    return RouterInputType::STANDARD;
  } else if (hashCode == FAILOVER_HASH) {
    return RouterInputType::FAILOVER;
  } else if (hashCode == MERGE_HASH) {
    return RouterInputType::MERGE;
  } else if (hashCode == MEDIACONNECT_FLOW_HASH) {
    return RouterInputType::MEDIACONNECT_FLOW;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RouterInputType>(hashCode);
  }

  return RouterInputType::NOT_SET;
}

Aws::String GetNameForRouterInputType(RouterInputType enumValue) {
  switch (enumValue) {
    case RouterInputType::NOT_SET:
      return {};
    case RouterInputType::STANDARD:
      return "STANDARD";
    case RouterInputType::FAILOVER:
      return "FAILOVER";
    case RouterInputType::MERGE:
      return "MERGE";
    case RouterInputType::MEDIACONNECT_FLOW:
      return "MEDIACONNECT_FLOW";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RouterInputTypeMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
