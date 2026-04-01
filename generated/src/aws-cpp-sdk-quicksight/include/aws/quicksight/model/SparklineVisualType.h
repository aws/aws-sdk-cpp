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
enum class SparklineVisualType { NOT_SET, LINE, AREA_LINE };

namespace SparklineVisualTypeMapper {
AWS_QUICKSIGHT_API SparklineVisualType GetSparklineVisualTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForSparklineVisualType(SparklineVisualType value);
}  // namespace SparklineVisualTypeMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
