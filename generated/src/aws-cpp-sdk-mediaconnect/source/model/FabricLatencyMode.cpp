/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconnect/model/FabricLatencyMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {
namespace FabricLatencyModeMapper {

static const int BALANCED_HASH = HashingUtils::HashString("BALANCED");
static const int LOW_LATENCY_HASH = HashingUtils::HashString("LOW_LATENCY");

FabricLatencyMode GetFabricLatencyModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == BALANCED_HASH) {
    return FabricLatencyMode::BALANCED;
  } else if (hashCode == LOW_LATENCY_HASH) {
    return FabricLatencyMode::LOW_LATENCY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FabricLatencyMode>(hashCode);
  }

  return FabricLatencyMode::NOT_SET;
}

Aws::String GetNameForFabricLatencyMode(FabricLatencyMode enumValue) {
  switch (enumValue) {
    case FabricLatencyMode::NOT_SET:
      return {};
    case FabricLatencyMode::BALANCED:
      return "BALANCED";
    case FabricLatencyMode::LOW_LATENCY:
      return "LOW_LATENCY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FabricLatencyModeMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
