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
  enum class TextPartType
  {
    NOT_SET,
    LOCALIZED_TEXT,
    PLAIN_TEXT,
    URL
  };

namespace TextPartTypeMapper
{
AWS_NOTIFICATIONS_API TextPartType GetTextPartTypeForName(const Aws::String& name);

AWS_NOTIFICATIONS_API Aws::String GetNameForTextPartType(TextPartType value);
} // namespace TextPartTypeMapper
} // namespace Model
} // namespace Notifications
} // namespace Aws
