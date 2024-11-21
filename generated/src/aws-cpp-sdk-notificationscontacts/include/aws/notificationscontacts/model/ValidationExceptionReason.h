/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notificationscontacts/NotificationsContacts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace NotificationsContacts
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
AWS_NOTIFICATIONSCONTACTS_API ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name);

AWS_NOTIFICATIONSCONTACTS_API Aws::String GetNameForValidationExceptionReason(ValidationExceptionReason value);
} // namespace ValidationExceptionReasonMapper
} // namespace Model
} // namespace NotificationsContacts
} // namespace Aws
