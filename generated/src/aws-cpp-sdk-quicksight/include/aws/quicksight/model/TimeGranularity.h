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
enum class TimeGranularity { NOT_SET, YEAR, QUARTER, MONTH, WEEK, DAY, HOUR, MINUTE, SECOND, MILLISECOND };

namespace TimeGranularityMapper {
AWS_QUICKSIGHT_API TimeGranularity GetTimeGranularityForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForTimeGranularity(TimeGranularity value);
}  // namespace TimeGranularityMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
