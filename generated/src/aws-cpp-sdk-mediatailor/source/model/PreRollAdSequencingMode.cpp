/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediatailor/model/PreRollAdSequencingMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaTailor {
namespace Model {
namespace PreRollAdSequencingModeMapper {

static const int FOLLOW_AD_SEQUENCE_HASH = HashingUtils::HashString("FOLLOW_AD_SEQUENCE");
static const int IGNORE_AD_SEQUENCE_HASH = HashingUtils::HashString("IGNORE_AD_SEQUENCE");

PreRollAdSequencingMode GetPreRollAdSequencingModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == FOLLOW_AD_SEQUENCE_HASH) {
    return PreRollAdSequencingMode::FOLLOW_AD_SEQUENCE;
  } else if (hashCode == IGNORE_AD_SEQUENCE_HASH) {
    return PreRollAdSequencingMode::IGNORE_AD_SEQUENCE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PreRollAdSequencingMode>(hashCode);
  }

  return PreRollAdSequencingMode::NOT_SET;
}

Aws::String GetNameForPreRollAdSequencingMode(PreRollAdSequencingMode enumValue) {
  switch (enumValue) {
    case PreRollAdSequencingMode::NOT_SET:
      return {};
    case PreRollAdSequencingMode::FOLLOW_AD_SEQUENCE:
      return "FOLLOW_AD_SEQUENCE";
    case PreRollAdSequencingMode::IGNORE_AD_SEQUENCE:
      return "IGNORE_AD_SEQUENCE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PreRollAdSequencingModeMapper
}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws
