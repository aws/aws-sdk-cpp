/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaConnect
{
namespace Model
{
  enum class EntitlementStatus
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace EntitlementStatusMapper
{
AWS_MEDIACONNECT_API EntitlementStatus GetEntitlementStatusForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForEntitlementStatus(EntitlementStatus value);
} // namespace EntitlementStatusMapper
} // namespace Model
} // namespace MediaConnect
} // namespace Aws
