/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/quicksight/model/SheetLayoutGroupMemberType.h>

using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {
namespace SheetLayoutGroupMemberTypeMapper {

static const int ELEMENT_HASH = HashingUtils::HashString("ELEMENT");
static const int GROUP_HASH = HashingUtils::HashString("GROUP");

SheetLayoutGroupMemberType GetSheetLayoutGroupMemberTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ELEMENT_HASH) {
    return SheetLayoutGroupMemberType::ELEMENT;
  } else if (hashCode == GROUP_HASH) {
    return SheetLayoutGroupMemberType::GROUP;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SheetLayoutGroupMemberType>(hashCode);
  }

  return SheetLayoutGroupMemberType::NOT_SET;
}

Aws::String GetNameForSheetLayoutGroupMemberType(SheetLayoutGroupMemberType enumValue) {
  switch (enumValue) {
    case SheetLayoutGroupMemberType::NOT_SET:
      return {};
    case SheetLayoutGroupMemberType::ELEMENT:
      return "ELEMENT";
    case SheetLayoutGroupMemberType::GROUP:
      return "GROUP";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SheetLayoutGroupMemberTypeMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
