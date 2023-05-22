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
  enum class AssetBundleExportFormat
  {
    NOT_SET,
    CLOUDFORMATION_JSON,
    QUICKSIGHT_JSON
  };

namespace AssetBundleExportFormatMapper
{
AWS_QUICKSIGHT_API AssetBundleExportFormat GetAssetBundleExportFormatForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForAssetBundleExportFormat(AssetBundleExportFormat value);
} // namespace AssetBundleExportFormatMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
