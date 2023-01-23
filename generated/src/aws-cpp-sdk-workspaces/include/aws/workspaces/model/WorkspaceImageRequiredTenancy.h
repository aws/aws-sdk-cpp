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
  enum class WorkspaceImageRequiredTenancy
  {
    NOT_SET,
    DEFAULT,
    DEDICATED
  };

namespace WorkspaceImageRequiredTenancyMapper
{
AWS_WORKSPACES_API WorkspaceImageRequiredTenancy GetWorkspaceImageRequiredTenancyForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForWorkspaceImageRequiredTenancy(WorkspaceImageRequiredTenancy value);
} // namespace WorkspaceImageRequiredTenancyMapper
} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
