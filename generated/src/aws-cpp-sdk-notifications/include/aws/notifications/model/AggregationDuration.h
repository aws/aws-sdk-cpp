/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notifications/Notifications_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Notifications
{
namespace Model
{
  enum class AggregationDuration
  {
    NOT_SET,
    LONG,
    SHORT,
    NONE
  };

namespace AggregationDurationMapper
{
AWS_NOTIFICATIONS_API AggregationDuration GetAggregationDurationForName(const Aws::String& name);

AWS_NOTIFICATIONS_API Aws::String GetNameForAggregationDuration(AggregationDuration value);
} // namespace AggregationDurationMapper
} // namespace Model
} // namespace Notifications
} // namespace Aws
