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
  enum class EventStatus
  {
    NOT_SET,
    HEALTHY,
    UNHEALTHY
  };

namespace EventStatusMapper
{
AWS_NOTIFICATIONS_API EventStatus GetEventStatusForName(const Aws::String& name);

AWS_NOTIFICATIONS_API Aws::String GetNameForEventStatus(EventStatus value);
} // namespace EventStatusMapper
} // namespace Model
} // namespace Notifications
} // namespace Aws
