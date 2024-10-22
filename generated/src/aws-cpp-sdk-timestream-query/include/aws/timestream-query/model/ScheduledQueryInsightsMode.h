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
  enum class ScheduledQueryInsightsMode
  {
    NOT_SET,
    ENABLED_WITH_RATE_CONTROL,
    DISABLED
  };

namespace ScheduledQueryInsightsModeMapper
{
AWS_TIMESTREAMQUERY_API ScheduledQueryInsightsMode GetScheduledQueryInsightsModeForName(const Aws::String& name);

AWS_TIMESTREAMQUERY_API Aws::String GetNameForScheduledQueryInsightsMode(ScheduledQueryInsightsMode value);
} // namespace ScheduledQueryInsightsModeMapper
} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
