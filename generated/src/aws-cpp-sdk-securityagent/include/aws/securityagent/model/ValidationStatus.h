/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>

namespace Aws {
namespace SecurityAgent {
namespace Model {
enum class ValidationStatus { NOT_SET, CONFIRMED, NOT_REPRODUCED, VALIDATION_FAILED, VALIDATING, NOT_VALIDATED };

namespace ValidationStatusMapper {
AWS_SECURITYAGENT_API ValidationStatus GetValidationStatusForName(const Aws::String& name);

AWS_SECURITYAGENT_API Aws::String GetNameForValidationStatus(ValidationStatus value);
}  // namespace ValidationStatusMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
