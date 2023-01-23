/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{
  enum class WorkflowState
  {
    NOT_SET,
    NEW_,
    ASSIGNED,
    IN_PROGRESS,
    DEFERRED,
    RESOLVED
  };

namespace WorkflowStateMapper
{
AWS_SECURITYHUB_API WorkflowState GetWorkflowStateForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForWorkflowState(WorkflowState value);
} // namespace WorkflowStateMapper
} // namespace Model
} // namespace SecurityHub
} // namespace Aws
