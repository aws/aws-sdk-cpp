/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notificationscontacts/NotificationsContacts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace NotificationsContacts
{
namespace Model
{
  enum class EmailContactStatus
  {
    NOT_SET,
    inactive,
    active
  };

namespace EmailContactStatusMapper
{
AWS_NOTIFICATIONSCONTACTS_API EmailContactStatus GetEmailContactStatusForName(const Aws::String& name);

AWS_NOTIFICATIONSCONTACTS_API Aws::String GetNameForEmailContactStatus(EmailContactStatus value);
} // namespace EmailContactStatusMapper
} // namespace Model
} // namespace NotificationsContacts
} // namespace Aws
