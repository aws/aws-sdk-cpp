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
enum class TaskExecutionStatus { NOT_SET, IN_PROGRESS, ABORTED, COMPLETED, INTERNAL_ERROR, FAILED };

namespace TaskExecutionStatusMapper {
AWS_SECURITYAGENT_API TaskExecutionStatus GetTaskExecutionStatusForName(const Aws::String& name);

AWS_SECURITYAGENT_API Aws::String GetNameForTaskExecutionStatus(TaskExecutionStatus value);
}  // namespace TaskExecutionStatusMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
