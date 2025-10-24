﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconvert/model/HlsIFrameOnlyManifest.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConvert {
namespace Model {
namespace HlsIFrameOnlyManifestMapper {

static const int INCLUDE_HASH = HashingUtils::HashString("INCLUDE");
static const int INCLUDE_AS_TS_HASH = HashingUtils::HashString("INCLUDE_AS_TS");
static const int EXCLUDE_HASH = HashingUtils::HashString("EXCLUDE");

HlsIFrameOnlyManifest GetHlsIFrameOnlyManifestForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == INCLUDE_HASH) {
    return HlsIFrameOnlyManifest::INCLUDE;
  } else if (hashCode == INCLUDE_AS_TS_HASH) {
    return HlsIFrameOnlyManifest::INCLUDE_AS_TS;
  } else if (hashCode == EXCLUDE_HASH) {
    return HlsIFrameOnlyManifest::EXCLUDE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<HlsIFrameOnlyManifest>(hashCode);
  }

  return HlsIFrameOnlyManifest::NOT_SET;
}

Aws::String GetNameForHlsIFrameOnlyManifest(HlsIFrameOnlyManifest enumValue) {
  switch (enumValue) {
    case HlsIFrameOnlyManifest::NOT_SET:
      return {};
    case HlsIFrameOnlyManifest::INCLUDE:
      return "INCLUDE";
    case HlsIFrameOnlyManifest::INCLUDE_AS_TS:
      return "INCLUDE_AS_TS";
    case HlsIFrameOnlyManifest::EXCLUDE:
      return "EXCLUDE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace HlsIFrameOnlyManifestMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
