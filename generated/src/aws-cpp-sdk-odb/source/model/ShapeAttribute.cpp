/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/odb/model/ShapeAttribute.h>

using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {
namespace ShapeAttributeMapper {

static const int SMART_STORAGE_HASH = HashingUtils::HashString("SMART_STORAGE");
static const int BLOCK_STORAGE_HASH = HashingUtils::HashString("BLOCK_STORAGE");

ShapeAttribute GetShapeAttributeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SMART_STORAGE_HASH) {
    return ShapeAttribute::SMART_STORAGE;
  } else if (hashCode == BLOCK_STORAGE_HASH) {
    return ShapeAttribute::BLOCK_STORAGE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ShapeAttribute>(hashCode);
  }

  return ShapeAttribute::NOT_SET;
}

Aws::String GetNameForShapeAttribute(ShapeAttribute enumValue) {
  switch (enumValue) {
    case ShapeAttribute::NOT_SET:
      return {};
    case ShapeAttribute::SMART_STORAGE:
      return "SMART_STORAGE";
    case ShapeAttribute::BLOCK_STORAGE:
      return "BLOCK_STORAGE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ShapeAttributeMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
