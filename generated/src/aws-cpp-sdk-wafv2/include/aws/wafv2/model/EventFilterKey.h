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
enum class EventFilterKey { NOT_SET, EVENT_CATEGORY, RESOURCE_ARN };

namespace EventFilterKeyMapper {
AWS_WAFV2_API EventFilterKey GetEventFilterKeyForName(const Aws::String& name);

AWS_WAFV2_API Aws::String GetNameForEventFilterKey(EventFilterKey value);
}  // namespace EventFilterKeyMapper
}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
