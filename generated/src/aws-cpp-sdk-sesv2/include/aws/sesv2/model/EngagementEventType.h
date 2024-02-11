/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SESV2
{
namespace Model
{
  enum class EngagementEventType
  {
    NOT_SET,
    OPEN,
    CLICK
  };

namespace EngagementEventTypeMapper
{
AWS_SESV2_API EngagementEventType GetEngagementEventTypeForName(const Aws::String& name);

AWS_SESV2_API Aws::String GetNameForEngagementEventType(EngagementEventType value);
} // namespace EngagementEventTypeMapper
} // namespace Model
} // namespace SESV2
} // namespace Aws
