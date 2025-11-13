/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconvert/model/MpdC2paManifest.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConvert {
namespace Model {
namespace MpdC2paManifestMapper {

static const int INCLUDE_HASH = HashingUtils::HashString("INCLUDE");
static const int EXCLUDE_HASH = HashingUtils::HashString("EXCLUDE");

MpdC2paManifest GetMpdC2paManifestForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == INCLUDE_HASH) {
    return MpdC2paManifest::INCLUDE;
  } else if (hashCode == EXCLUDE_HASH) {
    return MpdC2paManifest::EXCLUDE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MpdC2paManifest>(hashCode);
  }

  return MpdC2paManifest::NOT_SET;
}

Aws::String GetNameForMpdC2paManifest(MpdC2paManifest enumValue) {
  switch (enumValue) {
    case MpdC2paManifest::NOT_SET:
      return {};
    case MpdC2paManifest::INCLUDE:
      return "INCLUDE";
    case MpdC2paManifest::EXCLUDE:
      return "EXCLUDE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MpdC2paManifestMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
