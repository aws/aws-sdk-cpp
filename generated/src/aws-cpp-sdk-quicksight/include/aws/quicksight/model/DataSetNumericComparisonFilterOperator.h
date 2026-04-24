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
enum class DataSetNumericComparisonFilterOperator {
  NOT_SET,
  EQUALS,
  DOES_NOT_EQUAL,
  GREATER_THAN,
  GREATER_THAN_OR_EQUALS_TO,
  LESS_THAN,
  LESS_THAN_OR_EQUALS_TO
};

namespace DataSetNumericComparisonFilterOperatorMapper {
AWS_QUICKSIGHT_API DataSetNumericComparisonFilterOperator GetDataSetNumericComparisonFilterOperatorForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForDataSetNumericComparisonFilterOperator(DataSetNumericComparisonFilterOperator value);
}  // namespace DataSetNumericComparisonFilterOperatorMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
