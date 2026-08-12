/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/odb/model/GridImageType.h>

using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {
namespace GridImageTypeMapper {

static const int RELEASE_UPDATE_HASH = HashingUtils::HashString("RELEASE_UPDATE");
static const int CUSTOM_IMAGE_HASH = HashingUtils::HashString("CUSTOM_IMAGE");

GridImageType GetGridImageTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == RELEASE_UPDATE_HASH) {
    return GridImageType::RELEASE_UPDATE;
  } else if (hashCode == CUSTOM_IMAGE_HASH) {
    return GridImageType::CUSTOM_IMAGE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<GridImageType>(hashCode);
  }

  return GridImageType::NOT_SET;
}

Aws::String GetNameForGridImageType(GridImageType enumValue) {
  switch (enumValue) {
    case GridImageType::NOT_SET:
      return {};
    case GridImageType::RELEASE_UPDATE:
      return "RELEASE_UPDATE";
    case GridImageType::CUSTOM_IMAGE:
      return "CUSTOM_IMAGE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace GridImageTypeMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
