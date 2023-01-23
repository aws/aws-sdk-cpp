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
  enum class WorkspaceImageState
  {
    NOT_SET,
    AVAILABLE,
    PENDING,
    ERROR_
  };

namespace WorkspaceImageStateMapper
{
AWS_WORKSPACES_API WorkspaceImageState GetWorkspaceImageStateForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForWorkspaceImageState(WorkspaceImageState value);
} // namespace WorkspaceImageStateMapper
} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
