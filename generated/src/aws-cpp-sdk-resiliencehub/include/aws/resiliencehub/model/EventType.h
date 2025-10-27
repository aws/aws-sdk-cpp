/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>

namespace Aws {
namespace ResilienceHub {
namespace Model {
enum class EventType { NOT_SET, ScheduledAssessmentFailure, DriftDetected };

namespace EventTypeMapper {
AWS_RESILIENCEHUB_API EventType GetEventTypeForName(const Aws::String& name);

AWS_RESILIENCEHUB_API Aws::String GetNameForEventType(EventType value);
}  // namespace EventTypeMapper
}  // namespace Model
}  // namespace ResilienceHub
}  // namespace Aws
