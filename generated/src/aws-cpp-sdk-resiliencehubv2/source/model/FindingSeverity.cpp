/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/resiliencehubv2/model/FindingSeverity.h>

using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {
namespace FindingSeverityMapper {

static const int LOW_HASH = HashingUtils::HashString("LOW");
static const int MEDIUM_HASH = HashingUtils::HashString("MEDIUM");
static const int HIGH_HASH = HashingUtils::HashString("HIGH");

FindingSeverity GetFindingSeverityForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == LOW_HASH) {
    return FindingSeverity::LOW;
  } else if (hashCode == MEDIUM_HASH) {
    return FindingSeverity::MEDIUM;
  } else if (hashCode == HIGH_HASH) {
    return FindingSeverity::HIGH;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FindingSeverity>(hashCode);
  }

  return FindingSeverity::NOT_SET;
}

Aws::String GetNameForFindingSeverity(FindingSeverity enumValue) {
  switch (enumValue) {
    case FindingSeverity::NOT_SET:
      return {};
    case FindingSeverity::LOW:
      return "LOW";
    case FindingSeverity::MEDIUM:
      return "MEDIUM";
    case FindingSeverity::HIGH:
      return "HIGH";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FindingSeverityMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
