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
enum class AlarmType { NOT_SET, Metric, Composite, Canary, Logs, Event };

namespace AlarmTypeMapper {
AWS_RESILIENCEHUB_API AlarmType GetAlarmTypeForName(const Aws::String& name);

AWS_RESILIENCEHUB_API Aws::String GetNameForAlarmType(AlarmType value);
}  // namespace AlarmTypeMapper
}  // namespace Model
}  // namespace ResilienceHub
}  // namespace Aws
