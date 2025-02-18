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
  enum class CloudWatchAlarmTemplateTargetResourceType
  {
    NOT_SET,
    CLOUDFRONT_DISTRIBUTION,
    MEDIALIVE_MULTIPLEX,
    MEDIALIVE_CHANNEL,
    MEDIALIVE_INPUT_DEVICE,
    MEDIAPACKAGE_CHANNEL,
    MEDIAPACKAGE_ORIGIN_ENDPOINT,
    MEDIACONNECT_FLOW,
    S3_BUCKET,
    MEDIATAILOR_PLAYBACK_CONFIGURATION
  };

namespace CloudWatchAlarmTemplateTargetResourceTypeMapper
{
AWS_MEDIALIVE_API CloudWatchAlarmTemplateTargetResourceType GetCloudWatchAlarmTemplateTargetResourceTypeForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForCloudWatchAlarmTemplateTargetResourceType(CloudWatchAlarmTemplateTargetResourceType value);
} // namespace CloudWatchAlarmTemplateTargetResourceTypeMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
