/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/polly/Polly_EXPORTS.h>

namespace Aws {
namespace Polly {
namespace Model {
enum class TaskStatus { NOT_SET, scheduled, inProgress, completed, failed };

namespace TaskStatusMapper {
AWS_POLLY_API TaskStatus GetTaskStatusForName(const Aws::String& name);

AWS_POLLY_API Aws::String GetNameForTaskStatus(TaskStatus value);
}  // namespace TaskStatusMapper
}  // namespace Model
}  // namespace Polly
}  // namespace Aws
