/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace PinpointEmail
{
namespace Model
{
  enum class DeliverabilityDashboardAccountStatus
  {
    NOT_SET,
    ACTIVE,
    PENDING_EXPIRATION,
    DISABLED
  };

namespace DeliverabilityDashboardAccountStatusMapper
{
AWS_PINPOINTEMAIL_API DeliverabilityDashboardAccountStatus GetDeliverabilityDashboardAccountStatusForName(const Aws::String& name);

AWS_PINPOINTEMAIL_API Aws::String GetNameForDeliverabilityDashboardAccountStatus(DeliverabilityDashboardAccountStatus value);
} // namespace DeliverabilityDashboardAccountStatusMapper
} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
