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
  enum class WorkspaceDirectoryType
  {
    NOT_SET,
    SIMPLE_AD,
    AD_CONNECTOR,
    CUSTOMER_MANAGED,
    AWS_IAM_IDENTITY_CENTER
  };

namespace WorkspaceDirectoryTypeMapper
{
AWS_WORKSPACES_API WorkspaceDirectoryType GetWorkspaceDirectoryTypeForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForWorkspaceDirectoryType(WorkspaceDirectoryType value);
} // namespace WorkspaceDirectoryTypeMapper
} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
