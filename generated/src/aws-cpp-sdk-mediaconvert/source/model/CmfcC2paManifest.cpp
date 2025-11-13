/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconvert/model/CmfcC2paManifest.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConvert {
namespace Model {
namespace CmfcC2paManifestMapper {

static const int INCLUDE_HASH = HashingUtils::HashString("INCLUDE");
static const int EXCLUDE_HASH = HashingUtils::HashString("EXCLUDE");

CmfcC2paManifest GetCmfcC2paManifestForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == INCLUDE_HASH) {
    return CmfcC2paManifest::INCLUDE;
  } else if (hashCode == EXCLUDE_HASH) {
    return CmfcC2paManifest::EXCLUDE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CmfcC2paManifest>(hashCode);
  }

  return CmfcC2paManifest::NOT_SET;
}

Aws::String GetNameForCmfcC2paManifest(CmfcC2paManifest enumValue) {
  switch (enumValue) {
    case CmfcC2paManifest::NOT_SET:
      return {};
    case CmfcC2paManifest::INCLUDE:
      return "INCLUDE";
    case CmfcC2paManifest::EXCLUDE:
      return "EXCLUDE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CmfcC2paManifestMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
