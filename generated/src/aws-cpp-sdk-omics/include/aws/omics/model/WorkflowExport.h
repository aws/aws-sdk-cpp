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
  enum class WorkflowExport
  {
    NOT_SET,
    DEFINITION
  };

namespace WorkflowExportMapper
{
AWS_OMICS_API WorkflowExport GetWorkflowExportForName(const Aws::String& name);

AWS_OMICS_API Aws::String GetNameForWorkflowExport(WorkflowExport value);
} // namespace WorkflowExportMapper
} // namespace Model
} // namespace Omics
} // namespace Aws
