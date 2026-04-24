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
enum class CustomWorkspaceImageImportState {
  NOT_SET,
  PENDING,
  IN_PROGRESS,
  PROCESSING_SOURCE_IMAGE,
  IMAGE_TESTING_START,
  UPDATING_OPERATING_SYSTEM,
  IMAGE_COMPATIBILITY_CHECKING,
  IMAGE_TESTING_GENERALIZATION,
  CREATING_TEST_INSTANCE,
  INSTALLING_COMPONENTS,
  GENERALIZING,
  VALIDATING,
  PUBLISHING,
  COMPLETED,
  ERROR_
};

namespace CustomWorkspaceImageImportStateMapper {
AWS_WORKSPACES_API CustomWorkspaceImageImportState GetCustomWorkspaceImageImportStateForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForCustomWorkspaceImageImportState(CustomWorkspaceImageImportState value);
}  // namespace CustomWorkspaceImageImportStateMapper
}  // namespace Model
}  // namespace WorkSpaces
}  // namespace Aws
