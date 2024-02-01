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
  enum class QueryStateInput
  {
    NOT_SET,
    ALL,
    RUNNING,
    WAITING,
    CANCELLING
  };

namespace QueryStateInputMapper
{
AWS_NEPTUNEGRAPH_API QueryStateInput GetQueryStateInputForName(const Aws::String& name);

AWS_NEPTUNEGRAPH_API Aws::String GetNameForQueryStateInput(QueryStateInput value);
} // namespace QueryStateInputMapper
} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
