/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/workspaces-web/model/MimeType.h>

using namespace Aws::Utils;

namespace Aws {
namespace WorkSpacesWeb {
namespace Model {
namespace MimeTypeMapper {

static const int image_png_HASH = HashingUtils::HashString("image/png");
static const int image_jpeg_HASH = HashingUtils::HashString("image/jpeg");
static const int image_x_icon_HASH = HashingUtils::HashString("image/x-icon");

MimeType GetMimeTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == image_png_HASH) {
    return MimeType::image_png;
  } else if (hashCode == image_jpeg_HASH) {
    return MimeType::image_jpeg;
  } else if (hashCode == image_x_icon_HASH) {
    return MimeType::image_x_icon;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MimeType>(hashCode);
  }

  return MimeType::NOT_SET;
}

Aws::String GetNameForMimeType(MimeType enumValue) {
  switch (enumValue) {
    case MimeType::NOT_SET:
      return {};
    case MimeType::image_png:
      return "image/png";
    case MimeType::image_jpeg:
      return "image/jpeg";
    case MimeType::image_x_icon:
      return "image/x-icon";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MimeTypeMapper
}  // namespace Model
}  // namespace WorkSpacesWeb
}  // namespace Aws
