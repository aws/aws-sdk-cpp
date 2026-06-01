/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/quicksight/model/SpaceQuickSightSearchFilterName.h>

using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {
namespace SpaceQuickSightSearchFilterNameMapper {

static const int SPACE_ID_HASH = HashingUtils::HashString("SPACE_ID");
static const int SPACE_NAME_HASH = HashingUtils::HashString("SPACE_NAME");
static const int DIRECT_QUICKSIGHT_OWNER_HASH = HashingUtils::HashString("DIRECT_QUICKSIGHT_OWNER");
static const int DIRECT_QUICKSIGHT_VIEWER_OR_OWNER_HASH = HashingUtils::HashString("DIRECT_QUICKSIGHT_VIEWER_OR_OWNER");
static const int DIRECT_QUICKSIGHT_SOLE_OWNER_HASH = HashingUtils::HashString("DIRECT_QUICKSIGHT_SOLE_OWNER");
static const int CONTRIBUTED_BY_HASH = HashingUtils::HashString("CONTRIBUTED_BY");
static const int CONSUMED_SOURCE_SIZE_HASH = HashingUtils::HashString("CONSUMED_SOURCE_SIZE");
static const int CREATED_BY_HASH = HashingUtils::HashString("CREATED_BY");

SpaceQuickSightSearchFilterName GetSpaceQuickSightSearchFilterNameForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SPACE_ID_HASH) {
    return SpaceQuickSightSearchFilterName::SPACE_ID;
  } else if (hashCode == SPACE_NAME_HASH) {
    return SpaceQuickSightSearchFilterName::SPACE_NAME;
  } else if (hashCode == DIRECT_QUICKSIGHT_OWNER_HASH) {
    return SpaceQuickSightSearchFilterName::DIRECT_QUICKSIGHT_OWNER;
  } else if (hashCode == DIRECT_QUICKSIGHT_VIEWER_OR_OWNER_HASH) {
    return SpaceQuickSightSearchFilterName::DIRECT_QUICKSIGHT_VIEWER_OR_OWNER;
  } else if (hashCode == DIRECT_QUICKSIGHT_SOLE_OWNER_HASH) {
    return SpaceQuickSightSearchFilterName::DIRECT_QUICKSIGHT_SOLE_OWNER;
  } else if (hashCode == CONTRIBUTED_BY_HASH) {
    return SpaceQuickSightSearchFilterName::CONTRIBUTED_BY;
  } else if (hashCode == CONSUMED_SOURCE_SIZE_HASH) {
    return SpaceQuickSightSearchFilterName::CONSUMED_SOURCE_SIZE;
  } else if (hashCode == CREATED_BY_HASH) {
    return SpaceQuickSightSearchFilterName::CREATED_BY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SpaceQuickSightSearchFilterName>(hashCode);
  }

  return SpaceQuickSightSearchFilterName::NOT_SET;
}

Aws::String GetNameForSpaceQuickSightSearchFilterName(SpaceQuickSightSearchFilterName enumValue) {
  switch (enumValue) {
    case SpaceQuickSightSearchFilterName::NOT_SET:
      return {};
    case SpaceQuickSightSearchFilterName::SPACE_ID:
      return "SPACE_ID";
    case SpaceQuickSightSearchFilterName::SPACE_NAME:
      return "SPACE_NAME";
    case SpaceQuickSightSearchFilterName::DIRECT_QUICKSIGHT_OWNER:
      return "DIRECT_QUICKSIGHT_OWNER";
    case SpaceQuickSightSearchFilterName::DIRECT_QUICKSIGHT_VIEWER_OR_OWNER:
      return "DIRECT_QUICKSIGHT_VIEWER_OR_OWNER";
    case SpaceQuickSightSearchFilterName::DIRECT_QUICKSIGHT_SOLE_OWNER:
      return "DIRECT_QUICKSIGHT_SOLE_OWNER";
    case SpaceQuickSightSearchFilterName::CONTRIBUTED_BY:
      return "CONTRIBUTED_BY";
    case SpaceQuickSightSearchFilterName::CONSUMED_SOURCE_SIZE:
      return "CONSUMED_SOURCE_SIZE";
    case SpaceQuickSightSearchFilterName::CREATED_BY:
      return "CREATED_BY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SpaceQuickSightSearchFilterNameMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
