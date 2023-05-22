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
  enum class AssetBundleExportJobDataSetPropertyToOverride
  {
    NOT_SET,
    Name
  };

namespace AssetBundleExportJobDataSetPropertyToOverrideMapper
{
AWS_QUICKSIGHT_API AssetBundleExportJobDataSetPropertyToOverride GetAssetBundleExportJobDataSetPropertyToOverrideForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForAssetBundleExportJobDataSetPropertyToOverride(AssetBundleExportJobDataSetPropertyToOverride value);
} // namespace AssetBundleExportJobDataSetPropertyToOverrideMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
