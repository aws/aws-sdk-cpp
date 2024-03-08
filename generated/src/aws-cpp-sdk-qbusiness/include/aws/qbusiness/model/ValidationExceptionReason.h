/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QBusiness
{
namespace Model
{
  enum class ValidationExceptionReason
  {
    NOT_SET,
    CANNOT_PARSE,
    FIELD_VALIDATION_FAILED,
    UNKNOWN_OPERATION
  };

namespace ValidationExceptionReasonMapper
{
AWS_QBUSINESS_API ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name);

AWS_QBUSINESS_API Aws::String GetNameForValidationExceptionReason(ValidationExceptionReason value);
} // namespace ValidationExceptionReasonMapper
} // namespace Model
} // namespace QBusiness
} // namespace Aws
