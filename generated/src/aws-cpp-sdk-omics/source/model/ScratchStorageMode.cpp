/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/omics/model/ScratchStorageMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace Omics {
namespace Model {
namespace ScratchStorageModeMapper {

static const int LOCAL_HASH = HashingUtils::HashString("LOCAL");
static const int SHARED_HASH = HashingUtils::HashString("SHARED");

ScratchStorageMode GetScratchStorageModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == LOCAL_HASH) {
    return ScratchStorageMode::LOCAL;
  } else if (hashCode == SHARED_HASH) {
    return ScratchStorageMode::SHARED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ScratchStorageMode>(hashCode);
  }

  return ScratchStorageMode::NOT_SET;
}

Aws::String GetNameForScratchStorageMode(ScratchStorageMode enumValue) {
  switch (enumValue) {
    case ScratchStorageMode::NOT_SET:
      return {};
    case ScratchStorageMode::LOCAL:
      return "LOCAL";
    case ScratchStorageMode::SHARED:
      return "SHARED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ScratchStorageModeMapper
}  // namespace Model
}  // namespace Omics
}  // namespace Aws
