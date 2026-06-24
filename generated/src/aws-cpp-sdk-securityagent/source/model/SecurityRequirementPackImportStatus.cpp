/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityagent/model/SecurityRequirementPackImportStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {
namespace SecurityRequirementPackImportStatusMapper {

static const int PENDING_HASH = HashingUtils::HashString("PENDING");
static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");

SecurityRequirementPackImportStatus GetSecurityRequirementPackImportStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PENDING_HASH) {
    return SecurityRequirementPackImportStatus::PENDING;
  } else if (hashCode == IN_PROGRESS_HASH) {
    return SecurityRequirementPackImportStatus::IN_PROGRESS;
  } else if (hashCode == FAILED_HASH) {
    return SecurityRequirementPackImportStatus::FAILED;
  } else if (hashCode == COMPLETED_HASH) {
    return SecurityRequirementPackImportStatus::COMPLETED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SecurityRequirementPackImportStatus>(hashCode);
  }

  return SecurityRequirementPackImportStatus::NOT_SET;
}

Aws::String GetNameForSecurityRequirementPackImportStatus(SecurityRequirementPackImportStatus enumValue) {
  switch (enumValue) {
    case SecurityRequirementPackImportStatus::NOT_SET:
      return {};
    case SecurityRequirementPackImportStatus::PENDING:
      return "PENDING";
    case SecurityRequirementPackImportStatus::IN_PROGRESS:
      return "IN_PROGRESS";
    case SecurityRequirementPackImportStatus::FAILED:
      return "FAILED";
    case SecurityRequirementPackImportStatus::COMPLETED:
      return "COMPLETED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SecurityRequirementPackImportStatusMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
