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
  enum class WorkflowStatus
  {
    NOT_SET,
    NEW_,
    NOTIFIED,
    RESOLVED,
    SUPPRESSED
  };

namespace WorkflowStatusMapper
{
AWS_SECURITYHUB_API WorkflowStatus GetWorkflowStatusForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForWorkflowStatus(WorkflowStatus value);
} // namespace WorkflowStatusMapper
} // namespace Model
} // namespace SecurityHub
} // namespace Aws
