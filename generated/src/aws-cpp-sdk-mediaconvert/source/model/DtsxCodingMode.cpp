/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconvert/model/DtsxCodingMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConvert {
namespace Model {
namespace DtsxCodingModeMapper {

static const int CODING_MODE_5_1_HASH = HashingUtils::HashString("CODING_MODE_5_1");
static const int CODING_MODE_5_1_4_HASH = HashingUtils::HashString("CODING_MODE_5_1_4");

DtsxCodingMode GetDtsxCodingModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CODING_MODE_5_1_HASH) {
    return DtsxCodingMode::CODING_MODE_5_1;
  } else if (hashCode == CODING_MODE_5_1_4_HASH) {
    return DtsxCodingMode::CODING_MODE_5_1_4;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DtsxCodingMode>(hashCode);
  }

  return DtsxCodingMode::NOT_SET;
}

Aws::String GetNameForDtsxCodingMode(DtsxCodingMode enumValue) {
  switch (enumValue) {
    case DtsxCodingMode::NOT_SET:
      return {};
    case DtsxCodingMode::CODING_MODE_5_1:
      return "CODING_MODE_5_1";
    case DtsxCodingMode::CODING_MODE_5_1_4:
      return "CODING_MODE_5_1_4";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DtsxCodingModeMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
