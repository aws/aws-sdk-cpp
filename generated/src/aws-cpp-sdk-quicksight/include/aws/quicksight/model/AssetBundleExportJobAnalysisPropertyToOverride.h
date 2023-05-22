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
  enum class AssetBundleExportJobAnalysisPropertyToOverride
  {
    NOT_SET,
    Name
  };

namespace AssetBundleExportJobAnalysisPropertyToOverrideMapper
{
AWS_QUICKSIGHT_API AssetBundleExportJobAnalysisPropertyToOverride GetAssetBundleExportJobAnalysisPropertyToOverrideForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForAssetBundleExportJobAnalysisPropertyToOverride(AssetBundleExportJobAnalysisPropertyToOverride value);
} // namespace AssetBundleExportJobAnalysisPropertyToOverrideMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
