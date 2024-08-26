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
  enum class DescribeWorkspaceDirectoriesFilterName
  {
    NOT_SET,
    USER_IDENTITY_TYPE,
    WORKSPACE_TYPE
  };

namespace DescribeWorkspaceDirectoriesFilterNameMapper
{
AWS_WORKSPACES_API DescribeWorkspaceDirectoriesFilterName GetDescribeWorkspaceDirectoriesFilterNameForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForDescribeWorkspaceDirectoriesFilterName(DescribeWorkspaceDirectoriesFilterName value);
} // namespace DescribeWorkspaceDirectoriesFilterNameMapper
} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
