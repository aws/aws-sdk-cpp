/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaConvert
{
namespace Model
{
  enum class DashIsoWriteSegmentTimelineInRepresentation
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace DashIsoWriteSegmentTimelineInRepresentationMapper
{
AWS_MEDIACONVERT_API DashIsoWriteSegmentTimelineInRepresentation GetDashIsoWriteSegmentTimelineInRepresentationForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForDashIsoWriteSegmentTimelineInRepresentation(DashIsoWriteSegmentTimelineInRepresentation value);
} // namespace DashIsoWriteSegmentTimelineInRepresentationMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
