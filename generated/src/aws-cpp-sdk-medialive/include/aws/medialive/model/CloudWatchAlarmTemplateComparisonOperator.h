/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/MediaLive_EXPORTS.h>

namespace Aws {
namespace MediaLive {
namespace Model {
enum class CloudWatchAlarmTemplateComparisonOperator {
  NOT_SET,
  GreaterThanOrEqualToThreshold,
  GreaterThanThreshold,
  LessThanThreshold,
  LessThanOrEqualToThreshold
};

namespace CloudWatchAlarmTemplateComparisonOperatorMapper {
AWS_MEDIALIVE_API CloudWatchAlarmTemplateComparisonOperator GetCloudWatchAlarmTemplateComparisonOperatorForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForCloudWatchAlarmTemplateComparisonOperator(CloudWatchAlarmTemplateComparisonOperator value);
}  // namespace CloudWatchAlarmTemplateComparisonOperatorMapper
}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
