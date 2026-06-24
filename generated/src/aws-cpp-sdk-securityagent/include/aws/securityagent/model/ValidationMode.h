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
enum class ValidationMode { NOT_SET, DISABLED, SIMULATED };

namespace ValidationModeMapper {
AWS_SECURITYAGENT_API ValidationMode GetValidationModeForName(const Aws::String& name);

AWS_SECURITYAGENT_API Aws::String GetNameForValidationMode(ValidationMode value);
}  // namespace ValidationModeMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
