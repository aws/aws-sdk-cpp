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
  enum class CustomWorkspaceImageImportState
  {
    NOT_SET,
    PENDING,
    IN_PROGRESS,
    COMPLETED,
    ERROR_
  };

namespace CustomWorkspaceImageImportStateMapper
{
AWS_WORKSPACES_API CustomWorkspaceImageImportState GetCustomWorkspaceImageImportStateForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForCustomWorkspaceImageImportState(CustomWorkspaceImageImportState value);
} // namespace CustomWorkspaceImageImportStateMapper
} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
