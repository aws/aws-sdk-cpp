/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{
  enum class PoolsRunningMode
  {
    NOT_SET,
    AUTO_STOP,
    ALWAYS_ON
  };

namespace PoolsRunningModeMapper
{
AWS_WORKSPACES_API PoolsRunningMode GetPoolsRunningModeForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForPoolsRunningMode(PoolsRunningMode value);
} // namespace PoolsRunningModeMapper
} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
