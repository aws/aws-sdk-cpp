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
  enum class DeliverabilityTestStatus
  {
    NOT_SET,
    IN_PROGRESS,
    COMPLETED
  };

namespace DeliverabilityTestStatusMapper
{
AWS_PINPOINTEMAIL_API DeliverabilityTestStatus GetDeliverabilityTestStatusForName(const Aws::String& name);

AWS_PINPOINTEMAIL_API Aws::String GetNameForDeliverabilityTestStatus(DeliverabilityTestStatus value);
} // namespace DeliverabilityTestStatusMapper
} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
