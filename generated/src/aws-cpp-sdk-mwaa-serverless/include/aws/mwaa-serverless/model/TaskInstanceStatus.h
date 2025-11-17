/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mwaa-serverless/MWAAServerless_EXPORTS.h>

namespace Aws {
namespace MWAAServerless {
namespace Model {
enum class TaskInstanceStatus {
  NOT_SET,
  QUEUED,
  FAILED,
  SCHEDULED,
  RUNNING,
  SUCCESS,
  UP_FOR_RESCHEDULE,
  UP_FOR_RETRY,
  UPSTREAM_FAILED,
  REMOVED,
  RESTARTING,
  DEFERRED,
  NONE,
  CANCELLED,
  TIMEOUT
};

namespace TaskInstanceStatusMapper {
AWS_MWAASERVERLESS_API TaskInstanceStatus GetTaskInstanceStatusForName(const Aws::String& name);

AWS_MWAASERVERLESS_API Aws::String GetNameForTaskInstanceStatus(TaskInstanceStatus value);
}  // namespace TaskInstanceStatusMapper
}  // namespace Model
}  // namespace MWAAServerless
}  // namespace Aws
