/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/nova-act/NovaAct_EXPORTS.h>

namespace Aws {
namespace NovaAct {
namespace Model {
enum class WorkflowRunStatus { NOT_SET, RUNNING, SUCCEEDED, FAILED, TIMED_OUT, DELETING };

namespace WorkflowRunStatusMapper {
AWS_NOVAACT_API WorkflowRunStatus GetWorkflowRunStatusForName(const Aws::String& name);

AWS_NOVAACT_API Aws::String GetNameForWorkflowRunStatus(WorkflowRunStatus value);
}  // namespace WorkflowRunStatusMapper
}  // namespace Model
}  // namespace NovaAct
}  // namespace Aws
