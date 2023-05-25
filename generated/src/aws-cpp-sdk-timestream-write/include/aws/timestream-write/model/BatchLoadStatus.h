/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-write/TimestreamWrite_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace TimestreamWrite
{
namespace Model
{
  enum class BatchLoadStatus
  {
    NOT_SET,
    CREATED,
    IN_PROGRESS,
    FAILED,
    SUCCEEDED,
    PROGRESS_STOPPED,
    PENDING_RESUME
  };

namespace BatchLoadStatusMapper
{
AWS_TIMESTREAMWRITE_API BatchLoadStatus GetBatchLoadStatusForName(const Aws::String& name);

AWS_TIMESTREAMWRITE_API Aws::String GetNameForBatchLoadStatus(BatchLoadStatus value);
} // namespace BatchLoadStatusMapper
} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
