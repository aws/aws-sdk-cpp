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
enum class AssociationErrorCode {
  NOT_SET,
  ValidationError_InsufficientDiskSpace,
  ValidationError_InsufficientMemory,
  ValidationError_UnsupportedOperatingSystem,
  DeploymentError_InternalServerError,
  DeploymentError_WorkspaceUnreachable,
  ValidationError_ApplicationOldVersionExists
};

namespace AssociationErrorCodeMapper {
AWS_WORKSPACES_API AssociationErrorCode GetAssociationErrorCodeForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForAssociationErrorCode(AssociationErrorCode value);
}  // namespace AssociationErrorCodeMapper
}  // namespace Model
}  // namespace WorkSpaces
}  // namespace Aws
