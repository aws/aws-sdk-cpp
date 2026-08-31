/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/quicksight/model/SearchAppsFilterName.h>

using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {
namespace SearchAppsFilterNameMapper {

static const int APP_ID_HASH = HashingUtils::HashString("APP_ID");
static const int APP_NAME_HASH = HashingUtils::HashString("APP_NAME");
static const int DIRECT_QUICKSIGHT_SOLE_OWNER_HASH = HashingUtils::HashString("DIRECT_QUICKSIGHT_SOLE_OWNER");
static const int DIRECT_QUICKSIGHT_OWNER_HASH = HashingUtils::HashString("DIRECT_QUICKSIGHT_OWNER");
static const int DIRECT_QUICKSIGHT_VIEWER_OR_OWNER_HASH = HashingUtils::HashString("DIRECT_QUICKSIGHT_VIEWER_OR_OWNER");

SearchAppsFilterName GetSearchAppsFilterNameForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == APP_ID_HASH) {
    return SearchAppsFilterName::APP_ID;
  } else if (hashCode == APP_NAME_HASH) {
    return SearchAppsFilterName::APP_NAME;
  } else if (hashCode == DIRECT_QUICKSIGHT_SOLE_OWNER_HASH) {
    return SearchAppsFilterName::DIRECT_QUICKSIGHT_SOLE_OWNER;
  } else if (hashCode == DIRECT_QUICKSIGHT_OWNER_HASH) {
    return SearchAppsFilterName::DIRECT_QUICKSIGHT_OWNER;
  } else if (hashCode == DIRECT_QUICKSIGHT_VIEWER_OR_OWNER_HASH) {
    return SearchAppsFilterName::DIRECT_QUICKSIGHT_VIEWER_OR_OWNER;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SearchAppsFilterName>(hashCode);
  }

  return SearchAppsFilterName::NOT_SET;
}

Aws::String GetNameForSearchAppsFilterName(SearchAppsFilterName enumValue) {
  switch (enumValue) {
    case SearchAppsFilterName::NOT_SET:
      return {};
    case SearchAppsFilterName::APP_ID:
      return "APP_ID";
    case SearchAppsFilterName::APP_NAME:
      return "APP_NAME";
    case SearchAppsFilterName::DIRECT_QUICKSIGHT_SOLE_OWNER:
      return "DIRECT_QUICKSIGHT_SOLE_OWNER";
    case SearchAppsFilterName::DIRECT_QUICKSIGHT_OWNER:
      return "DIRECT_QUICKSIGHT_OWNER";
    case SearchAppsFilterName::DIRECT_QUICKSIGHT_VIEWER_OR_OWNER:
      return "DIRECT_QUICKSIGHT_VIEWER_OR_OWNER";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SearchAppsFilterNameMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
