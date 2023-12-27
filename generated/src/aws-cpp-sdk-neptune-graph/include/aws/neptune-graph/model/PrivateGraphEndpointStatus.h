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
  enum class PrivateGraphEndpointStatus
  {
    NOT_SET,
    CREATING,
    AVAILABLE,
    DELETING,
    FAILED
  };

namespace PrivateGraphEndpointStatusMapper
{
AWS_NEPTUNEGRAPH_API PrivateGraphEndpointStatus GetPrivateGraphEndpointStatusForName(const Aws::String& name);

AWS_NEPTUNEGRAPH_API Aws::String GetNameForPrivateGraphEndpointStatus(PrivateGraphEndpointStatus value);
} // namespace PrivateGraphEndpointStatusMapper
} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
