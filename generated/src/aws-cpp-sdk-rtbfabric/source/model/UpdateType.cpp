/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/rtbfabric/model/UpdateType.h>

using namespace Aws::Utils;

namespace Aws {
namespace RTBFabric {
namespace Model {
namespace UpdateTypeMapper {

static const int GATEWAY_CONFIG_UPDATE_HASH = HashingUtils::HashString("GATEWAY_CONFIG_UPDATE");
static const int LINK_CONFIG_UPDATE_HASH = HashingUtils::HashString("LINK_CONFIG_UPDATE");
static const int LINK_FLOW_UPDATE_HASH = HashingUtils::HashString("LINK_FLOW_UPDATE");
static const int ROUTING_RULE_UPDATE_HASH = HashingUtils::HashString("ROUTING_RULE_UPDATE");

UpdateType GetUpdateTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == GATEWAY_CONFIG_UPDATE_HASH) {
    return UpdateType::GATEWAY_CONFIG_UPDATE;
  } else if (hashCode == LINK_CONFIG_UPDATE_HASH) {
    return UpdateType::LINK_CONFIG_UPDATE;
  } else if (hashCode == LINK_FLOW_UPDATE_HASH) {
    return UpdateType::LINK_FLOW_UPDATE;
  } else if (hashCode == ROUTING_RULE_UPDATE_HASH) {
    return UpdateType::ROUTING_RULE_UPDATE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<UpdateType>(hashCode);
  }

  return UpdateType::NOT_SET;
}

Aws::String GetNameForUpdateType(UpdateType enumValue) {
  switch (enumValue) {
    case UpdateType::NOT_SET:
      return {};
    case UpdateType::GATEWAY_CONFIG_UPDATE:
      return "GATEWAY_CONFIG_UPDATE";
    case UpdateType::LINK_CONFIG_UPDATE:
      return "LINK_CONFIG_UPDATE";
    case UpdateType::LINK_FLOW_UPDATE:
      return "LINK_FLOW_UPDATE";
    case UpdateType::ROUTING_RULE_UPDATE:
      return "ROUTING_RULE_UPDATE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace UpdateTypeMapper
}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
