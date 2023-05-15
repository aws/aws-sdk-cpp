/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rolesanywhere/RolesAnywhere_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace RolesAnywhere
{
namespace Model
{
  enum class NotificationChannel
  {
    NOT_SET,
    ALL
  };

namespace NotificationChannelMapper
{
AWS_ROLESANYWHERE_API NotificationChannel GetNotificationChannelForName(const Aws::String& name);

AWS_ROLESANYWHERE_API Aws::String GetNameForNotificationChannel(NotificationChannel value);
} // namespace NotificationChannelMapper
} // namespace Model
} // namespace RolesAnywhere
} // namespace Aws
