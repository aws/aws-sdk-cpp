/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/quicksight/model/AssetBundleExportJobTopicV2PropertyToOverride.h>

using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {
namespace AssetBundleExportJobTopicV2PropertyToOverrideMapper {

static const int Name_HASH = HashingUtils::HashString("Name");
static const int Description_HASH = HashingUtils::HashString("Description");

AssetBundleExportJobTopicV2PropertyToOverride GetAssetBundleExportJobTopicV2PropertyToOverrideForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Name_HASH) {
    return AssetBundleExportJobTopicV2PropertyToOverride::Name;
  } else if (hashCode == Description_HASH) {
    return AssetBundleExportJobTopicV2PropertyToOverride::Description;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AssetBundleExportJobTopicV2PropertyToOverride>(hashCode);
  }

  return AssetBundleExportJobTopicV2PropertyToOverride::NOT_SET;
}

Aws::String GetNameForAssetBundleExportJobTopicV2PropertyToOverride(AssetBundleExportJobTopicV2PropertyToOverride enumValue) {
  switch (enumValue) {
    case AssetBundleExportJobTopicV2PropertyToOverride::NOT_SET:
      return {};
    case AssetBundleExportJobTopicV2PropertyToOverride::Name:
      return "Name";
    case AssetBundleExportJobTopicV2PropertyToOverride::Description:
      return "Description";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AssetBundleExportJobTopicV2PropertyToOverrideMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
