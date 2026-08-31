/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/quicksight/model/AppVisibility.h>

using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {
namespace AppVisibilityMapper {

static const int PRIVATE__HASH = HashingUtils::HashString("PRIVATE");
static const int PUBLIC__HASH = HashingUtils::HashString("PUBLIC");

AppVisibility GetAppVisibilityForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PRIVATE__HASH) {
    return AppVisibility::PRIVATE_;
  } else if (hashCode == PUBLIC__HASH) {
    return AppVisibility::PUBLIC_;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AppVisibility>(hashCode);
  }

  return AppVisibility::NOT_SET;
}

Aws::String GetNameForAppVisibility(AppVisibility enumValue) {
  switch (enumValue) {
    case AppVisibility::NOT_SET:
      return {};
    case AppVisibility::PRIVATE_:
      return "PRIVATE";
    case AppVisibility::PUBLIC_:
      return "PUBLIC";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AppVisibilityMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
