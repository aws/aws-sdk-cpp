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
  enum class CloudWatchAlarmTemplateTreatMissingData
  {
    NOT_SET,
    notBreaching,
    breaching,
    ignore,
    missing
  };

namespace CloudWatchAlarmTemplateTreatMissingDataMapper
{
AWS_MEDIALIVE_API CloudWatchAlarmTemplateTreatMissingData GetCloudWatchAlarmTemplateTreatMissingDataForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForCloudWatchAlarmTemplateTreatMissingData(CloudWatchAlarmTemplateTreatMissingData value);
} // namespace CloudWatchAlarmTemplateTreatMissingDataMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
