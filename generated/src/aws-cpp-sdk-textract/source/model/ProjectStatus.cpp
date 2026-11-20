/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/textract/model/ProjectStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace Textract {
namespace Model {
namespace ProjectStatusMapper {

static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

ProjectStatus GetProjectStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == COMPLETED_HASH) {
    return ProjectStatus::COMPLETED;
  } else if (hashCode == FAILED_HASH) {
    return ProjectStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ProjectStatus>(hashCode);
  }

  return ProjectStatus::NOT_SET;
}

Aws::String GetNameForProjectStatus(ProjectStatus enumValue) {
  switch (enumValue) {
    case ProjectStatus::NOT_SET:
      return {};
    case ProjectStatus::COMPLETED:
      return "COMPLETED";
    case ProjectStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ProjectStatusMapper
}  // namespace Model
}  // namespace Textract
}  // namespace Aws
