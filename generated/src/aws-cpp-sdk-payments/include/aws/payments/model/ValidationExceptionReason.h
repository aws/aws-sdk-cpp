/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payments/Payments_EXPORTS.h>

namespace Aws {
namespace Payments {
namespace Model {
enum class ValidationExceptionReason {
  NOT_SET,
  CANNOT_PARSE,
  FIELD_VALIDATION_FAILED,
  INVALID_PAGINATION_TOKEN,
  UNSUPPORTED_ACTION,
  OTHER
};

namespace ValidationExceptionReasonMapper {
AWS_PAYMENTS_API ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name);

AWS_PAYMENTS_API Aws::String GetNameForValidationExceptionReason(ValidationExceptionReason value);
}  // namespace ValidationExceptionReasonMapper
}  // namespace Model
}  // namespace Payments
}  // namespace Aws
