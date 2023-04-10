/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Omics
{
namespace Model
{
  enum class WorkflowStatus
  {
    NOT_SET,
    CREATING,
    ACTIVE,
    UPDATING,
    DELETED,
    FAILED
  };

namespace WorkflowStatusMapper
{
AWS_OMICS_API WorkflowStatus GetWorkflowStatusForName(const Aws::String& name);

AWS_OMICS_API Aws::String GetNameForWorkflowStatus(WorkflowStatus value);
} // namespace WorkflowStatusMapper
} // namespace Model
} // namespace Omics
} // namespace Aws
