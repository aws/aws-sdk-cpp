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
  enum class TraceFormatType
  {
    NOT_SET,
    XRAY,
    OTEL
  };

namespace TraceFormatTypeMapper
{
AWS_XRAY_API TraceFormatType GetTraceFormatTypeForName(const Aws::String& name);

AWS_XRAY_API Aws::String GetNameForTraceFormatType(TraceFormatType value);
} // namespace TraceFormatTypeMapper
} // namespace Model
} // namespace XRay
} // namespace Aws
