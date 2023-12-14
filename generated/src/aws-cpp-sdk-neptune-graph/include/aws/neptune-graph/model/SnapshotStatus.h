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
  enum class SnapshotStatus
  {
    NOT_SET,
    CREATING,
    AVAILABLE,
    DELETING,
    FAILED
  };

namespace SnapshotStatusMapper
{
AWS_NEPTUNEGRAPH_API SnapshotStatus GetSnapshotStatusForName(const Aws::String& name);

AWS_NEPTUNEGRAPH_API Aws::String GetNameForSnapshotStatus(SnapshotStatus value);
} // namespace SnapshotStatusMapper
} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
