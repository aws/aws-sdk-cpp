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
  enum class SendingStatus
  {
    NOT_SET,
    ENABLED,
    REINSTATED,
    DISABLED
  };

namespace SendingStatusMapper
{
AWS_SESV2_API SendingStatus GetSendingStatusForName(const Aws::String& name);

AWS_SESV2_API Aws::String GetNameForSendingStatus(SendingStatus value);
} // namespace SendingStatusMapper
} // namespace Model
} // namespace SESV2
} // namespace Aws
