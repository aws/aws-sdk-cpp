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
enum class DataSetStringComparisonFilterOperator { NOT_SET, EQUALS, DOES_NOT_EQUAL, CONTAINS, DOES_NOT_CONTAIN, STARTS_WITH, ENDS_WITH };

namespace DataSetStringComparisonFilterOperatorMapper {
AWS_QUICKSIGHT_API DataSetStringComparisonFilterOperator GetDataSetStringComparisonFilterOperatorForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForDataSetStringComparisonFilterOperator(DataSetStringComparisonFilterOperator value);
}  // namespace DataSetStringComparisonFilterOperatorMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
