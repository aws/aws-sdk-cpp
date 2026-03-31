/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityagent/model/CodeRemediationTaskStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {
namespace CodeRemediationTaskStatusMapper {

static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

CodeRemediationTaskStatus GetCodeRemediationTaskStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IN_PROGRESS_HASH) {
    return CodeRemediationTaskStatus::IN_PROGRESS;
  } else if (hashCode == COMPLETED_HASH) {
    return CodeRemediationTaskStatus::COMPLETED;
  } else if (hashCode == FAILED_HASH) {
    return CodeRemediationTaskStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CodeRemediationTaskStatus>(hashCode);
  }

  return CodeRemediationTaskStatus::NOT_SET;
}

Aws::String GetNameForCodeRemediationTaskStatus(CodeRemediationTaskStatus enumValue) {
  switch (enumValue) {
    case CodeRemediationTaskStatus::NOT_SET:
      return {};
    case CodeRemediationTaskStatus::IN_PROGRESS:
      return "IN_PROGRESS";
    case CodeRemediationTaskStatus::COMPLETED:
      return "COMPLETED";
    case CodeRemediationTaskStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CodeRemediationTaskStatusMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
