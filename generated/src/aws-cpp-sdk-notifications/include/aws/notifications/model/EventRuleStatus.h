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
  enum class EventRuleStatus
  {
    NOT_SET,
    ACTIVE,
    INACTIVE,
    CREATING,
    UPDATING,
    DELETING
  };

namespace EventRuleStatusMapper
{
AWS_NOTIFICATIONS_API EventRuleStatus GetEventRuleStatusForName(const Aws::String& name);

AWS_NOTIFICATIONS_API Aws::String GetNameForEventRuleStatus(EventRuleStatus value);
} // namespace EventRuleStatusMapper
} // namespace Model
} // namespace Notifications
} // namespace Aws
