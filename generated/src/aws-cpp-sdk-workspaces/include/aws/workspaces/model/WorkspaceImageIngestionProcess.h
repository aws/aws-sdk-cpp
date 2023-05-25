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
  enum class WorkspaceImageIngestionProcess
  {
    NOT_SET,
    BYOL_REGULAR,
    BYOL_GRAPHICS,
    BYOL_GRAPHICSPRO,
    BYOL_GRAPHICS_G4DN,
    BYOL_REGULAR_WSP,
    BYOL_REGULAR_BYOP,
    BYOL_GRAPHICS_G4DN_BYOP
  };

namespace WorkspaceImageIngestionProcessMapper
{
AWS_WORKSPACES_API WorkspaceImageIngestionProcess GetWorkspaceImageIngestionProcessForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForWorkspaceImageIngestionProcess(WorkspaceImageIngestionProcess value);
} // namespace WorkspaceImageIngestionProcessMapper
} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
