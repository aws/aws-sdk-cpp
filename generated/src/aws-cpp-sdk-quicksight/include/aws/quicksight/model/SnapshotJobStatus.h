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
  enum class SnapshotJobStatus
  {
    NOT_SET,
    QUEUED,
    RUNNING,
    COMPLETED,
    FAILED
  };

namespace SnapshotJobStatusMapper
{
AWS_QUICKSIGHT_API SnapshotJobStatus GetSnapshotJobStatusForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForSnapshotJobStatus(SnapshotJobStatus value);
} // namespace SnapshotJobStatusMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
