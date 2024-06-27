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
  enum class WorkspaceType
  {
    NOT_SET,
    PERSONAL,
    POOLS
  };

namespace WorkspaceTypeMapper
{
AWS_WORKSPACES_API WorkspaceType GetWorkspaceTypeForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForWorkspaceType(WorkspaceType value);
} // namespace WorkspaceTypeMapper
} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
