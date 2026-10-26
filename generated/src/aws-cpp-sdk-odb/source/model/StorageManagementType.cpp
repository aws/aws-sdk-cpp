/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/odb/model/StorageManagementType.h>

using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {
namespace StorageManagementTypeMapper {

static const int ASM_HASH = HashingUtils::HashString("ASM");
static const int EXASCALE_HASH = HashingUtils::HashString("EXASCALE");

StorageManagementType GetStorageManagementTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ASM_HASH) {
    return StorageManagementType::ASM;
  } else if (hashCode == EXASCALE_HASH) {
    return StorageManagementType::EXASCALE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<StorageManagementType>(hashCode);
  }

  return StorageManagementType::NOT_SET;
}

Aws::String GetNameForStorageManagementType(StorageManagementType enumValue) {
  switch (enumValue) {
    case StorageManagementType::NOT_SET:
      return {};
    case StorageManagementType::ASM:
      return "ASM";
    case StorageManagementType::EXASCALE:
      return "EXASCALE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace StorageManagementTypeMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
