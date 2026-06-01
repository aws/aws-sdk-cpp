/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/quicksight/model/ComparisonOperator.h>

using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {
namespace ComparisonOperatorMapper {

static const int StringEquals_HASH = HashingUtils::HashString("StringEquals");
static const int StringLike_HASH = HashingUtils::HashString("StringLike");

ComparisonOperator GetComparisonOperatorForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == StringEquals_HASH) {
    return ComparisonOperator::StringEquals;
  } else if (hashCode == StringLike_HASH) {
    return ComparisonOperator::StringLike;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ComparisonOperator>(hashCode);
  }

  return ComparisonOperator::NOT_SET;
}

Aws::String GetNameForComparisonOperator(ComparisonOperator enumValue) {
  switch (enumValue) {
    case ComparisonOperator::NOT_SET:
      return {};
    case ComparisonOperator::StringEquals:
      return "StringEquals";
    case ComparisonOperator::StringLike:
      return "StringLike";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ComparisonOperatorMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
