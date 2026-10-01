/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/quicksight/model/HierarchyFilterMatchOperator.h>

using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {
namespace HierarchyFilterMatchOperatorMapper {

static const int INCLUDE_HASH = HashingUtils::HashString("INCLUDE");
static const int EXCLUDE_HASH = HashingUtils::HashString("EXCLUDE");

HierarchyFilterMatchOperator GetHierarchyFilterMatchOperatorForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == INCLUDE_HASH) {
    return HierarchyFilterMatchOperator::INCLUDE;
  } else if (hashCode == EXCLUDE_HASH) {
    return HierarchyFilterMatchOperator::EXCLUDE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<HierarchyFilterMatchOperator>(hashCode);
  }

  return HierarchyFilterMatchOperator::NOT_SET;
}

Aws::String GetNameForHierarchyFilterMatchOperator(HierarchyFilterMatchOperator enumValue) {
  switch (enumValue) {
    case HierarchyFilterMatchOperator::NOT_SET:
      return {};
    case HierarchyFilterMatchOperator::INCLUDE:
      return "INCLUDE";
    case HierarchyFilterMatchOperator::EXCLUDE:
      return "EXCLUDE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace HierarchyFilterMatchOperatorMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
