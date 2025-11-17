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
enum class WorkflowRunStatus { NOT_SET, STARTING, QUEUED, RUNNING, SUCCESS, FAILED, TIMEOUT, STOPPING, STOPPED };

namespace WorkflowRunStatusMapper {
AWS_MWAASERVERLESS_API WorkflowRunStatus GetWorkflowRunStatusForName(const Aws::String& name);

AWS_MWAASERVERLESS_API Aws::String GetNameForWorkflowRunStatus(WorkflowRunStatus value);
}  // namespace WorkflowRunStatusMapper
}  // namespace Model
}  // namespace MWAAServerless
}  // namespace Aws
