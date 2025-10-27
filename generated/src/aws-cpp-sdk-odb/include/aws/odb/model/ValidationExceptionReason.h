/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/odb/Odb_EXPORTS.h>

namespace Aws {
namespace odb {
namespace Model {
enum class ValidationExceptionReason { NOT_SET, unknownOperation, cannotParse, fieldValidationFailed, other };

namespace ValidationExceptionReasonMapper {
AWS_ODB_API ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name);

AWS_ODB_API Aws::String GetNameForValidationExceptionReason(ValidationExceptionReason value);
}  // namespace ValidationExceptionReasonMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
