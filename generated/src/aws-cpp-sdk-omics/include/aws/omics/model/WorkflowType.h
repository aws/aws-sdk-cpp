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
  enum class WorkflowType
  {
    NOT_SET,
    PRIVATE_
  };

namespace WorkflowTypeMapper
{
AWS_OMICS_API WorkflowType GetWorkflowTypeForName(const Aws::String& name);

AWS_OMICS_API Aws::String GetNameForWorkflowType(WorkflowType value);
} // namespace WorkflowTypeMapper
} // namespace Model
} // namespace Omics
} // namespace Aws
