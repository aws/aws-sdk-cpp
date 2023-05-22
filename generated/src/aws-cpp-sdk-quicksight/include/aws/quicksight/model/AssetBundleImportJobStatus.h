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
  enum class AssetBundleImportJobStatus
  {
    NOT_SET,
    QUEUED_FOR_IMMEDIATE_EXECUTION,
    IN_PROGRESS,
    SUCCESSFUL,
    FAILED,
    FAILED_ROLLBACK_IN_PROGRESS,
    FAILED_ROLLBACK_COMPLETED,
    FAILED_ROLLBACK_ERROR
  };

namespace AssetBundleImportJobStatusMapper
{
AWS_QUICKSIGHT_API AssetBundleImportJobStatus GetAssetBundleImportJobStatusForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForAssetBundleImportJobStatus(AssetBundleImportJobStatus value);
} // namespace AssetBundleImportJobStatusMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
