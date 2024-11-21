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
  enum class AggregationEventType
  {
    NOT_SET,
    AGGREGATE,
    CHILD,
    NONE
  };

namespace AggregationEventTypeMapper
{
AWS_NOTIFICATIONS_API AggregationEventType GetAggregationEventTypeForName(const Aws::String& name);

AWS_NOTIFICATIONS_API Aws::String GetNameForAggregationEventType(AggregationEventType value);
} // namespace AggregationEventTypeMapper
} // namespace Model
} // namespace Notifications
} // namespace Aws
