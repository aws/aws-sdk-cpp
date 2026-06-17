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
enum class SecurityRequirementPackStatus { NOT_SET, ENABLED, DISABLED };

namespace SecurityRequirementPackStatusMapper {
AWS_SECURITYAGENT_API SecurityRequirementPackStatus GetSecurityRequirementPackStatusForName(const Aws::String& name);

AWS_SECURITYAGENT_API Aws::String GetNameForSecurityRequirementPackStatus(SecurityRequirementPackStatus value);
}  // namespace SecurityRequirementPackStatusMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
