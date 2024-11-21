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
  enum class MediaElementType
  {
    NOT_SET,
    IMAGE
  };

namespace MediaElementTypeMapper
{
AWS_NOTIFICATIONS_API MediaElementType GetMediaElementTypeForName(const Aws::String& name);

AWS_NOTIFICATIONS_API Aws::String GetNameForMediaElementType(MediaElementType value);
} // namespace MediaElementTypeMapper
} // namespace Model
} // namespace Notifications
} // namespace Aws
