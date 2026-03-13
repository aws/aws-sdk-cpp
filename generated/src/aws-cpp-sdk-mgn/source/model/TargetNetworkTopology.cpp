/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mgn/model/TargetNetworkTopology.h>

using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {
namespace TargetNetworkTopologyMapper {

static const int ISOLATED_VPC_HASH = HashingUtils::HashString("ISOLATED_VPC");
static const int HUB_AND_SPOKE_HASH = HashingUtils::HashString("HUB_AND_SPOKE");

TargetNetworkTopology GetTargetNetworkTopologyForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ISOLATED_VPC_HASH) {
    return TargetNetworkTopology::ISOLATED_VPC;
  } else if (hashCode == HUB_AND_SPOKE_HASH) {
    return TargetNetworkTopology::HUB_AND_SPOKE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TargetNetworkTopology>(hashCode);
  }

  return TargetNetworkTopology::NOT_SET;
}

Aws::String GetNameForTargetNetworkTopology(TargetNetworkTopology enumValue) {
  switch (enumValue) {
    case TargetNetworkTopology::NOT_SET:
      return {};
    case TargetNetworkTopology::ISOLATED_VPC:
      return "ISOLATED_VPC";
    case TargetNetworkTopology::HUB_AND_SPOKE:
      return "HUB_AND_SPOKE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TargetNetworkTopologyMapper
}  // namespace Model
}  // namespace mgn
}  // namespace Aws
