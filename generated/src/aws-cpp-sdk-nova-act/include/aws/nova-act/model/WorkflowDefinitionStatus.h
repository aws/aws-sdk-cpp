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
enum class WorkflowDefinitionStatus { NOT_SET, ACTIVE, DELETING };

namespace WorkflowDefinitionStatusMapper {
AWS_NOVAACT_API WorkflowDefinitionStatus GetWorkflowDefinitionStatusForName(const Aws::String& name);

AWS_NOVAACT_API Aws::String GetNameForWorkflowDefinitionStatus(WorkflowDefinitionStatus value);
}  // namespace WorkflowDefinitionStatusMapper
}  // namespace Model
}  // namespace NovaAct
}  // namespace Aws
