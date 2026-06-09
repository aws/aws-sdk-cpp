/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/resiliencehubv2/model/TopologyType.h>

using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {
namespace TopologyTypeMapper {

static const int CONTAINMENT_HASH = HashingUtils::HashString("CONTAINMENT");
static const int DATA_FLOW_HASH = HashingUtils::HashString("DATA_FLOW");
static const int OBSERVABILITY_HASH = HashingUtils::HashString("OBSERVABILITY");
static const int PERMISSIONS_HASH = HashingUtils::HashString("PERMISSIONS");

TopologyType GetTopologyTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CONTAINMENT_HASH) {
    return TopologyType::CONTAINMENT;
  } else if (hashCode == DATA_FLOW_HASH) {
    return TopologyType::DATA_FLOW;
  } else if (hashCode == OBSERVABILITY_HASH) {
    return TopologyType::OBSERVABILITY;
  } else if (hashCode == PERMISSIONS_HASH) {
    return TopologyType::PERMISSIONS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TopologyType>(hashCode);
  }

  return TopologyType::NOT_SET;
}

Aws::String GetNameForTopologyType(TopologyType enumValue) {
  switch (enumValue) {
    case TopologyType::NOT_SET:
      return {};
    case TopologyType::CONTAINMENT:
      return "CONTAINMENT";
    case TopologyType::DATA_FLOW:
      return "DATA_FLOW";
    case TopologyType::OBSERVABILITY:
      return "OBSERVABILITY";
    case TopologyType::PERMISSIONS:
      return "PERMISSIONS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TopologyTypeMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
