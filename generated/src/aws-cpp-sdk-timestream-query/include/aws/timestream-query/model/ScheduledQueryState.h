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
  enum class ScheduledQueryState
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace ScheduledQueryStateMapper
{
AWS_TIMESTREAMQUERY_API ScheduledQueryState GetScheduledQueryStateForName(const Aws::String& name);

AWS_TIMESTREAMQUERY_API Aws::String GetNameForScheduledQueryState(ScheduledQueryState value);
} // namespace ScheduledQueryStateMapper
} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
