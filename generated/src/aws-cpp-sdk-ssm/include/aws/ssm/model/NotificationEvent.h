/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSM
{
namespace Model
{
  enum class NotificationEvent
  {
    NOT_SET,
    All,
    InProgress,
    Success,
    TimedOut,
    Cancelled,
    Failed
  };

namespace NotificationEventMapper
{
AWS_SSM_API NotificationEvent GetNotificationEventForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForNotificationEvent(NotificationEvent value);
} // namespace NotificationEventMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
