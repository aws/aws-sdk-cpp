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
  enum class SubscriptionStatus
  {
    NOT_SET,
    OPT_IN,
    OPT_OUT
  };

namespace SubscriptionStatusMapper
{
AWS_SESV2_API SubscriptionStatus GetSubscriptionStatusForName(const Aws::String& name);

AWS_SESV2_API Aws::String GetNameForSubscriptionStatus(SubscriptionStatus value);
} // namespace SubscriptionStatusMapper
} // namespace Model
} // namespace SESV2
} // namespace Aws
