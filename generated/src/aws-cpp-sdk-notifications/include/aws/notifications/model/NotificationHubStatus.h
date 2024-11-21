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
  enum class NotificationHubStatus
  {
    NOT_SET,
    ACTIVE,
    REGISTERING,
    DEREGISTERING,
    INACTIVE
  };

namespace NotificationHubStatusMapper
{
AWS_NOTIFICATIONS_API NotificationHubStatus GetNotificationHubStatusForName(const Aws::String& name);

AWS_NOTIFICATIONS_API Aws::String GetNameForNotificationHubStatus(NotificationHubStatus value);
} // namespace NotificationHubStatusMapper
} // namespace Model
} // namespace Notifications
} // namespace Aws
