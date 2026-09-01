/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconvert/model/CmfcScte35Source.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConvert {
namespace Model {
namespace CmfcScte35SourceMapper {

static const int PASSTHROUGH_HASH = HashingUtils::HashString("PASSTHROUGH");
static const int NONE_HASH = HashingUtils::HashString("NONE");
static const int MANIFEST_CUES_HASH = HashingUtils::HashString("MANIFEST_CUES");

CmfcScte35Source GetCmfcScte35SourceForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PASSTHROUGH_HASH) {
    return CmfcScte35Source::PASSTHROUGH;
  } else if (hashCode == NONE_HASH) {
    return CmfcScte35Source::NONE;
  } else if (hashCode == MANIFEST_CUES_HASH) {
    return CmfcScte35Source::MANIFEST_CUES;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CmfcScte35Source>(hashCode);
  }

  return CmfcScte35Source::NOT_SET;
}

Aws::String GetNameForCmfcScte35Source(CmfcScte35Source enumValue) {
  switch (enumValue) {
    case CmfcScte35Source::NOT_SET:
      return {};
    case CmfcScte35Source::PASSTHROUGH:
      return "PASSTHROUGH";
    case CmfcScte35Source::NONE:
      return "NONE";
    case CmfcScte35Source::MANIFEST_CUES:
      return "MANIFEST_CUES";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CmfcScte35SourceMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
