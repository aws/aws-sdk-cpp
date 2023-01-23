/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Shield
{
namespace Model
{
  enum class SubscriptionState
  {
    NOT_SET,
    ACTIVE,
    INACTIVE
  };

namespace SubscriptionStateMapper
{
AWS_SHIELD_API SubscriptionState GetSubscriptionStateForName(const Aws::String& name);

AWS_SHIELD_API Aws::String GetNameForSubscriptionState(SubscriptionState value);
} // namespace SubscriptionStateMapper
} // namespace Model
} // namespace Shield
} // namespace Aws
