/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Outposts
{
namespace Model
{
  enum class SubscriptionStatus
  {
    NOT_SET,
    ACTIVE,
    INACTIVE,
    CANCELLED
  };

namespace SubscriptionStatusMapper
{
AWS_OUTPOSTS_API SubscriptionStatus GetSubscriptionStatusForName(const Aws::String& name);

AWS_OUTPOSTS_API Aws::String GetNameForSubscriptionStatus(SubscriptionStatus value);
} // namespace SubscriptionStatusMapper
} // namespace Model
} // namespace Outposts
} // namespace Aws
