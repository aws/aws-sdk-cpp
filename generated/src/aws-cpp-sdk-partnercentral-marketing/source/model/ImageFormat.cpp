/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-marketing/model/ImageFormat.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralMarketing {
namespace Model {
namespace ImageFormatMapper {

static const int PNG_HASH = HashingUtils::HashString("PNG");
static const int JPEG_HASH = HashingUtils::HashString("JPEG");

ImageFormat GetImageFormatForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PNG_HASH) {
    return ImageFormat::PNG;
  } else if (hashCode == JPEG_HASH) {
    return ImageFormat::JPEG;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ImageFormat>(hashCode);
  }

  return ImageFormat::NOT_SET;
}

Aws::String GetNameForImageFormat(ImageFormat enumValue) {
  switch (enumValue) {
    case ImageFormat::NOT_SET:
      return {};
    case ImageFormat::PNG:
      return "PNG";
    case ImageFormat::JPEG:
      return "JPEG";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ImageFormatMapper
}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
