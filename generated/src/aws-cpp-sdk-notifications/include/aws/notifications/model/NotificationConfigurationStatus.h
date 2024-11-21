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
  enum class NotificationConfigurationStatus
  {
    NOT_SET,
    ACTIVE,
    PARTIALLY_ACTIVE,
    INACTIVE,
    DELETING
  };

namespace NotificationConfigurationStatusMapper
{
AWS_NOTIFICATIONS_API NotificationConfigurationStatus GetNotificationConfigurationStatusForName(const Aws::String& name);

AWS_NOTIFICATIONS_API Aws::String GetNameForNotificationConfigurationStatus(NotificationConfigurationStatus value);
} // namespace NotificationConfigurationStatusMapper
} // namespace Model
} // namespace Notifications
} // namespace Aws
