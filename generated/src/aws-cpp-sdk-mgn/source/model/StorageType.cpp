/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mgn/model/StorageType.h>

using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {
namespace StorageTypeMapper {

static const int EBS_HASH = HashingUtils::HashString("EBS");
static const int FSX_ONTAP_HASH = HashingUtils::HashString("FSX_ONTAP");

StorageType GetStorageTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EBS_HASH) {
    return StorageType::EBS;
  } else if (hashCode == FSX_ONTAP_HASH) {
    return StorageType::FSX_ONTAP;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<StorageType>(hashCode);
  }

  return StorageType::NOT_SET;
}

Aws::String GetNameForStorageType(StorageType enumValue) {
  switch (enumValue) {
    case StorageType::NOT_SET:
      return {};
    case StorageType::EBS:
      return "EBS";
    case StorageType::FSX_ONTAP:
      return "FSX_ONTAP";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace StorageTypeMapper
}  // namespace Model
}  // namespace mgn
}  // namespace Aws
