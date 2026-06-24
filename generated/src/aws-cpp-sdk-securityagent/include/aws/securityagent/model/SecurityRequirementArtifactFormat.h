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
enum class SecurityRequirementArtifactFormat { NOT_SET, MD, PDF, TXT, DOCX, DOC };

namespace SecurityRequirementArtifactFormatMapper {
AWS_SECURITYAGENT_API SecurityRequirementArtifactFormat GetSecurityRequirementArtifactFormatForName(const Aws::String& name);

AWS_SECURITYAGENT_API Aws::String GetNameForSecurityRequirementArtifactFormat(SecurityRequirementArtifactFormat value);
}  // namespace SecurityRequirementArtifactFormatMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
