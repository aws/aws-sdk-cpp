/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mgn/model/ExecutionStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {
namespace ExecutionStatusMapper {

static const int PENDING_HASH = HashingUtils::HashString("PENDING");
static const int STARTED_HASH = HashingUtils::HashString("STARTED");
static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

ExecutionStatus GetExecutionStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PENDING_HASH) {
    return ExecutionStatus::PENDING;
  } else if (hashCode == STARTED_HASH) {
    return ExecutionStatus::STARTED;
  } else if (hashCode == SUCCEEDED_HASH) {
    return ExecutionStatus::SUCCEEDED;
  } else if (hashCode == FAILED_HASH) {
    return ExecutionStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ExecutionStatus>(hashCode);
  }

  return ExecutionStatus::NOT_SET;
}

Aws::String GetNameForExecutionStatus(ExecutionStatus enumValue) {
  switch (enumValue) {
    case ExecutionStatus::NOT_SET:
      return {};
    case ExecutionStatus::PENDING:
      return "PENDING";
    case ExecutionStatus::STARTED:
      return "STARTED";
    case ExecutionStatus::SUCCEEDED:
      return "SUCCEEDED";
    case ExecutionStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ExecutionStatusMapper
}  // namespace Model
}  // namespace mgn
}  // namespace Aws
