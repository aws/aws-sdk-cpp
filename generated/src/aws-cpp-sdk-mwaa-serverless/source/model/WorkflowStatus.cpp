/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mwaa-serverless/model/WorkflowStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace MWAAServerless {
namespace Model {
namespace WorkflowStatusMapper {

static const int READY_HASH = HashingUtils::HashString("READY");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");

WorkflowStatus GetWorkflowStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == READY_HASH) {
    return WorkflowStatus::READY;
  } else if (hashCode == DELETING_HASH) {
    return WorkflowStatus::DELETING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<WorkflowStatus>(hashCode);
  }

  return WorkflowStatus::NOT_SET;
}

Aws::String GetNameForWorkflowStatus(WorkflowStatus enumValue) {
  switch (enumValue) {
    case WorkflowStatus::NOT_SET:
      return {};
    case WorkflowStatus::READY:
      return "READY";
    case WorkflowStatus::DELETING:
      return "DELETING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace WorkflowStatusMapper
}  // namespace Model
}  // namespace MWAAServerless
}  // namespace Aws
