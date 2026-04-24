/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/quicksight/model/DataSetNumericComparisonFilterOperator.h>

using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {
namespace DataSetNumericComparisonFilterOperatorMapper {

static const int EQUALS_HASH = HashingUtils::HashString("EQUALS");
static const int DOES_NOT_EQUAL_HASH = HashingUtils::HashString("DOES_NOT_EQUAL");
static const int GREATER_THAN_HASH = HashingUtils::HashString("GREATER_THAN");
static const int GREATER_THAN_OR_EQUALS_TO_HASH = HashingUtils::HashString("GREATER_THAN_OR_EQUALS_TO");
static const int LESS_THAN_HASH = HashingUtils::HashString("LESS_THAN");
static const int LESS_THAN_OR_EQUALS_TO_HASH = HashingUtils::HashString("LESS_THAN_OR_EQUALS_TO");

DataSetNumericComparisonFilterOperator GetDataSetNumericComparisonFilterOperatorForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EQUALS_HASH) {
    return DataSetNumericComparisonFilterOperator::EQUALS;
  } else if (hashCode == DOES_NOT_EQUAL_HASH) {
    return DataSetNumericComparisonFilterOperator::DOES_NOT_EQUAL;
  } else if (hashCode == GREATER_THAN_HASH) {
    return DataSetNumericComparisonFilterOperator::GREATER_THAN;
  } else if (hashCode == GREATER_THAN_OR_EQUALS_TO_HASH) {
    return DataSetNumericComparisonFilterOperator::GREATER_THAN_OR_EQUALS_TO;
  } else if (hashCode == LESS_THAN_HASH) {
    return DataSetNumericComparisonFilterOperator::LESS_THAN;
  } else if (hashCode == LESS_THAN_OR_EQUALS_TO_HASH) {
    return DataSetNumericComparisonFilterOperator::LESS_THAN_OR_EQUALS_TO;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DataSetNumericComparisonFilterOperator>(hashCode);
  }

  return DataSetNumericComparisonFilterOperator::NOT_SET;
}

Aws::String GetNameForDataSetNumericComparisonFilterOperator(DataSetNumericComparisonFilterOperator enumValue) {
  switch (enumValue) {
    case DataSetNumericComparisonFilterOperator::NOT_SET:
      return {};
    case DataSetNumericComparisonFilterOperator::EQUALS:
      return "EQUALS";
    case DataSetNumericComparisonFilterOperator::DOES_NOT_EQUAL:
      return "DOES_NOT_EQUAL";
    case DataSetNumericComparisonFilterOperator::GREATER_THAN:
      return "GREATER_THAN";
    case DataSetNumericComparisonFilterOperator::GREATER_THAN_OR_EQUALS_TO:
      return "GREATER_THAN_OR_EQUALS_TO";
    case DataSetNumericComparisonFilterOperator::LESS_THAN:
      return "LESS_THAN";
    case DataSetNumericComparisonFilterOperator::LESS_THAN_OR_EQUALS_TO:
      return "LESS_THAN_OR_EQUALS_TO";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DataSetNumericComparisonFilterOperatorMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
