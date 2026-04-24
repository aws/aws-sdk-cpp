/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/medical-imaging/model/StorageTier.h>

using namespace Aws::Utils;

namespace Aws {
namespace MedicalImaging {
namespace Model {
namespace StorageTierMapper {

static const int FREQUENT_ACCESS_HASH = HashingUtils::HashString("FREQUENT_ACCESS");
static const int ARCHIVE_INSTANT_ACCESS_HASH = HashingUtils::HashString("ARCHIVE_INSTANT_ACCESS");

StorageTier GetStorageTierForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == FREQUENT_ACCESS_HASH) {
    return StorageTier::FREQUENT_ACCESS;
  } else if (hashCode == ARCHIVE_INSTANT_ACCESS_HASH) {
    return StorageTier::ARCHIVE_INSTANT_ACCESS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<StorageTier>(hashCode);
  }

  return StorageTier::NOT_SET;
}

Aws::String GetNameForStorageTier(StorageTier enumValue) {
  switch (enumValue) {
    case StorageTier::NOT_SET:
      return {};
    case StorageTier::FREQUENT_ACCESS:
      return "FREQUENT_ACCESS";
    case StorageTier::ARCHIVE_INSTANT_ACCESS:
      return "ARCHIVE_INSTANT_ACCESS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace StorageTierMapper
}  // namespace Model
}  // namespace MedicalImaging
}  // namespace Aws
