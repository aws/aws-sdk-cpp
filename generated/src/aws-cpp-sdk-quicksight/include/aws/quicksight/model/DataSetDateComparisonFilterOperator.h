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
enum class DataSetDateComparisonFilterOperator { NOT_SET, BEFORE, BEFORE_OR_EQUALS_TO, AFTER, AFTER_OR_EQUALS_TO };

namespace DataSetDateComparisonFilterOperatorMapper {
AWS_QUICKSIGHT_API DataSetDateComparisonFilterOperator GetDataSetDateComparisonFilterOperatorForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForDataSetDateComparisonFilterOperator(DataSetDateComparisonFilterOperator value);
}  // namespace DataSetDateComparisonFilterOperatorMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
