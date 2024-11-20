/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace TimestreamQuery
{
namespace Model
{
  enum class LastUpdateStatus
  {
    NOT_SET,
    PENDING,
    FAILED,
    SUCCEEDED
  };

namespace LastUpdateStatusMapper
{
AWS_TIMESTREAMQUERY_API LastUpdateStatus GetLastUpdateStatusForName(const Aws::String& name);

AWS_TIMESTREAMQUERY_API Aws::String GetNameForLastUpdateStatus(LastUpdateStatus value);
} // namespace LastUpdateStatusMapper
} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
