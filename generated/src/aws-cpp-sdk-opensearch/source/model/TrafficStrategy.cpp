/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/opensearch/model/TrafficStrategy.h>

using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchService {
namespace Model {
namespace TrafficStrategyMapper {

static const int ShiftReadTrafficPercent_HASH = HashingUtils::HashString("ShiftReadTrafficPercent");

TrafficStrategy GetTrafficStrategyForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ShiftReadTrafficPercent_HASH) {
    return TrafficStrategy::ShiftReadTrafficPercent;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TrafficStrategy>(hashCode);
  }

  return TrafficStrategy::NOT_SET;
}

Aws::String GetNameForTrafficStrategy(TrafficStrategy enumValue) {
  switch (enumValue) {
    case TrafficStrategy::NOT_SET:
      return {};
    case TrafficStrategy::ShiftReadTrafficPercent:
      return "ShiftReadTrafficPercent";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TrafficStrategyMapper
}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
