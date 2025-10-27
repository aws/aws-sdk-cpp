/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/quicksight/model/ActionConnectorSearchFilterNameEnum.h>

using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {
namespace ActionConnectorSearchFilterNameEnumMapper {

static const int ACTION_CONNECTOR_NAME_HASH = HashingUtils::HashString("ACTION_CONNECTOR_NAME");
static const int ACTION_CONNECTOR_TYPE_HASH = HashingUtils::HashString("ACTION_CONNECTOR_TYPE");
static const int QUICKSIGHT_OWNER_HASH = HashingUtils::HashString("QUICKSIGHT_OWNER");
static const int QUICKSIGHT_VIEWER_OR_OWNER_HASH = HashingUtils::HashString("QUICKSIGHT_VIEWER_OR_OWNER");
static const int DIRECT_QUICKSIGHT_SOLE_OWNER_HASH = HashingUtils::HashString("DIRECT_QUICKSIGHT_SOLE_OWNER");
static const int DIRECT_QUICKSIGHT_OWNER_HASH = HashingUtils::HashString("DIRECT_QUICKSIGHT_OWNER");
static const int DIRECT_QUICKSIGHT_VIEWER_OR_OWNER_HASH = HashingUtils::HashString("DIRECT_QUICKSIGHT_VIEWER_OR_OWNER");

ActionConnectorSearchFilterNameEnum GetActionConnectorSearchFilterNameEnumForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTION_CONNECTOR_NAME_HASH) {
    return ActionConnectorSearchFilterNameEnum::ACTION_CONNECTOR_NAME;
  } else if (hashCode == ACTION_CONNECTOR_TYPE_HASH) {
    return ActionConnectorSearchFilterNameEnum::ACTION_CONNECTOR_TYPE;
  } else if (hashCode == QUICKSIGHT_OWNER_HASH) {
    return ActionConnectorSearchFilterNameEnum::QUICKSIGHT_OWNER;
  } else if (hashCode == QUICKSIGHT_VIEWER_OR_OWNER_HASH) {
    return ActionConnectorSearchFilterNameEnum::QUICKSIGHT_VIEWER_OR_OWNER;
  } else if (hashCode == DIRECT_QUICKSIGHT_SOLE_OWNER_HASH) {
    return ActionConnectorSearchFilterNameEnum::DIRECT_QUICKSIGHT_SOLE_OWNER;
  } else if (hashCode == DIRECT_QUICKSIGHT_OWNER_HASH) {
    return ActionConnectorSearchFilterNameEnum::DIRECT_QUICKSIGHT_OWNER;
  } else if (hashCode == DIRECT_QUICKSIGHT_VIEWER_OR_OWNER_HASH) {
    return ActionConnectorSearchFilterNameEnum::DIRECT_QUICKSIGHT_VIEWER_OR_OWNER;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ActionConnectorSearchFilterNameEnum>(hashCode);
  }

  return ActionConnectorSearchFilterNameEnum::NOT_SET;
}

Aws::String GetNameForActionConnectorSearchFilterNameEnum(ActionConnectorSearchFilterNameEnum enumValue) {
  switch (enumValue) {
    case ActionConnectorSearchFilterNameEnum::NOT_SET:
      return {};
    case ActionConnectorSearchFilterNameEnum::ACTION_CONNECTOR_NAME:
      return "ACTION_CONNECTOR_NAME";
    case ActionConnectorSearchFilterNameEnum::ACTION_CONNECTOR_TYPE:
      return "ACTION_CONNECTOR_TYPE";
    case ActionConnectorSearchFilterNameEnum::QUICKSIGHT_OWNER:
      return "QUICKSIGHT_OWNER";
    case ActionConnectorSearchFilterNameEnum::QUICKSIGHT_VIEWER_OR_OWNER:
      return "QUICKSIGHT_VIEWER_OR_OWNER";
    case ActionConnectorSearchFilterNameEnum::DIRECT_QUICKSIGHT_SOLE_OWNER:
      return "DIRECT_QUICKSIGHT_SOLE_OWNER";
    case ActionConnectorSearchFilterNameEnum::DIRECT_QUICKSIGHT_OWNER:
      return "DIRECT_QUICKSIGHT_OWNER";
    case ActionConnectorSearchFilterNameEnum::DIRECT_QUICKSIGHT_VIEWER_OR_OWNER:
      return "DIRECT_QUICKSIGHT_VIEWER_OR_OWNER";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ActionConnectorSearchFilterNameEnumMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
