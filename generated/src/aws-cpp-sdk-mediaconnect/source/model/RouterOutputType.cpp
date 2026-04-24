/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconnect/model/RouterOutputType.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {
namespace RouterOutputTypeMapper {

static const int STANDARD_HASH = HashingUtils::HashString("STANDARD");
static const int MEDIACONNECT_FLOW_HASH = HashingUtils::HashString("MEDIACONNECT_FLOW");
static const int MEDIALIVE_INPUT_HASH = HashingUtils::HashString("MEDIALIVE_INPUT");

RouterOutputType GetRouterOutputTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == STANDARD_HASH) {
    return RouterOutputType::STANDARD;
  } else if (hashCode == MEDIACONNECT_FLOW_HASH) {
    return RouterOutputType::MEDIACONNECT_FLOW;
  } else if (hashCode == MEDIALIVE_INPUT_HASH) {
    return RouterOutputType::MEDIALIVE_INPUT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RouterOutputType>(hashCode);
  }

  return RouterOutputType::NOT_SET;
}

Aws::String GetNameForRouterOutputType(RouterOutputType enumValue) {
  switch (enumValue) {
    case RouterOutputType::NOT_SET:
      return {};
    case RouterOutputType::STANDARD:
      return "STANDARD";
    case RouterOutputType::MEDIACONNECT_FLOW:
      return "MEDIACONNECT_FLOW";
    case RouterOutputType::MEDIALIVE_INPUT:
      return "MEDIALIVE_INPUT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RouterOutputTypeMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
