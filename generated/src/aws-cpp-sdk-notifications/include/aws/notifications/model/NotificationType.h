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
  enum class NotificationType
  {
    NOT_SET,
    ALERT,
    WARNING,
    ANNOUNCEMENT,
    INFORMATIONAL
  };

namespace NotificationTypeMapper
{
AWS_NOTIFICATIONS_API NotificationType GetNotificationTypeForName(const Aws::String& name);

AWS_NOTIFICATIONS_API Aws::String GetNameForNotificationType(NotificationType value);
} // namespace NotificationTypeMapper
} // namespace Model
} // namespace Notifications
} // namespace Aws
