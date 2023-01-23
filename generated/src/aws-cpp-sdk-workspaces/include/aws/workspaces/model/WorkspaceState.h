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
  enum class WorkspaceState
  {
    NOT_SET,
    PENDING,
    AVAILABLE,
    IMPAIRED,
    UNHEALTHY,
    REBOOTING,
    STARTING,
    REBUILDING,
    RESTORING,
    MAINTENANCE,
    ADMIN_MAINTENANCE,
    TERMINATING,
    TERMINATED,
    SUSPENDED,
    UPDATING,
    STOPPING,
    STOPPED,
    ERROR_
  };

namespace WorkspaceStateMapper
{
AWS_WORKSPACES_API WorkspaceState GetWorkspaceStateForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForWorkspaceState(WorkspaceState value);
} // namespace WorkspaceStateMapper
} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
