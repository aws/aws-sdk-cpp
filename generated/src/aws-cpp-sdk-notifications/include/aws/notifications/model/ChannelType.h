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
  enum class ChannelType
  {
    NOT_SET,
    MOBILE,
    CHATBOT,
    EMAIL,
    ACCOUNT_CONTACT
  };

namespace ChannelTypeMapper
{
AWS_NOTIFICATIONS_API ChannelType GetChannelTypeForName(const Aws::String& name);

AWS_NOTIFICATIONS_API Aws::String GetNameForChannelType(ChannelType value);
} // namespace ChannelTypeMapper
} // namespace Model
} // namespace Notifications
} // namespace Aws
