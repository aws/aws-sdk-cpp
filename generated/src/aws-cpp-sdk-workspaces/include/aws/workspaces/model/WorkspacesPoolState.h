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
  enum class WorkspacesPoolState
  {
    NOT_SET,
    CREATING,
    DELETING,
    RUNNING,
    STARTING,
    STOPPED,
    STOPPING,
    UPDATING
  };

namespace WorkspacesPoolStateMapper
{
AWS_WORKSPACES_API WorkspacesPoolState GetWorkspacesPoolStateForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForWorkspacesPoolState(WorkspacesPoolState value);
} // namespace WorkspacesPoolStateMapper
} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
