/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/quicksight/model/SpaceSearchOperator.h>

using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {
namespace SpaceSearchOperatorMapper {

static const int STRING_EQUALS_HASH = HashingUtils::HashString("STRING_EQUALS");
static const int STRING_LIKE_HASH = HashingUtils::HashString("STRING_LIKE");
static const int NUMBER_RANGE_HASH = HashingUtils::HashString("NUMBER_RANGE");

SpaceSearchOperator GetSpaceSearchOperatorForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == STRING_EQUALS_HASH) {
    return SpaceSearchOperator::STRING_EQUALS;
  } else if (hashCode == STRING_LIKE_HASH) {
    return SpaceSearchOperator::STRING_LIKE;
  } else if (hashCode == NUMBER_RANGE_HASH) {
    return SpaceSearchOperator::NUMBER_RANGE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SpaceSearchOperator>(hashCode);
  }

  return SpaceSearchOperator::NOT_SET;
}

Aws::String GetNameForSpaceSearchOperator(SpaceSearchOperator enumValue) {
  switch (enumValue) {
    case SpaceSearchOperator::NOT_SET:
      return {};
    case SpaceSearchOperator::STRING_EQUALS:
      return "STRING_EQUALS";
    case SpaceSearchOperator::STRING_LIKE:
      return "STRING_LIKE";
    case SpaceSearchOperator::NUMBER_RANGE:
      return "NUMBER_RANGE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SpaceSearchOperatorMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
