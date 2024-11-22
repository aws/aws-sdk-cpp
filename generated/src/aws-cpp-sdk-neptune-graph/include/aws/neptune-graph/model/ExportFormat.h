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
  enum class ExportFormat
  {
    NOT_SET,
    PARQUET,
    CSV
  };

namespace ExportFormatMapper
{
AWS_NEPTUNEGRAPH_API ExportFormat GetExportFormatForName(const Aws::String& name);

AWS_NEPTUNEGRAPH_API Aws::String GetNameForExportFormat(ExportFormat value);
} // namespace ExportFormatMapper
} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
