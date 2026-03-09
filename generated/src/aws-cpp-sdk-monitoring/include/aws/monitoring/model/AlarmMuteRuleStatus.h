/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/monitoring/CloudWatch_EXPORTS.h>

namespace Aws {
namespace CloudWatch {
namespace Model {
enum class AlarmMuteRuleStatus { NOT_SET, SCHEDULED, ACTIVE, EXPIRED };

namespace AlarmMuteRuleStatusMapper {
AWS_CLOUDWATCH_API AlarmMuteRuleStatus GetAlarmMuteRuleStatusForName(const Aws::String& name);

AWS_CLOUDWATCH_API Aws::String GetNameForAlarmMuteRuleStatus(AlarmMuteRuleStatus value);
}  // namespace AlarmMuteRuleStatusMapper
}  // namespace Model
}  // namespace CloudWatch
}  // namespace Aws
