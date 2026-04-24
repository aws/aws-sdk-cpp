/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/quicksight/model/FlowPublishState.h>

using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {
namespace FlowPublishStateMapper {

static const int PUBLISHED_HASH = HashingUtils::HashString("PUBLISHED");
static const int DRAFT_HASH = HashingUtils::HashString("DRAFT");
static const int PENDING_APPROVAL_HASH = HashingUtils::HashString("PENDING_APPROVAL");

FlowPublishState GetFlowPublishStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PUBLISHED_HASH) {
    return FlowPublishState::PUBLISHED;
  } else if (hashCode == DRAFT_HASH) {
    return FlowPublishState::DRAFT;
  } else if (hashCode == PENDING_APPROVAL_HASH) {
    return FlowPublishState::PENDING_APPROVAL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FlowPublishState>(hashCode);
  }

  return FlowPublishState::NOT_SET;
}

Aws::String GetNameForFlowPublishState(FlowPublishState enumValue) {
  switch (enumValue) {
    case FlowPublishState::NOT_SET:
      return {};
    case FlowPublishState::PUBLISHED:
      return "PUBLISHED";
    case FlowPublishState::DRAFT:
      return "DRAFT";
    case FlowPublishState::PENDING_APPROVAL:
      return "PENDING_APPROVAL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FlowPublishStateMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
