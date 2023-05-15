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
  enum class NotificationEvent
  {
    NOT_SET,
    CA_CERTIFICATE_EXPIRY,
    END_ENTITY_CERTIFICATE_EXPIRY
  };

namespace NotificationEventMapper
{
AWS_ROLESANYWHERE_API NotificationEvent GetNotificationEventForName(const Aws::String& name);

AWS_ROLESANYWHERE_API Aws::String GetNameForNotificationEvent(NotificationEvent value);
} // namespace NotificationEventMapper
} // namespace Model
} // namespace RolesAnywhere
} // namespace Aws
