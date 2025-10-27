/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>

namespace Aws {
namespace SSMIncidents {
namespace Model {
enum class TimelineEventSort { NOT_SET, EVENT_TIME };

namespace TimelineEventSortMapper {
AWS_SSMINCIDENTS_API TimelineEventSort GetTimelineEventSortForName(const Aws::String& name);

AWS_SSMINCIDENTS_API Aws::String GetNameForTimelineEventSort(TimelineEventSort value);
}  // namespace TimelineEventSortMapper
}  // namespace Model
}  // namespace SSMIncidents
}  // namespace Aws
