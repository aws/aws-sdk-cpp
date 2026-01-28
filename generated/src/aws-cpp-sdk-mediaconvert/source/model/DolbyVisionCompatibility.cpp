/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconvert/model/DolbyVisionCompatibility.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConvert {
namespace Model {
namespace DolbyVisionCompatibilityMapper {

static const int DUPLICATE_STREAM_HASH = HashingUtils::HashString("DUPLICATE_STREAM");
static const int SUPPLEMENTAL_CODECS_HASH = HashingUtils::HashString("SUPPLEMENTAL_CODECS");

DolbyVisionCompatibility GetDolbyVisionCompatibilityForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DUPLICATE_STREAM_HASH) {
    return DolbyVisionCompatibility::DUPLICATE_STREAM;
  } else if (hashCode == SUPPLEMENTAL_CODECS_HASH) {
    return DolbyVisionCompatibility::SUPPLEMENTAL_CODECS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DolbyVisionCompatibility>(hashCode);
  }

  return DolbyVisionCompatibility::NOT_SET;
}

Aws::String GetNameForDolbyVisionCompatibility(DolbyVisionCompatibility enumValue) {
  switch (enumValue) {
    case DolbyVisionCompatibility::NOT_SET:
      return {};
    case DolbyVisionCompatibility::DUPLICATE_STREAM:
      return "DUPLICATE_STREAM";
    case DolbyVisionCompatibility::SUPPLEMENTAL_CODECS:
      return "SUPPLEMENTAL_CODECS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DolbyVisionCompatibilityMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
