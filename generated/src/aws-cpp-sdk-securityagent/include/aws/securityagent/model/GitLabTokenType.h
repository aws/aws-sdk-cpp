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
enum class GitLabTokenType { NOT_SET, PERSONAL, GROUP };

namespace GitLabTokenTypeMapper {
AWS_SECURITYAGENT_API GitLabTokenType GetGitLabTokenTypeForName(const Aws::String& name);

AWS_SECURITYAGENT_API Aws::String GetNameForGitLabTokenType(GitLabTokenType value);
}  // namespace GitLabTokenTypeMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
