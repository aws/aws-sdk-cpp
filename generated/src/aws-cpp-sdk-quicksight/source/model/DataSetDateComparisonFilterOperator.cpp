/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/quicksight/model/DataSetDateComparisonFilterOperator.h>

using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {
namespace DataSetDateComparisonFilterOperatorMapper {

static const int BEFORE_HASH = HashingUtils::HashString("BEFORE");
static const int BEFORE_OR_EQUALS_TO_HASH = HashingUtils::HashString("BEFORE_OR_EQUALS_TO");
static const int AFTER_HASH = HashingUtils::HashString("AFTER");
static const int AFTER_OR_EQUALS_TO_HASH = HashingUtils::HashString("AFTER_OR_EQUALS_TO");

DataSetDateComparisonFilterOperator GetDataSetDateComparisonFilterOperatorForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == BEFORE_HASH) {
    return DataSetDateComparisonFilterOperator::BEFORE;
  } else if (hashCode == BEFORE_OR_EQUALS_TO_HASH) {
    return DataSetDateComparisonFilterOperator::BEFORE_OR_EQUALS_TO;
  } else if (hashCode == AFTER_HASH) {
    return DataSetDateComparisonFilterOperator::AFTER;
  } else if (hashCode == AFTER_OR_EQUALS_TO_HASH) {
    return DataSetDateComparisonFilterOperator::AFTER_OR_EQUALS_TO;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DataSetDateComparisonFilterOperator>(hashCode);
  }

  return DataSetDateComparisonFilterOperator::NOT_SET;
}

Aws::String GetNameForDataSetDateComparisonFilterOperator(DataSetDateComparisonFilterOperator enumValue) {
  switch (enumValue) {
    case DataSetDateComparisonFilterOperator::NOT_SET:
      return {};
    case DataSetDateComparisonFilterOperator::BEFORE:
      return "BEFORE";
    case DataSetDateComparisonFilterOperator::BEFORE_OR_EQUALS_TO:
      return "BEFORE_OR_EQUALS_TO";
    case DataSetDateComparisonFilterOperator::AFTER:
      return "AFTER";
    case DataSetDateComparisonFilterOperator::AFTER_OR_EQUALS_TO:
      return "AFTER_OR_EQUALS_TO";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DataSetDateComparisonFilterOperatorMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
