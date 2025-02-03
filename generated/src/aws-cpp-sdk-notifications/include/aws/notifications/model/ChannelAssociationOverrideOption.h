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
  enum class ChannelAssociationOverrideOption
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace ChannelAssociationOverrideOptionMapper
{
AWS_NOTIFICATIONS_API ChannelAssociationOverrideOption GetChannelAssociationOverrideOptionForName(const Aws::String& name);

AWS_NOTIFICATIONS_API Aws::String GetNameForChannelAssociationOverrideOption(ChannelAssociationOverrideOption value);
} // namespace ChannelAssociationOverrideOptionMapper
} // namespace Model
} // namespace Notifications
} // namespace Aws
