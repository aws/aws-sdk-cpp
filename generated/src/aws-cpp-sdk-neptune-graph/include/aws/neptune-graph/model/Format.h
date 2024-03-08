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
  enum class Format
  {
    NOT_SET,
    CSV,
    OPEN_CYPHER
  };

namespace FormatMapper
{
AWS_NEPTUNEGRAPH_API Format GetFormatForName(const Aws::String& name);

AWS_NEPTUNEGRAPH_API Aws::String GetNameForFormat(Format value);
} // namespace FormatMapper
} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
