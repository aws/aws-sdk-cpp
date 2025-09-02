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
  enum class NotificationConfigurationSubtype
  {
    NOT_SET,
    ACCOUNT,
    ADMIN_MANAGED
  };

namespace NotificationConfigurationSubtypeMapper
{
AWS_NOTIFICATIONS_API NotificationConfigurationSubtype GetNotificationConfigurationSubtypeForName(const Aws::String& name);

AWS_NOTIFICATIONS_API Aws::String GetNameForNotificationConfigurationSubtype(NotificationConfigurationSubtype value);
} // namespace NotificationConfigurationSubtypeMapper
} // namespace Model
} // namespace Notifications
} // namespace Aws
