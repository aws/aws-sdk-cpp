/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QuickSight
{
namespace Model
{
  enum class AssetBundleExportJobFolderPropertyToOverride
  {
    NOT_SET,
    Name,
    ParentFolderArn
  };

namespace AssetBundleExportJobFolderPropertyToOverrideMapper
{
AWS_QUICKSIGHT_API AssetBundleExportJobFolderPropertyToOverride GetAssetBundleExportJobFolderPropertyToOverrideForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForAssetBundleExportJobFolderPropertyToOverride(AssetBundleExportJobFolderPropertyToOverride value);
} // namespace AssetBundleExportJobFolderPropertyToOverrideMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
