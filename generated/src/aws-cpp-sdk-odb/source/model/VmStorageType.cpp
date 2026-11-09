/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/odb/model/VmStorageType.h>

using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {
namespace VmStorageTypeMapper {

static const int LOCAL_HASH = HashingUtils::HashString("LOCAL");
static const int EXASCALE_HASH = HashingUtils::HashString("EXASCALE");

VmStorageType GetVmStorageTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == LOCAL_HASH) {
    return VmStorageType::LOCAL;
  } else if (hashCode == EXASCALE_HASH) {
    return VmStorageType::EXASCALE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<VmStorageType>(hashCode);
  }

  return VmStorageType::NOT_SET;
}

Aws::String GetNameForVmStorageType(VmStorageType enumValue) {
  switch (enumValue) {
    case VmStorageType::NOT_SET:
      return {};
    case VmStorageType::LOCAL:
      return "LOCAL";
    case VmStorageType::EXASCALE:
      return "EXASCALE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace VmStorageTypeMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
