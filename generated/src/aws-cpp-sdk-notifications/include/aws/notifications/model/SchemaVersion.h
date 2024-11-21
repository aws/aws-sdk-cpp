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
  enum class SchemaVersion
  {
    NOT_SET,
    v1_0
  };

namespace SchemaVersionMapper
{
AWS_NOTIFICATIONS_API SchemaVersion GetSchemaVersionForName(const Aws::String& name);

AWS_NOTIFICATIONS_API Aws::String GetNameForSchemaVersion(SchemaVersion value);
} // namespace SchemaVersionMapper
} // namespace Model
} // namespace Notifications
} // namespace Aws
