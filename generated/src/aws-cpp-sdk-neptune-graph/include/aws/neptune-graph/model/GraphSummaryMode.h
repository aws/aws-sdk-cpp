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
  enum class GraphSummaryMode
  {
    NOT_SET,
    BASIC,
    DETAILED
  };

namespace GraphSummaryModeMapper
{
AWS_NEPTUNEGRAPH_API GraphSummaryMode GetGraphSummaryModeForName(const Aws::String& name);

AWS_NEPTUNEGRAPH_API Aws::String GetNameForGraphSummaryMode(GraphSummaryMode value);
} // namespace GraphSummaryModeMapper
} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
