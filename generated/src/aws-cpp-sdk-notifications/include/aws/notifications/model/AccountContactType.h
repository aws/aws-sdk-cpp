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
  enum class AccountContactType
  {
    NOT_SET,
    ACCOUNT_PRIMARY,
    ACCOUNT_ALTERNATE_BILLING,
    ACCOUNT_ALTERNATE_OPERATIONS,
    ACCOUNT_ALTERNATE_SECURITY
  };

namespace AccountContactTypeMapper
{
AWS_NOTIFICATIONS_API AccountContactType GetAccountContactTypeForName(const Aws::String& name);

AWS_NOTIFICATIONS_API Aws::String GetNameForAccountContactType(AccountContactType value);
} // namespace AccountContactTypeMapper
} // namespace Model
} // namespace Notifications
} // namespace Aws
