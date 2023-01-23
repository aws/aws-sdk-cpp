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
  enum class WarmupStatus
  {
    NOT_SET,
    IN_PROGRESS,
    DONE
  };

namespace WarmupStatusMapper
{
AWS_PINPOINTEMAIL_API WarmupStatus GetWarmupStatusForName(const Aws::String& name);

AWS_PINPOINTEMAIL_API Aws::String GetNameForWarmupStatus(WarmupStatus value);
} // namespace WarmupStatusMapper
} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
