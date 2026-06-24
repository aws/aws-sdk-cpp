/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wafv2/WAFV2_EXPORTS.h>

namespace Aws {
namespace WAFV2 {
namespace Model {
enum class TimeSeriesStatisticType { NOT_SET, DATE_HISTOGRAM, PAYMENT_TRAFFIC };

namespace TimeSeriesStatisticTypeMapper {
AWS_WAFV2_API TimeSeriesStatisticType GetTimeSeriesStatisticTypeForName(const Aws::String& name);

AWS_WAFV2_API Aws::String GetNameForTimeSeriesStatisticType(TimeSeriesStatisticType value);
}  // namespace TimeSeriesStatisticTypeMapper
}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
