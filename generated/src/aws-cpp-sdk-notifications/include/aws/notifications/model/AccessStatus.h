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
  enum class AccessStatus
  {
    NOT_SET,
    ENABLED,
    DISABLED,
    PENDING,
    FAILED
  };

namespace AccessStatusMapper
{
AWS_NOTIFICATIONS_API AccessStatus GetAccessStatusForName(const Aws::String& name);

AWS_NOTIFICATIONS_API Aws::String GetNameForAccessStatus(AccessStatus value);
} // namespace AccessStatusMapper
} // namespace Model
} // namespace Notifications
} // namespace Aws
