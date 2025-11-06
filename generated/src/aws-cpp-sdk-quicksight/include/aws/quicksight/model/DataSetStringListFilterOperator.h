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
enum class DataSetStringListFilterOperator { NOT_SET, INCLUDE, EXCLUDE };

namespace DataSetStringListFilterOperatorMapper {
AWS_QUICKSIGHT_API DataSetStringListFilterOperator GetDataSetStringListFilterOperatorForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForDataSetStringListFilterOperator(DataSetStringListFilterOperator value);
}  // namespace DataSetStringListFilterOperatorMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
