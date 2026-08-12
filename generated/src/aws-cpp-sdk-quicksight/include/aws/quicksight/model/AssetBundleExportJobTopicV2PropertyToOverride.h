/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>

namespace Aws {
namespace QuickSight {
namespace Model {
enum class AssetBundleExportJobTopicV2PropertyToOverride { NOT_SET, Name, Description };

namespace AssetBundleExportJobTopicV2PropertyToOverrideMapper {
AWS_QUICKSIGHT_API AssetBundleExportJobTopicV2PropertyToOverride
GetAssetBundleExportJobTopicV2PropertyToOverrideForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForAssetBundleExportJobTopicV2PropertyToOverride(AssetBundleExportJobTopicV2PropertyToOverride value);
}  // namespace AssetBundleExportJobTopicV2PropertyToOverrideMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
