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
enum class ArtifactType { NOT_SET, TXT, PNG, JPEG, MD, PDF, DOCX, DOC, JSON, YAML };

namespace ArtifactTypeMapper {
AWS_SECURITYAGENT_API ArtifactType GetArtifactTypeForName(const Aws::String& name);

AWS_SECURITYAGENT_API Aws::String GetNameForArtifactType(ArtifactType value);
}  // namespace ArtifactTypeMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
