/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/WorkSpaces_EXPORTS.h>

namespace Aws {
namespace WorkSpaces {
namespace Model {
enum class WorkspaceOSUserMode { NOT_SET, LOCAL_USER, DOMAIN_JOIN, ENTRA_JOIN, SELF_MANAGED };

namespace WorkspaceOSUserModeMapper {
AWS_WORKSPACES_API WorkspaceOSUserMode GetWorkspaceOSUserModeForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForWorkspaceOSUserMode(WorkspaceOSUserMode value);
}  // namespace WorkspaceOSUserModeMapper
}  // namespace Model
}  // namespace WorkSpaces
}  // namespace Aws
