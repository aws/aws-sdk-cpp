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
enum class EventCategory { NOT_SET, API_SECURITY };

namespace EventCategoryMapper {
AWS_WAFV2_API EventCategory GetEventCategoryForName(const Aws::String& name);

AWS_WAFV2_API Aws::String GetNameForEventCategory(EventCategory value);
}  // namespace EventCategoryMapper
}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
