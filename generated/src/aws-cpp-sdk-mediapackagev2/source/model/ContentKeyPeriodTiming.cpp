/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediapackagev2/model/ContentKeyPeriodTiming.h>

using namespace Aws::Utils;

namespace Aws {
namespace mediapackagev2 {
namespace Model {
namespace ContentKeyPeriodTimingMapper {

static const int INDEX_ONLY_HASH = HashingUtils::HashString("INDEX_ONLY");
static const int START_END_ONLY_HASH = HashingUtils::HashString("START_END_ONLY");
static const int INDEX_WITH_START_END_HASH = HashingUtils::HashString("INDEX_WITH_START_END");

ContentKeyPeriodTiming GetContentKeyPeriodTimingForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == INDEX_ONLY_HASH) {
    return ContentKeyPeriodTiming::INDEX_ONLY;
  } else if (hashCode == START_END_ONLY_HASH) {
    return ContentKeyPeriodTiming::START_END_ONLY;
  } else if (hashCode == INDEX_WITH_START_END_HASH) {
    return ContentKeyPeriodTiming::INDEX_WITH_START_END;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ContentKeyPeriodTiming>(hashCode);
  }

  return ContentKeyPeriodTiming::NOT_SET;
}

Aws::String GetNameForContentKeyPeriodTiming(ContentKeyPeriodTiming enumValue) {
  switch (enumValue) {
    case ContentKeyPeriodTiming::NOT_SET:
      return {};
    case ContentKeyPeriodTiming::INDEX_ONLY:
      return "INDEX_ONLY";
    case ContentKeyPeriodTiming::START_END_ONLY:
      return "START_END_ONLY";
    case ContentKeyPeriodTiming::INDEX_WITH_START_END:
      return "INDEX_WITH_START_END";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ContentKeyPeriodTimingMapper
}  // namespace Model
}  // namespace mediapackagev2
}  // namespace Aws
