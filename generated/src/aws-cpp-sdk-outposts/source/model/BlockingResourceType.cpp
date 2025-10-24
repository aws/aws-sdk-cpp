/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/outposts/model/BlockingResourceType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Outposts {
namespace Model {
namespace BlockingResourceTypeMapper {

static const int EC2_INSTANCE_HASH = HashingUtils::HashString("EC2_INSTANCE");
static const int OUTPOST_RAM_SHARE_HASH = HashingUtils::HashString("OUTPOST_RAM_SHARE");
static const int LGW_ROUTING_DOMAIN_HASH = HashingUtils::HashString("LGW_ROUTING_DOMAIN");
static const int LGW_ROUTE_TABLE_HASH = HashingUtils::HashString("LGW_ROUTE_TABLE");
static const int LGW_VIRTUAL_INTERFACE_GROUP_HASH = HashingUtils::HashString("LGW_VIRTUAL_INTERFACE_GROUP");
static const int OUTPOST_ORDER_CANCELLABLE_HASH = HashingUtils::HashString("OUTPOST_ORDER_CANCELLABLE");
static const int OUTPOST_ORDER_INTERVENTION_REQUIRED_HASH = HashingUtils::HashString("OUTPOST_ORDER_INTERVENTION_REQUIRED");

BlockingResourceType GetBlockingResourceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EC2_INSTANCE_HASH) {
    return BlockingResourceType::EC2_INSTANCE;
  } else if (hashCode == OUTPOST_RAM_SHARE_HASH) {
    return BlockingResourceType::OUTPOST_RAM_SHARE;
  } else if (hashCode == LGW_ROUTING_DOMAIN_HASH) {
    return BlockingResourceType::LGW_ROUTING_DOMAIN;
  } else if (hashCode == LGW_ROUTE_TABLE_HASH) {
    return BlockingResourceType::LGW_ROUTE_TABLE;
  } else if (hashCode == LGW_VIRTUAL_INTERFACE_GROUP_HASH) {
    return BlockingResourceType::LGW_VIRTUAL_INTERFACE_GROUP;
  } else if (hashCode == OUTPOST_ORDER_CANCELLABLE_HASH) {
    return BlockingResourceType::OUTPOST_ORDER_CANCELLABLE;
  } else if (hashCode == OUTPOST_ORDER_INTERVENTION_REQUIRED_HASH) {
    return BlockingResourceType::OUTPOST_ORDER_INTERVENTION_REQUIRED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BlockingResourceType>(hashCode);
  }

  return BlockingResourceType::NOT_SET;
}

Aws::String GetNameForBlockingResourceType(BlockingResourceType enumValue) {
  switch (enumValue) {
    case BlockingResourceType::NOT_SET:
      return {};
    case BlockingResourceType::EC2_INSTANCE:
      return "EC2_INSTANCE";
    case BlockingResourceType::OUTPOST_RAM_SHARE:
      return "OUTPOST_RAM_SHARE";
    case BlockingResourceType::LGW_ROUTING_DOMAIN:
      return "LGW_ROUTING_DOMAIN";
    case BlockingResourceType::LGW_ROUTE_TABLE:
      return "LGW_ROUTE_TABLE";
    case BlockingResourceType::LGW_VIRTUAL_INTERFACE_GROUP:
      return "LGW_VIRTUAL_INTERFACE_GROUP";
    case BlockingResourceType::OUTPOST_ORDER_CANCELLABLE:
      return "OUTPOST_ORDER_CANCELLABLE";
    case BlockingResourceType::OUTPOST_ORDER_INTERVENTION_REQUIRED:
      return "OUTPOST_ORDER_INTERVENTION_REQUIRED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BlockingResourceTypeMapper
}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
