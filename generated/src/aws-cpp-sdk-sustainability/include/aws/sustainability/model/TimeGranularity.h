/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sustainability/Sustainability_EXPORTS.h>

namespace Aws {
namespace Sustainability {
namespace Model {
enum class TimeGranularity { NOT_SET, YEARLY_CALENDAR, YEARLY_FISCAL, QUARTERLY_CALENDAR, QUARTERLY_FISCAL, MONTHLY };

namespace TimeGranularityMapper {
AWS_SUSTAINABILITY_API TimeGranularity GetTimeGranularityForName(const Aws::String& name);

AWS_SUSTAINABILITY_API Aws::String GetNameForTimeGranularity(TimeGranularity value);
}  // namespace TimeGranularityMapper
}  // namespace Model
}  // namespace Sustainability
}  // namespace Aws
