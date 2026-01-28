/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconnect/model/EncodingProfile.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {
namespace EncodingProfileMapper {

static const int DISTRIBUTION_H264_DEFAULT_HASH = HashingUtils::HashString("DISTRIBUTION_H264_DEFAULT");
static const int CONTRIBUTION_H264_DEFAULT_HASH = HashingUtils::HashString("CONTRIBUTION_H264_DEFAULT");

EncodingProfile GetEncodingProfileForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DISTRIBUTION_H264_DEFAULT_HASH) {
    return EncodingProfile::DISTRIBUTION_H264_DEFAULT;
  } else if (hashCode == CONTRIBUTION_H264_DEFAULT_HASH) {
    return EncodingProfile::CONTRIBUTION_H264_DEFAULT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EncodingProfile>(hashCode);
  }

  return EncodingProfile::NOT_SET;
}

Aws::String GetNameForEncodingProfile(EncodingProfile enumValue) {
  switch (enumValue) {
    case EncodingProfile::NOT_SET:
      return {};
    case EncodingProfile::DISTRIBUTION_H264_DEFAULT:
      return "DISTRIBUTION_H264_DEFAULT";
    case EncodingProfile::CONTRIBUTION_H264_DEFAULT:
      return "CONTRIBUTION_H264_DEFAULT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EncodingProfileMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
