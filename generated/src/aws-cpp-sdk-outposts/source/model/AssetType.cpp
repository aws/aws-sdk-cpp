/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/outposts/model/AssetType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Outposts {
namespace Model {
namespace AssetTypeMapper {

static const int COMPUTE_HASH = HashingUtils::HashString("COMPUTE");
static const int STORAGE_HASH = HashingUtils::HashString("STORAGE");
static const int POWERSHELF_HASH = HashingUtils::HashString("POWERSHELF");
static const int SWITCH_HASH = HashingUtils::HashString("SWITCH");
static const int NETWORKING_HASH = HashingUtils::HashString("NETWORKING");

AssetType GetAssetTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == COMPUTE_HASH) {
    return AssetType::COMPUTE;
  } else if (hashCode == STORAGE_HASH) {
    return AssetType::STORAGE;
  } else if (hashCode == POWERSHELF_HASH) {
    return AssetType::POWERSHELF;
  } else if (hashCode == SWITCH_HASH) {
    return AssetType::SWITCH;
  } else if (hashCode == NETWORKING_HASH) {
    return AssetType::NETWORKING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AssetType>(hashCode);
  }

  return AssetType::NOT_SET;
}

Aws::String GetNameForAssetType(AssetType enumValue) {
  switch (enumValue) {
    case AssetType::NOT_SET:
      return {};
    case AssetType::COMPUTE:
      return "COMPUTE";
    case AssetType::STORAGE:
      return "STORAGE";
    case AssetType::POWERSHELF:
      return "POWERSHELF";
    case AssetType::SWITCH:
      return "SWITCH";
    case AssetType::NETWORKING:
      return "NETWORKING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AssetTypeMapper
}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
