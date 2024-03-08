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
  enum class GraphStatus
  {
    NOT_SET,
    CREATING,
    AVAILABLE,
    DELETING,
    RESETTING,
    UPDATING,
    SNAPSHOTTING,
    FAILED
  };

namespace GraphStatusMapper
{
AWS_NEPTUNEGRAPH_API GraphStatus GetGraphStatusForName(const Aws::String& name);

AWS_NEPTUNEGRAPH_API Aws::String GetNameForGraphStatus(GraphStatus value);
} // namespace GraphStatusMapper
} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
