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
  enum class AssetBundleExportJobStatus
  {
    NOT_SET,
    QUEUED_FOR_IMMEDIATE_EXECUTION,
    IN_PROGRESS,
    SUCCESSFUL,
    FAILED
  };

namespace AssetBundleExportJobStatusMapper
{
AWS_QUICKSIGHT_API AssetBundleExportJobStatus GetAssetBundleExportJobStatusForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForAssetBundleExportJobStatus(AssetBundleExportJobStatus value);
} // namespace AssetBundleExportJobStatusMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
