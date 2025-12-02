/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/nova-act/model/WorkflowDefinitionStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace NovaAct {
namespace Model {
namespace WorkflowDefinitionStatusMapper {

static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");

WorkflowDefinitionStatus GetWorkflowDefinitionStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVE_HASH) {
    return WorkflowDefinitionStatus::ACTIVE;
  } else if (hashCode == DELETING_HASH) {
    return WorkflowDefinitionStatus::DELETING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<WorkflowDefinitionStatus>(hashCode);
  }

  return WorkflowDefinitionStatus::NOT_SET;
}

Aws::String GetNameForWorkflowDefinitionStatus(WorkflowDefinitionStatus enumValue) {
  switch (enumValue) {
    case WorkflowDefinitionStatus::NOT_SET:
      return {};
    case WorkflowDefinitionStatus::ACTIVE:
      return "ACTIVE";
    case WorkflowDefinitionStatus::DELETING:
      return "DELETING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace WorkflowDefinitionStatusMapper
}  // namespace Model
}  // namespace NovaAct
}  // namespace Aws
