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
  enum class ParquetType
  {
    NOT_SET,
    COLUMNAR
  };

namespace ParquetTypeMapper
{
AWS_NEPTUNEGRAPH_API ParquetType GetParquetTypeForName(const Aws::String& name);

AWS_NEPTUNEGRAPH_API Aws::String GetNameForParquetType(ParquetType value);
} // namespace ParquetTypeMapper
} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
