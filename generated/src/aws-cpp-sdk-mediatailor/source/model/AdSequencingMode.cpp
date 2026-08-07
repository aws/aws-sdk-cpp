/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediatailor/model/AdSequencingMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaTailor {
namespace Model {
namespace AdSequencingModeMapper {

static const int FOLLOW_AD_SEQUENCE_HASH = HashingUtils::HashString("FOLLOW_AD_SEQUENCE");
static const int IGNORE_AD_SEQUENCE_HASH = HashingUtils::HashString("IGNORE_AD_SEQUENCE");
static const int FOLLOW_AD_SEQUENCE_ONLY_LIVE_HASH = HashingUtils::HashString("FOLLOW_AD_SEQUENCE_ONLY_LIVE");
static const int FOLLOW_AD_SEQUENCE_ONLY_VOD_HASH = HashingUtils::HashString("FOLLOW_AD_SEQUENCE_ONLY_VOD");

AdSequencingMode GetAdSequencingModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == FOLLOW_AD_SEQUENCE_HASH) {
    return AdSequencingMode::FOLLOW_AD_SEQUENCE;
  } else if (hashCode == IGNORE_AD_SEQUENCE_HASH) {
    return AdSequencingMode::IGNORE_AD_SEQUENCE;
  } else if (hashCode == FOLLOW_AD_SEQUENCE_ONLY_LIVE_HASH) {
    return AdSequencingMode::FOLLOW_AD_SEQUENCE_ONLY_LIVE;
  } else if (hashCode == FOLLOW_AD_SEQUENCE_ONLY_VOD_HASH) {
    return AdSequencingMode::FOLLOW_AD_SEQUENCE_ONLY_VOD;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AdSequencingMode>(hashCode);
  }

  return AdSequencingMode::NOT_SET;
}

Aws::String GetNameForAdSequencingMode(AdSequencingMode enumValue) {
  switch (enumValue) {
    case AdSequencingMode::NOT_SET:
      return {};
    case AdSequencingMode::FOLLOW_AD_SEQUENCE:
      return "FOLLOW_AD_SEQUENCE";
    case AdSequencingMode::IGNORE_AD_SEQUENCE:
      return "IGNORE_AD_SEQUENCE";
    case AdSequencingMode::FOLLOW_AD_SEQUENCE_ONLY_LIVE:
      return "FOLLOW_AD_SEQUENCE_ONLY_LIVE";
    case AdSequencingMode::FOLLOW_AD_SEQUENCE_ONLY_VOD:
      return "FOLLOW_AD_SEQUENCE_ONLY_VOD";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AdSequencingModeMapper
}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws
