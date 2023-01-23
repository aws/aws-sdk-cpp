/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MTurk
{
namespace Model
{
  enum class NotificationTransport
  {
    NOT_SET,
    Email,
    SQS,
    SNS
  };

namespace NotificationTransportMapper
{
AWS_MTURK_API NotificationTransport GetNotificationTransportForName(const Aws::String& name);

AWS_MTURK_API Aws::String GetNameForNotificationTransport(NotificationTransport value);
} // namespace NotificationTransportMapper
} // namespace Model
} // namespace MTurk
} // namespace Aws
