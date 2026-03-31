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
enum class JobStatus { NOT_SET, IN_PROGRESS, STOPPING, STOPPED, FAILED, COMPLETED };

namespace JobStatusMapper {
AWS_SECURITYAGENT_API JobStatus GetJobStatusForName(const Aws::String& name);

AWS_SECURITYAGENT_API Aws::String GetNameForJobStatus(JobStatus value);
}  // namespace JobStatusMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
