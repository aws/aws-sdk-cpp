/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SMS
{
namespace Model
{
  enum class ValidationStatus
  {
    NOT_SET,
    READY_FOR_VALIDATION,
    PENDING,
    IN_PROGRESS,
    SUCCEEDED,
    FAILED
  };

namespace ValidationStatusMapper
{
AWS_SMS_API ValidationStatus GetValidationStatusForName(const Aws::String& name);

AWS_SMS_API Aws::String GetNameForValidationStatus(ValidationStatus value);
} // namespace ValidationStatusMapper
} // namespace Model
} // namespace SMS
} // namespace Aws
