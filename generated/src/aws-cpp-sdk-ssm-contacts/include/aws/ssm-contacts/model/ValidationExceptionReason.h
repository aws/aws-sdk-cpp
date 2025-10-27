/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>

namespace Aws {
namespace SSMContacts {
namespace Model {
enum class ValidationExceptionReason { NOT_SET, UNKNOWN_OPERATION, CANNOT_PARSE, FIELD_VALIDATION_FAILED, OTHER };

namespace ValidationExceptionReasonMapper {
AWS_SSMCONTACTS_API ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name);

AWS_SSMCONTACTS_API Aws::String GetNameForValidationExceptionReason(ValidationExceptionReason value);
}  // namespace ValidationExceptionReasonMapper
}  // namespace Model
}  // namespace SSMContacts
}  // namespace Aws
