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
  enum class ImportTaskStatus
  {
    NOT_SET,
    INITIALIZING,
    EXPORTING,
    ANALYZING_DATA,
    IMPORTING,
    REPROVISIONING,
    ROLLING_BACK,
    SUCCEEDED,
    FAILED,
    CANCELLING,
    CANCELLED
  };

namespace ImportTaskStatusMapper
{
AWS_NEPTUNEGRAPH_API ImportTaskStatus GetImportTaskStatusForName(const Aws::String& name);

AWS_NEPTUNEGRAPH_API Aws::String GetNameForImportTaskStatus(ImportTaskStatus value);
} // namespace ImportTaskStatusMapper
} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
