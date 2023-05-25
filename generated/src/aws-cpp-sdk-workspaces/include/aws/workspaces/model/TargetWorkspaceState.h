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
  enum class TargetWorkspaceState
  {
    NOT_SET,
    AVAILABLE,
    ADMIN_MAINTENANCE
  };

namespace TargetWorkspaceStateMapper
{
AWS_WORKSPACES_API TargetWorkspaceState GetTargetWorkspaceStateForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForTargetWorkspaceState(TargetWorkspaceState value);
} // namespace TargetWorkspaceStateMapper
} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
