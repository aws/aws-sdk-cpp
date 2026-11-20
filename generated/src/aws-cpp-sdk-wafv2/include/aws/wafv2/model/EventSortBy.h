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
enum class EventSortBy { NOT_SET, START_TIME, END_TIME, CONFIDENCE };

namespace EventSortByMapper {
AWS_WAFV2_API EventSortBy GetEventSortByForName(const Aws::String& name);

AWS_WAFV2_API Aws::String GetNameForEventSortBy(EventSortBy value);
}  // namespace EventSortByMapper
}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
