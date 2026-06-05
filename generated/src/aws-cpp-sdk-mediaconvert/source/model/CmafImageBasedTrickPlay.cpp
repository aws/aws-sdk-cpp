/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconvert/model/CmafImageBasedTrickPlay.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConvert {
namespace Model {
namespace CmafImageBasedTrickPlayMapper {

static const int NONE_HASH = HashingUtils::HashString("NONE");
static const int THUMBNAIL_HASH = HashingUtils::HashString("THUMBNAIL");
static const int THUMBNAIL_AND_FULLFRAME_HASH = HashingUtils::HashString("THUMBNAIL_AND_FULLFRAME");
static const int ADVANCED_HASH = HashingUtils::HashString("ADVANCED");
static const int VARIANTS_HASH = HashingUtils::HashString("VARIANTS");

CmafImageBasedTrickPlay GetCmafImageBasedTrickPlayForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NONE_HASH) {
    return CmafImageBasedTrickPlay::NONE;
  } else if (hashCode == THUMBNAIL_HASH) {
    return CmafImageBasedTrickPlay::THUMBNAIL;
  } else if (hashCode == THUMBNAIL_AND_FULLFRAME_HASH) {
    return CmafImageBasedTrickPlay::THUMBNAIL_AND_FULLFRAME;
  } else if (hashCode == ADVANCED_HASH) {
    return CmafImageBasedTrickPlay::ADVANCED;
  } else if (hashCode == VARIANTS_HASH) {
    return CmafImageBasedTrickPlay::VARIANTS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CmafImageBasedTrickPlay>(hashCode);
  }

  return CmafImageBasedTrickPlay::NOT_SET;
}

Aws::String GetNameForCmafImageBasedTrickPlay(CmafImageBasedTrickPlay enumValue) {
  switch (enumValue) {
    case CmafImageBasedTrickPlay::NOT_SET:
      return {};
    case CmafImageBasedTrickPlay::NONE:
      return "NONE";
    case CmafImageBasedTrickPlay::THUMBNAIL:
      return "THUMBNAIL";
    case CmafImageBasedTrickPlay::THUMBNAIL_AND_FULLFRAME:
      return "THUMBNAIL_AND_FULLFRAME";
    case CmafImageBasedTrickPlay::ADVANCED:
      return "ADVANCED";
    case CmafImageBasedTrickPlay::VARIANTS:
      return "VARIANTS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CmafImageBasedTrickPlayMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
