/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/nova-act/NovaAct_EXPORTS.h>

namespace Aws {
namespace NovaAct {
namespace Model {
enum class ValidationExceptionReason { NOT_SET, FieldValidationFailed, InvalidStatus, GuardrailIntervened };

namespace ValidationExceptionReasonMapper {
AWS_NOVAACT_API ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name);

AWS_NOVAACT_API Aws::String GetNameForValidationExceptionReason(ValidationExceptionReason value);
}  // namespace ValidationExceptionReasonMapper
}  // namespace Model
}  // namespace NovaAct
}  // namespace Aws
