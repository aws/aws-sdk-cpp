/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rum/CloudWatchRUM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudWatchRUM
{
namespace Model
{
  enum class Telemetry
  {
    NOT_SET,
    errors,
    performance,
    http
  };

namespace TelemetryMapper
{
AWS_CLOUDWATCHRUM_API Telemetry GetTelemetryForName(const Aws::String& name);

AWS_CLOUDWATCHRUM_API Aws::String GetNameForTelemetry(Telemetry value);
} // namespace TelemetryMapper
} // namespace Model
} // namespace CloudWatchRUM
} // namespace Aws
