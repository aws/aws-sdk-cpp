/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/security-ir/model/ExecutionStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityIR {
namespace Model {
namespace ExecutionStatusMapper {

static const int Pending_HASH = HashingUtils::HashString("Pending");
static const int InProgress_HASH = HashingUtils::HashString("InProgress");
static const int Waiting_HASH = HashingUtils::HashString("Waiting");
static const int Completed_HASH = HashingUtils::HashString("Completed");
static const int Failed_HASH = HashingUtils::HashString("Failed");
static const int Cancelled_HASH = HashingUtils::HashString("Cancelled");

ExecutionStatus GetExecutionStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Pending_HASH) {
    return ExecutionStatus::Pending;
  } else if (hashCode == InProgress_HASH) {
    return ExecutionStatus::InProgress;
  } else if (hashCode == Waiting_HASH) {
    return ExecutionStatus::Waiting;
  } else if (hashCode == Completed_HASH) {
    return ExecutionStatus::Completed;
  } else if (hashCode == Failed_HASH) {
    return ExecutionStatus::Failed;
  } else if (hashCode == Cancelled_HASH) {
    return ExecutionStatus::Cancelled;
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
    case ExecutionStatus::Pending:
      return "Pending";
    case ExecutionStatus::InProgress:
      return "InProgress";
    case ExecutionStatus::Waiting:
      return "Waiting";
    case ExecutionStatus::Completed:
      return "Completed";
    case ExecutionStatus::Failed:
      return "Failed";
    case ExecutionStatus::Cancelled:
      return "Cancelled";
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
}  // namespace SecurityIR
}  // namespace Aws
