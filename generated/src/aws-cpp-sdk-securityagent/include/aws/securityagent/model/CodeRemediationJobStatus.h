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
enum class CodeRemediationJobStatus { NOT_SET, IN_PROGRESS, COMPLETED, FAILED, NO_CHANGE_REQUIRED, UNKNOWN };

namespace CodeRemediationJobStatusMapper {
AWS_SECURITYAGENT_API CodeRemediationJobStatus GetCodeRemediationJobStatusForName(const Aws::String& name);

AWS_SECURITYAGENT_API Aws::String GetNameForCodeRemediationJobStatus(CodeRemediationJobStatus value);
}  // namespace CodeRemediationJobStatusMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
