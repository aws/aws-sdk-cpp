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
  enum class WorkspaceBundleState
  {
    NOT_SET,
    AVAILABLE,
    PENDING,
    ERROR_
  };

namespace WorkspaceBundleStateMapper
{
AWS_WORKSPACES_API WorkspaceBundleState GetWorkspaceBundleStateForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForWorkspaceBundleState(WorkspaceBundleState value);
} // namespace WorkspaceBundleStateMapper
} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
