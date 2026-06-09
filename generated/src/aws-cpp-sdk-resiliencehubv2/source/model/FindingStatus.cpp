/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/resiliencehubv2/model/FindingStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {
namespace FindingStatusMapper {

static const int OPEN_HASH = HashingUtils::HashString("OPEN");
static const int RESOLVED_HASH = HashingUtils::HashString("RESOLVED");
static const int IRRELEVANT_HASH = HashingUtils::HashString("IRRELEVANT");

FindingStatus GetFindingStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == OPEN_HASH) {
    return FindingStatus::OPEN;
  } else if (hashCode == RESOLVED_HASH) {
    return FindingStatus::RESOLVED;
  } else if (hashCode == IRRELEVANT_HASH) {
    return FindingStatus::IRRELEVANT;
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
    case FindingStatus::OPEN:
      return "OPEN";
    case FindingStatus::RESOLVED:
      return "RESOLVED";
    case FindingStatus::IRRELEVANT:
      return "IRRELEVANT";
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
}  // namespace resiliencehubv2
}  // namespace Aws
