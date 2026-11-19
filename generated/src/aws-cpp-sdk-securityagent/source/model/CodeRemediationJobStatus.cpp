/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityagent/model/CodeRemediationJobStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {
namespace CodeRemediationJobStatusMapper {

static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int NO_CHANGE_REQUIRED_HASH = HashingUtils::HashString("NO_CHANGE_REQUIRED");
static const int UNKNOWN_HASH = HashingUtils::HashString("UNKNOWN");

CodeRemediationJobStatus GetCodeRemediationJobStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IN_PROGRESS_HASH) {
    return CodeRemediationJobStatus::IN_PROGRESS;
  } else if (hashCode == COMPLETED_HASH) {
    return CodeRemediationJobStatus::COMPLETED;
  } else if (hashCode == FAILED_HASH) {
    return CodeRemediationJobStatus::FAILED;
  } else if (hashCode == NO_CHANGE_REQUIRED_HASH) {
    return CodeRemediationJobStatus::NO_CHANGE_REQUIRED;
  } else if (hashCode == UNKNOWN_HASH) {
    return CodeRemediationJobStatus::UNKNOWN;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CodeRemediationJobStatus>(hashCode);
  }

  return CodeRemediationJobStatus::NOT_SET;
}

Aws::String GetNameForCodeRemediationJobStatus(CodeRemediationJobStatus enumValue) {
  switch (enumValue) {
    case CodeRemediationJobStatus::NOT_SET:
      return {};
    case CodeRemediationJobStatus::IN_PROGRESS:
      return "IN_PROGRESS";
    case CodeRemediationJobStatus::COMPLETED:
      return "COMPLETED";
    case CodeRemediationJobStatus::FAILED:
      return "FAILED";
    case CodeRemediationJobStatus::NO_CHANGE_REQUIRED:
      return "NO_CHANGE_REQUIRED";
    case CodeRemediationJobStatus::UNKNOWN:
      return "UNKNOWN";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CodeRemediationJobStatusMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
