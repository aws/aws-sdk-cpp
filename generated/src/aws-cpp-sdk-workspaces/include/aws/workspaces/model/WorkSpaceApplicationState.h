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
  enum class WorkSpaceApplicationState
  {
    NOT_SET,
    PENDING,
    ERROR_,
    AVAILABLE,
    UNINSTALL_ONLY
  };

namespace WorkSpaceApplicationStateMapper
{
AWS_WORKSPACES_API WorkSpaceApplicationState GetWorkSpaceApplicationStateForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForWorkSpaceApplicationState(WorkSpaceApplicationState value);
} // namespace WorkSpaceApplicationStateMapper
} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
