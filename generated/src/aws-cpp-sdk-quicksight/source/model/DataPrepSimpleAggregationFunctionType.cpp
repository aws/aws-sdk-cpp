/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/quicksight/model/DataPrepSimpleAggregationFunctionType.h>

using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {
namespace DataPrepSimpleAggregationFunctionTypeMapper {

static const int COUNT_HASH = HashingUtils::HashString("COUNT");
static const int DISTINCT_COUNT_HASH = HashingUtils::HashString("DISTINCT_COUNT");
static const int SUM_HASH = HashingUtils::HashString("SUM");
static const int AVERAGE_HASH = HashingUtils::HashString("AVERAGE");
static const int MAX_HASH = HashingUtils::HashString("MAX");
static const int MIN_HASH = HashingUtils::HashString("MIN");

DataPrepSimpleAggregationFunctionType GetDataPrepSimpleAggregationFunctionTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == COUNT_HASH) {
    return DataPrepSimpleAggregationFunctionType::COUNT;
  } else if (hashCode == DISTINCT_COUNT_HASH) {
    return DataPrepSimpleAggregationFunctionType::DISTINCT_COUNT;
  } else if (hashCode == SUM_HASH) {
    return DataPrepSimpleAggregationFunctionType::SUM;
  } else if (hashCode == AVERAGE_HASH) {
    return DataPrepSimpleAggregationFunctionType::AVERAGE;
  } else if (hashCode == MAX_HASH) {
    return DataPrepSimpleAggregationFunctionType::MAX;
  } else if (hashCode == MIN_HASH) {
    return DataPrepSimpleAggregationFunctionType::MIN;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DataPrepSimpleAggregationFunctionType>(hashCode);
  }

  return DataPrepSimpleAggregationFunctionType::NOT_SET;
}

Aws::String GetNameForDataPrepSimpleAggregationFunctionType(DataPrepSimpleAggregationFunctionType enumValue) {
  switch (enumValue) {
    case DataPrepSimpleAggregationFunctionType::NOT_SET:
      return {};
    case DataPrepSimpleAggregationFunctionType::COUNT:
      return "COUNT";
    case DataPrepSimpleAggregationFunctionType::DISTINCT_COUNT:
      return "DISTINCT_COUNT";
    case DataPrepSimpleAggregationFunctionType::SUM:
      return "SUM";
    case DataPrepSimpleAggregationFunctionType::AVERAGE:
      return "AVERAGE";
    case DataPrepSimpleAggregationFunctionType::MAX:
      return "MAX";
    case DataPrepSimpleAggregationFunctionType::MIN:
      return "MIN";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DataPrepSimpleAggregationFunctionTypeMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
