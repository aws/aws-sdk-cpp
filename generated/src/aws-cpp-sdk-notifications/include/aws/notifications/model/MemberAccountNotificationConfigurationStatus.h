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
  enum class MemberAccountNotificationConfigurationStatus
  {
    NOT_SET,
    ACTIVE,
    PENDING,
    INACTIVE,
    CREATING,
    DELETING
  };

namespace MemberAccountNotificationConfigurationStatusMapper
{
AWS_NOTIFICATIONS_API MemberAccountNotificationConfigurationStatus GetMemberAccountNotificationConfigurationStatusForName(const Aws::String& name);

AWS_NOTIFICATIONS_API Aws::String GetNameForMemberAccountNotificationConfigurationStatus(MemberAccountNotificationConfigurationStatus value);
} // namespace MemberAccountNotificationConfigurationStatusMapper
} // namespace Model
} // namespace Notifications
} // namespace Aws
