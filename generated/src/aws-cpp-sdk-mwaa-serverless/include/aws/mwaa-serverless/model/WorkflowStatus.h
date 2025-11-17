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
enum class WorkflowStatus { NOT_SET, READY, DELETING };

namespace WorkflowStatusMapper {
AWS_MWAASERVERLESS_API WorkflowStatus GetWorkflowStatusForName(const Aws::String& name);

AWS_MWAASERVERLESS_API Aws::String GetNameForWorkflowStatus(WorkflowStatus value);
}  // namespace WorkflowStatusMapper
}  // namespace Model
}  // namespace MWAAServerless
}  // namespace Aws
