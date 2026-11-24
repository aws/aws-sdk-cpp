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
enum class EventActorSortBy { NOT_SET, EVENT_COUNT };

namespace EventActorSortByMapper {
AWS_WAFV2_API EventActorSortBy GetEventActorSortByForName(const Aws::String& name);

AWS_WAFV2_API Aws::String GetNameForEventActorSortBy(EventActorSortBy value);
}  // namespace EventActorSortByMapper
}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
