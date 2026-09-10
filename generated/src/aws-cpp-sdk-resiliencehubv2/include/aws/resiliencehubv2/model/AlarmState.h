/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>

namespace Aws {
namespace resiliencehubv2 {
namespace Model {
enum class AlarmState { NOT_SET, OK, ALARM, INSUFFICIENT_DATA };

namespace AlarmStateMapper {
AWS_RESILIENCEHUBV2_API AlarmState GetAlarmStateForName(const Aws::String& name);

AWS_RESILIENCEHUBV2_API Aws::String GetNameForAlarmState(AlarmState value);
}  // namespace AlarmStateMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
