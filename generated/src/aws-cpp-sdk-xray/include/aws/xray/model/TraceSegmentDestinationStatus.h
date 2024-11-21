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
  enum class TraceSegmentDestinationStatus
  {
    NOT_SET,
    PENDING,
    ACTIVE
  };

namespace TraceSegmentDestinationStatusMapper
{
AWS_XRAY_API TraceSegmentDestinationStatus GetTraceSegmentDestinationStatusForName(const Aws::String& name);

AWS_XRAY_API Aws::String GetNameForTraceSegmentDestinationStatus(TraceSegmentDestinationStatus value);
} // namespace TraceSegmentDestinationStatusMapper
} // namespace Model
} // namespace XRay
} // namespace Aws
