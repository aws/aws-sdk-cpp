/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune-graph/NeptuneGraph_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace NeptuneGraph
{
namespace Model
{
  enum class ExportTaskStatus
  {
    NOT_SET,
    INITIALIZING,
    EXPORTING,
    SUCCEEDED,
    FAILED,
    CANCELLING,
    CANCELLED,
    DELETED
  };

namespace ExportTaskStatusMapper
{
AWS_NEPTUNEGRAPH_API ExportTaskStatus GetExportTaskStatusForName(const Aws::String& name);

AWS_NEPTUNEGRAPH_API Aws::String GetNameForExportTaskStatus(ExportTaskStatus value);
} // namespace ExportTaskStatusMapper
} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
