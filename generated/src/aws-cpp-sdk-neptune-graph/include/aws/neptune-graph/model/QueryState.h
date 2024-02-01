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
  enum class QueryState
  {
    NOT_SET,
    RUNNING,
    WAITING,
    CANCELLING
  };

namespace QueryStateMapper
{
AWS_NEPTUNEGRAPH_API QueryState GetQueryStateForName(const Aws::String& name);

AWS_NEPTUNEGRAPH_API Aws::String GetNameForQueryState(QueryState value);
} // namespace QueryStateMapper
} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
