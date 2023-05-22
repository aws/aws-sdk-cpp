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
  enum class AssetBundleExportJobDashboardPropertyToOverride
  {
    NOT_SET,
    Name
  };

namespace AssetBundleExportJobDashboardPropertyToOverrideMapper
{
AWS_QUICKSIGHT_API AssetBundleExportJobDashboardPropertyToOverride GetAssetBundleExportJobDashboardPropertyToOverrideForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForAssetBundleExportJobDashboardPropertyToOverride(AssetBundleExportJobDashboardPropertyToOverride value);
} // namespace AssetBundleExportJobDashboardPropertyToOverrideMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
