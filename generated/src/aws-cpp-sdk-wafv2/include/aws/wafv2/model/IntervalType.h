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
enum class IntervalType { NOT_SET, MINUTELY, FIVE_MINUTELY, HOURLY, DAILY };

namespace IntervalTypeMapper {
AWS_WAFV2_API IntervalType GetIntervalTypeForName(const Aws::String& name);

AWS_WAFV2_API Aws::String GetNameForIntervalType(IntervalType value);
}  // namespace IntervalTypeMapper
}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
