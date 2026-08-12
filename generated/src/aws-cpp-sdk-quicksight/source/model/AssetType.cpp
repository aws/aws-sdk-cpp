/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/quicksight/model/AssetType.h>

using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {
namespace AssetTypeMapper {

static const int AGENT_HASH = HashingUtils::HashString("AGENT");
static const int SPACE_HASH = HashingUtils::HashString("SPACE");
static const int KNOWLEDGE_BASE_HASH = HashingUtils::HashString("KNOWLEDGE_BASE");

AssetType GetAssetTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AGENT_HASH) {
    return AssetType::AGENT;
  } else if (hashCode == SPACE_HASH) {
    return AssetType::SPACE;
  } else if (hashCode == KNOWLEDGE_BASE_HASH) {
    return AssetType::KNOWLEDGE_BASE;
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
    case AssetType::AGENT:
      return "AGENT";
    case AssetType::SPACE:
      return "SPACE";
    case AssetType::KNOWLEDGE_BASE:
      return "KNOWLEDGE_BASE";
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
}  // namespace QuickSight
}  // namespace Aws
