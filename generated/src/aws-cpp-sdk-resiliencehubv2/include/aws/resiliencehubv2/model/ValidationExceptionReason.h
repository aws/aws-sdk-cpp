/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>

namespace Aws {
namespace resiliencehubv2 {
namespace Model {
enum class ValidationExceptionReason { NOT_SET, INVALID_FIELD_VALUE, DUPLICATE_VALUE, MISSING_REQUIRED_FIELD, OTHER };

namespace ValidationExceptionReasonMapper {
AWS_RESILIENCEHUBV2_API ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name);

AWS_RESILIENCEHUBV2_API Aws::String GetNameForValidationExceptionReason(ValidationExceptionReason value);
}  // namespace ValidationExceptionReasonMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
