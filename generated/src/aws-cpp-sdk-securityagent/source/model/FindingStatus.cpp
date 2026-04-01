/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityagent/model/FindingStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {
namespace FindingStatusMapper {

static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int RESOLVED_HASH = HashingUtils::HashString("RESOLVED");
static const int ACCEPTED_HASH = HashingUtils::HashString("ACCEPTED");
static const int FALSE_POSITIVE_HASH = HashingUtils::HashString("FALSE_POSITIVE");

FindingStatus GetFindingStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVE_HASH) {
    return FindingStatus::ACTIVE;
  } else if (hashCode == RESOLVED_HASH) {
    return FindingStatus::RESOLVED;
  } else if (hashCode == ACCEPTED_HASH) {
    return FindingStatus::ACCEPTED;
  } else if (hashCode == FALSE_POSITIVE_HASH) {
    return FindingStatus::FALSE_POSITIVE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FindingStatus>(hashCode);
  }

  return FindingStatus::NOT_SET;
}

Aws::String GetNameForFindingStatus(FindingStatus enumValue) {
  switch (enumValue) {
    case FindingStatus::NOT_SET:
      return {};
    case FindingStatus::ACTIVE:
      return "ACTIVE";
    case FindingStatus::RESOLVED:
      return "RESOLVED";
    case FindingStatus::ACCEPTED:
      return "ACCEPTED";
    case FindingStatus::FALSE_POSITIVE:
      return "FALSE_POSITIVE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FindingStatusMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
