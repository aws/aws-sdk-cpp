/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/quicksight/model/DataSetStringListFilterOperator.h>

using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {
namespace DataSetStringListFilterOperatorMapper {

static const int INCLUDE_HASH = HashingUtils::HashString("INCLUDE");
static const int EXCLUDE_HASH = HashingUtils::HashString("EXCLUDE");

DataSetStringListFilterOperator GetDataSetStringListFilterOperatorForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == INCLUDE_HASH) {
    return DataSetStringListFilterOperator::INCLUDE;
  } else if (hashCode == EXCLUDE_HASH) {
    return DataSetStringListFilterOperator::EXCLUDE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DataSetStringListFilterOperator>(hashCode);
  }

  return DataSetStringListFilterOperator::NOT_SET;
}

Aws::String GetNameForDataSetStringListFilterOperator(DataSetStringListFilterOperator enumValue) {
  switch (enumValue) {
    case DataSetStringListFilterOperator::NOT_SET:
      return {};
    case DataSetStringListFilterOperator::INCLUDE:
      return "INCLUDE";
    case DataSetStringListFilterOperator::EXCLUDE:
      return "EXCLUDE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DataSetStringListFilterOperatorMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
