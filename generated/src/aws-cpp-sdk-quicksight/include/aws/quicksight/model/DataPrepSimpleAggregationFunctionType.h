/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>

namespace Aws {
namespace QuickSight {
namespace Model {
enum class DataPrepSimpleAggregationFunctionType { NOT_SET, COUNT, DISTINCT_COUNT, SUM, AVERAGE, MAX, MIN };

namespace DataPrepSimpleAggregationFunctionTypeMapper {
AWS_QUICKSIGHT_API DataPrepSimpleAggregationFunctionType GetDataPrepSimpleAggregationFunctionTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForDataPrepSimpleAggregationFunctionType(DataPrepSimpleAggregationFunctionType value);
}  // namespace DataPrepSimpleAggregationFunctionTypeMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
