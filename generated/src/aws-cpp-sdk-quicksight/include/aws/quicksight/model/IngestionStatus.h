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
  enum class IngestionStatus
  {
    NOT_SET,
    INITIALIZED,
    QUEUED,
    RUNNING,
    FAILED,
    COMPLETED,
    CANCELLED
  };

namespace IngestionStatusMapper
{
AWS_QUICKSIGHT_API IngestionStatus GetIngestionStatusForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForIngestionStatus(IngestionStatus value);
} // namespace IngestionStatusMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
