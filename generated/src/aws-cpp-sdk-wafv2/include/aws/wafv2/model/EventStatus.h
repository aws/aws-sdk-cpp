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
enum class EventStatus { NOT_SET, EVENT_STARTED, EVENT_IN_PROGRESS, EVENT_COMPLETED, EVENT_ENDED };

namespace EventStatusMapper {
AWS_WAFV2_API EventStatus GetEventStatusForName(const Aws::String& name);

AWS_WAFV2_API Aws::String GetNameForEventStatus(EventStatus value);
}  // namespace EventStatusMapper
}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
