/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/opensearchmemory/model/BlobContentType.h>

using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchMemory {
namespace Model {
namespace BlobContentTypeMapper {

static const int application_pdf_HASH = HashingUtils::HashString("application/pdf");
static const int image_png_HASH = HashingUtils::HashString("image/png");
static const int image_jpeg_HASH = HashingUtils::HashString("image/jpeg");

BlobContentType GetBlobContentTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == application_pdf_HASH) {
    return BlobContentType::application_pdf;
  } else if (hashCode == image_png_HASH) {
    return BlobContentType::image_png;
  } else if (hashCode == image_jpeg_HASH) {
    return BlobContentType::image_jpeg;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BlobContentType>(hashCode);
  }

  return BlobContentType::NOT_SET;
}

Aws::String GetNameForBlobContentType(BlobContentType enumValue) {
  switch (enumValue) {
    case BlobContentType::NOT_SET:
      return {};
    case BlobContentType::application_pdf:
      return "application/pdf";
    case BlobContentType::image_png:
      return "image/png";
    case BlobContentType::image_jpeg:
      return "image/jpeg";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BlobContentTypeMapper
}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
