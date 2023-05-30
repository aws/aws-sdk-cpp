/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SecurityLake
{
namespace Model
{
  enum class SubscriberStatus
  {
    NOT_SET,
    ACTIVE,
    DEACTIVATED,
    PENDING,
    READY
  };

namespace SubscriberStatusMapper
{
AWS_SECURITYLAKE_API SubscriberStatus GetSubscriberStatusForName(const Aws::String& name);

AWS_SECURITYLAKE_API Aws::String GetNameForSubscriberStatus(SubscriberStatus value);
} // namespace SubscriberStatusMapper
} // namespace Model
} // namespace SecurityLake
} // namespace Aws
