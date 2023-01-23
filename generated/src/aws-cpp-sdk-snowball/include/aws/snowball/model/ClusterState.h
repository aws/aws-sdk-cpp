/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Snowball
{
namespace Model
{
  enum class ClusterState
  {
    NOT_SET,
    AwaitingQuorum,
    Pending,
    InUse,
    Complete,
    Cancelled
  };

namespace ClusterStateMapper
{
AWS_SNOWBALL_API ClusterState GetClusterStateForName(const Aws::String& name);

AWS_SNOWBALL_API Aws::String GetNameForClusterState(ClusterState value);
} // namespace ClusterStateMapper
} // namespace Model
} // namespace Snowball
} // namespace Aws
