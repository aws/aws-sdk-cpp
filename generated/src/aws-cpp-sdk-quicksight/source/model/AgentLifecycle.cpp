/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/quicksight/model/AgentLifecycle.h>

using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {
namespace AgentLifecycleMapper {

static const int PREVIEW_HASH = HashingUtils::HashString("PREVIEW");
static const int PUBLISHED_HASH = HashingUtils::HashString("PUBLISHED");

AgentLifecycle GetAgentLifecycleForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PREVIEW_HASH) {
    return AgentLifecycle::PREVIEW;
  } else if (hashCode == PUBLISHED_HASH) {
    return AgentLifecycle::PUBLISHED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AgentLifecycle>(hashCode);
  }

  return AgentLifecycle::NOT_SET;
}

Aws::String GetNameForAgentLifecycle(AgentLifecycle enumValue) {
  switch (enumValue) {
    case AgentLifecycle::NOT_SET:
      return {};
    case AgentLifecycle::PREVIEW:
      return "PREVIEW";
    case AgentLifecycle::PUBLISHED:
      return "PUBLISHED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AgentLifecycleMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
