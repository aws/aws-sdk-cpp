/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notifications/Notifications_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Notifications
{
namespace Model
{
  enum class ValidationExceptionReason
  {
    NOT_SET,
    fieldValidationFailed,
    other
  };

namespace ValidationExceptionReasonMapper
{
AWS_NOTIFICATIONS_API ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name);

AWS_NOTIFICATIONS_API Aws::String GetNameForValidationExceptionReason(ValidationExceptionReason value);
} // namespace ValidationExceptionReasonMapper
} // namespace Model
} // namespace Notifications
} // namespace Aws
