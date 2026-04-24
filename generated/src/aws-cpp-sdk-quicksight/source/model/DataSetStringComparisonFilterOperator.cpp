/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/quicksight/model/DataSetStringComparisonFilterOperator.h>

using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {
namespace DataSetStringComparisonFilterOperatorMapper {

static const int EQUALS_HASH = HashingUtils::HashString("EQUALS");
static const int DOES_NOT_EQUAL_HASH = HashingUtils::HashString("DOES_NOT_EQUAL");
static const int CONTAINS_HASH = HashingUtils::HashString("CONTAINS");
static const int DOES_NOT_CONTAIN_HASH = HashingUtils::HashString("DOES_NOT_CONTAIN");
static const int STARTS_WITH_HASH = HashingUtils::HashString("STARTS_WITH");
static const int ENDS_WITH_HASH = HashingUtils::HashString("ENDS_WITH");

DataSetStringComparisonFilterOperator GetDataSetStringComparisonFilterOperatorForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EQUALS_HASH) {
    return DataSetStringComparisonFilterOperator::EQUALS;
  } else if (hashCode == DOES_NOT_EQUAL_HASH) {
    return DataSetStringComparisonFilterOperator::DOES_NOT_EQUAL;
  } else if (hashCode == CONTAINS_HASH) {
    return DataSetStringComparisonFilterOperator::CONTAINS;
  } else if (hashCode == DOES_NOT_CONTAIN_HASH) {
    return DataSetStringComparisonFilterOperator::DOES_NOT_CONTAIN;
  } else if (hashCode == STARTS_WITH_HASH) {
    return DataSetStringComparisonFilterOperator::STARTS_WITH;
  } else if (hashCode == ENDS_WITH_HASH) {
    return DataSetStringComparisonFilterOperator::ENDS_WITH;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DataSetStringComparisonFilterOperator>(hashCode);
  }

  return DataSetStringComparisonFilterOperator::NOT_SET;
}

Aws::String GetNameForDataSetStringComparisonFilterOperator(DataSetStringComparisonFilterOperator enumValue) {
  switch (enumValue) {
    case DataSetStringComparisonFilterOperator::NOT_SET:
      return {};
    case DataSetStringComparisonFilterOperator::EQUALS:
      return "EQUALS";
    case DataSetStringComparisonFilterOperator::DOES_NOT_EQUAL:
      return "DOES_NOT_EQUAL";
    case DataSetStringComparisonFilterOperator::CONTAINS:
      return "CONTAINS";
    case DataSetStringComparisonFilterOperator::DOES_NOT_CONTAIN:
      return "DOES_NOT_CONTAIN";
    case DataSetStringComparisonFilterOperator::STARTS_WITH:
      return "STARTS_WITH";
    case DataSetStringComparisonFilterOperator::ENDS_WITH:
      return "ENDS_WITH";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DataSetStringComparisonFilterOperatorMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
