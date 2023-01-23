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
  enum class WorkspaceDirectoryState
  {
    NOT_SET,
    REGISTERING,
    REGISTERED,
    DEREGISTERING,
    DEREGISTERED,
    ERROR_
  };

namespace WorkspaceDirectoryStateMapper
{
AWS_WORKSPACES_API WorkspaceDirectoryState GetWorkspaceDirectoryStateForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForWorkspaceDirectoryState(WorkspaceDirectoryState value);
} // namespace WorkspaceDirectoryStateMapper
} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
