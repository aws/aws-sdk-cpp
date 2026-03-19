/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/polly/Polly_EXPORTS.h>

namespace Aws {
namespace Polly {
namespace Model {
enum class ValidationExceptionReason { NOT_SET, unsupportedOperation, fieldValidationFailed, other, invalidInboundEvent };

namespace ValidationExceptionReasonMapper {
AWS_POLLY_API ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name);

AWS_POLLY_API Aws::String GetNameForValidationExceptionReason(ValidationExceptionReason value);
}  // namespace ValidationExceptionReasonMapper
}  // namespace Model
}  // namespace Polly
}  // namespace Aws
