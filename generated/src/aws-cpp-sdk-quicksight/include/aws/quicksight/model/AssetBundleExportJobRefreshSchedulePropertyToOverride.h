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
  enum class AssetBundleExportJobRefreshSchedulePropertyToOverride
  {
    NOT_SET,
    StartAfterDateTime
  };

namespace AssetBundleExportJobRefreshSchedulePropertyToOverrideMapper
{
AWS_QUICKSIGHT_API AssetBundleExportJobRefreshSchedulePropertyToOverride GetAssetBundleExportJobRefreshSchedulePropertyToOverrideForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForAssetBundleExportJobRefreshSchedulePropertyToOverride(AssetBundleExportJobRefreshSchedulePropertyToOverride value);
} // namespace AssetBundleExportJobRefreshSchedulePropertyToOverrideMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
