/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/medical-imaging/model/LosslessStorageFormat.h>

using namespace Aws::Utils;

namespace Aws {
namespace MedicalImaging {
namespace Model {
namespace LosslessStorageFormatMapper {

static const int HTJ2K_HASH = HashingUtils::HashString("HTJ2K");
static const int JPEG_2000_LOSSLESS_HASH = HashingUtils::HashString("JPEG_2000_LOSSLESS");

LosslessStorageFormat GetLosslessStorageFormatForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == HTJ2K_HASH) {
    return LosslessStorageFormat::HTJ2K;
  } else if (hashCode == JPEG_2000_LOSSLESS_HASH) {
    return LosslessStorageFormat::JPEG_2000_LOSSLESS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<LosslessStorageFormat>(hashCode);
  }

  return LosslessStorageFormat::NOT_SET;
}

Aws::String GetNameForLosslessStorageFormat(LosslessStorageFormat enumValue) {
  switch (enumValue) {
    case LosslessStorageFormat::NOT_SET:
      return {};
    case LosslessStorageFormat::HTJ2K:
      return "HTJ2K";
    case LosslessStorageFormat::JPEG_2000_LOSSLESS:
      return "JPEG_2000_LOSSLESS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace LosslessStorageFormatMapper
}  // namespace Model
}  // namespace MedicalImaging
}  // namespace Aws
