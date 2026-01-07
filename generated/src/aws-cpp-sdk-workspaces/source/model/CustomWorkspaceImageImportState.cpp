/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/workspaces/model/CustomWorkspaceImageImportState.h>

using namespace Aws::Utils;

namespace Aws {
namespace WorkSpaces {
namespace Model {
namespace CustomWorkspaceImageImportStateMapper {

static const int PENDING_HASH = HashingUtils::HashString("PENDING");
static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
static const int PROCESSING_SOURCE_IMAGE_HASH = HashingUtils::HashString("PROCESSING_SOURCE_IMAGE");
static const int IMAGE_TESTING_START_HASH = HashingUtils::HashString("IMAGE_TESTING_START");
static const int UPDATING_OPERATING_SYSTEM_HASH = HashingUtils::HashString("UPDATING_OPERATING_SYSTEM");
static const int IMAGE_COMPATIBILITY_CHECKING_HASH = HashingUtils::HashString("IMAGE_COMPATIBILITY_CHECKING");
static const int IMAGE_TESTING_GENERALIZATION_HASH = HashingUtils::HashString("IMAGE_TESTING_GENERALIZATION");
static const int CREATING_TEST_INSTANCE_HASH = HashingUtils::HashString("CREATING_TEST_INSTANCE");
static const int INSTALLING_COMPONENTS_HASH = HashingUtils::HashString("INSTALLING_COMPONENTS");
static const int GENERALIZING_HASH = HashingUtils::HashString("GENERALIZING");
static const int VALIDATING_HASH = HashingUtils::HashString("VALIDATING");
static const int PUBLISHING_HASH = HashingUtils::HashString("PUBLISHING");
static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
static const int ERROR__HASH = HashingUtils::HashString("ERROR");

CustomWorkspaceImageImportState GetCustomWorkspaceImageImportStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PENDING_HASH) {
    return CustomWorkspaceImageImportState::PENDING;
  } else if (hashCode == IN_PROGRESS_HASH) {
    return CustomWorkspaceImageImportState::IN_PROGRESS;
  } else if (hashCode == PROCESSING_SOURCE_IMAGE_HASH) {
    return CustomWorkspaceImageImportState::PROCESSING_SOURCE_IMAGE;
  } else if (hashCode == IMAGE_TESTING_START_HASH) {
    return CustomWorkspaceImageImportState::IMAGE_TESTING_START;
  } else if (hashCode == UPDATING_OPERATING_SYSTEM_HASH) {
    return CustomWorkspaceImageImportState::UPDATING_OPERATING_SYSTEM;
  } else if (hashCode == IMAGE_COMPATIBILITY_CHECKING_HASH) {
    return CustomWorkspaceImageImportState::IMAGE_COMPATIBILITY_CHECKING;
  } else if (hashCode == IMAGE_TESTING_GENERALIZATION_HASH) {
    return CustomWorkspaceImageImportState::IMAGE_TESTING_GENERALIZATION;
  } else if (hashCode == CREATING_TEST_INSTANCE_HASH) {
    return CustomWorkspaceImageImportState::CREATING_TEST_INSTANCE;
  } else if (hashCode == INSTALLING_COMPONENTS_HASH) {
    return CustomWorkspaceImageImportState::INSTALLING_COMPONENTS;
  } else if (hashCode == GENERALIZING_HASH) {
    return CustomWorkspaceImageImportState::GENERALIZING;
  } else if (hashCode == VALIDATING_HASH) {
    return CustomWorkspaceImageImportState::VALIDATING;
  } else if (hashCode == PUBLISHING_HASH) {
    return CustomWorkspaceImageImportState::PUBLISHING;
  } else if (hashCode == COMPLETED_HASH) {
    return CustomWorkspaceImageImportState::COMPLETED;
  } else if (hashCode == ERROR__HASH) {
    return CustomWorkspaceImageImportState::ERROR_;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CustomWorkspaceImageImportState>(hashCode);
  }

  return CustomWorkspaceImageImportState::NOT_SET;
}

Aws::String GetNameForCustomWorkspaceImageImportState(CustomWorkspaceImageImportState enumValue) {
  switch (enumValue) {
    case CustomWorkspaceImageImportState::NOT_SET:
      return {};
    case CustomWorkspaceImageImportState::PENDING:
      return "PENDING";
    case CustomWorkspaceImageImportState::IN_PROGRESS:
      return "IN_PROGRESS";
    case CustomWorkspaceImageImportState::PROCESSING_SOURCE_IMAGE:
      return "PROCESSING_SOURCE_IMAGE";
    case CustomWorkspaceImageImportState::IMAGE_TESTING_START:
      return "IMAGE_TESTING_START";
    case CustomWorkspaceImageImportState::UPDATING_OPERATING_SYSTEM:
      return "UPDATING_OPERATING_SYSTEM";
    case CustomWorkspaceImageImportState::IMAGE_COMPATIBILITY_CHECKING:
      return "IMAGE_COMPATIBILITY_CHECKING";
    case CustomWorkspaceImageImportState::IMAGE_TESTING_GENERALIZATION:
      return "IMAGE_TESTING_GENERALIZATION";
    case CustomWorkspaceImageImportState::CREATING_TEST_INSTANCE:
      return "CREATING_TEST_INSTANCE";
    case CustomWorkspaceImageImportState::INSTALLING_COMPONENTS:
      return "INSTALLING_COMPONENTS";
    case CustomWorkspaceImageImportState::GENERALIZING:
      return "GENERALIZING";
    case CustomWorkspaceImageImportState::VALIDATING:
      return "VALIDATING";
    case CustomWorkspaceImageImportState::PUBLISHING:
      return "PUBLISHING";
    case CustomWorkspaceImageImportState::COMPLETED:
      return "COMPLETED";
    case CustomWorkspaceImageImportState::ERROR_:
      return "ERROR";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CustomWorkspaceImageImportStateMapper
}  // namespace Model
}  // namespace WorkSpaces
}  // namespace Aws
