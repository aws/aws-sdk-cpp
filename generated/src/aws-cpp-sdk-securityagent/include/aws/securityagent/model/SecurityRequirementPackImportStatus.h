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
enum class SecurityRequirementPackImportStatus { NOT_SET, PENDING, IN_PROGRESS, FAILED, COMPLETED };

namespace SecurityRequirementPackImportStatusMapper {
AWS_SECURITYAGENT_API SecurityRequirementPackImportStatus GetSecurityRequirementPackImportStatusForName(const Aws::String& name);

AWS_SECURITYAGENT_API Aws::String GetNameForSecurityRequirementPackImportStatus(SecurityRequirementPackImportStatus value);
}  // namespace SecurityRequirementPackImportStatusMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
