/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace XRay
{
namespace Model
{
  enum class TraceSegmentDestination
  {
    NOT_SET,
    XRay,
    CloudWatchLogs
  };

namespace TraceSegmentDestinationMapper
{
AWS_XRAY_API TraceSegmentDestination GetTraceSegmentDestinationForName(const Aws::String& name);

AWS_XRAY_API Aws::String GetNameForTraceSegmentDestination(TraceSegmentDestination value);
} // namespace TraceSegmentDestinationMapper
} // namespace Model
} // namespace XRay
} // namespace Aws
