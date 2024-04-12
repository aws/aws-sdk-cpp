/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaLive
{
namespace Model
{
  enum class CloudWatchAlarmTemplateStatistic
  {
    NOT_SET,
    SampleCount,
    Average,
    Sum,
    Minimum,
    Maximum
  };

namespace CloudWatchAlarmTemplateStatisticMapper
{
AWS_MEDIALIVE_API CloudWatchAlarmTemplateStatistic GetCloudWatchAlarmTemplateStatisticForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForCloudWatchAlarmTemplateStatistic(CloudWatchAlarmTemplateStatistic value);
} // namespace CloudWatchAlarmTemplateStatisticMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
