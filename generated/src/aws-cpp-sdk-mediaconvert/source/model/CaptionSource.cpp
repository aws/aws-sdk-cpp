/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconvert/model/CaptionSource.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConvert {
namespace Model {
namespace CaptionSourceMapper {

static const int INPUT_CAPTION_SELECTOR_HASH = HashingUtils::HashString("INPUT_CAPTION_SELECTOR");
static const int SMART_SUBTITLE_HASH = HashingUtils::HashString("SMART_SUBTITLE");

CaptionSource GetCaptionSourceForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == INPUT_CAPTION_SELECTOR_HASH) {
    return CaptionSource::INPUT_CAPTION_SELECTOR;
  } else if (hashCode == SMART_SUBTITLE_HASH) {
    return CaptionSource::SMART_SUBTITLE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CaptionSource>(hashCode);
  }

  return CaptionSource::NOT_SET;
}

Aws::String GetNameForCaptionSource(CaptionSource enumValue) {
  switch (enumValue) {
    case CaptionSource::NOT_SET:
      return {};
    case CaptionSource::INPUT_CAPTION_SELECTOR:
      return "INPUT_CAPTION_SELECTOR";
    case CaptionSource::SMART_SUBTITLE:
      return "SMART_SUBTITLE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CaptionSourceMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
