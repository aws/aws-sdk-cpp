/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ObservabilityAdmin
{
namespace Model
{
  enum class TelemetryType
  {
    NOT_SET,
    Logs,
    Metrics,
    Traces
  };

namespace TelemetryTypeMapper
{
AWS_OBSERVABILITYADMIN_API TelemetryType GetTelemetryTypeForName(const Aws::String& name);

AWS_OBSERVABILITYADMIN_API Aws::String GetNameForTelemetryType(TelemetryType value);
} // namespace TelemetryTypeMapper
} // namespace Model
} // namespace ObservabilityAdmin
} // namespace Aws
